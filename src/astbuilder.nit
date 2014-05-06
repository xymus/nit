# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Instantiation and transformation of semantic nodes in the AST of expressions and statements
module astbuilder

intrude import typing
intrude import literal
intrude import parser
intrude import scope

# General factory to build semantic nodes in the AST of expressions
class ASTBuilder
	# The module used as reference for the building
	# It is used to gather types and other stufs
	var mmodule: MModule

	# The anchor used for some mechanism relying on types
	var anchor: nullable MClassType

	# Make a new Int literal
	fun make_int(value: Int): AIntExpr
	do
		return new ADecIntExpr.make(value, mmodule.get_primitive_class("Int").mclass_type)
	end

	# Make a new instatiation
	fun make_new(mtype: MClassType, constructor: MMethod, args: nullable Array[AExpr]): ANewExpr
	do
		return new ANewExpr.make(mtype, constructor, args)
	end

	# Make a new message send
	fun make_call(recv: AExpr, mmethod: MMethod, args: nullable Array[AExpr]): ACallExpr
	do
		var mtype = mmethod.intro.msignature.return_mtype
		if mtype != null then mtype = mtype.resolve_for(recv.mtype.as(not null), anchor, mmodule, true)
		return new ACallExpr.make(recv, mmethod, args, mtype)
	end

	# Make a new, empty, sequence of statements
	fun make_block: ABlockExpr
	do
		return new ABlockExpr.make
	end

	# Make a new variable read
	fun make_var_read(variable: Variable, mtype: MType): AVarExpr
	do
		return new AVarExpr.make(variable, mtype)
	end

	# Make a new variable assignment
	fun make_var_assign(variable: Variable, value: AExpr): AVarAssignExpr
	do
		return new AVarAssignExpr.make(variable, value)
	end

	# Make a new attribute read
	fun make_attr_read(recv: AExpr, attribute: MAttribute): AAttrExpr
	do
		var mtype = attribute.intro.static_mtype.resolve_for(recv.mtype.as(not null), anchor, mmodule, true)
		return new AAttrExpr.make(recv, attribute, mtype)
	end

	# Make a new attribute assignment
	fun make_attr_assign(recv: AExpr, attribute: MAttribute, value: AExpr): AAttrAssignExpr
	do
		return new AAttrAssignExpr.make(recv, attribute, value)
	end

	# Make a new escapable block
	fun make_do: ADoExpr
	do
		return new ADoExpr.make
	end

	# Make a new condinionnal
	# `mtype` is the return type of the whole if, in case of a ternary operator.
	fun make_if(condition: AExpr, mtype: nullable MType): AIfExpr
	do
		return new AIfExpr.make(condition, mtype)
	end
end

redef class AExpr
	# Return a new variable read that contains the value of the expression
	# This method take care efficiently of creating and initalising an anonymous local variable
	#
	# Note: since this method do side-effects (AST replacement), there could be unexpected effects when used as
	# argument of other methods related to AST transformations.
	fun make_var_read: AVarExpr
	do
		var variable = self.variable_cache
		if variable == null then
			assert parent != null
			var place = detach_with_placeholder
			variable = new Variable("")
			variable.declared_type = self.mtype
			var nvar = new AVarAssignExpr.make(variable, self)
			place.replace_with(nvar)
			self.variable_cache = variable
		end
		return new AVarExpr.make(variable, variable.declared_type.as(not null))
	end

	private var variable_cache: nullable Variable

	# The `detach` method completely remove the node in the parent.
	# Owever, sometime, it is useful to keep the emplacement of the removed child.
	#
	# The standard usecase is the insertion of a node beetwen a parent `p` and a child `p.c`.
	# To create the new node `n`, we need to attach the child to it.
	# But, to put `n` where `c` was in `p`, the place has to be remembered.
	#
	#     var p: AExpr
	#     var c = p.c
	#     var h = c.detach_with_placeholder
	#     var n = astbuilder.make_XXX(c)
	#     h.replace_with(n)
	fun detach_with_placeholder: AExpr
	do
		var h = new APlaceholderExpr.make
		self.replace_with(h)
		return h
	end


	# Add `expr` at the end of the block
	#
	# REQUIRE: self isa ABlockExpr
	#
	# Note: this method, aimed to `ABlockExpr` is promoted to `AExpr` because of the limitations of the hierarchies generated by sablecc3
	fun add(expr: AExpr)
	do
		abort
	end
end

# A placeholder for a `AExpr` node
# Instances are transiantly used to mark some specific emplacments in the AST
# during complex transformations.
#
# Their must not appear in a valid AST
#
# @see AExpr::detach_with_placeholder
class APlaceholderExpr
	super AExpr
	private init make
	do
	end
end

redef class ABlockExpr
	private init make
	do
		self.is_typed = true
	end

	redef fun add(expr: AExpr)
	do
		n_expr.add expr
	end
end

redef class ADoExpr
	private init make
	do
		_n_kwdo = new TKwdo
		escapemark = new EscapeMark(null, false)
	end

	# Make a new break expression of the given do
	fun make_break: ABreakExpr
	do
		var escapemark = self.escapemark
		if escapemark == null then
			escapemark = new EscapeMark(null, false)
			self.escapemark = escapemark
		end
		return new ABreakExpr.make(escapemark)
	end
end

redef class ABreakExpr
	private init make(escapemark: EscapeMark)
	do
		self.escapemark = escapemark
	end
end

redef class AIfExpr
	private init make(condition: AExpr, mtype: nullable MType)
	do
		_n_kwif = new TKwif
		_n_expr = condition
		_n_expr.parent = self
		_n_then = new ABlockExpr.make
		_n_else = new ABlockExpr.make
		self.mtype = mtype
		self.is_typed = true
	end
end

redef class AType
	private init make
	do
		_n_id = new TClassid
	end
end

redef class ADecIntExpr
	private init make(value: Int, t: MType)
	do
		self.value = value
		self._n_number = new TNumber # dummy
		self.mtype = t
	end
end

redef class ANewExpr
	private init make(mtype: MClassType, mmethod: MMethod, args: nullable Array[AExpr])
	do
		_n_kwnew = new TKwnew
		_n_type = new AType.make
		_n_args = new AListExprs
		if args != null then
			n_args.n_exprs.add_all(args)
		end
		callsite = new CallSite(self, mtype, mmethod.intro.mclassdef.mmodule, mtype, true, mmethod, mmethod.intro, mmethod.intro.msignature.as(not null), false)
		self.mtype = mtype
	end
end

redef class ACallExpr
	private init make(recv: AExpr, mmethod: MMethod, args: nullable Array[AExpr], t: nullable MType)
	do
		self._n_expr = recv
		recv.parent = self
		_n_args = new AListExprs
		_n_id = new TId
		if args != null then
			self.n_args.n_exprs.add_all(args)
		end
		var mtype = recv.mtype.as(not null)
		callsite = new CallSite(self, mtype, mmethod.intro.mclassdef.mmodule, mmethod.intro.mclassdef.bound_mtype, true, mmethod, mmethod.intro, mmethod.intro.msignature.as(not null), false)
		self.mtype = t
		self.is_typed = true
	end
end

redef class AAttrExpr
	private init make(recv: AExpr, attribute: MAttribute, t: MType)
	do
		_n_expr = recv
		recv.parent = self
		_n_id = new TAttrid
		mproperty = attribute
		mtype = t
	end
end

redef class AAttrAssignExpr
	private init make(recv: AExpr, attribute: MAttribute, value: AExpr)
	do
		_n_expr = recv
		recv.parent = self
		_n_id = new TAttrid
		_n_value = value
		value.parent = self
		_n_assign = new TAssign
		mproperty = attribute
		mtype = value.mtype
	end
end

redef class AVarExpr
	private init make(v: Variable, mtype: MType)
	do
		_n_id = new TId
		variable = v
		self.mtype = mtype
	end
end

redef class AVarAssignExpr
	private init make(v: Variable, value: AExpr)
	do
		_n_id = new TId
		_n_value = value
		value.parent = self
		_n_assign = new TAssign
		variable = v
		mtype = value.mtype
	end
end


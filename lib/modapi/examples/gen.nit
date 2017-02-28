import h
intrude import nitc::naive_interpreter

redef class AMethPropdef
	redef fun intern_call(v, mpropdef, args)
	do
		var prop = mpropdef.mproperty.name
		var clas = mpropdef.mclassdef.mclass.name

		if clas == "MyObject" then
# Call host from guest
			if prop == "bar" then
				var recv = args.first
				assert recv isa PrimitiveInstance[MyObject]
				recv.val.bar
				return null
			end
		end

		return super
	end
end

redef class MyObject
# Call guest from host
	redef fun foo
	do
		var i = i
		assert i != null

		# MClass
		var node = i.modelbuilder.mmodule2node(i.mainmodule)
		assert node != null
		var recv_mclass = i.modelbuilder.try_get_mclass_by_name(node, i.mainmodule, "MyObject")
		assert recv_mclass != null

		# MMethod
		var mmethod = i.mainmodule.try_get_primitive_method("foo", recv_mclass)
		assert mmethod != null

		# Args
		var args = new Array[Instance]

		## self
		var mtype = recv_mclass.get_mtype(new Array[MType])
		args.add(new PrimitiveInstance[MyObject](mtype, self))

		# Execute call
		i.send(mmethod, args)
	end
end

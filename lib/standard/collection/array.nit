# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module introduces the standard array structure.
# It also implements two other abstract collections : ArrayMap and ArraySet
module array

import abstract_collection

# One dimension array of objects.
abstract class AbstractArrayRead[E]
	super SequenceRead[E]

	var _length: Int = 0
	redef fun length do return _length

	redef fun is_empty do return _length == 0

	redef fun has(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then return true
			i += 1
		end
		return false
	end

	redef fun has_only(item)
	do
		var i = 0
		var l = length
		while i < l do
			if self[i] != item then return false
			i += 1
		end
		return true
	end

	redef fun count(item)
	do
		var res = 0
		var i = 0
		var l = length
		while i < l do
			if self[i] == item then res += 1
			i += 1
		end
		return res
	end

	redef fun index_of(item) do return index_of_from(item, 0)

	redef fun last_index_of(item: E): Int do return last_index_of_from(item, length-1)

	redef fun index_of_from(item: E, pos: Int): Int
	do
		var i = pos
		var len = length
		while i < len do
			if self[i] == item then
				return i
			end
			i += 1
		end
		return -1
	end

	redef fun last_index_of_from(item: E, pos: Int): Int
	do
		var i = pos
		while i >= 0 do
			if self[i] == item then
				return i
			else
				i -= 1
			end
		end
		return -1
	end

	# Return a new array that is the reverse of `self`
	#
	#     assert [1,2,3].reversed      ==  [3, 2, 1]
	fun reversed: Array[E]
	do
		var cmp = _length
		var result = new Array[E].with_capacity(cmp)
		while cmp > 0 do
			cmp -= 1
			result.add(self[cmp])
		end
		return result
	end

	# Copy a portion of `self` to an other array.
	#
	#     var a = [1, 2, 3, 4]
	#     var b = [10, 20, 30, 40, 50]
	#     a.copy_to(1, 2, b, 2)
	#     assert b      ==  [10, 20, 2, 3, 50]
	protected fun copy_to(start: Int, len: Int, dest: AbstractArray[E], new_start: Int)
	do
		# TODO native one
		var i = len
		while i > 0 do
			i -= 1
			dest[new_start+i] = self[start+i]
		end
	end

	redef fun output
	do
		var i = 0
		var l = length
		while i < l do
			var e = self[i]
			if e != null then e.output
			i += 1
		end
	end

	redef fun iterator: ArrayIterator[E] do return new ArrayIterator[E](self)
	redef fun reverse_iterator do return new ArrayReverseIterator[E](self)
end

# Resizable one dimension array of objects.
abstract class AbstractArray[E]
	super AbstractArrayRead[E]
	super Sequence[E]

	# Force the capacity to be at least `cap`.
	# The capacity of the array is an internal information.
	# However, this method can be used to prepare a large amount of add
	fun enlarge(cap: Int) is abstract

	redef fun push(item) do add(item)

	redef fun pop
	do
		assert not_empty: not is_empty
		var r = last
		_length -= 1
		return r
	end

	redef fun shift
	do
		assert not_empty: not is_empty
		var r = first
		var i = 1
		var l = length
		while i < l do
			self[i-1] = self[i]
			i += 1
		end
		_length = l - 1
		return r
	end

	redef fun unshift(item)
	do
		var i = length - 1
		while i >= 0 do
			self[i+1] = self[i]
			i -= 1
		end
		self[0] = item
	end

	redef fun insert(item: E, pos: Int)
	do
		enlarge(length + 1)
		copy_to(pos, length-pos, self, pos + 1)
		self[pos] = item
	end

	redef fun add(item) do self[length] = item

	redef fun clear do _length = 0

	redef fun remove(item) do remove_at(index_of(item))

	redef fun remove_all(item)
	do
		var i = index_of(item)
		while i >= 0 do
			remove_at(i)
			i = index_of_from(item, i)
		end
	end

	redef fun remove_at(i)
	do
		var l = length
		if i >= 0 and i < l then
			var j = i + 1
			while j < l do
				self[j-1] = self[j]
				j += 1
			end
			_length = l - 1
		end
	end

	# Invert two elements in the array
	#
	#     var a = [10, 20, 30, 40]
	#     a.swap_at(1, 3)
	#     assert a      ==  [10, 40, 30, 20]
	fun swap_at(a: Int,b: Int)
	do
	    var e = self[a]
	    self[a] = self[b]
	    self[b] = e
	end
end

# Resizable one dimension array of objects.
#
# Arrays have a literal representation.
#     var a = [12, 32, 8]
#     # is equivalent with:
#     var b = new Array[Int]
#     b.push(12)
#     b.push(32)
#     b.push(8)
#     assert a == b
class Array[E]
	super AbstractArray[E]
	super ArrayCapable[E]

	redef fun [](index)
	do
		assert index: index >= 0 and index < _length
		return _items[index]
	end

	redef fun []=(index, item)
	do
		assert index: index >= 0 and index < _length + 1
		if _capacity <= index then
			enlarge(index + 1)
		end
		if _length <= index then
			_length = index + 1
		end
		_items[index] = item
	end

	redef fun add(item)
	do
		var l = _length
		if _capacity <= l then
			enlarge(l + 1)
		end
		_length = l + 1
		_items[l] = item
	end

	redef fun enlarge(cap)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_array(c)
		if _capacity > 0 then _items.copy_to(a, _length)
		_items = a
		_capacity = c
	end

	# Create an empty array.
	init
	do
		_capacity = 0
		_length = 0
	end

	# Create an array from a collection.
	init from(items: Collection[E]) do
		with_capacity(items.length)
		self.add_all(items)
	end

	# Create an array with some `objects`.
	init with_items(objects: E...)
	do
		_items = objects._items
		_capacity = objects._capacity
		_length = objects.length
	end

	# Create an empty array with a given capacity.
	init with_capacity(cap: Int)
	do
		assert positive: cap >= 0
		_items = calloc_array(cap)
		_capacity = cap
		_length = 0
	end

	# Create an array of `count` elements
	init filled_with(value: E, count: Int)
	do
		assert positive: count >= 0
		_items = calloc_array(count)
		_capacity = count
		_length = count
		var i = 0
		while i < count do
			self[i] = value
			i += 1
		end
	end

	# Create a array filled with a given native array.
	init with_native(nat: NativeArray[E], size: Int)
	do
		assert positive: size >= 0
		_items = nat
		_capacity = size
		_length = size
	end

	# The internal storage.
	var _items: nullable NativeArray[E] = null

	# Do not use this method
	# FIXME: Remove it once modules can intrude non local modules
	fun intern_items: NativeArray[E] do return _items.as(not null)

	# The size of `_items`.
	var _capacity: Int = 0
end

# An `Iterator` on `AbstractArray`
private class ArrayIterator[E]
	super IndexedIterator[E]

	redef fun item do return _array[_index]

	# redef fun item=(e) do _array[_index] = e

	redef fun is_ok do return _index < _array.length

	redef fun next do _index += 1

	init(a: AbstractArrayRead[E])
	do
		_array = a
		_index = 0
	end

	var _index: Int = 0
	redef fun index do return _index
	var _array: AbstractArrayRead[E]
end

private class ArrayReverseIterator[E]
	super ArrayIterator[E]

	redef fun is_ok do return _index >= 0

	redef fun next do _index -= 1

	init(a: AbstractArrayRead[E])
	do
		_array = a
		_index = a.length - 1
	end
end

# Others collections ##########################################################

# A set implemented with an Array.
class ArraySet[E: Object]
	super Set[E]

	# The stored elements.
	var _array: Array[E]

	redef fun has(e) do return _array.has(e)

	redef fun add(e) do if not _array.has(e) then _array.add(e)

	redef fun is_empty do return _array.is_empty

	redef fun length do return _array.length

	redef fun first
	do
		assert _array.length > 0
		return _array.first
	end

	redef fun remove(item)
	do
		var i = _array.index_of(item)
		if i >= 0 then remove_at(i)
	end

	redef fun remove_all(item) do remove(item)

	redef fun clear do _array.clear

	redef fun iterator do return new ArraySetIterator[E](_array.iterator)

	# Assume the capacity is at least `cap`.
	fun enlarge(cap: Int) do _array.enlarge(cap)

	private fun remove_at(i: Int)
	do
		_array[i] = _array.last
		_array.pop
	end

	# Create an empty set
	init do _array = new Array[E]

	# Create an empty set with a given capacity.
	init with_capacity(i: Int) do _array = new Array[E].with_capacity(i)

	redef fun new_set do return new ArraySet[E]
end

# Iterators on sets implemented with arrays.
private class ArraySetIterator[E: Object]
	super Iterator[E]

	redef fun is_ok do return _iter.is_ok

	redef fun next do _iter.next

	redef fun item: E do return _iter.item

	init(iter: ArrayIterator[E]) do _iter = iter

	var _iter: ArrayIterator[E]
end


# Associative arrays implemented with an array of (key, value) pairs.
class ArrayMap[K: Object, E]
	super CoupleMap[K, E]

	# O(n)
	redef fun [](key)
	do
		var i = index(key)
		if i >= 0 then
			return _items[i].second
		else
			return provide_default_value(key)
		end
	end

	# O(n)
	redef fun []=(key, item)
	do
		var i = index(key)
		if i >= 0 then
			_items[i].second = item
		else
			_items.push(new Couple[K,E](key, item))
		end
	end

	redef var keys: RemovableCollection[K] = new ArrayMapKeys[K, E](self)
	redef var values: RemovableCollection[E] = new ArrayMapValues[K, E](self)

	# O(1)
	redef fun length do return _items.length

	redef fun couple_iterator do return _items.iterator

	redef fun is_empty do return _items.is_empty

	redef fun clear do _items.clear

	# Assume the capacity to be at least `cap`.
	fun enlarge(cap: Int) do _items.enlarge(cap)

	redef fun couple_at(key)
	do
		var i = index(key)
		if i >= 0 then
			return _items[i]
		else
			return null
		end
	end

	# Internal storage.
	var _items: Array[Couple[K,E]]

	# fast remove the ith element of the array
	private fun remove_at_index(i: Int)
	do
		_items[i] = _items.last
		_items.pop
	end

	# The last positive result given by a index(1) call
	var _last_index: Int = 0

	# Where is the `key` in `_item`?
	# return -1 if not found
	private fun index(key: K): Int
	do
		var l = _last_index
		if l < _items.length and _items[l].first == key then return l

		var i = 0
		while i < _items.length do
			if _items[i].first == key then
				_last_index = i
				return i
			end
			i += 1
		end
		return -1
	end

	# A new empty map.
	init
	do
		_items = new Array[Couple[K,E]]
	end
end

private class ArrayMapKeys[K: Object, E]
	super RemovableCollection[K]
	# The original map
	var map: ArrayMap[K, E]
	redef fun count(k) do if self.has(k) then return 1 else return 0
	redef fun first do return self.map._items.first.first
	redef fun has(k) do return self.map.index(k) >= 0
	redef fun has_only(k) do return (self.has(k) and self.length == 1) or self.is_empty
	redef fun is_empty do return self.map.is_empty
	redef fun length do return self.map.length
	redef fun iterator do return new MapKeysIterator[K, E](self.map.iterator)
	redef fun clear do self.map.clear
	redef fun remove(key)
	do
		var i = self.map.index(key)
		if i >= 0 then self.map.remove_at_index(i)
	end
	redef fun remove_all(key) do self.remove(key)
end

private class ArrayMapValues[K: Object, E]
	super RemovableCollection[E]
	# The original map
	var map: ArrayMap[K, E]
	redef fun first do return self.map._items.first.second
	redef fun is_empty do return self.map.is_empty
	redef fun length do return self.map.length
	redef fun iterator do return new MapValuesIterator[K, E](self.map.iterator)

	# O(n)
	redef fun has(item)
	do
		for i in self.map._items do if i.second == item then return true
		return false
	end

	# O(n)
	redef fun has_only(item)
	do
		for i in self.map._items do if i.second != item then return false
		return true
	end

	# O(n)
	redef fun count(item)
	do
		var nb = 0
		for i in self.map._items do if i.second == item then nb += 1
		return nb
	end

	redef fun clear do self.map.clear

	redef fun remove(item)
	do
		var map = self.map
		var i = map._items.length - 1
		while i >= 0 do
			if map._items[i].second == item then
				map.remove_at_index(i)
				return
			end
			i -= 1
		end
	end

	redef fun remove_all(item)
	do
		var map = self.map
		var i = map._items.length - 1
		while i >= 0 do
			if map._items[i].second == item then
				map.remove_at_index(i)
			end
			i -= 1
		end
	end
end


# Others tools ################################################################

redef class Iterator[E]
	# Interate on `self` and build an array
	fun to_a: Array[E]
	do
		var res = new Array[E]
		while is_ok do
			res.add(item)
			next
		end
		return res
	end
end

redef class Collection[E]
	# Build a new array from a collection
	fun to_a: Array[E]
	do
		return iterator.to_a
	end
end

# Native classes ##############################################################

# Subclasses of this class can create native arrays
interface ArrayCapable[E]
	# Get a new array of `size` elements.
	protected fun calloc_array(size: Int): NativeArray[E] is intern
end

# Native Nit array
# Access are unchecked and it has a fixed size
# Not for public use: may become private.
universal NativeArray[E]
	# The length of the array
	fun length: Int is intern
	# Use `self` to initialize a standard Nit Array.
	fun to_a: Array[E] do return new Array[E].with_native(self, length)
	fun [](index: Int): E is intern
	fun []=(index: Int, item: E) is intern
	fun copy_to(dest: NativeArray[E], length: Int) is intern
	#fun =(o: NativeArray[E]): Bool is intern
	#fun !=(o: NativeArray[E]): Bool is intern
end

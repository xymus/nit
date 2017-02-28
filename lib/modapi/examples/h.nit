import modapi::host

redef class Sys
	var i: nullable NaiveInterpreter = null
end

class MyObject
	# modable
	fun foo is modable,redefable do print "host foo"

	# modusable
	fun bar is modable,callable do print "host bar"
end

var info = new ModInfo("asdf", program_name.dirname / "g.nit")
var mod = info.load
assert mod.errors.is_empty else print_error(mod.errors.join(", "))
i = mod.interpreter.as(not null)

var obj = new MyObject
obj.foo

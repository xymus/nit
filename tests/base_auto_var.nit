#import kernel

class A

	var bar: nullable Int

	fun baz
	do
		#alt1#var bar
		var = bar
		if bar != null then
			print bar
		else print "none"
	end
end

fun foo: Int do return 42

var = foo
foo += 1
print foo

var a0 = new A(null)
a0.baz

var a1 = new A(1)
a1.baz

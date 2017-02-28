import l

redef class MyObject
	redef fun foo do
		print "guest foo"
		bar
	end
end

#var x = new MyObject
#x.bar

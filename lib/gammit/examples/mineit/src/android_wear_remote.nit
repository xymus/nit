

# Android Wear remote for Gamnit in virtual reality mode
module android_wear_remote is
	java_package "net.xymus.mineit.wear_remote"
	app_name "Mineit Remote"
end

import android::log
import android::ui
import java::collections

redef class Activity
	super EventCatcher

	var but_mine = new Button is lazy
	var but_place = new Button is lazy
	var but_forward = new Button is lazy
	var but_quit = new Button is lazy

	redef fun on_start
	do
		super

		#if inited then return
		#inited = true

		# Setup UI
		var layout = new NativeLinearLayout(native)
		layout.set_vertical

		# 
		var labels = ["Mine", "Put", "Move"]
		for but in [but_mine, but_place, but_forward] do
			but.event_catcher = self
			but.text = labels.shift
			but.text_size = 20
			layout.add_view_with_weight(but.native, 1.0) # use simple add_view
		end

		native.content_view = layout
	end

	redef fun catch_event(event)
	do
		print "Event!!!"
		if event isa ClickEvent then
			var sender = event.sender
			if sender == but_mine then print "Mine!"
			if sender == but_place then print "Mine!"
			if sender == but_quit then
				native.finish	
			end
		end
	end
end

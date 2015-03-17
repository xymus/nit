

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

	redef fun on_start
	do
		super

		#if inited then return
		#inited = true

		# Setup UI
		var layout = new NativeLinearLayout(native)
		layout.set_vertical

		# Display screen
		var but = new Button
		but.event_catcher = self
		but.text = "Mine!"
		but.text_size = 40
		layout.add_view_with_weight(but.native, 1.0) # use simple add_view

		native.content_view = layout
	end
end

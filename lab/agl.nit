
module agl is
	app_name "a GL"
	app_version(0, 1, git_revision)
	app_namespace "net.xymus.agl"

	android_api_target 15
end

import app::ui
import android
import android::gl

import glesv2

# Show debug output?
fun debug: Bool do return true

redef class App
	redef fun on_create
	do
		if debug then print "App::on_create"

		# Create the main window
		push_window new CalculatorWindow
		super
	end
end

# The main (and only) window of this calculator
class CalculatorWindow
	super Window

	# Main window layout
	var layout = new VerticalLayout(parent=self)

	# Main display, at the top of the screen
	private var display = new Label(parent=layout, text="Some content")

	init
	do
		if debug then print "CalculatorWindow::init"

		var row_layout = new HorizontalLayout(parent=layout)
		for op in ["Ok", "Cancel"] do
			var but = new Button(parent=row_layout, text=op)
			but = but
		end

		var gl = new GLSurfaceView(parent=layout)
		gl.renderer = new MyRenderer
	end

	redef fun on_event(event)
	do
		if debug then print "CalculatorWindow::on_event {event}"

		if event isa ButtonPressEvent then
		end
	end
end

class MyRenderer
	super Renderer

	redef fun on_surface_created(unused, config)
	do glClearColor(0.0, 0.0, 1.0, 1.0)

	redef fun on_draw_frame(unused)
	do glClear gl_COLOR_BUFFER_BIT

	redef fun on_surface_changed(unused, width, height)
	do glViewport(0, 0, width, height)
end

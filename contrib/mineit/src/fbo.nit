# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# ...
#
module fbo

import mineit
import linux

redef class NativeCByteArray
	new nil `{ return NULL; `}
end

class SimpleFBO
	var width = 640
	var height = 640

	var fbo: GLFramebuffer is noinit
	var tex: GLTexture is noinit
	var tex_mem = new NativeCByteArray(16*16*100)

	var default_fbo: Int = gl.framebuffer_binding is lazy

	init
	do
		default_fbo
		#if true then return

		# Create the FBO
		fbo = new GLFramebuffer
		glBindFramebuffer(gl_FRAMEBUFFER, fbo.id)

		tex = new GLTexture
		tex.bind

		for i in 100.times do tex_mem[i] = 255

		gl.tex_parameter_min_filter(new GLTextureTarget.flat, new GLTextureMinFilter.linear_mipmap_linear)
		gl.tex_parameter_mag_filter(new GLTextureTarget.flat, new GLTextureMagFilter.nearest)
		gl.tex_parameter_wrap_s(new GLTextureTarget.flat, new GLTextureWrap.mirrored_repeat)
		gl.tex_parameter_wrap_t(new GLTextureTarget.flat, new GLTextureWrap.mirrored_repeat)

		gl_tex_image2d(16, 16, tex_mem, false)
		#gl_tex_image2d(16, 16, new NativeCByteArray.nil, false)
		glBindTexture(gl_TEXTURE_2D, 0)

		fbo.attach_texture_2d(new GLFramebufferTarget, new GLAttachment.color0, new GLTextureTarget.flat, tex, 0)

		# Create the depth buffer
		var depth = new GLRenderbuffer
		depth.bind
		depth.storage(new GLRenderbufferFormat.depth_component_16, width, height)
		depth.attach(new GLFramebufferTarget, new GLAttachment.depth)

		# Check is complete
		var completeness = gl.check_framebuffer_status(new GLFramebufferTarget)
		assert completeness.is_complete else print completeness

		print "complete"

		# Catch extra errors
		var error = gl.error
		assert error.is_ok else print "OpenGL error: {error}"

		gl.bind_framebuffer 0
		gl.bind_renderbuffer 0
	end

	fun fbo_with_renderbuffer
	do
		# Create the FBO
		fbo = new GLFramebuffer
		#if true then return
		fbo.bind(new GLFramebufferTarget)

		# Create the color buffer
		var color = new GLRenderbuffer
		color.bind
		color.storage(new GLRenderbufferFormat.rgb565, width, height)
		color.attach(new GLFramebufferTarget, new GLAttachment.color0)

		# Create the depth buffer
		var depth = new GLRenderbuffer
		depth.bind
		depth.storage(new GLRenderbufferFormat.depth_component_16, width, height)
		depth.attach(new GLFramebufferTarget, new GLAttachment.depth)

		# Check is complete
		var completeness = gl.check_framebuffer_status(new GLFramebufferTarget)
		assert completeness.is_complete else print completeness

		# Catch extra errors
		var error = gl.error
		assert error.is_ok else print "OpenGL error: {error}"

		gl.bind_framebuffer 0
		gl.bind_renderbuffer 0
	end
end

redef class MineitWorld
	#
	fun add_screen(app: GamnitApp, tex: GLTexture)
	do
		# cage
		var block = new Block(5.0, 5.0, 0.0)
		block.texture = new GamnitGLTexture(tex, 16, 16)
		block.is_opaque = false
		app.add block
	end
end

redef class GamnitApp
	redef fun setup
	do
		super

		world.add_screen(self, display.fbo.tex)
	end
end

redef class GamnitDisplay

	#
	var fbo = new SimpleFBO is lazy

	redef fun draw_all_the_things
	do
		# Draw camera
		fbo.fbo.bind(new GLFramebufferTarget)
		var error = gl.error
		assert error.is_ok else print "OpenGL error: {error}"

		gl.clear_color(1.0, 1.0, 1.0, 1.0)
		gl.clear((new GLBuffer).color)
		super

		error = gl.error
		assert error.is_ok else print "OpenGL error: {error}"

		# Normal draw to screen

		gl.bind_framebuffer fbo.default_fbo
		error = gl.error
		assert error.is_ok else print "OpenGL error: {error}"

		super
		error = gl.error
		assert error.is_ok else print "OpenGL error: {error}"
	end
end

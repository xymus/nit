# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2013 Nathan Heu <heu.nathan@courrier.uqam.ca>
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

module gtk_assistant
import gtk_core

in "C Header" `{
	#include <gtk/gtk.h>
`}

#A widget used to guide users through multi-step operations
#@https://developer.gnome.org/gtk3/stable/GtkAssistant.html
extern GtkAssistant `{GtkAssistant *`}
	super GtkWindow

	new is extern `{
		return (GtkAssistant *)gtk_assistant_new( );
	`}

	fun current_page : Int is extern `{
		return gtk_assistant_get_current_page ( recv );
	`}

	fun current_page=( page_num : Int ) is extern `{
		gtk_assistant_set_current_page( recv, page_num);
	`}

	fun number_pages : Int is extern `{
		return gtk_assistant_get_n_pages( recv );
	`}

	fun get_page( page_num : Int ) : GtkWidget is extern `{
		return gtk_assistant_get_nth_page( recv, page_num );
	`}

	fun prepend( page : GtkWidget ) : Int is extern `{
		return gtk_assistant_prepend_page( recv, page );
	`}

	fun append( page : GtkWidget ) : Int is extern `{
		return gtk_assistant_append_page( recv, page );
	`}

	fun insert( page : GtkWidget, position : Int ) : Int is extern `{
		return gtk_assistant_insert_page( recv, page, position );
	`}

	fun remove( page_num : Int ) is extern `{
		gtk_assistant_remove_page( recv, page_num );
	`}

	fun get_page_type( page : GtkWidget ) : GtkAssistantPageType is extern `{
		return gtk_assistant_get_page_type( recv, page );
	`}

	fun set_page_type( page : GtkWidget, t : GtkAssistantPageType) is extern `{
		gtk_assistant_set_page_type( recv, page, t );
	`}

	fun get_page_title( page : GtkWidget ) : String is extern `{
		return new_String_from_cstring( (char *)gtk_assistant_get_page_title( recv, page ) );
	`}

	fun set_page_title( page : GtkWidget, title : String) is extern import String::to_cstring`{
		gtk_assistant_set_page_title( recv, page, String_to_cstring( title ) );
	`}

	fun set_page_complete( page : GtkWidget, is_complete : Bool ) is extern `{
		gtk_assistant_set_page_complete( recv, page, is_complete );
	`}

	fun get_page_complete( page : GtkWidget ) : Bool is extern `{
		return gtk_assistant_get_page_complete( recv, page );
	`}

	fun remove_action_widget( child : GtkWidget ) is extern `{
		gtk_assistant_remove_action_widget( recv, child );
	`}

	fun add_action_widget( child : GtkWidget ) is extern `{
		gtk_assistant_add_action_widget( recv, child );
	`}

	fun update_buttons_state is extern `{
		gtk_assistant_update_buttons_state( recv );
	`}

	fun commit is extern `{
		gtk_assistant_commit( recv );
	`}

	fun next_page is extern `{
		gtk_assistant_next_page( recv );
	`}

	fun previous_page is extern `{
		gtk_assistant_previous_page( recv );
	`}
end

#enum GtkAssistantPageType
#An enum for determining the page role inside the GtkAssistant. It's used to handle buttons sensitivity and visibility.
#@https://developer.gnome.org/gtk3/stable/GtkAssistant.html#GtkAssistantPageType
extern GtkAssistantPageType `{GtkAssistantPageType`}
	#The page has regular contents. Both the Back and forward buttons will be shown.
	new content `{ return GTK_ASSISTANT_PAGE_CONTENT; `}

	#The page contains an introduction to the assistant task. Only the Forward button will be shown if there is a next page.
	new intro `{ return GTK_ASSISTANT_PAGE_INTRO; `}

	#The page lets the user confirm or deny the changes. The Back and Apply buttons will be shown.
	new confirm `{ return GTK_ASSISTANT_PAGE_CONFIRM; `}

	#The page informs the user of the changes done. Only the Close button will be shown.
	new summary `{ return GTK_ASSISTANT_PAGE_SUMMARY; `}

	#Used for tasks that take a long time to complete, blocks the assistant until the page is marked as complete. Only the back button will be shown.
	new progress `{ return GTK_ASSISTANT_PAGE_PROGRESS; `}

	#Used for when other page types are not appropriate. No buttons will be shown, and the application must add its own buttons through gtk_assistant_add_action_widget().
	new custom `{ return GTK_ASSISTANT_PAGE_CUSTOM; `}
end

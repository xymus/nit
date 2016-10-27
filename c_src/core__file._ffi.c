/*
	Extern implementation of Nit module file
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__file._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define Array_of_Int_length core__file___Array_of_Int_length
#define Array_of_Int__index core__file___Array_of_Int__index
#line 36 "../lib/core/file.nit"


#ifdef _WIN32
	#include <windows.h>
#endif
int64_t core__file___NativeFile_io_close___impl(  FILE*  self )
{
#line 1518 "../lib/core/file.nit"

 return fclose(self); }
int64_t core__file___NativeFile_set_buffering_type___impl(  FILE*  self, int64_t buf_length, int64_t mode )
{
#line 1538 "../lib/core/file.nit"


		return setvbuf(self, NULL, (int)mode, buf_length);
	}
int64_t core__file___NativeFile_io_read___impl(  FILE*  self, char* buf, int64_t len )
{
#line 1505 "../lib/core/file.nit"


		return fread(buf, 1, len, self);
	}
int core__file___NativeFile_ferror___impl(  FILE*  self )
{
#line 1530 "../lib/core/file.nit"

 return ferror(self); }
int64_t core__file___NativeFile_io_write___impl(  FILE*  self, char* buf, int64_t from, int64_t len )
{
#line 1509 "../lib/core/file.nit"


		return fwrite(buf+from, 1, len, self);
	}
int64_t core__file___Sys_buffer_mode_line___impl( Sys self )
{
#line 1586 "../lib/core/file.nit"

 return _IONBF; }
int core__file___NativeFileStat_is_dir___impl(  struct stat *  self )
{
#line 1473 "../lib/core/file.nit"

 return S_ISDIR(self->st_mode); }
int core__file___NativeString_file_exists___impl( char* self )
{
#line 1386 "../lib/core/file.nit"


#ifdef _WIN32
		DWORD attribs = GetFileAttributesA(self);
		return attribs != INVALID_FILE_ATTRIBUTES;
#else
		FILE *hdl = fopen(self,"r");
		if(hdl != NULL){
			fclose(hdl);
		}
		return hdl != NULL;
#endif
	}
 struct stat *  core__file___NativeString_file_stat___impl( char* self )
{
#line 1399 "../lib/core/file.nit"


		struct stat buff;
		if(stat(self, &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	}
char* core__file___NativeString_file_realpath___impl( char* self )
{
#line 1439 "../lib/core/file.nit"


#ifdef _WIN32
		DWORD len = GetFullPathName(self, 0, NULL, NULL);
		char *buf = malloc(len+1); // FIXME don't leak memory
		len = GetFullPathName(self, len+1, buf, NULL);
		return buf;
#else
		return realpath(self, NULL);
#endif
	}
int core__file___NativeString_file_mkdir___impl( char* self, int64_t mode )
{
#line 1423 "../lib/core/file.nit"


#ifdef _WIN32
		return !mkdir(self);
#else
		return !mkdir(self, mode);
#endif
	}
char* core__file___NativeDir_readdir___impl(  DIR*  self )
{
#line 1563 "../lib/core/file.nit"


		struct dirent *de;
		de = readdir(self);
		if (!de) return NULL;
		return de->d_name;
	}
void core__file___NativeDir_closedir___impl(  DIR*  self )
{
#line 1560 "../lib/core/file.nit"

 closedir(self); }
 FILE*  core__file___new_NativeFile_io_open_read___impl( char* path )
{
#line 1542 "../lib/core/file.nit"

 return fopen(path, "r"); }
 FILE*  core__file___new_NativeFile_io_open_write___impl( char* path )
{
#line 1544 "../lib/core/file.nit"

 return fopen(path, "w"); }
 FILE*  core__file___new_NativeFile_native_stdin___impl(  )
{
#line 1546 "../lib/core/file.nit"

 return stdin; }
 FILE*  core__file___new_NativeFile_native_stdout___impl(  )
{
#line 1548 "../lib/core/file.nit"

 return stdout; }
 FILE*  core__file___new_NativeFile_native_stderr___impl(  )
{
#line 1550 "../lib/core/file.nit"

 return stderr; }
 DIR*  core__file___new_NativeDir_opendir___impl( char* path )
{
#line 1557 "../lib/core/file.nit"

 return opendir(path); }
char* core__file___Sys_native_getcwd___impl( Sys self )
{
#line 1708 "../lib/core/file.nit"

 return getcwd(NULL, 0); }

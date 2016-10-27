#include "core__exec.sep.0.h"
/* method exec$Sys$system for (self: Sys, Text): Int */
int64_t core__exec___Sys___system(val* self, val* p0) {
int64_t var /* : Int */;
val* var_command /* var command: Text */;
char* var1 /* : NativeString */;
int64_t var2 /* : Int */;
int64_t var4 /* : Int */;
var_command = p0;
{
var1 = ((char*(*)(val* self))(var_command->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_command); /* to_cstring on <var_command:Text>*/
}
{
{ /* Inline exec$NativeString$system (var1) on <var1:NativeString> */
var4 = core__exec___NativeString_system___impl(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec$NativeString$system for (self: NativeString): Int */
int64_t core__exec___NativeString___system(char* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = core__exec___NativeString_system___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}

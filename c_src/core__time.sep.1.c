#include "core__time.sep.0.h"
/* method time$Sys$get_time for (self: Sys): Int */
int64_t core__time___Sys___get_time(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__time___Sys_get_time___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}

#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AbstractCompilerVisitor$get_name for (self: AbstractCompilerVisitor, String): String */
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
int64_t var9 /* : Int */;
int64_t var11 /* : Int */;
int64_t var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var15 /* : Int */;
int64_t var_i /* var i: Int */;
val* var16 /* : String */;
val* var17 /* : Text */;
val* var_s2 /* var s2: String */;
val* var18 /* : HashSet[String] */;
val* var20 /* : HashSet[String] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : HashSet[String] */;
val* var26 /* : HashSet[String] */;
int64_t var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
int64_t var33 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1441);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashSet___core__abstract_collection__Collection__has(var1, var_s);
}
var5 = !var4;
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1441);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var6, var_s); /* Direct call hash_collection$HashSet$add on <var6:HashSet[String]>*/
}
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$last (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var9 + 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
for(;;) {
{
var16 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
}
{
var17 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Text___43d]))(var_s, var16); /* + on <var_s:String>*/
}
var_s2 = var17;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1441);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__HashSet___core__abstract_collection__Collection__has(var18, var_s2);
}
var22 = !var21;
if (var22){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1441);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, var_s2); /* Direct call hash_collection$HashSet$add on <var24:HashSet[String]>*/
}
var = var_s2;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_i + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_i = var27;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* nitc___nitc__AbstractCompilerVisitor___escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : HashMap[EscapeMark, String] */;
val* var11 /* : HashMap[EscapeMark, String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable StaticFrame */;
val* var15 /* : nullable StaticFrame */;
val* var16 /* : HashMap[EscapeMark, String] */;
val* var18 /* : HashMap[EscapeMark, String] */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable String */;
val* var22 /* : nullable String */;
val* var_name /* var name: nullable String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : nullable StaticFrame */;
val* var31 /* : nullable StaticFrame */;
val* var32 /* : HashMap[EscapeMark, String] */;
val* var34 /* : HashMap[EscapeMark, String] */;
var_e = p0;
if (var_e == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable EscapeMark(EscapeMark)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1466);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1467);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$escapemark_names (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var9, var_e);
}
if (var12){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1467);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$escapemark_names (var13) on <var13:nullable StaticFrame> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var13:nullable StaticFrame> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var16, var_e);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$EscapeMark$name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var22 = var_e->attrs[COLOR_nitc__scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_name = var20;
if (var_name == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var23 = var24;
}
if (var23){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "label";
var27 = core__flat___NativeString___to_s_full(var26, 5l, 5l);
var25 = var27;
varonce = var25;
}
var_name = var25;
} else {
}
{
var28 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var_name);
}
var_name = var28;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1471);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$escapemark_names (var29) on <var29:nullable StaticFrame> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var29:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var32, var_e, var_name); /* Direct call hash_collection$HashMap$[]= on <var32:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void nitc___nitc__AbstractCompilerVisitor___add_escape_label(val* self, val* p0) {
val* var_e /* var e: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[AEscapeExpr] */;
val* var8 /* : Array[AEscapeExpr] */;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
var_e = p0;
if (var_e == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e,var_other) on <var_e:nullable EscapeMark(EscapeMark)> */
var5 = var_e == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$EscapeMark$escapes (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var8 = var_e->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var6);
}
if (var9){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "BREAK_";
var14 = core__flat___NativeString___to_s_full(var13, 6l, 6l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ": (void)0;";
var18 = core__flat___NativeString___to_s_full(var17, 10l, 10l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(self, var_e);
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1489);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Variable, RuntimeVariable] */;
val* var7 /* : HashMap[Variable, RuntimeVariable] */;
val* var8 /* : nullable Object */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_name /* var name: String */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var22 /* : MType */;
val* var23 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : HashMap[Variable, RuntimeVariable] */;
val* var48 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$variables (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1489);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1489);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "var_";
var13 = core__flat___NativeString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline scope$Variable$name (var_variable) on <var_variable:Variable> */
var16 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[1]=var14;
{
var17 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
var18 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var17);
}
var_name = var18;
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var21 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1498);
fatal_exit(1);
}
var_mtype = var19;
{
var22 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var22;
var23 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var23, var_name); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_mtype); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_mtype); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var_res = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " ";
var29 = core__flat___NativeString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[1]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " /* var ";
var33 = core__flat___NativeString___to_s_full(var32, 8l, 8l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[3]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ": ";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[5]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */;";
var41 = core__flat___NativeString___to_s_full(var40, 4l, 4l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var25)->values[7]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[0]=var42;
((struct instance_core__NativeArray*)var25)->values[2]=var_name;
{
var43 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_variable); /* to_s on <var_variable:Variable>*/
}
((struct instance_core__NativeArray*)var25)->values[4]=var43;
{
var44 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[6]=var44;
{
var45 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$variables (self) on <self:AbstractCompilerVisitor> */
var48 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1489);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var46, var_variable, var_res); /* Direct call hash_collection$HashMap$[]= on <var46:HashMap[Variable, RuntimeVariable]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = core__flat___NativeString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = core__flat___NativeString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " */;";
var20 = core__flat___NativeString___to_s_full(var19, 4l, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[0]=var21;
((struct instance_core__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_var_extern for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = core__flat___NativeString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = core__flat___NativeString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " for extern */;";
var20 = core__flat___NativeString___to_s_full(var19, 15l, 15l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype_extern]))(var_mtype); /* ctype_extern on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[0]=var21;
((struct instance_core__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
var_mtype = p0;
var_name = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var2, var_name); /* name= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var2, var_mtype); /* mtype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var2, var_mtype); /* mcasttype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RuntimeVariable>*/
}
var_res = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = " ";
var7 = core__flat___NativeString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[1]=var5;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = core__flat___NativeString___to_s_full(var10, 6l, 6l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var3)->values[3]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " */;";
var15 = core__flat___NativeString___to_s_full(var14, 4l, 4l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var3)->values[5]=var13;
} else {
var3 = varonce;
varonce = NULL;
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[0]=var16;
((struct instance_core__NativeArray*)var3)->values[2]=var_name;
{
var17 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[4]=var17;
{
var18 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var18); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_left = p0;
var_right = p1;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_left) on <var_left:RuntimeVariable> */
var2 = var_left->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_right, var);
}
var_right = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " = ";
var8 = core__flat___NativeString___to_s_full(var7, 3l, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ";";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[3]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_left->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_left); /* to_s on <var_left:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var_right->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_right); /* to_s on <var_right:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
{
var15 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var15); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$init_instance_or_extern for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : String */;
val* var_ctype /* var ctype: String */;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
val* var5 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : RuntimeVariable */;
var_mtype = p0;
{
var1 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
var_ctype = var1;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var4 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model$MClass$name (var2) on <var2:MClass> */
var7 = var2->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var2:MClass> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "NativeArray";
var10 = core__flat___NativeString___to_s_full(var9, 11l, 11l);
var8 = var10;
varonce = var8;
}
{
{ /* Inline kernel$Object$!= (var5,var8) on <var5:String> */
var_other = var8;
{
var13 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1556);
fatal_exit(1);
}
{
var15 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var16 = !var15;
if (var16){
{
var17 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_mtype); /* init_instance on <self:AbstractCompilerVisitor>*/
}
var_recv = var17;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "char*";
var21 = core__flat___NativeString___to_s_full(var20, 5l, 5l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var_ctype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ctype, var19); /* == on <var_ctype:String>*/
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "NULL/*special!*/";
var26 = core__flat___NativeString___to_s_full(var25, 16l, 16l);
var24 = var26;
varonce23 = var24;
}
{
var27 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var24, var_mtype);
}
var_recv = var27;
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "(";
var33 = core__flat___NativeString___to_s_full(var32, 1l, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")0/*special!*/";
var37 = core__flat___NativeString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_core__NativeArray*)var29)->values[1]=var_ctype;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var38, var_mtype);
}
var_recv = var39;
}
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$set_finalizer for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
val* var27 /* : NativeArray[String] */;
static val* varonce;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__model___MModule___finalizable_type(var6);
}
var_finalizable_type = var9;
if (var_finalizable_type == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalizable_type, var_other); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
var17 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var18 = !var17;
var11 = var18;
} else {
var11 = var_;
}
var_19 = var11;
if (var11){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MType___is_subtype(var_mtype, var23, ((val*)NULL), var_finalizable_type);
}
var10 = var26;
} else {
var10 = var_19;
}
if (var10){
if (unlikely(varonce==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "gc_register_finalizer(";
var31 = core__flat___NativeString___to_s_full(var30, 22l, 22l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ");";
var35 = core__flat___NativeString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$mmodule for (self: AbstractCompilerVisitor): MModule */
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, int64_t p0) {
val* var /* : RuntimeVariable */;
int64_t var_value /* var value: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "l";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = core__flat___Int___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var10); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$byte_instance for (self: AbstractCompilerVisitor, Byte): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___byte_instance(val* self, unsigned char p0) {
val* var /* : RuntimeVariable */;
unsigned char var_value /* var value: Byte */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___byte_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((unsigned char)";
var8 = core__flat___NativeString___to_s_full(var7, 16l, 16l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__abstract_text___Byte___Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int8_instance for (self: AbstractCompilerVisitor, Int8): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int8_instance(val* self, int8_t p0) {
val* var /* : RuntimeVariable */;
int8_t var_value /* var value: Int8 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int8_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((int8_t)";
var8 = core__flat___NativeString___to_s_full(var7, 9l, 9l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__Int8___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int16_instance for (self: AbstractCompilerVisitor, Int16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int16_instance(val* self, int16_t p0) {
val* var /* : RuntimeVariable */;
int16_t var_value /* var value: Int16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((int16_t)";
var8 = core__flat___NativeString___to_s_full(var7, 10l, 10l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__Int16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$uint16_instance for (self: AbstractCompilerVisitor, UInt16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint16_instance(val* self, uint16_t p0) {
val* var /* : RuntimeVariable */;
uint16_t var_value /* var value: UInt16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((uint16_t)";
var8 = core__flat___NativeString___to_s_full(var7, 11l, 11l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__UInt16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int32_instance for (self: AbstractCompilerVisitor, Int32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int32_instance(val* self, int32_t p0) {
val* var /* : RuntimeVariable */;
int32_t var_value /* var value: Int32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((int32_t)";
var8 = core__flat___NativeString___to_s_full(var7, 10l, 10l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__Int32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$uint32_instance for (self: AbstractCompilerVisitor, UInt32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint32_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: UInt32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((uint32_t)";
var8 = core__flat___NativeString___to_s_full(var7, 11l, 11l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__flat___NativeString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core___core__UInt32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$char_instance for (self: AbstractCompilerVisitor, Char): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___char_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: Char */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
int64_t var3 /* : Int */;
int64_t var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : RuntimeVariable */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
int64_t var26 /* : Int */;
int64_t var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___char_type(var1);
}
var_t = var2;
{
{ /* Inline kernel$Char$code_point (var_value) on <var_value:Char> */
var5 = (int64_t)var_value;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var3,128l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var8 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var9 = var3 < 128l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "\'";
var15 = core__flat___NativeString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "\'";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = core__abstract_text___Char___Object__to_s(var_value);
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var20); /* escape_to_c on <var20:String>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var10, var22); /* name= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var10, var_t); /* mtype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var10, var_t); /* mcasttype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:RuntimeVariable>*/
}
var = var10;
goto RET_LABEL;
} else {
var23 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
{ /* Inline kernel$Char$code_point (var_value) on <var_value:Char> */
var28 = (int64_t)var_value;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var29 = core__flat___Int___core__abstract_text__Object__to_s(var26);
((struct instance_core__NativeArray*)var25)->values[0]=var29;
{
var30 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var23, var30); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_t); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_t); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$float_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___float_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
val* var5 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___float_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[0]=var_value;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var5); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
short int var_value /* var value: Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var_s /* var s: String */;
val* var9 /* : RuntimeVariable */;
val* var10 /* : MClassType */;
val* var11 /* : MClassType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
if (var_value){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "1";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
var1 = var2;
} else {
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "0";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
var1 = var6;
}
var_s = var1;
var9 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
var10 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var11 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var9, var_s); /* name= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var9, var10); /* mtype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var9, var11); /* mcasttype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:RuntimeVariable>*/
}
var_res = var9;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$null_instance for (self: AbstractCompilerVisitor): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___null_instance(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
val* var10 /* : MNullType */;
val* var12 /* : MNullType */;
val* var_t /* var t: MNullType */;
val* var13 /* : RuntimeVariable */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var_res /* var res: RuntimeVariable */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$Model$null_type (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var7:Model> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 103);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_t = var10;
var13 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "((val*)NULL)";
var16 = core__flat___NativeString___to_s_full(var15, 12l, 12l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var13, var14); /* name= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var13, var_t); /* mtype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var13, var_t); /* mcasttype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:RuntimeVariable>*/
}
var_res = var13;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$native_string_instance for (self: AbstractCompilerVisitor, NativeString, Int): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___native_string_instance(val* self, char* p0, int64_t p1) {
val* var /* : RuntimeVariable */;
char* var_ns /* var ns: NativeString */;
int64_t var_len /* var len: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varoncenew;
static int varoncenew_guard;
val* var4 /* : Buffer */;
val* var5 /* : Buffer */;
int64_t var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var9 /* : Int */;
val* var10 /* : Buffer */;
val* var_byte_esc /* var byte_esc: Buffer */;
int64_t var_i /* var i: Int */;
int64_t var_ /* var : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
val* var26 /* : String */;
val* var27 /* : Text */;
val* var28 /* : String */;
int64_t var29 /* : Int */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
var_ns = p0;
var_len = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_string_type(var1);
}
var_mtype = var2;
{
var3 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_nat = var3;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NEW_core__Buffer(&type_core__Buffer);
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$* (var_len,4l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var8 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var9 = var_len * 4l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var10 = core__flat___Buffer___with_cap(var4, var6);
}
var_byte_esc = var10;
var_i = 0l;
var_ = var_len;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var13 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var_i < var_;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
} else {
goto BREAK_label;
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\\x";
var22 = core__flat___NativeString___to_s_full(var21, 2l, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline native$NativeString$[] (var_ns,var_i) on <var_ns:NativeString> */
var25 = (unsigned char)((int)var_ns[var_i]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
var26 = core__abstract_text___Byte___Object__to_s(var23);
}
{
var27 = ((val*(*)(val* self, int64_t p0))(var26->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var26, 2l); /* substring_from on <var26:String>*/
}
((struct instance_core__NativeArray*)var18)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
((void(*)(val* self, val* p0))(var_byte_esc->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_byte_esc, var28); /* append on <var_byte_esc:Buffer>*/
}
{
var29 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var29;
}
BREAK_label: (void)0;
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " = \"";
var35 = core__flat___NativeString___to_s_full(var34, 4l, 4l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[1]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\";";
var39 = core__flat___NativeString___to_s_full(var38, 2l, 2l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[3]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var40 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var31)->values[0]=var40;
{
var41 = ((val*(*)(val* self))(var_byte_esc->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_byte_esc); /* to_s on <var_byte_esc:Buffer>*/
}
((struct instance_core__NativeArray*)var31)->values[2]=var41;
{
var42 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var42); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
var = var_nat;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : MModule */;
val* var52 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var53 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
int64_t var67 /* : Int */;
val* var68 /* : RuntimeVariable */;
val* var_byte_length /* var byte_length: RuntimeVariable */;
int64_t var69 /* : Int */;
val* var70 /* : RuntimeVariable */;
val* var_unilen /* var unilen: RuntimeVariable */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
val* var86 /* : MMethod */;
val* var87 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var88 /* : nullable RuntimeVariable */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : String */;
var_string = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___string_type(var1);
}
var_mtype = var2;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "varonce";
var5 = core__flat___NativeString___to_s_full(var4, 7l, 7l);
var3 = var5;
varonce = var3;
}
{
var6 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var3);
}
var_name = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "static ";
var12 = core__flat___NativeString___to_s_full(var11, 7l, 7l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " ";
var16 = core__flat___NativeString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = ";";
var20 = core__flat___NativeString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[4]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var8)->values[1]=var21;
((struct instance_core__NativeArray*)var8)->values[3]=var_name;
{
var22 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var22); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
{
var23 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "if (likely(";
var29 = core__flat___NativeString___to_s_full(var28, 11l, 11l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "!=NULL)) {";
var33 = core__flat___NativeString___to_s_full(var32, 10l, 10l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_name;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " = ";
var40 = core__flat___NativeString___to_s_full(var39, 3l, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[1]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ";";
var44 = core__flat___NativeString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var36)->values[3]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
{
var45 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[0]=var45;
((struct instance_core__NativeArray*)var36)->values[2]=var_name;
{
var46 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var46); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "} else {";
var50 = core__flat___NativeString___to_s_full(var49, 8l, 8l);
var48 = var50;
varonce47 = var48;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var48); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var52 = nitc__model___MModule___native_string_type(var51);
}
var_native_mtype = var52;
{
var53 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_native_mtype);
}
var_nat = var53;
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = " = \"";
var59 = core__flat___NativeString___to_s_full(var58, 4l, 4l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[1]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "\";";
var63 = core__flat___NativeString___to_s_full(var62, 2l, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[3]=var61;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var64 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var55)->values[0]=var64;
{
var65 = ((val*(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_string); /* escape_to_c on <var_string:String>*/
}
((struct instance_core__NativeArray*)var55)->values[2]=var65;
{
var66 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var66); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
var67 = ((int64_t(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_string); /* byte_length on <var_string:String>*/
}
{
var68 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var67);
}
var_byte_length = var68;
{
var69 = ((int64_t(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
var70 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var69);
}
var_unilen = var70;
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " = ";
var76 = core__flat___NativeString___to_s_full(var75, 3l, 3l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[1]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ";";
var80 = core__flat___NativeString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var72)->values[3]=var78;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var81 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var72)->values[0]=var81;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "to_s_full";
var85 = core__flat___NativeString___to_s_full(var84, 9l, 9l);
var83 = var85;
varonce82 = var83;
}
{
var86 = nitc___nitc__AbstractCompilerVisitor___get_property(self, var83, var_native_mtype);
}
var87 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var87, 3l); /* Direct call array$Array$with_capacity on <var87:Array[RuntimeVariable]>*/
}
var_ = var87;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_nat); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_byte_length); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_unilen); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var88 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var86, var_);
}
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1704);
fatal_exit(1);
}
{
var89 = ((val*(*)(val* self))(var88->class->vft[COLOR_core__abstract_text__Object__to_s]))(var88); /* to_s on <var88:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var72)->values[2]=var89;
{
var90 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var90); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = " = ";
var96 = core__flat___NativeString___to_s_full(var95, 3l, 3l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[1]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = ";";
var100 = core__flat___NativeString___to_s_full(var99, 1l, 1l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[3]=var98;
} else {
var92 = varonce91;
varonce91 = NULL;
}
((struct instance_core__NativeArray*)var92)->values[0]=var_name;
{
var101 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var92)->values[2]=var101;
{
var102 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "}";
var106 = core__flat___NativeString___to_s_full(var105, 1l, 1l);
var104 = var106;
varonce103 = var104;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var104); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$value_instance for (self: AbstractCompilerVisitor, Object): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___value_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_object /* var object: Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RuntimeVariable */;
int64_t var3 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : RuntimeVariable */;
var_object = p0;
/* <var_object:Object> isa Int */
cltype = type_core__Int.color;
idtype = type_core__Int.id;
if(cltype >= (((int64_t)var_object&3)?type_info[((int64_t)var_object&3)]:var_object->type)->table_size) {
var1 = 0;
} else {
var1 = (((int64_t)var_object&3)?type_info[((int64_t)var_object&3)]:var_object->type)->type_table[cltype] == idtype;
}
if (var1){
{
var3 = (int64_t)(var_object)>>2;
var2 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var3);
}
var = var2;
goto RET_LABEL;
} else {
/* <var_object:Object> isa Bool */
cltype5 = type_core__Bool.color;
idtype6 = type_core__Bool.id;
if(cltype5 >= (((int64_t)var_object&3)?type_info[((int64_t)var_object&3)]:var_object->type)->table_size) {
var4 = 0;
} else {
var4 = (((int64_t)var_object&3)?type_info[((int64_t)var_object&3)]:var_object->type)->type_table[cltype5] == idtype6;
}
if (var4){
{
var8 = (short int)((int64_t)(var_object)>>2);
var7 = nitc___nitc__AbstractCompilerVisitor___bool_instance(self, var8);
}
var = var7;
goto RET_LABEL;
} else {
/* <var_object:Object> isa String */
cltype10 = type_core__String.color;
idtype11 = type_core__String.id;
if(cltype10 >= (((int64_t)var_object&3)?type_info[((int64_t)var_object&3)]:var_object->type)->table_size) {
var9 = 0;
} else {
var9 = (((int64_t)var_object&3)?type_info[((int64_t)var_object&3)]:var_object->type)->type_table[cltype10] == idtype11;
}
if (var9){
{
var12 = nitc___nitc__AbstractCompilerVisitor___string_instance(self, var_object);
}
var = var12;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1719);
fatal_exit(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$add for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1205);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1169);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_s); /* Direct call array$Array$add on <var3:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_decl for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1205);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_s); /* Direct call array$Array$add on <var3:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$require_declaration for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : CodeFile */;
val* var5 /* : CodeFile */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
val* var_reqs /* var reqs: HashSet[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AbstractCompiler */;
val* var20 /* : AbstractCompiler */;
val* var21 /* : HashMap[String, ANode] */;
val* var23 /* : HashMap[String, ANode] */;
var_key = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1205);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$file (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1168);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeFile$required_declarations (var3) on <var3:CodeFile> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var3:CodeFile> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1163);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_reqs = var6;
{
var9 = core___core__HashSet___core__abstract_collection__Collection__has(var_reqs, var_key);
}
if (var9){
goto RET_LABEL;
} else {
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_reqs, var_key); /* Direct call hash_collection$HashSet$add on <var_reqs:HashSet[String]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
if (var_node == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ANode(ANode)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$requirers_of_declarations (var18) on <var18:AbstractCompiler> */
var23 = var18->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var18:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 609);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var21, var_key, var_node); /* Direct call hash_collection$HashMap$[]= on <var21:HashMap[String, ANode]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$declare_once for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__AbstractCompiler___provide_declaration(var, var_s, var_s); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var:AbstractCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_s); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_extern for (self: AbstractCompilerVisitor, MModule) */
void nitc___nitc__AbstractCompilerVisitor___add_extern(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable String */;
val* var_file /* var file: nullable String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : Text */;
val* var_tryfile /* var tryfile: String */;
short int var10 /* : Bool */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var26 /* : Array[String] */;
val* var28 /* : Array[String] */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
val* var33 /* : Text */;
short int var34 /* : Bool */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : AbstractCompiler */;
val* var49 /* : AbstractCompiler */;
val* var50 /* : Array[String] */;
val* var52 /* : Array[String] */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : ArraySet[String] */;
val* var58 /* : ArraySet[String] */;
short int var59 /* : Bool */;
val* var60 /* : AbstractCompiler */;
val* var62 /* : AbstractCompiler */;
val* var63 /* : ArraySet[String] */;
val* var65 /* : ArraySet[String] */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : Text */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
val* var77 /* : Text */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : ExternCFile */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
val* var_f /* var f: ExternCFile */;
val* var86 /* : AbstractCompiler */;
val* var88 /* : AbstractCompiler */;
val* var89 /* : Array[ExternFile] */;
val* var91 /* : Array[ExternFile] */;
val* var92 /* : AbstractCompiler */;
val* var94 /* : AbstractCompiler */;
val* var95 /* : Array[String] */;
val* var97 /* : Array[String] */;
var_mmodule = p0;
{
var = nitc___nitc__MModule___filepath(var_mmodule);
}
var_file = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".nit";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
if (var_file == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1761);
fatal_exit(1);
} else {
var4 = core__file___String___strip_extension(var_file, var1);
}
var_file = var4;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ".nit.h";
var8 = core__flat___NativeString___to_s_full(var7, 6l, 6l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var6); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var9;
{
var10 = core__file___Text___file_exists(var_tryfile);
}
if (var10){
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "#include \"";
var16 = core__flat___NativeString___to_s_full(var15, 10l, 10l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\"";
var20 = core__flat___NativeString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var21 = ((val*(*)(val* self, val* p0))(var_tryfile->class->vft[COLOR_core__file__String__basename]))(var_tryfile, ((val*)NULL)); /* basename on <var_tryfile:String>*/
}
((struct instance_core__NativeArray*)var12)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nitc___nitc__AbstractCompilerVisitor___declare_once(self, var22); /* Direct call abstract_compiler$AbstractCompilerVisitor$declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var23) on <var23:AbstractCompiler> */
var28 = var23->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var23:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1070);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var26, var_tryfile); /* Direct call array$Array$add on <var26:Array[String]>*/
}
} else {
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "_nit.h";
var32 = core__flat___NativeString___to_s_full(var31, 6l, 6l);
var30 = var32;
varonce29 = var30;
}
{
var33 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var30); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var33;
{
var34 = core__file___Text___file_exists(var_tryfile);
}
if (var34){
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "#include \"";
var40 = core__flat___NativeString___to_s_full(var39, 10l, 10l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "\"";
var44 = core__flat___NativeString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
{
var45 = ((val*(*)(val* self, val* p0))(var_tryfile->class->vft[COLOR_core__file__String__basename]))(var_tryfile, ((val*)NULL)); /* basename on <var_tryfile:String>*/
}
((struct instance_core__NativeArray*)var36)->values[1]=var45;
{
var46 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nitc___nitc__AbstractCompilerVisitor___declare_once(self, var46); /* Direct call abstract_compiler$AbstractCompilerVisitor$declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var49 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var47) on <var47:AbstractCompiler> */
var52 = var47->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var47:AbstractCompiler> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1070);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var50, var_tryfile); /* Direct call array$Array$add on <var50:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var55 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$seen_extern (var53) on <var53:AbstractCompiler> */
var58 = var53->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var53:AbstractCompiler> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1073);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = core___core__ArraySet___core__abstract_collection__Collection__has(var56, var_file);
}
if (var59){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var62 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$seen_extern (var60) on <var60:AbstractCompiler> */
var65 = var60->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var60:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1073);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var63, var_file); /* Direct call array$ArraySet$add on <var63:ArraySet[String]>*/
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ".nit.c";
var69 = core__flat___NativeString___to_s_full(var68, 6l, 6l);
var67 = var69;
varonce66 = var67;
}
{
var70 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var67); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var70;
{
var71 = core__file___Text___file_exists(var_tryfile);
}
var72 = !var71;
if (var72){
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "_nit.c";
var76 = core__flat___NativeString___to_s_full(var75, 6l, 6l);
var74 = var76;
varonce73 = var74;
}
{
var77 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var74); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var77;
{
var78 = core__file___Text___file_exists(var_tryfile);
}
var79 = !var78;
if (var79){
goto RET_LABEL;
} else {
}
} else {
}
var80 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
{
var81 = ((val*(*)(val* self, val* p0))(var_tryfile->class->vft[COLOR_core__file__String__basename]))(var_tryfile, ((val*)NULL)); /* basename on <var_tryfile:String>*/
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "";
var85 = core__flat___NativeString___to_s_full(var84, 0l, 0l);
var83 = var85;
varonce82 = var83;
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var80, var81); /* filename= on <var80:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var80, var83); /* cflags= on <var80:ExternCFile>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_core__kernel__Object__init]))(var80); /* init on <var80:ExternCFile>*/
}
var_f = var80;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var88 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var86) on <var86:AbstractCompiler> */
var91 = var86->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var86:AbstractCompiler> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1067);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var89, var_f); /* Direct call array$Array$add on <var89:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var94 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var92) on <var92:AbstractCompiler> */
var97 = var92->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var92:AbstractCompiler> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1070);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var95, var_tryfile); /* Direct call array$Array$add on <var95:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
var_cexpr = p0;
var_mtype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = " = ";
var6 = core__flat___NativeString___to_s_full(var5, 3l, 3l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[1]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ";";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var2)->values[3]=var8;
} else {
var2 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2)->values[0]=var11;
((struct instance_core__NativeArray*)var2)->values[2]=var_cexpr;
{
var12 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var12); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_abort for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
var_message = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "if(catchStack.cursor >= 0){";
var2 = core__flat___NativeString___to_s_full(var1, 27l, 27l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "longjmp(catchStack.envs[catchStack.cursor], 1);";
var6 = core__flat___NativeString___to_s_full(var5, 47l, 47l);
var4 = var6;
varonce3 = var4;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var4); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "}";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var8); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "PRINT_ERROR(\"Runtime error: %s\", \"";
var16 = core__flat___NativeString___to_s_full(var15, 34l, 34l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\");";
var20 = core__flat___NativeString___to_s_full(var19, 3l, 3l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_message->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_message); /* escape_to_c on <var_message:String>*/
}
((struct instance_core__NativeArray*)var12)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var22); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_raw_abort for (self: AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompilerVisitor___add_raw_abort(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var4 /* : nullable ANode */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var13 /* : Location */;
val* var15 /* : Location */;
val* var16 /* : nullable SourceFile */;
val* var18 /* : nullable SourceFile */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
val* var25 /* : nullable ANode */;
val* var27 /* : nullable ANode */;
val* var28 /* : Location */;
val* var30 /* : Location */;
val* var31 /* : nullable SourceFile */;
val* var33 /* : nullable SourceFile */;
val* var34 /* : nullable MModule */;
val* var36 /* : nullable MModule */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : NativeArray[String] */;
static val* varonce;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
val* var47 /* : nullable ANode */;
val* var49 /* : nullable ANode */;
val* var50 /* : Location */;
val* var52 /* : Location */;
val* var53 /* : nullable SourceFile */;
val* var55 /* : nullable SourceFile */;
val* var56 /* : nullable MModule */;
val* var58 /* : nullable MModule */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var_f /* var f: String */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : String */;
val* var75 /* : nullable ANode */;
val* var77 /* : nullable ANode */;
val* var78 /* : Location */;
val* var80 /* : Location */;
int64_t var81 /* : Int */;
int64_t var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var2,((val*)NULL)) on <var2:nullable ANode> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable ANode(ANode)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1806);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var10) on <var10:nullable ANode> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var10:nullable ANode> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline location$Location$file (var13) on <var13:Location> */
var18 = var13->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var13:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var16,((val*)NULL)) on <var16:nullable SourceFile> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___61d_61d]))(var16, var_other); /* == on <var16:nullable SourceFile(SourceFile)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var1 = var19;
} else {
var1 = var_;
}
var_24 = var1;
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1807);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var25) on <var25:nullable ANode> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var25:nullable ANode> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline location$Location$file (var28) on <var28:Location> */
var33 = var28->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var28:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1807);
fatal_exit(1);
} else {
{ /* Inline loader$SourceFile$mmodule (var31) on <var31:nullable SourceFile> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1224);
fatal_exit(1);
}
var36 = var31->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var31:nullable SourceFile> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var34,((val*)NULL)) on <var34:nullable MModule> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var34->class->vft[COLOR_core__kernel__Object___61d_61d]))(var34, var_other); /* == on <var34:nullable MModule(MModule)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
var = var37;
} else {
var = var_24;
}
if (var){
if (unlikely(varonce==NULL)) {
var42 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "FILE_";
var46 = core__flat___NativeString___to_s_full(var45, 5l, 5l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
} else {
var42 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var49 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1808);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var47) on <var47:nullable ANode> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var52 = var47->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var47:nullable ANode> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline location$Location$file (var50) on <var50:Location> */
var55 = var50->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var50:Location> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var53 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1808);
fatal_exit(1);
} else {
{ /* Inline loader$SourceFile$mmodule (var53) on <var53:nullable SourceFile> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1224);
fatal_exit(1);
}
var58 = var53->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var53:nullable SourceFile> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1808);
fatal_exit(1);
} else {
var59 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var56);
}
((struct instance_core__NativeArray*)var42)->values[1]=var59;
{
var60 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce = var42;
var_f = var60;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_f); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "PRINT_ERROR(\" (%s:%d)\\n\", ";
var66 = core__flat___NativeString___to_s_full(var65, 26l, 26l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = ", ";
var70 = core__flat___NativeString___to_s_full(var69, 2l, 2l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var62)->values[2]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ");";
var74 = core__flat___NativeString___to_s_full(var73, 2l, 2l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var62)->values[4]=var72;
} else {
var62 = varonce61;
varonce61 = NULL;
}
((struct instance_core__NativeArray*)var62)->values[1]=var_f;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var77 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1810);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var75) on <var75:nullable ANode> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var80 = var75->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var75:nullable ANode> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var78) on <var78:Location> */
var83 = var78->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var78:Location> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = core__flat___Int___core__abstract_text__Object__to_s(var81);
((struct instance_core__NativeArray*)var62)->values[3]=var84;
{
var85 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var85); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "PRINT_ERROR(\"\\n\");";
var89 = core__flat___NativeString___to_s_full(var88, 18l, 18l);
var87 = var89;
varonce86 = var87;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "fatal_exit(1);";
var93 = core__flat___NativeString___to_s_full(var92, 14l, 14l);
var91 = var93;
varonce90 = var91;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var91); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void nitc___nitc__AbstractCompilerVisitor___add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_cn /* var cn: String */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
{
var = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag); /* type_test on <self:AbstractCompilerVisitor>*/
}
var_res = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "if (unlikely(!";
var5 = core__flat___NativeString___to_s_full(var4, 14l, 14l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")) {";
var9 = core__flat___NativeString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var11); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value); /* class_name_string on <self:AbstractCompilerVisitor>*/
}
var_cn = var12;
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "PRINT_ERROR(\"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = core__flat___NativeString___to_s_full(var17, 68l, 68l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\", ";
var22 = core__flat___NativeString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ");";
var26 = core__flat___NativeString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[4]=var24;
} else {
var14 = varonce13;
varonce13 = NULL;
}
{
var27 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var27); /* escape_to_c on <var27:String>*/
}
((struct instance_core__NativeArray*)var14)->values[1]=var28;
((struct instance_core__NativeArray*)var14)->values[3]=var_cn;
{
var29 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var29); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "}";
var33 = core__flat___NativeString___to_s_full(var32, 1l, 1l);
var31 = var33;
varonce30 = var31;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable StaticFrame */;
val* var2 /* : nullable StaticFrame */;
val* var3 /* : nullable RuntimeVariable */;
val* var5 /* : nullable RuntimeVariable */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : nullable StaticFrame */;
val* var17 /* : nullable StaticFrame */;
val* var18 /* : nullable String */;
val* var20 /* : nullable String */;
val* var21 /* : String */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1831);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnvar (var) on <var:nullable StaticFrame> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2013);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var:nullable StaticFrame> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1831);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var3, var_s); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "goto ";
var10 = core__flat___NativeString___to_s_full(var9, 5l, 5l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ";";
var14 = core__flat___NativeString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1832);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var15) on <var15:nullable StaticFrame> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2016);
fatal_exit(1);
}
var20 = var15->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var15:nullable StaticFrame> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1832);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var6)->values[1]=var18;
{
var21 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var21); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void nitc___nitc__AbstractCompilerVisitor___stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : nullable AArrayExpr */;
val* var14 /* : nullable AArrayExpr */;
val* var_narray /* var narray: nullable AArrayExpr */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other18 /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable StaticFrame */;
val* var23 /* : nullable StaticFrame */;
val* var24 /* : nullable RuntimeVariable */;
val* var26 /* : nullable RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var27 /* : nullable MType */;
val* var29 /* : nullable MType */;
val* var30 /* : RuntimeVariable */;
val* var_val /* var val: RuntimeVariable */;
val* var31 /* : nullable CallSite */;
val* var33 /* : nullable CallSite */;
val* var34 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var35 /* : nullable RuntimeVariable */;
val* var36 /* : nullable ANode */;
val* var38 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_nexpr = p0;
if (var_nexpr == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var5 = var_nexpr == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$ANode$is_broken (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var8 = var_nexpr->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <var_nexpr:nullable AExpr(AExpr)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6){
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "FATAL: bad statement executed.";
var11 = core__flat___NativeString___to_s_full(var10, 30l, 30l);
var9 = var11;
varonce = var9;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var9); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AExpr$comprehension (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var14 = var_nexpr->attrs[COLOR_nitc__typing__AExpr___comprehension].val; /* _comprehension on <var_nexpr:nullable AExpr(AExpr)> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_narray = var12;
if (var_narray == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_narray,((val*)NULL)) on <var_narray:nullable AArrayExpr> */
var_other18 = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_narray->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_narray, var_other18); /* == on <var_narray:nullable AArrayExpr(AArrayExpr)>*/
}
var20 = !var19;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1849);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$comprehension (var21) on <var21:nullable StaticFrame> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2023);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var21:nullable StaticFrame> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1849);
fatal_exit(1);
}
var_recv = var24;
{
{ /* Inline typing$AArrayExpr$element_mtype (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var29 = var_narray->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_nexpr, var27);
}
var_val = var30;
{
{ /* Inline typing$AArrayExpr$push_callsite (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var33 = var_narray->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1851);
fatal_exit(1);
}
var34 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var34, 2l); /* Direct call array$Array$with_capacity on <var34:Array[RuntimeVariable]>*/
}
var_ = var34;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_val); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var35 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, var31, var_); /* compile_callsite on <self:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_old = var36;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL39:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nitc__abstract_compiler__AExpr__stmt]))(var_nexpr, self); /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var_res /* var res: nullable Object */;
val* var5 /* : nullable MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable RuntimeVariable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : AbstractCompiler */;
val* var30 /* : AbstractCompiler */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : MClassType */;
val* var35 /* : RuntimeVariable */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MType */;
val* var43 /* : RuntimeVariable */;
val* var44 /* : nullable MType */;
val* var45 /* : RuntimeVariable */;
val* var46 /* : nullable MType */;
val* var48 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var_ /* var : Bool */;
val* var55 /* : AbstractCompiler */;
val* var57 /* : AbstractCompiler */;
val* var58 /* : ModelBuilder */;
val* var60 /* : ModelBuilder */;
val* var61 /* : ToolContext */;
val* var63 /* : ToolContext */;
val* var64 /* : OptionBool */;
val* var66 /* : OptionBool */;
val* var67 /* : nullable Object */;
val* var69 /* : nullable Object */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
val* var76 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old = var1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
var_res = ((val*)NULL);
{
var5 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var5,((val*)NULL)) on <var5:nullable MType> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:nullable MType(MType)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var11 = ((val*(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nitc__abstract_compiler__AExpr__expr]))(var_nexpr, self); /* expr on <var_nexpr:AExpr>*/
}
var_res = var11;
} else {
}
if (var_res == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable Object(nullable RuntimeVariable)> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other15) on <var_res:nullable Object(RuntimeVariable)> */
var18 = var_res == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "FATAL: bad expression executed.";
var21 = core__flat___NativeString___to_s_full(var20, 31l, 31l);
var19 = var21;
varonce = var19;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var19); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:AbstractCompilerVisitor>*/
}
if (var_mtype == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other15) on <var_mtype:nullable MType(MType)> */
var27 = var_mtype == var_other15;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var30 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var28) on <var28:AbstractCompiler> */
var33 = var28->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var28:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc__model___MModule___object_type(var31);
}
var_mtype = var34;
} else {
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var35;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL36:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
if (var_mtype == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
var42 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var42;
{
var43 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_mtype);
}
var_res = var43;
} else {
}
{
var44 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1890);
fatal_exit(1);
}
{
var45 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_res, var44);
}
var_res = var45;
{
{ /* Inline typing$AExpr$implicit_cast_to (var_nexpr) on <var_nexpr:AExpr> */
var48 = var_nexpr->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_nexpr:AExpr> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_implicit_cast_to = var46;
if (var_implicit_cast_to == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_implicit_cast_to,((val*)NULL)) on <var_implicit_cast_to:nullable MType> */
var_other = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other); /* == on <var_implicit_cast_to:nullable MType(MType)>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
var_ = var50;
if (var50){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var55) on <var55:AbstractCompiler> */
var60 = var55->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var55:AbstractCompiler> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var58) on <var58:ModelBuilder> */
var63 = var58->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var58:ModelBuilder> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_autocast (var61) on <var61:ToolContext> */
var66 = var61->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <var61:ToolContext> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline opts$Option$value (var64) on <var64:OptionBool> */
var69 = var64->attrs[COLOR_opts__Option___value].val; /* _value on <var64:OptionBool> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var70 = (short int)((int64_t)(var67)>>2);
var71 = !var70;
var49 = var71;
} else {
var49 = var_;
}
if (var49){
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "auto";
var75 = core__flat___NativeString___to_s_full(var74, 4l, 4l);
var73 = var75;
varonce72 = var73;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(self, var_res, var_implicit_cast_to, var73); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_cast on <self:AbstractCompilerVisitor>*/
}
{
var76 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_res, var_implicit_cast_to);
}
var_res = var76;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL77:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$debug for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var17 /* : NativeArray[String] */;
static val* varonce16;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
val* var26 /* : String */;
var_message = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_node = var;
if (var_node == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var8 = var_node == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var9 = glob_sys;
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "?: ";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_message;
{
var15 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
core__file___Sys___print(var9, var15); /* Direct call file$Sys$print on <var9:Sys>*/
}
} else {
{
nitc___nitc__ANode___debug(var_node, var_message); /* Direct call parser_nodes$ANode$debug on <var_node:nullable ANode(ANode)>*/
}
}
if (unlikely(varonce16==NULL)) {
var17 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "/* DEBUG: ";
var21 = core__flat___NativeString___to_s_full(var20, 10l, 10l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " */";
var25 = core__flat___NativeString___to_s_full(var24, 3l, 3l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce16;
varonce16 = NULL;
}
((struct instance_core__NativeArray*)var17)->values[1]=var_message;
{
var26 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce16 = var17;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var26); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractRuntimeFunction$mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* nitc___nitc__AbstractRuntimeFunction___mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:AbstractRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractRuntimeFunction$mmethoddef= for (self: AbstractRuntimeFunction, MMethodDef) */
void nitc___nitc__AbstractRuntimeFunction___mmethoddef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractRuntimeFunction$c_name for (self: AbstractRuntimeFunction): String */
val* nitc___nitc__AbstractRuntimeFunction___c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$c_name_cache (self) on <self:AbstractRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$build_c_name (self) on <self:AbstractRuntimeFunction> */
var11 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:AbstractRuntimeFunction> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2239);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$c_name_cache= (self,var_res) on <self:AbstractRuntimeFunction> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL12:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractRuntimeFunction$c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* nitc___nitc__AbstractRuntimeFunction___c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractRuntimeFunction$c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void nitc___nitc__AbstractRuntimeFunction___c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractRuntimeFunction$init for (self: AbstractRuntimeFunction) */
void nitc___nitc__AbstractRuntimeFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractRuntimeFunction___core__kernel__Object__init]))(self); /* init on <self:AbstractRuntimeFunction>*/
}
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$name for (self: RuntimeVariable): String */
val* nitc___nitc__RuntimeVariable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1956);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$name= for (self: RuntimeVariable, String) */
void nitc___nitc__RuntimeVariable___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$mtype for (self: RuntimeVariable): MType */
val* nitc___nitc__RuntimeVariable___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$mtype= for (self: RuntimeVariable, MType) */
void nitc___nitc__RuntimeVariable___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$mcasttype for (self: RuntimeVariable): MType */
val* nitc___nitc__RuntimeVariable___mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$mcasttype= for (self: RuntimeVariable, MType) */
void nitc___nitc__RuntimeVariable___mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$is_exact for (self: RuntimeVariable): Bool */
short int nitc___nitc__RuntimeVariable___is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$is_exact= for (self: RuntimeVariable, Bool) */
void nitc___nitc__RuntimeVariable___is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$init for (self: RuntimeVariable) */
void nitc___nitc__RuntimeVariable___core__kernel__Object__init(val* self) {
val* var /* : MType */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__RuntimeVariable___core__kernel__Object__init]))(self); /* init on <self:RuntimeVariable>*/
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nitc__model__MType__need_anchor]))(var); /* need_anchor on <var:MType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1971);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (self) on <self:RuntimeVariable> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int(*)(val* self))(var5->class->vft[COLOR_nitc__model__MType__need_anchor]))(var5); /* need_anchor on <var5:MType>*/
}
var9 = !var8;
if (unlikely(!var9)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$to_s for (self: RuntimeVariable): String */
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline abstract_compiler$RuntimeVariable$name (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1956);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$inspect for (self: RuntimeVariable): String */
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : MType */;
val* var13 /* : MType */;
val* var14 /* : MType */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
val* var39 /* : MType */;
val* var41 /* : MType */;
val* var42 /* : String */;
val* var43 /* : MType */;
val* var45 /* : MType */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = " exact";
var6 = core__flat___NativeString___to_s_full(var5, 6l, 6l);
var4 = var6;
varonce = var4;
}
var_exact_str = var4;
} else {
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "";
var10 = core__flat___NativeString___to_s_full(var9, 0l, 0l);
var8 = var10;
varonce7 = var8;
}
var_exact_str = var8;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var13 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (self) on <self:RuntimeVariable> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var11,var14) on <var11:MType> */
var_other = var14;
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:MType> */
var21 = var11 == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__Object__to_s]))(var24); /* to_s on <var24:MType>*/
}
((struct instance_core__NativeArray*)var23)->values[0]=var27;
((struct instance_core__NativeArray*)var23)->values[1]=var_exact_str;
{
var28 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var_type_str = var28;
} else {
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "(";
var34 = core__flat___NativeString___to_s_full(var33, 1l, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[1]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ")";
var38 = core__flat___NativeString___to_s_full(var37, 1l, 1l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var30)->values[4]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__Object__to_s]))(var39); /* to_s on <var39:MType>*/
}
((struct instance_core__NativeArray*)var30)->values[0]=var42;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (self) on <self:RuntimeVariable> */
var45 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__Object__to_s]))(var43); /* to_s on <var43:MType>*/
}
((struct instance_core__NativeArray*)var30)->values[2]=var46;
((struct instance_core__NativeArray*)var30)->values[3]=var_exact_str;
{
var47 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
var_type_str = var47;
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "<";
var53 = core__flat___NativeString___to_s_full(var52, 1l, 1l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = ":";
var57 = core__flat___NativeString___to_s_full(var56, 1l, 1l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var49)->values[2]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ">";
var61 = core__flat___NativeString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var49)->values[4]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$name (self) on <self:RuntimeVariable> */
var64 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1956);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
((struct instance_core__NativeArray*)var49)->values[1]=var62;
((struct instance_core__NativeArray*)var49)->values[3]=var_type_str;
{
var65 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
var = var65;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$visitor= for (self: StaticFrame, AbstractCompilerVisitor) */
void nitc___nitc__StaticFrame___visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__StaticFrame__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2000);
fatal_exit(1);
}
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___visitor].val = p0; /* _visitor on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$mpropdef for (self: StaticFrame): MPropDef */
val* nitc___nitc__StaticFrame___mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$mpropdef= for (self: StaticFrame, MPropDef) */
void nitc___nitc__StaticFrame___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val = p0; /* _mpropdef on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$receiver for (self: StaticFrame): MClassType */
val* nitc___nitc__StaticFrame___receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2007);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$receiver= for (self: StaticFrame, MClassType) */
void nitc___nitc__StaticFrame___receiver_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val = p0; /* _receiver on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$arguments for (self: StaticFrame): Array[RuntimeVariable] */
val* nitc___nitc__StaticFrame___arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2010);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$arguments= for (self: StaticFrame, Array[RuntimeVariable]) */
void nitc___nitc__StaticFrame___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val = p0; /* _arguments on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$returnvar for (self: StaticFrame): nullable RuntimeVariable */
val* nitc___nitc__StaticFrame___returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$returnvar= for (self: StaticFrame, nullable RuntimeVariable) */
void nitc___nitc__StaticFrame___returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = p0; /* _returnvar on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$returnlabel for (self: StaticFrame): nullable String */
val* nitc___nitc__StaticFrame___returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$returnlabel= for (self: StaticFrame, nullable String) */
void nitc___nitc__StaticFrame___returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = p0; /* _returnlabel on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$escapemark_names for (self: StaticFrame): HashMap[EscapeMark, String] */
val* nitc___nitc__StaticFrame___escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2019);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$comprehension for (self: StaticFrame): nullable RuntimeVariable */
val* nitc___nitc__StaticFrame___comprehension(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$comprehension= for (self: StaticFrame, nullable RuntimeVariable) */
void nitc___nitc__StaticFrame___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = p0; /* _comprehension on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$init for (self: StaticFrame) */
void nitc___nitc__StaticFrame___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__StaticFrame___core__kernel__Object__init]))(self); /* init on <self:StaticFrame>*/
}
RET_LABEL:;
}
/* method abstract_compiler$MType$ctype for (self: MType): String */
val* nitc__abstract_compiler___MType___ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val*";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MType$ctype_extern for (self: MType): String */
val* nitc__abstract_compiler___MType___ctype_extern(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val*";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MType$ctypename for (self: MType): String */
val* nitc__abstract_compiler___MType___ctypename(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val";
var3 = core__flat___NativeString___to_s_full(var2, 3l, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MType$is_c_primitive for (self: MType): Bool */
short int nitc__abstract_compiler___MType___is_c_primitive(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$ctype for (self: MClassType): String */
val* nitc__abstract_compiler___MClassType___MType__ctype(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : MClass */;
val* var51 /* : MClass */;
val* var52 /* : String */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : String */;
val* var64 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : String */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
val* var79 /* : MClass */;
val* var81 /* : MClass */;
val* var82 /* : String */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : String */;
short int var89 /* : Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
val* var94 /* : MClass */;
val* var96 /* : MClass */;
val* var97 /* : String */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : String */;
val* var109 /* : MClass */;
val* var111 /* : MClass */;
val* var112 /* : String */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
short int var119 /* : Bool */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
val* var124 /* : MClass */;
val* var126 /* : MClass */;
val* var127 /* : String */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : String */;
short int var134 /* : Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : String */;
val* var139 /* : MClass */;
val* var141 /* : MClass */;
val* var142 /* : String */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : String */;
short int var149 /* : Bool */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : String */;
val* var154 /* : MClass */;
val* var156 /* : MClass */;
val* var157 /* : String */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : String */;
short int var164 /* : Bool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : String */;
val* var169 /* : MClass */;
val* var171 /* : MClass */;
val* var172 /* : String */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
short int var179 /* : Bool */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MClassType___ctype].val != NULL; /* _ctype on <self:MClassType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__abstract_compiler__MClassType___ctype].val; /* _ctype on <self:MClassType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ctype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2045);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var7 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClass$name (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var5:MClass> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Int";
var13 = core__flat___NativeString___to_s_full(var12, 3l, 3l);
var11 = var13;
varonce = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var11); /* == on <var8:String>*/
}
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "int64_t";
var18 = core__flat___NativeString___to_s_full(var17, 7l, 7l);
var16 = var18;
varonce15 = var16;
}
var3 = var16;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var21 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model$MClass$name (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var19:MClass> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Bool";
var28 = core__flat___NativeString___to_s_full(var27, 4l, 4l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var26); /* == on <var22:String>*/
}
if (var29){
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "short int";
var33 = core__flat___NativeString___to_s_full(var32, 9l, 9l);
var31 = var33;
varonce30 = var31;
}
var3 = var31;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var36 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MClass$name (var34) on <var34:MClass> */
var39 = var34->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var34:MClass> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Char";
var43 = core__flat___NativeString___to_s_full(var42, 4l, 4l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_core__kernel__Object___61d_61d]))(var37, var41); /* == on <var37:String>*/
}
if (var44){
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "uint32_t";
var48 = core__flat___NativeString___to_s_full(var47, 8l, 8l);
var46 = var48;
varonce45 = var46;
}
var3 = var46;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var51 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model$MClass$name (var49) on <var49:MClass> */
var54 = var49->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var49:MClass> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "Float";
var58 = core__flat___NativeString___to_s_full(var57, 5l, 5l);
var56 = var58;
varonce55 = var56;
}
{
var59 = ((short int(*)(val* self, val* p0))(var52->class->vft[COLOR_core__kernel__Object___61d_61d]))(var52, var56); /* == on <var52:String>*/
}
if (var59){
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "double";
var63 = core__flat___NativeString___to_s_full(var62, 6l, 6l);
var61 = var63;
varonce60 = var61;
}
var3 = var61;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var66 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model$MClass$name (var64) on <var64:MClass> */
var69 = var64->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var64:MClass> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Int8";
var73 = core__flat___NativeString___to_s_full(var72, 4l, 4l);
var71 = var73;
varonce70 = var71;
}
{
var74 = ((short int(*)(val* self, val* p0))(var67->class->vft[COLOR_core__kernel__Object___61d_61d]))(var67, var71); /* == on <var67:String>*/
}
if (var74){
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "int8_t";
var78 = core__flat___NativeString___to_s_full(var77, 6l, 6l);
var76 = var78;
varonce75 = var76;
}
var3 = var76;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var81 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline model$MClass$name (var79) on <var79:MClass> */
var84 = var79->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var79:MClass> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Byte";
var88 = core__flat___NativeString___to_s_full(var87, 4l, 4l);
var86 = var88;
varonce85 = var86;
}
{
var89 = ((short int(*)(val* self, val* p0))(var82->class->vft[COLOR_core__kernel__Object___61d_61d]))(var82, var86); /* == on <var82:String>*/
}
if (var89){
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "unsigned char";
var93 = core__flat___NativeString___to_s_full(var92, 13l, 13l);
var91 = var93;
varonce90 = var91;
}
var3 = var91;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var96 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model$MClass$name (var94) on <var94:MClass> */
var99 = var94->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var94:MClass> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Int16";
var103 = core__flat___NativeString___to_s_full(var102, 5l, 5l);
var101 = var103;
varonce100 = var101;
}
{
var104 = ((short int(*)(val* self, val* p0))(var97->class->vft[COLOR_core__kernel__Object___61d_61d]))(var97, var101); /* == on <var97:String>*/
}
if (var104){
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "int16_t";
var108 = core__flat___NativeString___to_s_full(var107, 7l, 7l);
var106 = var108;
varonce105 = var106;
}
var3 = var106;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var111 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model$MClass$name (var109) on <var109:MClass> */
var114 = var109->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var109:MClass> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "UInt16";
var118 = core__flat___NativeString___to_s_full(var117, 6l, 6l);
var116 = var118;
varonce115 = var116;
}
{
var119 = ((short int(*)(val* self, val* p0))(var112->class->vft[COLOR_core__kernel__Object___61d_61d]))(var112, var116); /* == on <var112:String>*/
}
if (var119){
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "uint16_t";
var123 = core__flat___NativeString___to_s_full(var122, 8l, 8l);
var121 = var123;
varonce120 = var121;
}
var3 = var121;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var126 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline model$MClass$name (var124) on <var124:MClass> */
var129 = var124->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var124:MClass> */
if (unlikely(var129 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "Int32";
var133 = core__flat___NativeString___to_s_full(var132, 5l, 5l);
var131 = var133;
varonce130 = var131;
}
{
var134 = ((short int(*)(val* self, val* p0))(var127->class->vft[COLOR_core__kernel__Object___61d_61d]))(var127, var131); /* == on <var127:String>*/
}
if (var134){
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "int32_t";
var138 = core__flat___NativeString___to_s_full(var137, 7l, 7l);
var136 = var138;
varonce135 = var136;
}
var3 = var136;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var141 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var141 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline model$MClass$name (var139) on <var139:MClass> */
var144 = var139->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var139:MClass> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "UInt32";
var148 = core__flat___NativeString___to_s_full(var147, 6l, 6l);
var146 = var148;
varonce145 = var146;
}
{
var149 = ((short int(*)(val* self, val* p0))(var142->class->vft[COLOR_core__kernel__Object___61d_61d]))(var142, var146); /* == on <var142:String>*/
}
if (var149){
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "uint32_t";
var153 = core__flat___NativeString___to_s_full(var152, 8l, 8l);
var151 = var153;
varonce150 = var151;
}
var3 = var151;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var156 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var156 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline model$MClass$name (var154) on <var154:MClass> */
var159 = var154->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var154:MClass> */
if (unlikely(var159 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "NativeString";
var163 = core__flat___NativeString___to_s_full(var162, 12l, 12l);
var161 = var163;
varonce160 = var161;
}
{
var164 = ((short int(*)(val* self, val* p0))(var157->class->vft[COLOR_core__kernel__Object___61d_61d]))(var157, var161); /* == on <var157:String>*/
}
if (var164){
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "char*";
var168 = core__flat___NativeString___to_s_full(var167, 5l, 5l);
var166 = var168;
varonce165 = var166;
}
var3 = var166;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var171 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var171 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline model$MClass$name (var169) on <var169:MClass> */
var174 = var169->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var169:MClass> */
if (unlikely(var174 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "NativeArray";
var178 = core__flat___NativeString___to_s_full(var177, 11l, 11l);
var176 = var178;
varonce175 = var176;
}
{
var179 = ((short int(*)(val* self, val* p0))(var172->class->vft[COLOR_core__kernel__Object___61d_61d]))(var172, var176); /* == on <var172:String>*/
}
if (var179){
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "val*";
var183 = core__flat___NativeString___to_s_full(var182, 4l, 4l);
var181 = var183;
varonce180 = var181;
}
var3 = var181;
goto RET_LABEL4;
} else {
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "val*";
var187 = core__flat___NativeString___to_s_full(var186, 4l, 4l);
var185 = var187;
varonce184 = var185;
}
var3 = var185;
goto RET_LABEL4;
}
}
}
}
}
}
}
}
}
}
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__abstract_compiler__MClassType___ctype].val = var3; /* _ctype on <self:MClassType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$is_c_primitive for (self: MClassType): Bool */
short int nitc__abstract_compiler___MClassType___MType__is_c_primitive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MClassType__lazy_32d_is_c_primitive].s; /* lazy _is_c_primitive on <self:MClassType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__abstract_compiler__MClassType___is_c_primitive].s; /* _is_c_primitive on <self:MClassType> */
} else {
{
{
var5 = nitc__abstract_compiler___MClassType___MType__ctype(self);
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "val*";
var8 = core__flat___NativeString___to_s_full(var7, 4l, 4l);
var6 = var8;
varonce = var6;
}
{
{ /* Inline kernel$Object$!= (var5,var6) on <var5:String> */
var_other = var6;
{
var11 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__abstract_compiler__MClassType___is_c_primitive].s = var3; /* _is_c_primitive on <self:MClassType> */
var2 = var3;
self->attrs[COLOR_nitc__abstract_compiler__MClassType__lazy_32d_is_c_primitive].s = 1; /* lazy _is_c_primitive on <self:MClassType> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$ctype_extern for (self: MClassType): String */
val* nitc__abstract_compiler___MClassType___MType__ctype_extern(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MClassKind */;
val* var6 /* : MClassKind */;
val* var7 /* : Sys */;
val* var8 /* : MClassKind */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = glob_sys;
{
var8 = nitc__model___core__Sys___extern_kind(var7);
}
{
{ /* Inline kernel$Object$== (var4,var8) on <var4:MClassKind> */
var_other = var8;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:MClassKind> */
var13 = var4 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "void*";
var16 = core__flat___NativeString___to_s_full(var15, 5l, 5l);
var14 = var16;
varonce = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
var17 = nitc__abstract_compiler___MClassType___MType__ctype(self);
}
var = var17;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$MClassType$ctypename for (self: MClassType): String */
val* nitc__abstract_compiler___MClassType___MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
val* var60 /* : MClass */;
val* var62 /* : MClass */;
val* var63 /* : String */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : String */;
val* var75 /* : MClass */;
val* var77 /* : MClass */;
val* var78 /* : String */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : String */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : String */;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : String */;
val* var105 /* : MClass */;
val* var107 /* : MClass */;
val* var108 /* : String */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
short int var115 /* : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : String */;
val* var120 /* : MClass */;
val* var122 /* : MClass */;
val* var123 /* : String */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : String */;
short int var130 /* : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : MClass */;
val* var137 /* : MClass */;
val* var138 /* : String */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : String */;
short int var145 /* : Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : String */;
val* var150 /* : MClass */;
val* var152 /* : MClass */;
val* var153 /* : String */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : String */;
short int var160 /* : Bool */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : String */;
val* var165 /* : MClass */;
val* var167 /* : MClass */;
val* var168 /* : String */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : String */;
short int var175 /* : Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Int";
var9 = core__flat___NativeString___to_s_full(var8, 3l, 3l);
var7 = var9;
varonce = var7;
}
{
var10 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var7); /* == on <var4:String>*/
}
if (var10){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "l";
var14 = core__flat___NativeString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var17 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClass$name (var15) on <var15:MClass> */
var20 = var15->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var15:MClass> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Bool";
var24 = core__flat___NativeString___to_s_full(var23, 4l, 4l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_core__kernel__Object___61d_61d]))(var18, var22); /* == on <var18:String>*/
}
if (var25){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "s";
var29 = core__flat___NativeString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
var = var27;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var32 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model$MClass$name (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var30:MClass> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Char";
var39 = core__flat___NativeString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
{
var40 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_core__kernel__Object___61d_61d]))(var33, var37); /* == on <var33:String>*/
}
if (var40){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "c";
var44 = core__flat___NativeString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce41 = var42;
}
var = var42;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var47 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClass$name (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var45:MClass> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Float";
var54 = core__flat___NativeString___to_s_full(var53, 5l, 5l);
var52 = var54;
varonce51 = var52;
}
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_core__kernel__Object___61d_61d]))(var48, var52); /* == on <var48:String>*/
}
if (var55){
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "d";
var59 = core__flat___NativeString___to_s_full(var58, 1l, 1l);
var57 = var59;
varonce56 = var57;
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var62 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model$MClass$name (var60) on <var60:MClass> */
var65 = var60->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var60:MClass> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Int8";
var69 = core__flat___NativeString___to_s_full(var68, 4l, 4l);
var67 = var69;
varonce66 = var67;
}
{
var70 = ((short int(*)(val* self, val* p0))(var63->class->vft[COLOR_core__kernel__Object___61d_61d]))(var63, var67); /* == on <var63:String>*/
}
if (var70){
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "i8";
var74 = core__flat___NativeString___to_s_full(var73, 2l, 2l);
var72 = var74;
varonce71 = var72;
}
var = var72;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var77 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model$MClass$name (var75) on <var75:MClass> */
var80 = var75->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var75:MClass> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "Byte";
var84 = core__flat___NativeString___to_s_full(var83, 4l, 4l);
var82 = var84;
varonce81 = var82;
}
{
var85 = ((short int(*)(val* self, val* p0))(var78->class->vft[COLOR_core__kernel__Object___61d_61d]))(var78, var82); /* == on <var78:String>*/
}
if (var85){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "b";
var89 = core__flat___NativeString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
var = var87;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var92 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model$MClass$name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "Int16";
var99 = core__flat___NativeString___to_s_full(var98, 5l, 5l);
var97 = var99;
varonce96 = var97;
}
{
var100 = ((short int(*)(val* self, val* p0))(var93->class->vft[COLOR_core__kernel__Object___61d_61d]))(var93, var97); /* == on <var93:String>*/
}
if (var100){
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "i16";
var104 = core__flat___NativeString___to_s_full(var103, 3l, 3l);
var102 = var104;
varonce101 = var102;
}
var = var102;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var107 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline model$MClass$name (var105) on <var105:MClass> */
var110 = var105->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var105:MClass> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "UInt16";
var114 = core__flat___NativeString___to_s_full(var113, 6l, 6l);
var112 = var114;
varonce111 = var112;
}
{
var115 = ((short int(*)(val* self, val* p0))(var108->class->vft[COLOR_core__kernel__Object___61d_61d]))(var108, var112); /* == on <var108:String>*/
}
if (var115){
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "u16";
var119 = core__flat___NativeString___to_s_full(var118, 3l, 3l);
var117 = var119;
varonce116 = var117;
}
var = var117;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var122 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline model$MClass$name (var120) on <var120:MClass> */
var125 = var120->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var120:MClass> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "Int32";
var129 = core__flat___NativeString___to_s_full(var128, 5l, 5l);
var127 = var129;
varonce126 = var127;
}
{
var130 = ((short int(*)(val* self, val* p0))(var123->class->vft[COLOR_core__kernel__Object___61d_61d]))(var123, var127); /* == on <var123:String>*/
}
if (var130){
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "i32";
var134 = core__flat___NativeString___to_s_full(var133, 3l, 3l);
var132 = var134;
varonce131 = var132;
}
var = var132;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var137 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline model$MClass$name (var135) on <var135:MClass> */
var140 = var135->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var135:MClass> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "UInt32";
var144 = core__flat___NativeString___to_s_full(var143, 6l, 6l);
var142 = var144;
varonce141 = var142;
}
{
var145 = ((short int(*)(val* self, val* p0))(var138->class->vft[COLOR_core__kernel__Object___61d_61d]))(var138, var142); /* == on <var138:String>*/
}
if (var145){
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "u32";
var149 = core__flat___NativeString___to_s_full(var148, 3l, 3l);
var147 = var149;
varonce146 = var147;
}
var = var147;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var152 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var152 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline model$MClass$name (var150) on <var150:MClass> */
var155 = var150->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var150:MClass> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "NativeString";
var159 = core__flat___NativeString___to_s_full(var158, 12l, 12l);
var157 = var159;
varonce156 = var157;
}
{
var160 = ((short int(*)(val* self, val* p0))(var153->class->vft[COLOR_core__kernel__Object___61d_61d]))(var153, var157); /* == on <var153:String>*/
}
if (var160){
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "str";
var164 = core__flat___NativeString___to_s_full(var163, 3l, 3l);
var162 = var164;
varonce161 = var162;
}
var = var162;
goto RET_LABEL;
} else {
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var167 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline model$MClass$name (var165) on <var165:MClass> */
var170 = var165->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var165:MClass> */
if (unlikely(var170 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "NativeArray";
var174 = core__flat___NativeString___to_s_full(var173, 11l, 11l);
var172 = var174;
varonce171 = var172;
}
{
var175 = ((short int(*)(val* self, val* p0))(var168->class->vft[COLOR_core__kernel__Object___61d_61d]))(var168, var172); /* == on <var168:String>*/
}
if (var175){
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "val";
var179 = core__flat___NativeString___to_s_full(var178, 3l, 3l);
var177 = var179;
varonce176 = var177;
}
var = var177;
goto RET_LABEL;
} else {
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "val";
var183 = core__flat___NativeString___to_s_full(var182, 3l, 3l);
var181 = var183;
varonce180 = var181;
}
var = var181;
goto RET_LABEL;
}
}
}
}
}
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$MMethodDef$can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int nitc__abstract_compiler___MMethodDef___can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AbstractCompiler */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var16 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2124);
fatal_exit(1);
}
var_v = p0;
{
{ /* Inline model$MMethodDef$is_abstract (self) on <self:MMethodDef> */
var4 = self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$constant_value (self) on <self:MMethodDef> */
var7 = self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((int64_t)var5&3)?class_info[((int64_t)var5&3)]:var5->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable Object>*/
var8 = var9;
}
if (var8){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var12 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var10) on <var10:AbstractCompiler> */
var15 = var10->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var10:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_modelbuilder = var13;
{
var16 = nitc__modelize_property___ModelBuilder___mpropdef2node(var_modelbuilder, self);
}
var_node = var16;
/* <var_node:nullable ANode> isa APropdef */
cltype18 = type_nitc__APropdef.color;
idtype19 = type_nitc__APropdef.id;
if(var_node == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_node->type->table_size) {
var17 = 0;
} else {
var17 = var_node->type->type_table[cltype18] == idtype19;
}
}
if (var17){
{
var20 = ((short int(*)(val* self))(var_node->class->vft[COLOR_nitc__abstract_compiler__APropdef__can_inline]))(var_node); /* can_inline on <var_node:nullable ANode(APropdef)>*/
}
var = var20;
goto RET_LABEL;
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype22 = type_nitc__AClassdef.color;
idtype23 = type_nitc__AClassdef.id;
if(var_node == NULL) {
var21 = 0;
} else {
if(cltype22 >= var_node->type->table_size) {
var21 = 0;
} else {
var21 = var_node->type->type_table[cltype22] == idtype23;
}
}
if (var21){
var = 1;
goto RET_LABEL;
} else {
if (var_node == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var29 = var_node == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var = 1;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2139);
fatal_exit(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$MMethodDef$compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc__abstract_compiler___MMethodDef___compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
val* var_val /* var val: nullable Object */;
val* var11 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var_cn /* var cn: String */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
val* var34 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable ANode */;
val* var44 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : nullable ANode */;
val* var52 /* : nullable ANode */;
val* var_oldnode53 /* var oldnode: nullable ANode */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : RuntimeVariable */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2143);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var4 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_modelbuilder = var5;
{
{ /* Inline model$MMethodDef$constant_value (self) on <self:MMethodDef> */
var10 = self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_val = var8;
{
var11 = nitc__modelize_property___ModelBuilder___mpropdef2node(var_modelbuilder, self);
}
var_node = var11;
{
{ /* Inline model$MMethodDef$is_abstract (self) on <self:MMethodDef> */
var14 = self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var15 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var16 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var15); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_cn = var16;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL17:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "PRINT_ERROR(\"Runtime error: Abstract method `%s` called on `%s`\", \"";
var22 = core__flat___NativeString___to_s_full(var21, 67l, 67l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "\", ";
var26 = core__flat___NativeString___to_s_full(var25, 3l, 3l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = ");";
var30 = core__flat___NativeString___to_s_full(var29, 2l, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var18)->values[4]=var28;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var33 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var31) on <var31:MProperty(MMethod)> */
var36 = var31->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var31:MProperty(MMethod)> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var34); /* escape_to_c on <var34:String>*/
}
((struct instance_core__NativeArray*)var18)->values[1]=var37;
((struct instance_core__NativeArray*)var18)->values[3]=var_cn;
{
var38 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_node:nullable ANode> isa APropdef */
cltype40 = type_nitc__APropdef.color;
idtype41 = type_nitc__APropdef.id;
if(var_node == NULL) {
var39 = 0;
} else {
if(cltype40 >= var_node->type->table_size) {
var39 = 0;
} else {
var39 = var_node->type->type_table[cltype40] == idtype41;
}
}
if (var39){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var44 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_oldnode = var42;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL45:(void)0;
}
}
{
nitc__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler$MMethodDef$compile_parameter_check on <self:MMethodDef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_node->class->vft[COLOR_nitc__abstract_compiler__APropdef__compile_to_c]))(var_node, var_v, self, var_arguments); /* compile_to_c on <var_node:nullable ANode(APropdef)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL46:(void)0;
}
}
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype48 = type_nitc__AClassdef.color;
idtype49 = type_nitc__AClassdef.id;
if(var_node == NULL) {
var47 = 0;
} else {
if(cltype48 >= var_node->type->table_size) {
var47 = 0;
} else {
var47 = var_node->type->type_table[cltype48] == idtype49;
}
}
if (var47){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var52 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_oldnode53 = var50;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL54:(void)0;
}
}
{
nitc__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler$MMethodDef$compile_parameter_check on <self:MMethodDef>*/
}
{
nitc__abstract_compiler___AClassdef___compile_to_c(var_node, var_v, self, var_arguments); /* Direct call abstract_compiler$AClassdef$compile_to_c on <var_node:nullable ANode(AClassdef)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (var_v,var_oldnode53) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode53; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL55:(void)0;
}
}
} else {
if (var_val == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
var57 = ((short int(*)(val* self, val* p0))((((int64_t)var_val&3)?class_info[((int64_t)var_val&3)]:var_val->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object>*/
var56 = var57;
}
if (var56){
{
var58 = nitc___nitc__AbstractCompilerVisitor___value_instance(var_v, var_val);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var58); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <var_v:AbstractCompilerVisitor>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2173);
fatal_exit(1);
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MMethodDef$compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void nitc__abstract_compiler___MMethodDef___compile_parameter_check(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : nullable MSignature */;
val* var19 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
int64_t var_i /* var i: Int */;
int64_t var20 /* : Int */;
int64_t var_ /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : Array[MParameter] */;
val* var30 /* : Array[MParameter] */;
val* var31 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : MProperty */;
val* var38 /* : MProperty */;
val* var39 /* : MPropDef */;
val* var41 /* : MPropDef */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
val* var45 /* : Array[MParameter] */;
val* var47 /* : Array[MParameter] */;
val* var48 /* : nullable Object */;
val* var49 /* : MType */;
val* var51 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var57 /* : NativeArray[String] */;
static val* varonce;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var81 /* : String */;
int64_t var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
int64_t var88 /* : Int */;
val* var89 /* : nullable Object */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
int64_t var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
int64_t var99 /* : Int */;
val* var100 /* : nullable Object */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : String */;
int64_t var105 /* : Int */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2178);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_covariance (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts$Option$value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = (short int)((int64_t)(var13)>>2);
if (var16){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$msignature (self) on <self:MMethodDef> */
var19 = self->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2183);
fatal_exit(1);
}
var_msignature = var17;
var_i = 0l;
{
var20 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var20;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var23 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_i < var_;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var30 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var28, var_i);
}
var_mp = var31;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var34 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32){
goto BREAK_label35;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var38 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var36) on <var36:MProperty(MMethod)> */
var41 = var36->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var36:MProperty(MMethod)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2191);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var42) on <var42:nullable MSignature> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var47 = var42->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var42:nullable MSignature> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var45, var_i);
}
{
{ /* Inline model$MParameter$mtype (var48) on <var48:nullable Object(MParameter)> */
var51 = var48->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var48:nullable Object(MParameter)> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_origmtype = var49;
{
var52 = ((short int(*)(val* self))(var_origmtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_origmtype); /* need_anchor on <var_origmtype:MType>*/
}
var53 = !var52;
if (var53){
goto BREAK_label35;
} else {
}
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var56 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_mtype = var54;
if (unlikely(varonce==NULL)) {
var57 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "/* Covariant cast for argument ";
var61 = core__flat___NativeString___to_s_full(var60, 31l, 31l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " (";
var65 = core__flat___NativeString___to_s_full(var64, 2l, 2l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[2]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ") ";
var69 = core__flat___NativeString___to_s_full(var68, 2l, 2l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var57)->values[4]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " isa ";
var73 = core__flat___NativeString___to_s_full(var72, 5l, 5l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var57)->values[6]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " */";
var77 = core__flat___NativeString___to_s_full(var76, 3l, 3l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var57)->values[8]=var75;
} else {
var57 = varonce;
varonce = NULL;
}
var78 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var57)->values[1]=var78;
{
{ /* Inline model$MParameter$name (var_mp) on <var_mp:MParameter> */
var81 = var_mp->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_mp:MParameter> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
((struct instance_core__NativeArray*)var57)->values[3]=var79;
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var84 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var88 = var_i + 1l;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
var89 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var82);
}
{
var90 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var89);
}
((struct instance_core__NativeArray*)var57)->values[5]=var90;
{
var91 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var57)->values[7]=var91;
{
var92 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce = var57;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var92); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var95 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var99 = var_i + 1l;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
var100 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var93);
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "covariance";
var104 = core__flat___NativeString___to_s_full(var103, 10l, 10l);
var102 = var104;
varonce101 = var102;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(var_v, var100, var_mtype, var102); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_cast on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label35: (void)0;
{
var105 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var105;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler$APropdef$compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___APropdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : Location */;
val* var21 /* : Location */;
val* var22 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var4 = core__flat___NativeString___to_s_full(var3, 33l, 33l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[2]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " at ";
var12 = core__flat___NativeString___to_s_full(var11, 4l, 4l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[4]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\\n\");";
var16 = core__flat___NativeString___to_s_full(var15, 5l, 5l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var)->values[6]=var14;
} else {
var = varonce;
varonce = NULL;
}
{
var17 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var)->values[3]=var18;
{
{ /* Inline parser_nodes$ANode$location (self) on <self:APropdef> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:APropdef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc___nitc__Location___core__abstract_text__Object__to_s(var19);
}
((struct instance_core__NativeArray*)var)->values[5]=var22;
{
var23 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Not yet implemented";
var27 = core__flat___NativeString___to_s_full(var26, 19l, 19l);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__ANode___debug(self, var25); /* Direct call parser_nodes$ANode$debug on <self:APropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler$APropdef$can_inline for (self: APropdef): Bool */
short int nitc__abstract_compiler___APropdef___can_inline(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}

#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompilerVisitor$adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var22 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : String */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
val* var36 /* : String */;
short int var37 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var42 /* : MClassDef */;
val* var44 /* : MClassDef */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : MClassType */;
val* var50 /* : MClassType */;
val* var51 /* : RuntimeVariable */;
int64_t var_i /* var i: Int */;
int64_t var52 /* : Int */;
int64_t var_ /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var56 /* : Bool */;
val* var57 /* : Array[MParameter] */;
val* var59 /* : Array[MParameter] */;
val* var60 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var_t /* var t: MType */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int64_t var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
int64_t var73 /* : Int */;
val* var74 /* : nullable Object */;
val* var75 /* : MType */;
val* var77 /* : MType */;
int64_t var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
int64_t var84 /* : Int */;
int64_t var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
int64_t var91 /* : Int */;
val* var92 /* : nullable Object */;
val* var93 /* : RuntimeVariable */;
int64_t var94 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model$MMethodDef$msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1177);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
var22 = core___core__SequenceRead___Collection__first(var_args);
}
var_recv = var22;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var25 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var23); /* ctype on <var23:MType>*/
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var30:MClass> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nitc__abstract_compiler___MClassType___MType__ctype(var33);
}
{
{ /* Inline kernel$Object$!= (var26,var36) on <var26:String> */
var_other = var36;
{
var39 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var44 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var42) on <var42:MClassDef> */
var47 = var42->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var42:MClassDef> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var45:MClass> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var41, var48);
}
{
core___core__Sequence___first_61d(var_args, var51); /* Direct call abstract_collection$Sequence$first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var52 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var56 = var_i < var_;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var57, var_i);
}
var_mp = var60;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var63 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_t = var61;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var66 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_i + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var67);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var74) on <var74:nullable Object(RuntimeVariable)> */
var77 = var74->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var74:nullable Object(RuntimeVariable)> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_t = var75;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_i + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var91 = var_i + 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var92 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var85);
}
{
var93 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var92, var_t);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var78, var93); /* Direct call array$Array$[]= on <var_args:Array[RuntimeVariable]>*/
}
{
var94 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var94;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var22 /* : Bool */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClass */;
val* var39 /* : MClass */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : RuntimeVariable */;
int64_t var_i /* var i: Int */;
int64_t var44 /* : Int */;
int64_t var_45 /* var : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : Array[MParameter] */;
val* var52 /* : Array[MParameter] */;
val* var53 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_t /* var t: MType */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int64_t var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
int64_t var66 /* : Int */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int64_t var74 /* : Int */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
int64_t var80 /* : Int */;
int64_t var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
int64_t var87 /* : Int */;
val* var88 /* : nullable Object */;
val* var89 /* : RuntimeVariable */;
int64_t var90 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model$MMethodDef$msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1194);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
{ /* Inline model$MPropDef$mproperty (var_m) on <var_m:MMethodDef> */
var25 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var23) on <var23:MProperty(MMethod)> */
var28 = var23->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var23:MProperty(MMethod)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = !var26;
var_ = var29;
if (var29){
{
{ /* Inline model$MMethodDef$is_extern (var_m) on <var_m:MMethodDef> */
var32 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var33 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var36 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var37) on <var37:MClass> */
var42 = var37->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var37:MClass> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var33, var40); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Sequence___first_61d(var_args, var43); /* Direct call abstract_collection$Sequence$first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var44 = nitc___nitc__MSignature___arity(var_msignature);
}
var_45 = var44;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_45) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_45:Int> isa OTHER */
/* <var_45:Int> isa OTHER */
var48 = 1; /* easy <var_45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_i < var_45;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var52 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var50, var_i);
}
var_mp = var53;
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
var_t = var54;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var59 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_i + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var60);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var67) on <var67:nullable Object(RuntimeVariable)> */
var70 = var67->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var67:nullable Object(RuntimeVariable)> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_t = var68;
} else {
}
{
{ /* Inline model$MMethodDef$is_extern (var_m) on <var_m:MMethodDef> */
var73 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var76 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var80 = var_i + 1l;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_i + 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
var88 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var81);
}
{
var89 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var88, var_t); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var74, var89); /* Direct call array$Array$[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
{
var90 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var90;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$autobox for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var12 /* : MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
short int var29 /* : Bool */;
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
val* var42 /* : RuntimeVariable */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
short int var48 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : RuntimeVariable */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
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
val* var80 /* : RuntimeVariable */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : MType */;
val* var107 /* : MType */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : RuntimeVariable */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : MType */;
val* var116 /* : MType */;
val* var117 /* : MType */;
val* var119 /* : MType */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : MType */;
val* var127 /* : MType */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
val* var131 /* : MType */;
val* var133 /* : MType */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : String */;
short int var139 /* : Bool */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var152 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
val* var153 /* : MType */;
val* var155 /* : MType */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : String */;
short int var161 /* : Bool */;
val* var163 /* : NativeArray[String] */;
static val* varonce162;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : RuntimeVariable */;
val* var175 /* : MType */;
val* var177 /* : MType */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : String */;
short int var183 /* : Bool */;
val* var185 /* : NativeArray[String] */;
static val* varonce184;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
val* var193 /* : String */;
val* var194 /* : String */;
val* var195 /* : String */;
val* var196 /* : RuntimeVariable */;
val* var197 /* : MType */;
val* var199 /* : MType */;
val* var201 /* : MType */;
val* var203 /* : MType */;
short int var204 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
short int var_210 /* var : Bool */;
val* var211 /* : MClass */;
val* var213 /* : MClass */;
val* var214 /* : MClassKind */;
val* var216 /* : MClassKind */;
val* var217 /* : Sys */;
val* var218 /* : MClassKind */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
short int var_224 /* var : Bool */;
val* var225 /* : MClass */;
val* var227 /* : MClass */;
val* var228 /* : String */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
val* var234 /* : String */;
short int var235 /* : Bool */;
val* var_other237 /* var other: nullable Object */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
val* var240 /* : AbstractCompiler */;
val* var242 /* : AbstractCompiler */;
val* var243 /* : MModule */;
val* var245 /* : MModule */;
val* var246 /* : MClassType */;
val* var247 /* : RuntimeVariable */;
val* var_res248 /* var res: RuntimeVariable */;
val* var249 /* : MType */;
val* var251 /* : MType */;
val* var254 /* : NativeArray[String] */;
static val* varonce253;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : String */;
val* var259 /* : String */;
val* var260 /* : String */;
val* var262 /* : NativeArray[String] */;
static val* varonce261;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : String */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
val* var274 /* : String */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
val* var278 /* : String */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
val* var282 /* : String */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var285 /* : String */;
val* var286 /* : MType */;
val* var288 /* : MType */;
val* var289 /* : String */;
val* var290 /* : String */;
val* var291 /* : String */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
val* var295 /* : MType */;
val* var297 /* : MType */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : String */;
short int var303 /* : Bool */;
short int var_304 /* var : Bool */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : String */;
short int var310 /* : Bool */;
short int var_311 /* var : Bool */;
short int var312 /* : Bool */;
val* var313 /* : MType */;
val* var315 /* : MType */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
val* var320 /* : String */;
short int var321 /* : Bool */;
short int var_322 /* var : Bool */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
val* var327 /* : String */;
short int var328 /* : Bool */;
short int var_329 /* var : Bool */;
short int var330 /* : Bool */;
val* var331 /* : MType */;
val* var333 /* : MType */;
val* var334 /* : String */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : String */;
short int var339 /* : Bool */;
short int var_340 /* var : Bool */;
val* var341 /* : String */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
val* var345 /* : String */;
short int var346 /* : Bool */;
val* var347 /* : RuntimeVariable */;
val* var_res348 /* var res: RuntimeVariable */;
val* var350 /* : NativeArray[String] */;
static val* varonce349;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
val* var354 /* : String */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
val* var358 /* : String */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
val* var362 /* : String */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
val* var366 /* : String */;
val* var367 /* : String */;
val* var368 /* : MType */;
val* var370 /* : MType */;
val* var371 /* : String */;
val* var372 /* : String */;
val* var373 /* : String */;
val* var375 /* : NativeArray[String] */;
static val* varonce374;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
val* var379 /* : String */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
val* var383 /* : String */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
val* var387 /* : String */;
val* var388 /* : MType */;
val* var390 /* : MType */;
val* var391 /* : String */;
val* var392 /* : String */;
val* var393 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var1,var_mtype) on <var1:MType> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:MType> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var12 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((short int(*)(val* self))(var10->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var10); /* is_c_primitive on <var10:MType>*/
}
var14 = !var13;
var_ = var14;
if (var14){
{
var15 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var16 = !var15;
var9 = var16;
} else {
var9 = var_;
}
if (var9){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var19 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((short int(*)(val* self))(var17->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var17); /* is_c_primitive on <var17:MType>*/
}
var21 = !var20;
if (var21){
{
{ /* Inline separate_compiler$MType$is_tagged (var_mtype) on <var_mtype:MType> */
var24 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var25 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "Int";
var28 = core__flat___NativeString___to_s_full(var27, 3l, 3l);
var26 = var28;
varonce = var26;
}
{
var29 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_core__kernel__Object___61d_61d]))(var25, var26); /* == on <var25:String>*/
}
if (var29){
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "(int64_t)(";
var35 = core__flat___NativeString___to_s_full(var34, 10l, 10l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ")>>2";
var39 = core__flat___NativeString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var40 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var31)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
var42 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var41, var_mtype);
}
var = var42;
goto RET_LABEL;
} else {
{
var43 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Char";
var47 = core__flat___NativeString___to_s_full(var46, 4l, 4l);
var45 = var47;
varonce44 = var45;
}
{
var48 = ((short int(*)(val* self, val* p0))(var43->class->vft[COLOR_core__kernel__Object___61d_61d]))(var43, var45); /* == on <var43:String>*/
}
if (var48){
if (unlikely(varonce49==NULL)) {
var50 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "(uint32_t)((int64_t)(";
var54 = core__flat___NativeString___to_s_full(var53, 21l, 21l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ")>>2)";
var58 = core__flat___NativeString___to_s_full(var57, 5l, 5l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var50)->values[2]=var56;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
var59 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var50)->values[1]=var59;
{
var60 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
var61 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var60, var_mtype);
}
var = var61;
goto RET_LABEL;
} else {
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Bool";
var66 = core__flat___NativeString___to_s_full(var65, 4l, 4l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((short int(*)(val* self, val* p0))(var62->class->vft[COLOR_core__kernel__Object___61d_61d]))(var62, var64); /* == on <var62:String>*/
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "(short int)((int64_t)(";
var73 = core__flat___NativeString___to_s_full(var72, 22l, 22l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = ")>>2)";
var77 = core__flat___NativeString___to_s_full(var76, 5l, 5l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var69)->values[2]=var75;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var78 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var69)->values[1]=var78;
{
var79 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
var80 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var79, var_mtype);
}
var = var80;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1223);
fatal_exit(1);
}
}
}
} else {
}
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "((struct instance_";
var86 = core__flat___NativeString___to_s_full(var85, 18l, 18l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "*)";
var90 = core__flat___NativeString___to_s_full(var89, 2l, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var82)->values[2]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ")->value; /* autounbox from ";
var94 = core__flat___NativeString___to_s_full(var93, 28l, 28l);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var82)->values[4]=var92;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = " to ";
var98 = core__flat___NativeString___to_s_full(var97, 4l, 4l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var82)->values[6]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = " */";
var102 = core__flat___NativeString___to_s_full(var101, 3l, 3l);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var82)->values[8]=var100;
} else {
var82 = varonce81;
varonce81 = NULL;
}
{
var103 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var82)->values[1]=var103;
{
var104 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var82)->values[3]=var104;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var107 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__Object__to_s]))(var105); /* to_s on <var105:MType>*/
}
((struct instance_core__NativeArray*)var82)->values[5]=var108;
{
var109 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var82)->values[7]=var109;
{
var110 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
var111 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var110, var_mtype);
}
var = var111;
goto RET_LABEL;
} else {
{
var112 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var113 = !var112;
if (var113){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var116 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var119 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var114,var117) on <var114:MType> */
var_other = var117;
{
{ /* Inline kernel$Object$is_same_instance (var114,var_other) on <var114:MType> */
var124 = var114 == var_other;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
if (unlikely(!var120)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1228);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var127 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$is_tagged (var125) on <var125:MType> */
var130 = var125->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var125:MType> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
if (var128){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var133 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = ((val*(*)(val* self))(var131->class->vft[COLOR_nitc__model_base__MEntity__name]))(var131); /* name on <var131:MType>*/
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Int";
var138 = core__flat___NativeString___to_s_full(var137, 3l, 3l);
var136 = var138;
varonce135 = var136;
}
{
var139 = ((short int(*)(val* self, val* p0))(var134->class->vft[COLOR_core__kernel__Object___61d_61d]))(var134, var136); /* == on <var134:String>*/
}
if (var139){
if (unlikely(varonce140==NULL)) {
var141 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "(val*)(";
var145 = core__flat___NativeString___to_s_full(var144, 7l, 7l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var141)->values[0]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "<<2|1)";
var149 = core__flat___NativeString___to_s_full(var148, 6l, 6l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var141)->values[2]=var147;
} else {
var141 = varonce140;
varonce140 = NULL;
}
{
var150 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var141)->values[1]=var150;
{
var151 = ((val*(*)(val* self))(var141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
var152 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var151, var_mtype);
}
var_res = var152;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var155 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = ((val*(*)(val* self))(var153->class->vft[COLOR_nitc__model_base__MEntity__name]))(var153); /* name on <var153:MType>*/
}
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "Char";
var160 = core__flat___NativeString___to_s_full(var159, 4l, 4l);
var158 = var160;
varonce157 = var158;
}
{
var161 = ((short int(*)(val* self, val* p0))(var156->class->vft[COLOR_core__kernel__Object___61d_61d]))(var156, var158); /* == on <var156:String>*/
}
if (var161){
if (unlikely(varonce162==NULL)) {
var163 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "(val*)((int64_t)(";
var167 = core__flat___NativeString___to_s_full(var166, 17l, 17l);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var163)->values[0]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = ")<<2|2)";
var171 = core__flat___NativeString___to_s_full(var170, 7l, 7l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var163)->values[2]=var169;
} else {
var163 = varonce162;
varonce162 = NULL;
}
{
var172 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var163)->values[1]=var172;
{
var173 = ((val*(*)(val* self))(var163->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var163); /* native_to_s on <var163:NativeArray[String]>*/
}
varonce162 = var163;
{
var174 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var173, var_mtype);
}
var_res = var174;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var177 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = ((val*(*)(val* self))(var175->class->vft[COLOR_nitc__model_base__MEntity__name]))(var175); /* name on <var175:MType>*/
}
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "Bool";
var182 = core__flat___NativeString___to_s_full(var181, 4l, 4l);
var180 = var182;
varonce179 = var180;
}
{
var183 = ((short int(*)(val* self, val* p0))(var178->class->vft[COLOR_core__kernel__Object___61d_61d]))(var178, var180); /* == on <var178:String>*/
}
if (var183){
if (unlikely(varonce184==NULL)) {
var185 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "(val*)((int64_t)(";
var189 = core__flat___NativeString___to_s_full(var188, 17l, 17l);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var185)->values[0]=var187;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = ")<<2|3)";
var193 = core__flat___NativeString___to_s_full(var192, 7l, 7l);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var185)->values[2]=var191;
} else {
var185 = varonce184;
varonce184 = NULL;
}
{
var194 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var185)->values[1]=var194;
{
var195 = ((val*(*)(val* self))(var185->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var185); /* native_to_s on <var185:NativeArray[String]>*/
}
varonce184 = var185;
{
var196 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var195, var_mtype);
}
var_res = var196;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1238);
fatal_exit(1);
}
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var199 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var199 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res,var197) on <var_res:nullable Object(RuntimeVariable)> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var197; /* _mcasttype on <var_res:nullable Object(RuntimeVariable)> */
RET_LABEL200:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var203 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var203 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
/* <var201:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var201->type->table_size) {
var204 = 0;
} else {
var204 = var201->type->type_table[cltype] == idtype;
}
if (unlikely(!var204)) {
var_class_name = var201 == NULL ? "null" : var201->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1244);
fatal_exit(1);
}
var_valtype = var201;
/* <var_mtype:MType> isa MClassType */
cltype208 = type_nitc__MClassType.color;
idtype209 = type_nitc__MClassType.id;
if(cltype208 >= var_mtype->type->table_size) {
var207 = 0;
} else {
var207 = var_mtype->type->type_table[cltype208] == idtype209;
}
var_210 = var207;
if (var207){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var213 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var213 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var211) on <var211:MClass> */
var216 = var211->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var211:MClass> */
if (unlikely(var216 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
var217 = glob_sys;
{
var218 = nitc__model___core__Sys___extern_kind(var217);
}
{
{ /* Inline kernel$Object$== (var214,var218) on <var214:MClassKind> */
var_other = var218;
{
{ /* Inline kernel$Object$is_same_instance (var214,var_other) on <var214:MClassKind> */
var223 = var214 == var_other;
var221 = var223;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
var206 = var219;
} else {
var206 = var_210;
}
var_224 = var206;
if (var206){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var227 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline model$MClass$name (var225) on <var225:MClass> */
var230 = var225->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var225:MClass> */
if (unlikely(var230 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "NativeString";
var234 = core__flat___NativeString___to_s_full(var233, 12l, 12l);
var232 = var234;
varonce231 = var232;
}
{
{ /* Inline kernel$Object$!= (var228,var232) on <var228:String> */
var_other237 = var232;
{
var238 = ((short int(*)(val* self, val* p0))(var228->class->vft[COLOR_core__kernel__Object___61d_61d]))(var228, var_other237); /* == on <var228:String>*/
}
var239 = !var238;
var235 = var239;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
var205 = var235;
} else {
var205 = var_224;
}
if (var205){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var242 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var242 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var240) on <var240:AbstractCompiler(SeparateCompiler)> */
var245 = var240->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var240:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var245 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var243 = var245;
RET_LABEL244:(void)0;
}
}
{
var246 = nitc__model___MModule___pointer_type(var243);
}
var_valtype = var246;
} else {
}
{
var247 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res248 = var247;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var251 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var251 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res248,var249) on <var_res248:RuntimeVariable> */
var_res248->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var249; /* _mcasttype on <var_res248:RuntimeVariable> */
RET_LABEL252:(void)0;
}
}
if (unlikely(varonce253==NULL)) {
var254 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "BOX_";
var258 = core__flat___NativeString___to_s_full(var257, 4l, 4l);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var254)->values[0]=var256;
} else {
var254 = varonce253;
varonce253 = NULL;
}
{
var259 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var254)->values[1]=var259;
{
var260 = ((val*(*)(val* self))(var254->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var254); /* native_to_s on <var254:NativeArray[String]>*/
}
varonce253 = var254;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var260); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce261==NULL)) {
var262 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = " = BOX_";
var266 = core__flat___NativeString___to_s_full(var265, 7l, 7l);
var264 = var266;
varonce263 = var264;
}
((struct instance_core__NativeArray*)var262)->values[1]=var264;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "(";
var270 = core__flat___NativeString___to_s_full(var269, 1l, 1l);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var262)->values[3]=var268;
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "); /* autobox from ";
var274 = core__flat___NativeString___to_s_full(var273, 19l, 19l);
var272 = var274;
varonce271 = var272;
}
((struct instance_core__NativeArray*)var262)->values[5]=var272;
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = " to ";
var278 = core__flat___NativeString___to_s_full(var277, 4l, 4l);
var276 = var278;
varonce275 = var276;
}
((struct instance_core__NativeArray*)var262)->values[7]=var276;
if (likely(varonce279!=NULL)) {
var280 = varonce279;
} else {
var281 = " */";
var282 = core__flat___NativeString___to_s_full(var281, 3l, 3l);
var280 = var282;
varonce279 = var280;
}
((struct instance_core__NativeArray*)var262)->values[9]=var280;
} else {
var262 = varonce261;
varonce261 = NULL;
}
{
var283 = ((val*(*)(val* self))(var_res248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res248); /* to_s on <var_res248:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var262)->values[0]=var283;
{
var284 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var262)->values[2]=var284;
{
var285 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var262)->values[4]=var285;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var288 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var288 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
{
var289 = ((val*(*)(val* self))(var286->class->vft[COLOR_core__abstract_text__Object__to_s]))(var286); /* to_s on <var286:MType>*/
}
((struct instance_core__NativeArray*)var262)->values[6]=var289;
{
var290 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var262)->values[8]=var290;
{
var291 = ((val*(*)(val* self))(var262->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var262); /* native_to_s on <var262:NativeArray[String]>*/
}
varonce261 = var262;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var291); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res248;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var297 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var297 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
var298 = ((val*(*)(val* self))(var295->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var295); /* ctype on <var295:MType>*/
}
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = "void*";
var302 = core__flat___NativeString___to_s_full(var301, 5l, 5l);
var300 = var302;
varonce299 = var300;
}
{
var303 = ((short int(*)(val* self, val* p0))(var298->class->vft[COLOR_core__kernel__Object___61d_61d]))(var298, var300); /* == on <var298:String>*/
}
var_304 = var303;
if (var303){
{
var305 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "void*";
var309 = core__flat___NativeString___to_s_full(var308, 5l, 5l);
var307 = var309;
varonce306 = var307;
}
{
var310 = ((short int(*)(val* self, val* p0))(var305->class->vft[COLOR_core__kernel__Object___61d_61d]))(var305, var307); /* == on <var305:String>*/
}
var294 = var310;
} else {
var294 = var_304;
}
var_311 = var294;
if (var294){
var293 = var_311;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var315 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var315 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
var316 = ((val*(*)(val* self))(var313->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var313); /* ctype on <var313:MType>*/
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "char*";
var320 = core__flat___NativeString___to_s_full(var319, 5l, 5l);
var318 = var320;
varonce317 = var318;
}
{
var321 = ((short int(*)(val* self, val* p0))(var316->class->vft[COLOR_core__kernel__Object___61d_61d]))(var316, var318); /* == on <var316:String>*/
}
var_322 = var321;
if (var321){
{
var323 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "void*";
var327 = core__flat___NativeString___to_s_full(var326, 5l, 5l);
var325 = var327;
varonce324 = var325;
}
{
var328 = ((short int(*)(val* self, val* p0))(var323->class->vft[COLOR_core__kernel__Object___61d_61d]))(var323, var325); /* == on <var323:String>*/
}
var312 = var328;
} else {
var312 = var_322;
}
var293 = var312;
}
var_329 = var293;
if (var293){
var292 = var_329;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var333 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var333 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
var334 = ((val*(*)(val* self))(var331->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var331); /* ctype on <var331:MType>*/
}
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "void*";
var338 = core__flat___NativeString___to_s_full(var337, 5l, 5l);
var336 = var338;
varonce335 = var336;
}
{
var339 = ((short int(*)(val* self, val* p0))(var334->class->vft[COLOR_core__kernel__Object___61d_61d]))(var334, var336); /* == on <var334:String>*/
}
var_340 = var339;
if (var339){
{
var341 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = "char*";
var345 = core__flat___NativeString___to_s_full(var344, 5l, 5l);
var343 = var345;
varonce342 = var343;
}
{
var346 = ((short int(*)(val* self, val* p0))(var341->class->vft[COLOR_core__kernel__Object___61d_61d]))(var341, var343); /* == on <var341:String>*/
}
var330 = var346;
} else {
var330 = var_340;
}
var292 = var330;
}
if (var292){
var = var_value;
goto RET_LABEL;
} else {
{
var347 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res348 = var347;
if (unlikely(varonce349==NULL)) {
var350 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "/* ";
var354 = core__flat___NativeString___to_s_full(var353, 3l, 3l);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var350)->values[0]=var352;
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = " left unintialized (cannot convert ";
var358 = core__flat___NativeString___to_s_full(var357, 35l, 35l);
var356 = var358;
varonce355 = var356;
}
((struct instance_core__NativeArray*)var350)->values[2]=var356;
if (likely(varonce359!=NULL)) {
var360 = varonce359;
} else {
var361 = " to ";
var362 = core__flat___NativeString___to_s_full(var361, 4l, 4l);
var360 = var362;
varonce359 = var360;
}
((struct instance_core__NativeArray*)var350)->values[4]=var360;
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = ") */";
var366 = core__flat___NativeString___to_s_full(var365, 4l, 4l);
var364 = var366;
varonce363 = var364;
}
((struct instance_core__NativeArray*)var350)->values[6]=var364;
} else {
var350 = varonce349;
varonce349 = NULL;
}
{
var367 = ((val*(*)(val* self))(var_res348->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res348); /* to_s on <var_res348:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var350)->values[1]=var367;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var370 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var370 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var368 = var370;
RET_LABEL369:(void)0;
}
}
{
var371 = ((val*(*)(val* self))(var368->class->vft[COLOR_core__abstract_text__Object__to_s]))(var368); /* to_s on <var368:MType>*/
}
((struct instance_core__NativeArray*)var350)->values[3]=var371;
{
var372 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var350)->values[5]=var372;
{
var373 = ((val*(*)(val* self))(var350->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var350); /* native_to_s on <var350:NativeArray[String]>*/
}
varonce349 = var350;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var373); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce374==NULL)) {
var375 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var379 = core__flat___NativeString___to_s_full(var378, 52l, 52l);
var377 = var379;
varonce376 = var377;
}
((struct instance_core__NativeArray*)var375)->values[0]=var377;
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "\", \"";
var383 = core__flat___NativeString___to_s_full(var382, 4l, 4l);
var381 = var383;
varonce380 = var381;
}
((struct instance_core__NativeArray*)var375)->values[2]=var381;
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "\"); fatal_exit(1);";
var387 = core__flat___NativeString___to_s_full(var386, 18l, 18l);
var385 = var387;
varonce384 = var385;
}
((struct instance_core__NativeArray*)var375)->values[4]=var385;
} else {
var375 = varonce374;
varonce374 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var390 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var390 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
{
var391 = ((val*(*)(val* self))(var388->class->vft[COLOR_core__abstract_text__Object__to_s]))(var388); /* to_s on <var388:MType>*/
}
((struct instance_core__NativeArray*)var375)->values[1]=var391;
{
var392 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var375)->values[3]=var392;
{
var393 = ((val*(*)(val* self))(var375->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var375); /* native_to_s on <var375:NativeArray[String]>*/
}
varonce374 = var375;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var393); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res348;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$unbox_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var64 /* : String */;
val* var65 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = core__flat___NativeString___to_s_full(var25, 12l, 12l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel$Object$!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc__model___MModule___pointer_type(var35);
}
var_pointer_type = var38;
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " = ((struct instance_";
var45 = core__flat___NativeString___to_s_full(var44, 21l, 21l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[1]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = core__flat___NativeString___to_s_full(var48, 2l, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var41)->values[3]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")->value; /* unboxing ";
var53 = core__flat___NativeString___to_s_full(var52, 22l, 22l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[5]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " */";
var57 = core__flat___NativeString___to_s_full(var56, 3l, 3l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var41)->values[7]=var55;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var41)->values[0]=var58;
{
var59 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var41)->values[2]=var59;
{
var60 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var41)->values[4]=var60;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var63 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var61); /* to_s on <var61:MType>*/
}
((struct instance_core__NativeArray*)var41)->values[6]=var64;
{
var65 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var65); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$box_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var40 /* : AbstractCompiler */;
val* var42 /* : AbstractCompiler */;
val* var43 /* : Set[MType] */;
val* var45 /* : Set[MType] */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
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
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : MType */;
val* var77 /* : MType */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var102 /* : NativeArray[String] */;
static val* varonce101;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = core__flat___NativeString___to_s_full(var25, 12l, 12l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel$Object$!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc__model___MModule___pointer_type(var35);
}
var_valtype = var38;
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var39;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var42 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var40) on <var40:AbstractCompiler(SeparateCompiler)> */
var45 = var40->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var40:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((int64_t)var43&3)?class_info[((int64_t)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var43, var_mtype); /* add on <var43:Set[MType]>*/
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "BOX_";
var51 = core__flat___NativeString___to_s_full(var50, 4l, 4l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var52 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var53); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = " = BOX_";
var59 = core__flat___NativeString___to_s_full(var58, 7l, 7l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[1]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "(";
var63 = core__flat___NativeString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[3]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "); /* boxing ";
var67 = core__flat___NativeString___to_s_full(var66, 13l, 13l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var55)->values[5]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = " */";
var71 = core__flat___NativeString___to_s_full(var70, 3l, 3l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var55)->values[7]=var69;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var72 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var55)->values[0]=var72;
{
var73 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var55)->values[2]=var73;
{
var74 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var55)->values[4]=var74;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var77 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__Object__to_s]))(var75); /* to_s on <var75:MType>*/
}
((struct instance_core__NativeArray*)var55)->values[6]=var78;
{
var79 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var79); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "type_";
var85 = core__flat___NativeString___to_s_full(var84, 5l, 5l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
} else {
var81 = varonce80;
varonce80 = NULL;
}
{
var86 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var81)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var87); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "->type = &type_";
var93 = core__flat___NativeString___to_s_full(var92, 15l, 15l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[1]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ";";
var97 = core__flat___NativeString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[3]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var98 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var89)->values[0]=var98;
{
var99 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var89)->values[2]=var99;
{
var100 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var100); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce101==NULL)) {
var102 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "class_";
var106 = core__flat___NativeString___to_s_full(var105, 6l, 6l);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var102)->values[0]=var104;
} else {
var102 = varonce101;
varonce101 = NULL;
}
{
var107 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var102)->values[1]=var107;
{
var108 = ((val*(*)(val* self))(var102->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var108); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "->class = &class_";
var114 = core__flat___NativeString___to_s_full(var113, 17l, 17l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[1]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = ";";
var118 = core__flat___NativeString___to_s_full(var117, 1l, 1l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var110)->values[3]=var116;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var110)->values[0]=var119;
{
var120 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var110)->values[2]=var120;
{
var121 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var121); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$extract_tag for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___extract_tag(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
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
val* var15 /* : String */;
val* var16 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1305);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "((int64_t)";
var10 = core__flat___NativeString___to_s_full(var9, 10l, 10l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "&3)";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$class_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___class_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var_tag /* var tag: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : Set[MType] */;
val* var58 /* : Set[MType] */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var86 /* : String */;
val* var87 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (var5){
{
var7 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value);
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var8) on <var8:AbstractCompiler(SeparateCompiler)> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts$Option$value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((int64_t)(var20)>>2);
var24 = !var23;
var6 = var24;
} else {
var6 = var_;
}
if (var6){
{
var25 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value);
}
var_tag = var25;
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(";
var30 = core__flat___NativeString___to_s_full(var29, 1l, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "?class_info[";
var34 = core__flat___NativeString___to_s_full(var33, 12l, 12l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "]:";
var38 = core__flat___NativeString___to_s_full(var37, 2l, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[4]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "->class)";
var42 = core__flat___NativeString___to_s_full(var41, 8l, 8l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var26)->values[6]=var40;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_tag;
((struct instance_core__NativeArray*)var26)->values[3]=var_tag;
{
var43 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var26)->values[5]=var43;
{
var44 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
var = var44;
goto RET_LABEL;
} else {
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "->class";
var50 = core__flat___NativeString___to_s_full(var49, 7l, 7l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[1]=var48;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var46)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
var = var52;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var55 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var53:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var61 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((int64_t)var56&3)?class_info[((int64_t)var56&3)]:var56->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var56, var59); /* add on <var56:Set[MType]>*/
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "class_";
var67 = core__flat___NativeString___to_s_full(var66, 6l, 6l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[0]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var70 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var68); /* c_name on <var68:MType>*/
}
((struct instance_core__NativeArray*)var63)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var72); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "(&class_";
var78 = core__flat___NativeString___to_s_full(var77, 8l, 8l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ")";
var82 = core__flat___NativeString___to_s_full(var81, 1l, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var85 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = ((val*(*)(val* self))(var83->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var83); /* c_name on <var83:MType>*/
}
((struct instance_core__NativeArray*)var74)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
var = var87;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var_tag /* var tag: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : Set[MType] */;
val* var58 /* : Set[MType] */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var86 /* : String */;
val* var87 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (var5){
{
var7 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value);
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var8) on <var8:AbstractCompiler(SeparateCompiler)> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts$Option$value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((int64_t)(var20)>>2);
var24 = !var23;
var6 = var24;
} else {
var6 = var_;
}
if (var6){
{
var25 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value);
}
var_tag = var25;
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(";
var30 = core__flat___NativeString___to_s_full(var29, 1l, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "?type_info[";
var34 = core__flat___NativeString___to_s_full(var33, 11l, 11l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "]:";
var38 = core__flat___NativeString___to_s_full(var37, 2l, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[4]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "->type)";
var42 = core__flat___NativeString___to_s_full(var41, 7l, 7l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var26)->values[6]=var40;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_tag;
((struct instance_core__NativeArray*)var26)->values[3]=var_tag;
{
var43 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var26)->values[5]=var43;
{
var44 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
var = var44;
goto RET_LABEL;
} else {
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "->type";
var50 = core__flat___NativeString___to_s_full(var49, 6l, 6l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[1]=var48;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var46)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
var = var52;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var55 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var53:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var61 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((int64_t)var56&3)?class_info[((int64_t)var56&3)]:var56->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var56, var59); /* add on <var56:Set[MType]>*/
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "type_";
var67 = core__flat___NativeString___to_s_full(var66, 5l, 5l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[0]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var70 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var68); /* c_name on <var68:MType>*/
}
((struct instance_core__NativeArray*)var63)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var72); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "(&type_";
var78 = core__flat___NativeString___to_s_full(var77, 7l, 7l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ")";
var82 = core__flat___NativeString___to_s_full(var81, 1l, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var85 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = ((val*(*)(val* self))(var83->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var83); /* c_name on <var83:MType>*/
}
((struct instance_core__NativeArray*)var74)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
var = var87;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$compile_callsite for (self: SeparateCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AbstractCompiler */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var18 /* : OptionBool */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
val* var31 /* : MMethodDef */;
val* var33 /* : MMethodDef */;
val* var34 /* : Array[MProperty] */;
val* var36 /* : Array[MProperty] */;
short int var37 /* : Bool */;
val* var38 /* : Set[MMethodDef] */;
val* var_tgs /* var tgs: Set[MMethodDef] */;
int64_t var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var44 /* : nullable RuntimeVariable */;
short int var45 /* : Bool */;
val* var46 /* : MMethodDef */;
val* var48 /* : MMethodDef */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : MMethod */;
val* var55 /* : MMethod */;
val* var56 /* : String */;
val* var58 /* : String */;
static val* varonce;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MMethodDef */;
val* var68 /* : MMethodDef */;
val* var69 /* : nullable RuntimeVariable */;
val* var70 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(SeparateCompiler)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_rta = var4;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var9) on <var9:AbstractCompiler(SeparateCompiler)> */
var14 = var9->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var9:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var12) on <var12:ModelBuilder> */
var17 = var12->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var12:ModelBuilder> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_direct_call_monomorph (var15) on <var15:ToolContext> */
var20 = var15->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var15:ToolContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 50);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts$Option$value (var18) on <var18:OptionBool> */
var23 = var18->attrs[COLOR_opts__Option___value].val; /* _value on <var18:OptionBool> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = (short int)((int64_t)(var21)>>2);
var_ = var24;
if (var24){
if (var_rta == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var8 = var25;
} else {
var8 = var_;
}
var_30 = var8;
if (var8){
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var33 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var31) on <var31:MMethodDef> */
var36 = var31->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var31:MMethodDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var34);
}
var7 = var37;
} else {
var7 = var_30;
}
if (var7){
{
var38 = nitc___nitc__RapidTypeAnalysis___live_targets(var_rta, var_callsite);
}
var_tgs = var38;
{
var39 = ((int64_t(*)(val* self))((((int64_t)var_tgs&3)?class_info[((int64_t)var_tgs&3)]:var_tgs->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_tgs); /* length on <var_tgs:Set[MMethodDef]>*/
}
{
{ /* Inline kernel$Int$== (var39,1l) on <var39:Int> */
var42 = var39 == 1l;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
var43 = ((val*(*)(val* self))((((int64_t)var_tgs&3)?class_info[((int64_t)var_tgs&3)]:var_tgs->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_tgs); /* first on <var_tgs:Set[MMethodDef]>*/
}
{
var44 = nitc___nitc__SeparateCompilerVisitor___direct_call(self, var43, var_args);
}
var = var44;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var48 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model$MMethodDef$is_intern (var46) on <var46:MMethodDef> */
var51 = var46->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var46:MMethodDef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
if (var49){
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var55 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var53) on <var53:MMethod> */
var58 = var53->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var53:MMethod> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (likely(varonce!=NULL)) {
var59 = varonce;
} else {
var60 = "object_id";
var61 = core__flat___NativeString___to_s_full(var60, 9l, 9l);
var59 = var61;
varonce = var59;
}
{
{ /* Inline kernel$Object$!= (var56,var59) on <var56:String> */
var_other = var59;
{
var64 = ((short int(*)(val* self, val* p0))(var56->class->vft[COLOR_core__kernel__Object___61d_61d]))(var56, var_other); /* == on <var56:String>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var45 = var62;
} else {
var45 = var_52;
}
if (var45){
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var68 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc___nitc__SeparateCompilerVisitor___direct_call(self, var66, var_args);
}
var = var69;
goto RET_LABEL;
} else {
}
{
var70 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1); /* compile_callsite on <self:SeparateCompilerVisitor>*/
}
var = var70;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$direct_call for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___direct_call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
var_mpropdef = p0;
var_args = p1;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__SeparateCompilerVisitor___before_send(self, var1, var_args);
}
var_res0 = var4;
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_mpropdef, var8, var_args);
}
var_res = var11;
if (var_res0 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res0,((val*)NULL)) on <var_res0:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_res0->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res0, var_other); /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1370);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "}";
var24 = core__flat___NativeString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce = var22;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var22); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_m /* var m: MModule */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var22 /* : nullable Object */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var27 /* : AbstractCompiler */;
val* var29 /* : AbstractCompiler */;
val* var31 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))(var2->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var2); /* is_c_primitive on <var2:MType>*/
}
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var6) on <var6:AbstractCompiler(SeparateCompiler)> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_m = var9;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$realmainmodule (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 541);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var12,var18) on <var12:AbstractCompiler(SeparateCompiler)> */
var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var18; /* _mainmodule on <var12:AbstractCompiler(SeparateCompiler)> */
RET_LABEL21:(void)0;
}
}
{
var22 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var22) on <var22:nullable Object(RuntimeVariable)> */
var25 = var22->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var22:nullable Object(RuntimeVariable)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__AbstractCompilerVisitor___monomorphic_send(self, var_mmethod, var23, var_arguments);
}
var_res = var26;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var27,var_m) on <var27:AbstractCompiler(SeparateCompiler)> */
var27->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_m; /* _mainmodule on <var27:AbstractCompiler(SeparateCompiler)> */
RET_LABEL30:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var31 = nitc___nitc__SeparateCompilerVisitor___table_send(self, var_mmethod, var_arguments, var_mmethod);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$before_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var1 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
short int var36 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
short int var52 /* : Bool */;
val* var53 /* : String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
val* var62 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
short int var69 /* : Bool */;
val* var70 /* : MClassType */;
val* var71 /* : RuntimeVariable */;
val* var72 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var73 /* : MType */;
val* var75 /* : MType */;
short int var76 /* : Bool */;
int cltype;
int idtype;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : MType */;
val* var92 /* : MType */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
short int var124 /* : Bool */;
val* var125 /* : MClassType */;
val* var126 /* : RuntimeVariable */;
val* var127 /* : nullable Object */;
val* var_arg128 /* var arg: RuntimeVariable */;
val* var129 /* : MType */;
val* var131 /* : MType */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
val* var136 /* : NativeArray[String] */;
static val* varonce135;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : MType */;
val* var150 /* : MType */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
val* var155 /* : NativeArray[String] */;
static val* varonce154;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var163 /* : NativeArray[String] */;
static val* varonce162;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : String */;
short int var187 /* : Bool */;
val* var188 /* : AbstractCompiler */;
val* var190 /* : AbstractCompiler */;
val* var191 /* : ModelBuilder */;
val* var193 /* : ModelBuilder */;
val* var194 /* : ToolContext */;
val* var196 /* : ToolContext */;
val* var197 /* : OptionBool */;
val* var199 /* : OptionBool */;
val* var200 /* : nullable Object */;
val* var202 /* : nullable Object */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var_205 /* var : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : String */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : String */;
short int var215 /* : Bool */;
short int var_216 /* var : Bool */;
val* var217 /* : String */;
val* var219 /* : String */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
val* var223 /* : String */;
short int var224 /* : Bool */;
short int var_225 /* var : Bool */;
val* var226 /* : String */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : String */;
short int var233 /* : Bool */;
val* var234 /* : nullable Object */;
val* var_arg235 /* var arg: RuntimeVariable */;
val* var236 /* : MType */;
val* var238 /* : MType */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
val* var248 /* : MClassType */;
val* var249 /* : RuntimeVariable */;
val* var250 /* : String */;
val* var252 /* : String */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
val* var256 /* : String */;
short int var257 /* : Bool */;
val* var259 /* : NativeArray[String] */;
static val* varonce258;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
val* var263 /* : String */;
val* var264 /* : String */;
val* var265 /* : String */;
val* var267 /* : NativeArray[String] */;
static val* varonce266;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
val* var271 /* : String */;
val* var272 /* : String */;
val* var273 /* : String */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
val* var281 /* : String */;
var_mmethod = p0;
var_arguments = p1;
var_res = ((val*)NULL);
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var4) on <var4:AbstractCompiler(SeparateCompiler)> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_null (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts$Option$value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = (short int)((int64_t)(var16)>>2);
var20 = !var19;
var_ = var20;
if (var20){
var3 = var_;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var23 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "==";
var26 = core__flat___NativeString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce = var24;
}
{
var27 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var24); /* == on <var21:String>*/
}
var3 = var27;
}
var_28 = var3;
if (var3){
var2 = var_28;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var31 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "!=";
var35 = core__flat___NativeString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_core__kernel__Object___61d_61d]))(var29, var33); /* == on <var29:String>*/
}
var2 = var36;
}
var_consider_null = var2;
{
var38 = nitc___nitc__AbstractCompilerVisitor___maybenull(self, var_recv);
}
var_39 = var38;
if (var38){
var37 = var_consider_null;
} else {
var37 = var_39;
}
if (var37){
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "if (";
var45 = core__flat___NativeString___to_s_full(var44, 4l, 4l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " == NULL) {";
var49 = core__flat___NativeString___to_s_full(var48, 11l, 11l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var41)->values[2]=var47;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var50 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var41)->values[1]=var50;
{
var51 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var51); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var55 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "==";
var59 = core__flat___NativeString___to_s_full(var58, 2l, 2l);
var57 = var59;
varonce56 = var57;
}
{
var60 = ((short int(*)(val* self, val* p0))(var53->class->vft[COLOR_core__kernel__Object___61d_61d]))(var53, var57); /* == on <var53:String>*/
}
var_61 = var60;
if (var60){
var52 = var_61;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var64 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "is_same_instance";
var68 = core__flat___NativeString___to_s_full(var67, 16l, 16l);
var66 = var68;
varonce65 = var66;
}
{
var69 = ((short int(*)(val* self, val* p0))(var62->class->vft[COLOR_core__kernel__Object___61d_61d]))(var62, var66); /* == on <var62:String>*/
}
var52 = var69;
}
if (var52){
{
var70 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var71 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var70);
}
var_res = var71;
{
var72 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg = var72;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var75 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
/* <var73:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var73->type->table_size) {
var76 = 0;
} else {
var76 = var73->type->type_table[cltype] == idtype;
}
if (var76){
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = " = (";
var82 = core__flat___NativeString___to_s_full(var81, 4l, 4l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[1]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " == NULL);";
var86 = core__flat___NativeString___to_s_full(var85, 10l, 10l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var78)->values[3]=var84;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var87 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var78)->values[0]=var87;
{
var88 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_arg); /* to_s on <var_arg:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var78)->values[2]=var88;
{
var89 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var89); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var92 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
/* <var90:MType> isa MNullType */
cltype94 = type_nitc__MNullType.color;
idtype95 = type_nitc__MNullType.id;
if(cltype94 >= var90->type->table_size) {
var93 = 0;
} else {
var93 = var90->type->type_table[cltype94] == idtype95;
}
if (var93){
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = " = 1; /* is null */";
var101 = core__flat___NativeString___to_s_full(var100, 19l, 19l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[1]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var97)->values[0]=var102;
{
var103 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var103); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " = 0; /* ";
var109 = core__flat___NativeString___to_s_full(var108, 9l, 9l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[1]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = " cannot be null */";
var113 = core__flat___NativeString___to_s_full(var112, 18l, 18l);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var105)->values[3]=var111;
} else {
var105 = varonce104;
varonce104 = NULL;
}
{
var114 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var105)->values[0]=var114;
{
var115 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_arg);
}
((struct instance_core__NativeArray*)var105)->values[2]=var115;
{
var116 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var116); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var119 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "!=";
var123 = core__flat___NativeString___to_s_full(var122, 2l, 2l);
var121 = var123;
varonce120 = var121;
}
{
var124 = ((short int(*)(val* self, val* p0))(var117->class->vft[COLOR_core__kernel__Object___61d_61d]))(var117, var121); /* == on <var117:String>*/
}
if (var124){
{
var125 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var126 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var125);
}
var_res = var126;
{
var127 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg128 = var127;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg128) on <var_arg128:RuntimeVariable> */
var131 = var_arg128->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg128:RuntimeVariable> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
/* <var129:MType> isa MNullableType */
cltype133 = type_nitc__MNullableType.color;
idtype134 = type_nitc__MNullableType.id;
if(cltype133 >= var129->type->table_size) {
var132 = 0;
} else {
var132 = var129->type->type_table[cltype133] == idtype134;
}
if (var132){
if (unlikely(varonce135==NULL)) {
var136 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = " = (";
var140 = core__flat___NativeString___to_s_full(var139, 4l, 4l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var136)->values[1]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = " != NULL);";
var144 = core__flat___NativeString___to_s_full(var143, 10l, 10l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var136)->values[3]=var142;
} else {
var136 = varonce135;
varonce135 = NULL;
}
{
var145 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var136)->values[0]=var145;
{
var146 = ((val*(*)(val* self))(var_arg128->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_arg128); /* to_s on <var_arg128:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var136)->values[2]=var146;
{
var147 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var147); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg128) on <var_arg128:RuntimeVariable> */
var150 = var_arg128->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg128:RuntimeVariable> */
if (unlikely(var150 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
/* <var148:MType> isa MNullType */
cltype152 = type_nitc__MNullType.color;
idtype153 = type_nitc__MNullType.id;
if(cltype152 >= var148->type->table_size) {
var151 = 0;
} else {
var151 = var148->type->type_table[cltype152] == idtype153;
}
if (var151){
if (unlikely(varonce154==NULL)) {
var155 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = " = 0; /* is null */";
var159 = core__flat___NativeString___to_s_full(var158, 19l, 19l);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var155)->values[1]=var157;
} else {
var155 = varonce154;
varonce154 = NULL;
}
{
var160 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var155)->values[0]=var160;
{
var161 = ((val*(*)(val* self))(var155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var155); /* native_to_s on <var155:NativeArray[String]>*/
}
varonce154 = var155;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var161); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce162==NULL)) {
var163 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " = 1; /* ";
var167 = core__flat___NativeString___to_s_full(var166, 9l, 9l);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var163)->values[1]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = " cannot be null */";
var171 = core__flat___NativeString___to_s_full(var170, 18l, 18l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var163)->values[3]=var169;
} else {
var163 = varonce162;
varonce162 = NULL;
}
{
var172 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var163)->values[0]=var172;
{
var173 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_arg128);
}
((struct instance_core__NativeArray*)var163)->values[2]=var173;
{
var174 = ((val*(*)(val* self))(var163->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var163); /* native_to_s on <var163:NativeArray[String]>*/
}
varonce162 = var163;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var174); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "Receiver is null";
var178 = core__flat___NativeString___to_s_full(var177, 16l, 16l);
var176 = var178;
varonce175 = var176;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var176); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
}
}
}
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "} else {";
var182 = core__flat___NativeString___to_s_full(var181, 8l, 8l);
var180 = var182;
varonce179 = var180;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var180); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "{";
var186 = core__flat___NativeString___to_s_full(var185, 1l, 1l);
var184 = var186;
varonce183 = var184;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var184); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var190 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var188) on <var188:AbstractCompiler(SeparateCompiler)> */
var193 = var188->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var188:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var191) on <var191:ModelBuilder> */
var196 = var191->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var191:ModelBuilder> */
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_shortcut_equate (var194) on <var194:ToolContext> */
var199 = var194->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <var194:ToolContext> */
if (unlikely(var199 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 30);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline opts$Option$value (var197) on <var197:OptionBool> */
var202 = var197->attrs[COLOR_opts__Option___value].val; /* _value on <var197:OptionBool> */
var200 = var202;
RET_LABEL201:(void)0;
}
}
var203 = (short int)((int64_t)(var200)>>2);
var204 = !var203;
var_205 = var204;
if (var204){
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var210 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var210 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "==";
var214 = core__flat___NativeString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
{
var215 = ((short int(*)(val* self, val* p0))(var208->class->vft[COLOR_core__kernel__Object___61d_61d]))(var208, var212); /* == on <var208:String>*/
}
var_216 = var215;
if (var215){
var207 = var_216;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var219 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var219 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "!=";
var223 = core__flat___NativeString___to_s_full(var222, 2l, 2l);
var221 = var223;
varonce220 = var221;
}
{
var224 = ((short int(*)(val* self, val* p0))(var217->class->vft[COLOR_core__kernel__Object___61d_61d]))(var217, var221); /* == on <var217:String>*/
}
var207 = var224;
}
var_225 = var207;
if (var207){
var206 = var_225;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var228 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var228 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "is_same_instance";
var232 = core__flat___NativeString___to_s_full(var231, 16l, 16l);
var230 = var232;
varonce229 = var230;
}
{
var233 = ((short int(*)(val* self, val* p0))(var226->class->vft[COLOR_core__kernel__Object___61d_61d]))(var226, var230); /* == on <var226:String>*/
}
var206 = var233;
}
var187 = var206;
} else {
var187 = var_205;
}
if (var187){
{
var234 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg235 = var234;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg235) on <var_arg235:RuntimeVariable> */
var238 = var_arg235->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg235:RuntimeVariable> */
if (unlikely(var238 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
/* <var236:MType> isa MNullType */
cltype240 = type_nitc__MNullType.color;
idtype241 = type_nitc__MNullType.id;
if(cltype240 >= var236->type->table_size) {
var239 = 0;
} else {
var239 = var236->type->type_table[cltype240] == idtype241;
}
if (var239){
if (var_res == NULL) {
var242 = 1; /* is null */
} else {
var242 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var247 = var_res == var_other;
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
var242 = var243;
}
if (var242){
{
var248 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var249 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var248);
}
var_res = var249;
} else {
}
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var252 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var252 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "!=";
var256 = core__flat___NativeString___to_s_full(var255, 2l, 2l);
var254 = var256;
varonce253 = var254;
}
{
var257 = ((short int(*)(val* self, val* p0))(var250->class->vft[COLOR_core__kernel__Object___61d_61d]))(var250, var254); /* == on <var250:String>*/
}
if (var257){
if (unlikely(varonce258==NULL)) {
var259 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = " = 1; /* arg is null and recv is not */";
var263 = core__flat___NativeString___to_s_full(var262, 39l, 39l);
var261 = var263;
varonce260 = var261;
}
((struct instance_core__NativeArray*)var259)->values[1]=var261;
} else {
var259 = varonce258;
varonce258 = NULL;
}
{
var264 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var259)->values[0]=var264;
{
var265 = ((val*(*)(val* self))(var259->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var259); /* native_to_s on <var259:NativeArray[String]>*/
}
varonce258 = var259;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var265); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce266==NULL)) {
var267 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = " = 0; /* arg is null but recv is not */";
var271 = core__flat___NativeString___to_s_full(var270, 39l, 39l);
var269 = var271;
varonce268 = var269;
}
((struct instance_core__NativeArray*)var267)->values[1]=var269;
} else {
var267 = varonce266;
varonce266 = NULL;
}
{
var272 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var267)->values[0]=var272;
{
var273 = ((val*(*)(val* self))(var267->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var267); /* native_to_s on <var267:NativeArray[String]>*/
}
varonce266 = var267;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var273); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "}";
var277 = core__flat___NativeString___to_s_full(var276, 1l, 1l);
var275 = var277;
varonce274 = var275;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var275); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "if (0) {";
var281 = core__flat___NativeString___to_s_full(var280, 8l, 8l);
var279 = var281;
varonce278 = var279;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var279); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$table_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable], MEntity): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_mentity /* var mentity: MEntity */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var_ /* var : ModelBuilder */;
int64_t var7 /* : Int */;
int64_t var9 /* : Int */;
int64_t var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var13 /* : Int */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : ModelBuilder */;
val* var20 /* : ModelBuilder */;
val* var21 /* : ToolContext */;
val* var23 /* : ToolContext */;
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
int64_t var34 /* : Int */;
int64_t var36 /* : Int */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : nullable MSignature */;
val* var42 /* : nullable MSignature */;
int64_t var43 /* : Int */;
int64_t var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
int64_t var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
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
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : String */;
int64_t var69 /* : Int */;
int64_t var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var75 /* : MPropDef */;
val* var77 /* : MPropDef */;
val* var78 /* : SeparateRuntimeFunction */;
val* var_runtime_function /* var runtime_function: SeparateRuntimeFunction */;
val* var79 /* : MSignature */;
val* var81 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var82 /* : MPropDef */;
val* var84 /* : MPropDef */;
val* var85 /* : nullable MType */;
val* var87 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var94 /* : RuntimeVariable */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var_ss /* var ss: String */;
val* var100 /* : String */;
val* var_const_color /* var const_color: String */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
val* var_other104 /* var other: nullable Object */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var_ress /* var ress: nullable Object */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
short int var_123 /* var : Bool */;
val* var124 /* : AbstractCompiler */;
val* var126 /* : AbstractCompiler */;
val* var127 /* : ModelBuilder */;
val* var129 /* : ModelBuilder */;
val* var130 /* : ToolContext */;
val* var132 /* : ToolContext */;
val* var133 /* : OptionBool */;
val* var135 /* : OptionBool */;
val* var136 /* : nullable Object */;
val* var138 /* : nullable Object */;
short int var139 /* : Bool */;
val* var140 /* : AbstractCompiler */;
val* var142 /* : AbstractCompiler */;
val* var143 /* : nullable MMethodDef */;
val* var_md /* var md: nullable MMethodDef */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var149 /* : SeparateRuntimeFunction */;
val* var150 /* : String */;
val* var_callsym /* var callsym: String */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : String */;
val* var169 /* : String */;
val* var170 /* : nullable Object */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var174 /* : NativeArray[String] */;
static val* varonce173;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : nullable Object */;
val* var205 /* : String */;
val* var206 /* : String */;
val* var207 /* : nullable Object */;
val* var208 /* : String */;
val* var209 /* : String */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
short int var_214 /* var : Bool */;
val* var215 /* : AbstractCompiler */;
val* var217 /* : AbstractCompiler */;
val* var218 /* : ModelBuilder */;
val* var220 /* : ModelBuilder */;
val* var221 /* : ToolContext */;
val* var223 /* : ToolContext */;
val* var224 /* : OptionBool */;
val* var226 /* : OptionBool */;
val* var227 /* : nullable Object */;
val* var229 /* : nullable Object */;
short int var230 /* : Bool */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
val* var234 /* : String */;
val* var235 /* : Text */;
val* var_callsym236 /* var callsym: String */;
val* var238 /* : NativeArray[String] */;
static val* varonce237;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
val* var242 /* : String */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
val* var246 /* : String */;
val* var247 /* : String */;
val* var249 /* : NativeArray[String] */;
static val* varonce248;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
val* var253 /* : String */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
val* var261 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
val* var273 /* : String */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var279 /* : nullable Object */;
val* var280 /* : String */;
val* var281 /* : String */;
val* var282 /* : nullable Object */;
val* var283 /* : String */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : String */;
val* var290 /* : NativeArray[String] */;
static val* varonce289;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : String */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
val* var302 /* : String */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : String */;
val* var307 /* : String */;
val* var308 /* : nullable Object */;
val* var309 /* : String */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
val* var314 /* : String */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
int cltype317;
int idtype318;
short int var_319 /* var : Bool */;
val* var320 /* : AbstractCompiler */;
val* var322 /* : AbstractCompiler */;
val* var323 /* : ModelBuilder */;
val* var325 /* : ModelBuilder */;
val* var326 /* : ToolContext */;
val* var328 /* : ToolContext */;
val* var329 /* : OptionBool */;
val* var331 /* : OptionBool */;
val* var332 /* : nullable Object */;
val* var334 /* : nullable Object */;
short int var335 /* : Bool */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : String */;
val* var340 /* : Text */;
val* var_callsym341 /* var callsym: String */;
val* var343 /* : NativeArray[String] */;
static val* varonce342;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
val* var347 /* : String */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : String */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
val* var359 /* : String */;
val* var360 /* : String */;
val* var361 /* : nullable Object */;
val* var362 /* : String */;
val* var363 /* : String */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
val* var373 /* : String */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
val* var381 /* : String */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
val* var385 /* : String */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
val* var389 /* : String */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
val* var393 /* : String */;
val* var394 /* : String */;
val* var395 /* : nullable Object */;
val* var396 /* : String */;
val* var397 /* : String */;
val* var398 /* : nullable Object */;
val* var399 /* : String */;
val* var400 /* : String */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var404 /* : Bool */;
short int var405 /* : Bool */;
short int var406 /* : Bool */;
short int var407 /* : Bool */;
short int var409 /* : Bool */;
short int var410 /* : Bool */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
val* var414 /* : String */;
var_mmethod = p0;
var_arguments = p1;
var_mentity = p2;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
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
var_ = var4;
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables (var_) on <var_:ModelBuilder> */
var9 = var_->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var_:ModelBuilder> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var7 + 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables= (var_,var10) on <var_:ModelBuilder> */
var_->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l = var10; /* _nb_invok_by_tables on <var_:ModelBuilder> */
RET_LABEL14:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var18) on <var18:ModelBuilder> */
var23 = var18->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var18:ModelBuilder> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var21) on <var21:ToolContext> */
var26 = var21->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var21:ToolContext> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts$Option$value (var24) on <var24:OptionBool> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionBool> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = (short int)((int64_t)(var27)>>2);
if (var30){
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "count_invoke_by_tables++;";
var33 = core__flat___NativeString___to_s_full(var32, 25l, 25l);
var31 = var33;
varonce = var31;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var36 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var_mmethod) on <var_mmethod:MMethod> */
var39 = var_mmethod->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var37) on <var37:MPropDef(MMethodDef)> */
var42 = var37->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var37:MPropDef(MMethodDef)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1459);
fatal_exit(1);
} else {
var43 = nitc___nitc__MSignature___arity(var40);
}
{
{ /* Inline kernel$Int$+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var43 + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var34,var44) on <var34:Int> */
var53 = var34 == var44;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (unlikely(!var51)) {
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Invalid arity for ";
var59 = core__flat___NativeString___to_s_full(var58, 18l, 18l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ". ";
var63 = core__flat___NativeString___to_s_full(var62, 2l, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[2]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " arguments given.";
var67 = core__flat___NativeString___to_s_full(var66, 17l, 17l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var55)->values[4]=var65;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var55)->values[1]=var68;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var71 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var72 = core__flat___Int___core__abstract_text__Object__to_s(var69);
((struct instance_core__NativeArray*)var55)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var73); /* Direct call abstract_compiler$AbstractCompilerVisitor$debug on <self:SeparateCompilerVisitor>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1459);
fatal_exit(1);
}
{
var74 = nitc___nitc__SeparateCompilerVisitor___before_send(self, var_mmethod, var_arguments);
}
var_res0 = var74;
{
{ /* Inline model$MProperty$intro (var_mmethod) on <var_mmethod:MMethod> */
var77 = var_mmethod->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var75);
}
var_runtime_function = var78;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (var_runtime_function) on <var_runtime_function:SeparateRuntimeFunction> */
var81 = var_runtime_function->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_runtime_function:SeparateRuntimeFunction> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_msignature = var79;
{
{ /* Inline model$MProperty$intro (var_mmethod) on <var_mmethod:MMethod> */
var84 = var_mmethod->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var82, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:MSignature> */
var87 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_ret = var85;
if (var_ret == NULL) {
var88 = 1; /* is null */
} else {
var88 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var93 = var_ret == var_other;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
var_res = ((val*)NULL);
} else {
{
var94 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var94;
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = ", ";
var98 = core__flat___NativeString___to_s_full(var97, 2l, 2l);
var96 = var98;
varonce95 = var96;
}
{
var99 = core__abstract_text___Collection___join(var_arguments, var96, ((val*)NULL));
}
var_ss = var99;
{
var100 = nitc__separate_compiler___MEntity___const_color(var_mentity);
}
var_const_color = var100;
if (var_res == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other104 = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other104); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var106 = !var105;
var102 = var106;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (var101){
if (unlikely(varonce107==NULL)) {
var108 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " = ";
var112 = core__flat___NativeString___to_s_full(var111, 3l, 3l);
var110 = var112;
varonce109 = var110;
}
((struct instance_core__NativeArray*)var108)->values[1]=var110;
} else {
var108 = varonce107;
varonce107 = NULL;
}
{
var113 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var108)->values[0]=var113;
{
var114 = ((val*(*)(val* self))(var108->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
var_ress = var114;
} else {
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "";
var118 = core__flat___NativeString___to_s_full(var117, 0l, 0l);
var116 = var118;
varonce115 = var116;
}
var_ress = var116;
}
/* <var_mentity:MEntity> isa MMethod */
cltype121 = type_nitc__MMethod.color;
idtype122 = type_nitc__MMethod.id;
if(cltype121 >= var_mentity->type->table_size) {
var120 = 0;
} else {
var120 = var_mentity->type->type_table[cltype121] == idtype122;
}
var_123 = var120;
if (var120){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var126 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var124) on <var124:AbstractCompiler(SeparateCompiler)> */
var129 = var124->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var124:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var129 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var127) on <var127:ModelBuilder> */
var132 = var127->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var127:ModelBuilder> */
if (unlikely(var132 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_direct_call_monomorph0 (var130) on <var130:ToolContext> */
var135 = var130->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_direct_call_monomorph0].val; /* _opt_direct_call_monomorph0 on <var130:ToolContext> */
if (unlikely(var135 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph0");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 52);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline opts$Option$value (var133) on <var133:OptionBool> */
var138 = var133->attrs[COLOR_opts__Option___value].val; /* _value on <var133:OptionBool> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
var139 = (short int)((int64_t)(var136)>>2);
var119 = var139;
} else {
var119 = var_123;
}
if (var119){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var142 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var142 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
var143 = nitc___nitc__SeparateCompiler___is_monomorphic(var140, var_mentity);
}
var_md = var143;
if (var_md == NULL) {
var144 = 0; /* is null */
} else {
var144 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_md,((val*)NULL)) on <var_md:nullable MMethodDef> */
var_other104 = ((val*)NULL);
{
var147 = ((short int(*)(val* self, val* p0))(var_md->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_md, var_other104); /* == on <var_md:nullable MMethodDef(MMethodDef)>*/
}
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
if (var144){
{
var149 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_md);
}
{
var150 = nitc___nitc__AbstractRuntimeFunction___c_name(var149);
}
var_callsym = var150;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_callsym); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "(";
var156 = core__flat___NativeString___to_s_full(var155, 1l, 1l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[2]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "); /* ";
var160 = core__flat___NativeString___to_s_full(var159, 6l, 6l);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var152)->values[4]=var158;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = " on ";
var164 = core__flat___NativeString___to_s_full(var163, 4l, 4l);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var152)->values[6]=var162;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "*/";
var168 = core__flat___NativeString___to_s_full(var167, 2l, 2l);
var166 = var168;
varonce165 = var166;
}
((struct instance_core__NativeArray*)var152)->values[8]=var166;
} else {
var152 = varonce151;
varonce151 = NULL;
}
((struct instance_core__NativeArray*)var152)->values[0]=var_ress;
((struct instance_core__NativeArray*)var152)->values[1]=var_callsym;
((struct instance_core__NativeArray*)var152)->values[3]=var_ss;
{
var169 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var152)->values[5]=var169;
{
var170 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var171 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var170);
}
((struct instance_core__NativeArray*)var152)->values[7]=var171;
{
var172 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var172); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce173==NULL)) {
var174 = NEW_core__NativeArray(14l, &type_core__NativeArray__core__String);
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "((";
var178 = core__flat___NativeString___to_s_full(var177, 2l, 2l);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var174)->values[1]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = ")(";
var182 = core__flat___NativeString___to_s_full(var181, 2l, 2l);
var180 = var182;
varonce179 = var180;
}
((struct instance_core__NativeArray*)var174)->values[3]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "->vft[";
var186 = core__flat___NativeString___to_s_full(var185, 6l, 6l);
var184 = var186;
varonce183 = var184;
}
((struct instance_core__NativeArray*)var174)->values[5]=var184;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "]))(";
var190 = core__flat___NativeString___to_s_full(var189, 4l, 4l);
var188 = var190;
varonce187 = var188;
}
((struct instance_core__NativeArray*)var174)->values[7]=var188;
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "); /* ";
var194 = core__flat___NativeString___to_s_full(var193, 6l, 6l);
var192 = var194;
varonce191 = var192;
}
((struct instance_core__NativeArray*)var174)->values[9]=var192;
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = " on ";
var198 = core__flat___NativeString___to_s_full(var197, 4l, 4l);
var196 = var198;
varonce195 = var196;
}
((struct instance_core__NativeArray*)var174)->values[11]=var196;
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "*/";
var202 = core__flat___NativeString___to_s_full(var201, 2l, 2l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var174)->values[13]=var200;
} else {
var174 = varonce173;
varonce173 = NULL;
}
((struct instance_core__NativeArray*)var174)->values[0]=var_ress;
{
var203 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_core__NativeArray*)var174)->values[2]=var203;
{
var204 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var205 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var204);
}
((struct instance_core__NativeArray*)var174)->values[4]=var205;
((struct instance_core__NativeArray*)var174)->values[6]=var_const_color;
((struct instance_core__NativeArray*)var174)->values[8]=var_ss;
{
var206 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var174)->values[10]=var206;
{
var207 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var208 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var207);
}
((struct instance_core__NativeArray*)var174)->values[12]=var208;
{
var209 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var174); /* native_to_s on <var174:NativeArray[String]>*/
}
varonce173 = var174;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var209); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
} else {
/* <var_mentity:MEntity> isa MMethod */
cltype212 = type_nitc__MMethod.color;
idtype213 = type_nitc__MMethod.id;
if(cltype212 >= var_mentity->type->table_size) {
var211 = 0;
} else {
var211 = var_mentity->type->type_table[cltype212] == idtype213;
}
var_214 = var211;
if (var211){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var217 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var217 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var215) on <var215:AbstractCompiler(SeparateCompiler)> */
var220 = var215->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var215:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var220 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var218) on <var218:ModelBuilder> */
var223 = var218->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var218:ModelBuilder> */
if (unlikely(var223 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_guard_call (var221) on <var221:ToolContext> */
var226 = var221->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_guard_call].val; /* _opt_guard_call on <var221:ToolContext> */
if (unlikely(var226 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_guard_call");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 39);
fatal_exit(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline opts$Option$value (var224) on <var224:OptionBool> */
var229 = var224->attrs[COLOR_opts__Option___value].val; /* _value on <var224:OptionBool> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
var230 = (short int)((int64_t)(var227)>>2);
var210 = var230;
} else {
var210 = var_214;
}
if (var210){
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "CALL_";
var234 = core__flat___NativeString___to_s_full(var233, 5l, 5l);
var232 = var234;
varonce231 = var232;
}
{
var235 = ((val*(*)(val* self, val* p0))(var232->class->vft[COLOR_core__abstract_text__Text___43d]))(var232, var_const_color); /* + on <var232:String>*/
}
var_callsym236 = var235;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_callsym236); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce237==NULL)) {
var238 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "if (!";
var242 = core__flat___NativeString___to_s_full(var241, 5l, 5l);
var240 = var242;
varonce239 = var240;
}
((struct instance_core__NativeArray*)var238)->values[0]=var240;
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = ") {";
var246 = core__flat___NativeString___to_s_full(var245, 3l, 3l);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var238)->values[2]=var244;
} else {
var238 = varonce237;
varonce237 = NULL;
}
((struct instance_core__NativeArray*)var238)->values[1]=var_callsym236;
{
var247 = ((val*(*)(val* self))(var238->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var238); /* native_to_s on <var238:NativeArray[String]>*/
}
varonce237 = var238;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var247); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce248==NULL)) {
var249 = NEW_core__NativeArray(14l, &type_core__NativeArray__core__String);
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "((";
var253 = core__flat___NativeString___to_s_full(var252, 2l, 2l);
var251 = var253;
varonce250 = var251;
}
((struct instance_core__NativeArray*)var249)->values[1]=var251;
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = ")(";
var257 = core__flat___NativeString___to_s_full(var256, 2l, 2l);
var255 = var257;
varonce254 = var255;
}
((struct instance_core__NativeArray*)var249)->values[3]=var255;
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "->vft[";
var261 = core__flat___NativeString___to_s_full(var260, 6l, 6l);
var259 = var261;
varonce258 = var259;
}
((struct instance_core__NativeArray*)var249)->values[5]=var259;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "]))(";
var265 = core__flat___NativeString___to_s_full(var264, 4l, 4l);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var249)->values[7]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "); /* ";
var269 = core__flat___NativeString___to_s_full(var268, 6l, 6l);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var249)->values[9]=var267;
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = " on ";
var273 = core__flat___NativeString___to_s_full(var272, 4l, 4l);
var271 = var273;
varonce270 = var271;
}
((struct instance_core__NativeArray*)var249)->values[11]=var271;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "*/";
var277 = core__flat___NativeString___to_s_full(var276, 2l, 2l);
var275 = var277;
varonce274 = var275;
}
((struct instance_core__NativeArray*)var249)->values[13]=var275;
} else {
var249 = varonce248;
varonce248 = NULL;
}
((struct instance_core__NativeArray*)var249)->values[0]=var_ress;
{
var278 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_core__NativeArray*)var249)->values[2]=var278;
{
var279 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var280 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var279);
}
((struct instance_core__NativeArray*)var249)->values[4]=var280;
((struct instance_core__NativeArray*)var249)->values[6]=var_const_color;
((struct instance_core__NativeArray*)var249)->values[8]=var_ss;
{
var281 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var249)->values[10]=var281;
{
var282 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var283 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var282);
}
((struct instance_core__NativeArray*)var249)->values[12]=var283;
{
var284 = ((val*(*)(val* self))(var249->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var249); /* native_to_s on <var249:NativeArray[String]>*/
}
varonce248 = var249;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var284); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "} else {";
var288 = core__flat___NativeString___to_s_full(var287, 8l, 8l);
var286 = var288;
varonce285 = var286;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var286); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce289==NULL)) {
var290 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "(";
var294 = core__flat___NativeString___to_s_full(var293, 1l, 1l);
var292 = var294;
varonce291 = var292;
}
((struct instance_core__NativeArray*)var290)->values[2]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "); /* ";
var298 = core__flat___NativeString___to_s_full(var297, 6l, 6l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var290)->values[4]=var296;
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = " on ";
var302 = core__flat___NativeString___to_s_full(var301, 4l, 4l);
var300 = var302;
varonce299 = var300;
}
((struct instance_core__NativeArray*)var290)->values[6]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "*/";
var306 = core__flat___NativeString___to_s_full(var305, 2l, 2l);
var304 = var306;
varonce303 = var304;
}
((struct instance_core__NativeArray*)var290)->values[8]=var304;
} else {
var290 = varonce289;
varonce289 = NULL;
}
((struct instance_core__NativeArray*)var290)->values[0]=var_ress;
((struct instance_core__NativeArray*)var290)->values[1]=var_callsym236;
((struct instance_core__NativeArray*)var290)->values[3]=var_ss;
{
var307 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var290)->values[5]=var307;
{
var308 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var309 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var308);
}
((struct instance_core__NativeArray*)var290)->values[7]=var309;
{
var310 = ((val*(*)(val* self))(var290->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var310); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "}";
var314 = core__flat___NativeString___to_s_full(var313, 1l, 1l);
var312 = var314;
varonce311 = var312;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var312); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
/* <var_mentity:MEntity> isa MMethod */
cltype317 = type_nitc__MMethod.color;
idtype318 = type_nitc__MMethod.id;
if(cltype317 >= var_mentity->type->table_size) {
var316 = 0;
} else {
var316 = var_mentity->type->type_table[cltype317] == idtype318;
}
var_319 = var316;
if (var316){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var322 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var322 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var320) on <var320:AbstractCompiler(SeparateCompiler)> */
var325 = var320->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var320:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var325 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var323) on <var323:ModelBuilder> */
var328 = var323->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var323:ModelBuilder> */
if (unlikely(var328 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_trampoline_call (var326) on <var326:ToolContext> */
var331 = var326->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_trampoline_call].val; /* _opt_trampoline_call on <var326:ToolContext> */
if (unlikely(var331 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trampoline_call");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 37);
fatal_exit(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
{
{ /* Inline opts$Option$value (var329) on <var329:OptionBool> */
var334 = var329->attrs[COLOR_opts__Option___value].val; /* _value on <var329:OptionBool> */
var332 = var334;
RET_LABEL333:(void)0;
}
}
var335 = (short int)((int64_t)(var332)>>2);
var315 = var335;
} else {
var315 = var_319;
}
if (var315){
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "CALL_";
var339 = core__flat___NativeString___to_s_full(var338, 5l, 5l);
var337 = var339;
varonce336 = var337;
}
{
var340 = ((val*(*)(val* self, val* p0))(var337->class->vft[COLOR_core__abstract_text__Text___43d]))(var337, var_const_color); /* + on <var337:String>*/
}
var_callsym341 = var340;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_callsym341); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce342==NULL)) {
var343 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "(";
var347 = core__flat___NativeString___to_s_full(var346, 1l, 1l);
var345 = var347;
varonce344 = var345;
}
((struct instance_core__NativeArray*)var343)->values[2]=var345;
if (likely(varonce348!=NULL)) {
var349 = varonce348;
} else {
var350 = "); /* ";
var351 = core__flat___NativeString___to_s_full(var350, 6l, 6l);
var349 = var351;
varonce348 = var349;
}
((struct instance_core__NativeArray*)var343)->values[4]=var349;
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = " on ";
var355 = core__flat___NativeString___to_s_full(var354, 4l, 4l);
var353 = var355;
varonce352 = var353;
}
((struct instance_core__NativeArray*)var343)->values[6]=var353;
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = "*/";
var359 = core__flat___NativeString___to_s_full(var358, 2l, 2l);
var357 = var359;
varonce356 = var357;
}
((struct instance_core__NativeArray*)var343)->values[8]=var357;
} else {
var343 = varonce342;
varonce342 = NULL;
}
((struct instance_core__NativeArray*)var343)->values[0]=var_ress;
((struct instance_core__NativeArray*)var343)->values[1]=var_callsym341;
((struct instance_core__NativeArray*)var343)->values[3]=var_ss;
{
var360 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var343)->values[5]=var360;
{
var361 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var362 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var361);
}
((struct instance_core__NativeArray*)var343)->values[7]=var362;
{
var363 = ((val*(*)(val* self))(var343->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var343); /* native_to_s on <var343:NativeArray[String]>*/
}
varonce342 = var343;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var363); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce364==NULL)) {
var365 = NEW_core__NativeArray(14l, &type_core__NativeArray__core__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "((";
var369 = core__flat___NativeString___to_s_full(var368, 2l, 2l);
var367 = var369;
varonce366 = var367;
}
((struct instance_core__NativeArray*)var365)->values[1]=var367;
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = ")(";
var373 = core__flat___NativeString___to_s_full(var372, 2l, 2l);
var371 = var373;
varonce370 = var371;
}
((struct instance_core__NativeArray*)var365)->values[3]=var371;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = "->vft[";
var377 = core__flat___NativeString___to_s_full(var376, 6l, 6l);
var375 = var377;
varonce374 = var375;
}
((struct instance_core__NativeArray*)var365)->values[5]=var375;
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "]))(";
var381 = core__flat___NativeString___to_s_full(var380, 4l, 4l);
var379 = var381;
varonce378 = var379;
}
((struct instance_core__NativeArray*)var365)->values[7]=var379;
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "); /* ";
var385 = core__flat___NativeString___to_s_full(var384, 6l, 6l);
var383 = var385;
varonce382 = var383;
}
((struct instance_core__NativeArray*)var365)->values[9]=var383;
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = " on ";
var389 = core__flat___NativeString___to_s_full(var388, 4l, 4l);
var387 = var389;
varonce386 = var387;
}
((struct instance_core__NativeArray*)var365)->values[11]=var387;
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "*/";
var393 = core__flat___NativeString___to_s_full(var392, 2l, 2l);
var391 = var393;
varonce390 = var391;
}
((struct instance_core__NativeArray*)var365)->values[13]=var391;
} else {
var365 = varonce364;
varonce364 = NULL;
}
((struct instance_core__NativeArray*)var365)->values[0]=var_ress;
{
var394 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(var_runtime_function);
}
((struct instance_core__NativeArray*)var365)->values[2]=var394;
{
var395 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var396 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var395);
}
((struct instance_core__NativeArray*)var365)->values[4]=var396;
((struct instance_core__NativeArray*)var365)->values[6]=var_const_color;
((struct instance_core__NativeArray*)var365)->values[8]=var_ss;
{
var397 = ((val*(*)(val* self))(var_mmethod->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethod); /* to_s on <var_mmethod:MMethod>*/
}
((struct instance_core__NativeArray*)var365)->values[10]=var397;
{
var398 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var399 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var398);
}
((struct instance_core__NativeArray*)var365)->values[12]=var399;
{
var400 = ((val*(*)(val* self))(var365->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var400); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
}
if (var_res0 == NULL) {
var401 = 0; /* is null */
} else {
var401 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res0,((val*)NULL)) on <var_res0:nullable RuntimeVariable> */
var_other104 = ((val*)NULL);
{
var404 = ((short int(*)(val* self, val* p0))(var_res0->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res0, var_other104); /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/
}
var405 = !var404;
var402 = var405;
goto RET_LABEL403;
RET_LABEL403:(void)0;
}
var401 = var402;
}
if (var401){
if (var_res == NULL) {
var406 = 0; /* is null */
} else {
var406 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other104 = ((val*)NULL);
{
var409 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other104); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var410 = !var409;
var407 = var410;
goto RET_LABEL408;
RET_LABEL408:(void)0;
}
var406 = var407;
}
if (unlikely(!var406)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1517);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (likely(varonce411!=NULL)) {
var412 = varonce411;
} else {
var413 = "}";
var414 = core__flat___NativeString___to_s_full(var413, 1l, 1l);
var412 = var414;
varonce411 = var412;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var412); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$call for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
val* var4 /* : nullable MSignature */;
val* var6 /* : nullable MSignature */;
int64_t var7 /* : Int */;
int64_t var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
int64_t var29 /* : Int */;
int64_t var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : nullable MSignature */;
val* var36 /* : nullable MSignature */;
val* var37 /* : nullable MType */;
val* var39 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var46 /* : MClassDef */;
val* var48 /* : MClassDef */;
val* var49 /* : MClassType */;
val* var51 /* : MClassType */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClassType */;
val* var57 /* : MClassType */;
val* var58 /* : MClassDef */;
val* var60 /* : MClassDef */;
val* var61 /* : MModule */;
val* var63 /* : MModule */;
val* var64 /* : MType */;
val* var65 /* : RuntimeVariable */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var_ /* var : Bool */;
val* var71 /* : AbstractCompiler */;
val* var73 /* : AbstractCompiler */;
val* var74 /* : ModelBuilder */;
val* var76 /* : ModelBuilder */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
val* var80 /* : OptionBool */;
val* var82 /* : OptionBool */;
val* var83 /* : nullable Object */;
val* var85 /* : nullable Object */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
short int var89 /* : Bool */;
val* var90 /* : AbstractCompiler */;
val* var92 /* : AbstractCompiler */;
val* var93 /* : ModelBuilder */;
val* var95 /* : ModelBuilder */;
val* var96 /* : ToolContext */;
val* var98 /* : ToolContext */;
val* var99 /* : OptionBool */;
val* var101 /* : OptionBool */;
val* var102 /* : nullable Object */;
val* var104 /* : nullable Object */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
short int var107 /* : Bool */;
val* var108 /* : AbstractCompiler */;
val* var110 /* : AbstractCompiler */;
val* var111 /* : ModelBuilder */;
val* var113 /* : ModelBuilder */;
val* var_114 /* var : ModelBuilder */;
int64_t var115 /* : Int */;
int64_t var117 /* : Int */;
int64_t var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
int64_t var124 /* : Int */;
val* var126 /* : AbstractCompiler */;
val* var128 /* : AbstractCompiler */;
val* var129 /* : ModelBuilder */;
val* var131 /* : ModelBuilder */;
val* var132 /* : ToolContext */;
val* var134 /* : ToolContext */;
val* var135 /* : OptionBool */;
val* var137 /* : OptionBool */;
val* var138 /* : nullable Object */;
val* var140 /* : nullable Object */;
short int var141 /* : Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var154 /* : nullable StaticFrame */;
val* var156 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var159 /* : NativeArray[String] */;
static val* varonce158;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : String */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : String */;
val* var181 /* : String */;
val* var182 /* : nullable Object */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : nullable RuntimeVariable */;
val* var187 /* : NativeArray[String] */;
static val* varonce186;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : String */;
val* var192 /* : nullable String */;
val* var194 /* : nullable String */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : String */;
val* var201 /* : AbstractCompiler */;
val* var203 /* : AbstractCompiler */;
val* var204 /* : ModelBuilder */;
val* var206 /* : ModelBuilder */;
val* var_207 /* var : ModelBuilder */;
int64_t var208 /* : Int */;
int64_t var210 /* : Int */;
int64_t var211 /* : Int */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
const char* var_class_name216;
int64_t var217 /* : Int */;
val* var219 /* : AbstractCompiler */;
val* var221 /* : AbstractCompiler */;
val* var222 /* : ModelBuilder */;
val* var224 /* : ModelBuilder */;
val* var225 /* : ToolContext */;
val* var227 /* : ToolContext */;
val* var228 /* : OptionBool */;
val* var230 /* : OptionBool */;
val* var231 /* : nullable Object */;
val* var233 /* : nullable Object */;
short int var234 /* : Bool */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
val* var238 /* : String */;
val* var239 /* : String */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : String */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : String */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
val* var263 /* : String */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
val* var269 /* : String */;
val* var270 /* : String */;
val* var271 /* : nullable Object */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var275 /* : NativeArray[String] */;
static val* varonce274;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
val* var279 /* : String */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
val* var287 /* : String */;
val* var288 /* : String */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
val* var293 /* : String */;
val* var294 /* : String */;
val* var295 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var3 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var6 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1529);
fatal_exit(1);
} else {
var7 = nitc___nitc__MSignature___arity(var4);
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var7 + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,var8) on <var1:Int> */
var14 = var1 == var8;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Invalid arity for ";
var19 = core__flat___NativeString___to_s_full(var18, 18l, 18l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ". ";
var23 = core__flat___NativeString___to_s_full(var22, 2l, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " arguments given.";
var27 = core__flat___NativeString___to_s_full(var26, 17l, 17l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[4]=var25;
} else {
var15 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var15)->values[1]=var28;
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var31 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = core__flat___Int___core__abstract_text__Object__to_s(var29);
((struct instance_core__NativeArray*)var15)->values[3]=var32;
{
var33 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var33); /* Direct call abstract_compiler$AbstractCompilerVisitor$debug on <self:SeparateCompilerVisitor>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1529);
fatal_exit(1);
}
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var36 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1532);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var34) on <var34:nullable MSignature> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var34:nullable MSignature> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_ret = var37;
if (var_ret == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var45 = var_ret == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
var_res = ((val*)NULL);
} else {
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var48 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var46) on <var46:MClassDef> */
var51 = var46->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var46:MClassDef> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var54 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var60 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var58) on <var58:MClassDef> */
var63 = var58->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var58:MClassDef> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret, var49, var55, var61, 1); /* resolve_for on <var_ret:nullable MType(MType)>*/
}
var_ret = var64;
{
var65 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var65;
}
{
{ /* Inline model$MMethodDef$is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var70 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ = var68;
if (var68){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var73 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var71) on <var71:AbstractCompiler(SeparateCompiler)> */
var76 = var71->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var71:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var74) on <var74:ModelBuilder> */
var79 = var74->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var74:ModelBuilder> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_inline_intern (var77) on <var77:ToolContext> */
var82 = var77->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <var77:ToolContext> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 26);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline opts$Option$value (var80) on <var80:OptionBool> */
var85 = var80->attrs[COLOR_opts__Option___value].val; /* _value on <var80:OptionBool> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var86 = (short int)((int64_t)(var83)>>2);
var87 = !var86;
var67 = var87;
} else {
var67 = var_;
}
var_88 = var67;
if (var67){
var66 = var_88;
} else {
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var92 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var90) on <var90:AbstractCompiler(SeparateCompiler)> */
var95 = var90->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var90:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var93) on <var93:ModelBuilder> */
var98 = var93->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var93:ModelBuilder> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_inline_some_methods (var96) on <var96:ToolContext> */
var101 = var96->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var96:ToolContext> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 48);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline opts$Option$value (var99) on <var99:OptionBool> */
var104 = var99->attrs[COLOR_opts__Option___value].val; /* _value on <var99:OptionBool> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
var105 = (short int)((int64_t)(var102)>>2);
var_106 = var105;
if (var105){
{
var107 = nitc__abstract_compiler___MMethodDef___can_inline(var_mmethoddef, self);
}
var89 = var107;
} else {
var89 = var_106;
}
var66 = var89;
}
if (var66){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var110 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var108) on <var108:AbstractCompiler(SeparateCompiler)> */
var113 = var108->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var108:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_114 = var111;
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline (var_114) on <var_114:ModelBuilder> */
var117 = var_114->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var_114:ModelBuilder> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var115,1l) on <var115:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var120 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var124 = var115 + 1l;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline= (var_114,var118) on <var_114:ModelBuilder> */
var_114->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l = var118; /* _nb_invok_by_inline on <var_114:ModelBuilder> */
RET_LABEL125:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var128 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var126) on <var126:AbstractCompiler(SeparateCompiler)> */
var131 = var126->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var126:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var129) on <var129:ModelBuilder> */
var134 = var129->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var129:ModelBuilder> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var132) on <var132:ToolContext> */
var137 = var132->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var132:ToolContext> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline opts$Option$value (var135) on <var135:OptionBool> */
var140 = var135->attrs[COLOR_opts__Option___value].val; /* _value on <var135:OptionBool> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var141 = (short int)((int64_t)(var138)>>2);
if (var141){
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "count_invoke_by_inline++;";
var145 = core__flat___NativeString___to_s_full(var144, 25l, 25l);
var143 = var145;
varonce142 = var143;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var143); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var146 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var146, self); /* visitor= on <var146:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var146, var_mmethoddef); /* mpropdef= on <var146:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var146, var_recvtype); /* receiver= on <var146:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var146->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var146, var_arguments); /* arguments= on <var146:StaticFrame>*/
}
{
((void(*)(val* self))(var146->class->vft[COLOR_core__kernel__Object__init]))(var146); /* init on <var146:StaticFrame>*/
}
var_frame = var146;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "RET_LABEL";
var150 = core__flat___NativeString___to_s_full(var149, 9l, 9l);
var148 = var150;
varonce147 = var148;
}
{
var151 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var148);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel= (var_frame,var151) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var151; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL152:(void)0;
}
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar= (var_frame,var_res) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var_res; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL153:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var156 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
var_old_frame = var154;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL157:(void)0;
}
}
if (unlikely(varonce158==NULL)) {
var159 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "{ /* Inline ";
var163 = core__flat___NativeString___to_s_full(var162, 12l, 12l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var159)->values[0]=var161;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " (";
var167 = core__flat___NativeString___to_s_full(var166, 2l, 2l);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var159)->values[2]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = ") on ";
var171 = core__flat___NativeString___to_s_full(var170, 5l, 5l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var159)->values[4]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = " */";
var175 = core__flat___NativeString___to_s_full(var174, 3l, 3l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var159)->values[6]=var173;
} else {
var159 = varonce158;
varonce158 = NULL;
}
{
var176 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var159)->values[1]=var176;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = ",";
var180 = core__flat___NativeString___to_s_full(var179, 1l, 1l);
var178 = var180;
varonce177 = var178;
}
{
var181 = core__abstract_text___Collection___join(var_arguments, var178, ((val*)NULL));
}
((struct instance_core__NativeArray*)var159)->values[3]=var181;
{
var182 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var183 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var182);
}
((struct instance_core__NativeArray*)var159)->values[5]=var183;
{
var184 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var184); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var185 = nitc__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, self, var_arguments);
}
if (unlikely(varonce186==NULL)) {
var187 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ":(void)0;";
var191 = core__flat___NativeString___to_s_full(var190, 9l, 9l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var187)->values[1]=var189;
} else {
var187 = varonce186;
varonce186 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var_frame) on <var_frame:StaticFrame> */
var194 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (unlikely(var192 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1551);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var187)->values[0]=var192;
{
var195 = ((val*(*)(val* self))(var187->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var187); /* native_to_s on <var187:NativeArray[String]>*/
}
varonce186 = var187;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var195); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "}";
var199 = core__flat___NativeString___to_s_full(var198, 1l, 1l);
var197 = var199;
varonce196 = var197;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var197); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL200:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var203 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var203 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var201) on <var201:AbstractCompiler(SeparateCompiler)> */
var206 = var201->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var201:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var206 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
var_207 = var204;
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct (var_207) on <var_207:ModelBuilder> */
var210 = var_207->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var_207:ModelBuilder> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var208,1l) on <var208:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var213 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var213)) {
var_class_name216 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name216);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var217 = var208 + 1l;
var211 = var217;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct= (var_207,var211) on <var_207:ModelBuilder> */
var_207->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l = var211; /* _nb_invok_by_direct on <var_207:ModelBuilder> */
RET_LABEL218:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var221 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var221 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var219) on <var219:AbstractCompiler(SeparateCompiler)> */
var224 = var219->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var219:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var224 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var222) on <var222:ModelBuilder> */
var227 = var222->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var222:ModelBuilder> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var225) on <var225:ToolContext> */
var230 = var225->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var225:ToolContext> */
if (unlikely(var230 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline opts$Option$value (var228) on <var228:OptionBool> */
var233 = var228->attrs[COLOR_opts__Option___value].val; /* _value on <var228:OptionBool> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
var234 = (short int)((int64_t)(var231)>>2);
if (var234){
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "count_invoke_by_direct++;";
var238 = core__flat___NativeString___to_s_full(var237, 25l, 25l);
var236 = var238;
varonce235 = var236;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var236); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var_mmethoddef, var_arguments); /* Direct call separate_compiler$SeparateCompilerVisitor$adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
var239 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var_mmethoddef);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var239); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (var_res == NULL) {
var240 = 1; /* is null */
} else {
var240 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var245 = var_res == var_other;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
var241 = var243;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
if (var240){
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "(";
var251 = core__flat___NativeString___to_s_full(var250, 1l, 1l);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[1]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "); /* Direct call ";
var255 = core__flat___NativeString___to_s_full(var254, 18l, 18l);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var247)->values[3]=var253;
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = " on ";
var259 = core__flat___NativeString___to_s_full(var258, 4l, 4l);
var257 = var259;
varonce256 = var257;
}
((struct instance_core__NativeArray*)var247)->values[5]=var257;
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = "*/";
var263 = core__flat___NativeString___to_s_full(var262, 2l, 2l);
var261 = var263;
varonce260 = var261;
}
((struct instance_core__NativeArray*)var247)->values[7]=var261;
} else {
var247 = varonce246;
varonce246 = NULL;
}
{
var264 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var_mmethoddef);
}
((struct instance_core__NativeArray*)var247)->values[0]=var264;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = ", ";
var268 = core__flat___NativeString___to_s_full(var267, 2l, 2l);
var266 = var268;
varonce265 = var266;
}
{
var269 = core__abstract_text___Collection___join(var_arguments, var266, ((val*)NULL));
}
((struct instance_core__NativeArray*)var247)->values[2]=var269;
{
var270 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var247)->values[4]=var270;
{
var271 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var272 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var271);
}
((struct instance_core__NativeArray*)var247)->values[6]=var272;
{
var273 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var273); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
if (unlikely(varonce274==NULL)) {
var275 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = " = ";
var279 = core__flat___NativeString___to_s_full(var278, 3l, 3l);
var277 = var279;
varonce276 = var277;
}
((struct instance_core__NativeArray*)var275)->values[1]=var277;
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "(";
var283 = core__flat___NativeString___to_s_full(var282, 1l, 1l);
var281 = var283;
varonce280 = var281;
}
((struct instance_core__NativeArray*)var275)->values[3]=var281;
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = ");";
var287 = core__flat___NativeString___to_s_full(var286, 2l, 2l);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var275)->values[5]=var285;
} else {
var275 = varonce274;
varonce274 = NULL;
}
{
var288 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var275)->values[0]=var288;
{
var289 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var_mmethoddef);
}
((struct instance_core__NativeArray*)var275)->values[2]=var289;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = ", ";
var293 = core__flat___NativeString___to_s_full(var292, 2l, 2l);
var291 = var293;
varonce290 = var291;
}
{
var294 = core__abstract_text___Collection___join(var_arguments, var291, ((val*)NULL));
}
((struct instance_core__NativeArray*)var275)->values[4]=var294;
{
var295 = ((val*(*)(val* self))(var275->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var275); /* native_to_s on <var275:NativeArray[String]>*/
}
varonce274 = var275;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var295); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$supercall for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_main /* var main: MModule */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var22 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : MProperty */;
val* var29 /* : MProperty */;
val* var30 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_arguments = p2;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))(var2->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var2); /* is_c_primitive on <var2:MType>*/
}
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var6) on <var6:AbstractCompiler(SeparateCompiler)> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_main = var9;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$realmainmodule (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 541);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var12,var18) on <var12:AbstractCompiler(SeparateCompiler)> */
var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var18; /* _mainmodule on <var12:AbstractCompiler(SeparateCompiler)> */
RET_LABEL21:(void)0;
}
}
{
var22 = nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(self, var_m, var_recvtype, var_arguments);
}
var_res = var22;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var23,var_main) on <var23:AbstractCompiler(SeparateCompiler)> */
var23->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_main; /* _mainmodule on <var23:AbstractCompiler(SeparateCompiler)> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__SeparateCompilerVisitor___table_send(self, var27, var_arguments, var_m);
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$vararg_instance for (self: SeparateCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var4 /* : StaticFrame */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old_frame = var1;
var4 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var11, 1l); /* Direct call array$Array$with_capacity on <var11:Array[RuntimeVariable]>*/
}
var_ = var11;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var4, self); /* visitor= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var4, var_mpropdef); /* mpropdef= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var4, var8); /* receiver= on <var4:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var4, var_); /* arguments= on <var4:StaticFrame>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:StaticFrame>*/
}
var_frame = var4;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL12:(void)0;
}
}
{
var13 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var_res = var13;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL14:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}

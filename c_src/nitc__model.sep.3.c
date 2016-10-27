#include "nitc__model.sep.0.h"
/* method model$MPropDef$full_name for (self: MPropDef): String */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : MClassDef */;
val* var16 /* : MClassDef */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MClassDef */;
val* var25 /* : MClassDef */;
val* var26 /* : MClass */;
val* var28 /* : MClass */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : String */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
val* var41 /* : nullable MPackage */;
val* var42 /* : MProperty */;
val* var44 /* : MProperty */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
val* var51 /* : nullable MPackage */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var_other55 /* var other: nullable Object */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : MProperty */;
val* var60 /* : MProperty */;
val* var61 /* : MClassDef */;
val* var63 /* : MClassDef */;
val* var64 /* : MModule */;
val* var66 /* : MModule */;
val* var67 /* : MProperty */;
val* var69 /* : MProperty */;
val* var70 /* : MVisibility */;
val* var72 /* : MVisibility */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : String */;
val* var78 /* : MProperty */;
val* var80 /* : MProperty */;
val* var81 /* : MVisibility */;
val* var83 /* : MVisibility */;
val* var84 /* : Sys */;
val* var85 /* : MVisibility */;
short int var86 /* : Bool */;
val* var87 /* : MClassDef */;
val* var89 /* : MClassDef */;
val* var90 /* : MModule */;
val* var92 /* : MModule */;
val* var93 /* : MClassDef */;
val* var95 /* : MClassDef */;
val* var96 /* : MClass */;
val* var98 /* : MClass */;
val* var99 /* : MVisibility */;
val* var101 /* : MVisibility */;
val* var102 /* : String */;
val* var103 /* : MProperty */;
val* var105 /* : MProperty */;
val* var106 /* : MClassDef */;
val* var108 /* : MClassDef */;
val* var109 /* : MModule */;
val* var111 /* : MModule */;
val* var112 /* : nullable MPackage */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : String */;
val* var121 /* : MProperty */;
val* var123 /* : MProperty */;
val* var124 /* : MClassDef */;
val* var126 /* : MClassDef */;
val* var127 /* : MModule */;
val* var129 /* : MModule */;
val* var130 /* : String */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : String */;
val* var137 /* : MClassDef */;
val* var139 /* : MClassDef */;
val* var140 /* : MClass */;
val* var142 /* : MClass */;
val* var143 /* : MProperty */;
val* var145 /* : MProperty */;
val* var146 /* : MClassDef */;
val* var148 /* : MClassDef */;
val* var149 /* : MClass */;
val* var151 /* : MClass */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : MProperty */;
val* var158 /* : MProperty */;
val* var159 /* : MClassDef */;
val* var161 /* : MClassDef */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
val* var167 /* : MProperty */;
val* var169 /* : MProperty */;
val* var170 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___full_name].val != NULL; /* _full_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MPropDef___full_name].val; /* _full_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2379);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_res = var5;
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var9 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__MClassDef___nitc__model_base__MEntity__full_name(var7);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var10); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "$";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce = var11;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var11); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var16 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var14) on <var14:MClassDef> */
var19 = var14->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var14:MClassDef> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var22 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var20) on <var20:MProperty> */
var25 = var20->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var20:MProperty> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var23) on <var23:MClassDef> */
var28 = var23->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var23:MClassDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var17,var26) on <var17:MClass> */
var_other = var26;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:MClass> */
var33 = var17 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
var34 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(self);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var34); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var37 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nitc___nitc__MModule___mpackage(var38);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var44 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var42) on <var42:MProperty> */
var47 = var42->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var42:MProperty> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var45) on <var45:MClassDef> */
var50 = var45->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var45:MClassDef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__MModule___mpackage(var48);
}
if (var41 == NULL) {
var52 = (var51 != NULL);
} else {
{ /* Inline kernel$Object$!= (var41,var51) on <var41:nullable MPackage> */
var_other55 = var51;
{
var56 = ((short int(*)(val* self, val* p0))(var41->class->vft[COLOR_core__kernel__Object___61d_61d]))(var41, var_other55); /* == on <var41:nullable MPackage(MPackage)>*/
}
var57 = !var56;
var53 = var57;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var60 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var58) on <var58:MProperty> */
var63 = var58->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var58:MProperty> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var61) on <var61:MClassDef> */
var66 = var61->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var61:MClassDef> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var69 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var67) on <var67:MProperty> */
var72 = var67->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var67:MProperty> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nitc___nitc__MModule___namespace_for(var64, var70);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var73); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "::";
var77 = core__flat___NativeString___to_s_full(var76, 2l, 2l);
var75 = var77;
varonce74 = var75;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var75); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var80 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var78) on <var78:MProperty> */
var83 = var78->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var78:MProperty> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = glob_sys;
{
var85 = nitc__model_base___core__Sys___private_visibility(var84);
}
{
var86 = core___core__Comparable____60d_61d(var81, var85);
}
if (var86){
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var89 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var87) on <var87:MClassDef> */
var92 = var87->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var87:MClassDef> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var95 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var93) on <var93:MClassDef> */
var98 = var93->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var93:MClassDef> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var96) on <var96:MClass> */
var101 = var96->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var96:MClass> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = nitc___nitc__MModule___namespace_for(var90, var99);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var105 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var105 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var103) on <var103:MProperty> */
var108 = var103->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var103:MProperty> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var106) on <var106:MClassDef> */
var111 = var106->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var106:MClassDef> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = nitc___nitc__MModule___mpackage(var109);
}
{
{ /* Inline kernel$Object$!= (var102,var112) on <var102:String> */
var_other55 = var112;
{
var115 = ((short int(*)(val* self, val* p0))(var102->class->vft[COLOR_core__kernel__Object___61d_61d]))(var102, var_other55); /* == on <var102:String>*/
}
var116 = !var115;
var113 = var116;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
if (var113){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "::";
var120 = core__flat___NativeString___to_s_full(var119, 2l, 2l);
var118 = var120;
varonce117 = var118;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var118); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var123 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var121) on <var121:MProperty> */
var126 = var121->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var121:MProperty> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var124) on <var124:MClassDef> */
var129 = var124->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var124:MClassDef> */
if (unlikely(var129 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var127) on <var127:MModule> */
var132 = var127->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var127:MModule> */
if (unlikely(var132 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var130); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "::";
var136 = core__flat___NativeString___to_s_full(var135, 2l, 2l);
var134 = var136;
varonce133 = var134;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var134); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
} else {
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var139 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var139 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var137) on <var137:MClassDef> */
var142 = var137->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var137:MClassDef> */
if (unlikely(var142 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var145 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var145 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var143) on <var143:MProperty> */
var148 = var143->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var143:MProperty> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var146) on <var146:MClassDef> */
var151 = var146->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var146:MClassDef> */
if (unlikely(var151 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var140,var149) on <var140:MClass> */
var_other55 = var149;
{
var154 = ((short int(*)(val* self, val* p0))(var140->class->vft[COLOR_core__kernel__Object___61d_61d]))(var140, var_other55); /* == on <var140:MClass>*/
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
if (var152){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var158 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var158 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var156) on <var156:MProperty> */
var161 = var156->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var156:MProperty> */
if (unlikely(var161 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
var162 = nitc___nitc__MClassDef___nitc__model_base__MEntity__name(var159);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var162); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "::";
var166 = core__flat___NativeString___to_s_full(var165, 2l, 2l);
var164 = var166;
varonce163 = var164;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var164); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var169 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var167) on <var167:MProperty> */
var172 = var167->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var167:MProperty> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var170); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
}
{
var173 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_res);
}
var3 = var173;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MPropDef___full_name].val = var3; /* _full_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MPropDef$c_name for (self: MPropDef): String */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : MClassDef */;
val* var16 /* : MClassDef */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MClassDef */;
val* var25 /* : MClassDef */;
val* var26 /* : MClass */;
val* var28 /* : MClass */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : MClassDef */;
val* var38 /* : MClassDef */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : MProperty */;
val* var44 /* : MProperty */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MProperty */;
val* var58 /* : MProperty */;
val* var59 /* : MClassDef */;
val* var61 /* : MClassDef */;
val* var62 /* : MModule */;
val* var64 /* : MModule */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : MClassDef */;
val* var72 /* : MClassDef */;
val* var73 /* : MClass */;
val* var75 /* : MClass */;
val* var76 /* : MProperty */;
val* var78 /* : MProperty */;
val* var79 /* : MClassDef */;
val* var81 /* : MClassDef */;
val* var82 /* : MClass */;
val* var84 /* : MClass */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var89 /* : MProperty */;
val* var91 /* : MProperty */;
val* var92 /* : MClassDef */;
val* var94 /* : MClassDef */;
val* var95 /* : String */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
val* var101 /* : MProperty */;
val* var103 /* : MProperty */;
val* var104 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___c_name].val != NULL; /* _c_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MPropDef___c_name].val; /* _c_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2428);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_res = var5;
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var9 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__MClassDef___nitc__model_base__MEntity__c_name(var7);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var10); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "___";
var13 = core__flat___NativeString___to_s_full(var12, 3l, 3l);
var11 = var13;
varonce = var11;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var11); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var16 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var14) on <var14:MClassDef> */
var19 = var14->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var14:MClassDef> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var22 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var20) on <var20:MProperty> */
var25 = var20->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var20:MProperty> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var23) on <var23:MClassDef> */
var28 = var23->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var23:MClassDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var17,var26) on <var17:MClass> */
var_other = var26;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:MClass> */
var33 = var17 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
var34 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(self);
}
{
var35 = core___core__Text___to_cmangle(var34);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var35); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var38 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var36) on <var36:MClassDef> */
var41 = var36->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var36:MClassDef> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var44 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var42) on <var42:MProperty> */
var47 = var42->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var42:MProperty> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var45) on <var45:MClassDef> */
var50 = var45->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var45:MClassDef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var39,var48) on <var39:MModule> */
var_other53 = var48;
{
var54 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_core__kernel__Object___61d_61d]))(var39, var_other53); /* == on <var39:MModule>*/
}
var55 = !var54;
var51 = var55;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var58 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var56) on <var56:MProperty> */
var61 = var56->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var56:MProperty> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var59) on <var59:MClassDef> */
var64 = var59->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var59:MClassDef> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var62);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var65); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "__";
var69 = core__flat___NativeString___to_s_full(var68, 2l, 2l);
var67 = var69;
varonce66 = var67;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var67); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var72 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var70) on <var70:MClassDef> */
var75 = var70->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var70:MClassDef> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var78 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var76) on <var76:MProperty> */
var81 = var76->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var76:MProperty> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var79) on <var79:MClassDef> */
var84 = var79->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var79:MClassDef> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var73,var82) on <var73:MClass> */
var_other53 = var82;
{
var87 = ((short int(*)(val* self, val* p0))(var73->class->vft[COLOR_core__kernel__Object___61d_61d]))(var73, var_other53); /* == on <var73:MClass>*/
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var91 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var89) on <var89:MProperty> */
var94 = var89->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var89:MProperty> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = nitc___nitc__MClassDef___nitc__model_base__MEntity__name(var92);
}
{
var96 = core___core__Text___to_cmangle(var95);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var96); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "__";
var100 = core__flat___NativeString___to_s_full(var99, 2l, 2l);
var98 = var100;
varonce97 = var98;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var98); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var103 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var103 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var101) on <var101:MProperty> */
var106 = var101->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var101:MProperty> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = core___core__Text___to_cmangle(var104);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var107); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
}
{
var108 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_res);
}
var3 = var108;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MPropDef___c_name].val = var3; /* _c_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MPropDef$model for (self: MPropDef): Model */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : Model */;
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClassDef___nitc__model_base__MEntity__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MPropDef$to_s for (self: MPropDef): String */
val* nitc___nitc__MPropDef___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MPropDef$to_s= for (self: MPropDef, String) */
void nitc___nitc__MPropDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MPropDef___to_s].val = p0; /* _to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model$MPropDef$is_intro for (self: MPropDef): Bool */
short int nitc___nitc__MPropDef___is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MProperty */;
val* var4 /* : MProperty */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : MProperty */;
val* var8 /* : MProperty */;
val* var9 /* : MPropDef */;
val* var11 /* : MPropDef */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var4 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_nitc__model__MProperty___intro].val != NULL; /* _intro on <var2:MProperty> */
var_ = var5;
if (var5){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var8 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var6) on <var6:MProperty> */
var11 = var6->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var6:MProperty> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var9,self) on <var9:MPropDef> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var9,var_other) on <var9:MPropDef> */
var16 = var9 == var_other;
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
var1 = var12;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MPropDef$lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* nitc___nitc__MPropDef___lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var6 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var7 /* : IndexedIterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[MPropDef] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2464);
fatal_exit(1);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var5 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__MProperty___lookup_all_definitions(var3, var_mmodule, var_mtype);
}
var_mpropdefs = var6;
{
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_mpropdefs);
}
var_i = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[MPropDef]>*/
}
var_ = var9;
if (var9){
{
var10 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[MPropDef]>*/
}
{
{ /* Inline kernel$Object$!= (var10,self) on <var10:nullable Object(MPropDef)> */
var_other = self;
{
var13 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other); /* == on <var10:nullable Object(MPropDef)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var8 = var11;
} else {
var8 = var_;
}
if (var8){
{
((void(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var15 = ((short int(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[MPropDef]>*/
}
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'has_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2469);
fatal_exit(1);
}
{
((void(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[MPropDef]>*/
}
{
var16 = ((short int(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[MPropDef]>*/
}
if (unlikely(!var16)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'has_next_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2471);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[MPropDef]>*/
}
/* <var17:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nitc__model__MPropDef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (unlikely(!var18)) {
var_class_name = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2472);
fatal_exit(1);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$msignature for (self: MMethodDef): nullable MSignature */
val* nitc___nitc__MMethodDef___msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$msignature= for (self: MMethodDef, nullable MSignature) */
void nitc___nitc__MMethodDef___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MMethodDef___msignature].val = p0; /* _msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$new_msignature for (self: MMethodDef): nullable MSignature */
val* nitc___nitc__MMethodDef___new_msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$new_msignature= for (self: MMethodDef, nullable MSignature) */
void nitc___nitc__MMethodDef___new_msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = p0; /* _new_msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$initializers for (self: MMethodDef): Array[MProperty] */
val* nitc___nitc__MMethodDef___initializers(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <self:MMethodDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_abstract for (self: MMethodDef): Bool */
short int nitc___nitc__MMethodDef___is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_abstract= for (self: MMethodDef, Bool) */
void nitc___nitc__MMethodDef___is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$is_intern for (self: MMethodDef): Bool */
short int nitc___nitc__MMethodDef___is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_intern= for (self: MMethodDef, Bool) */
void nitc___nitc__MMethodDef___is_intern_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$is_extern for (self: MMethodDef): Bool */
short int nitc___nitc__MMethodDef___is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_extern= for (self: MMethodDef, Bool) */
void nitc___nitc__MMethodDef___is_extern_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$constant_value for (self: MMethodDef): nullable Object */
val* nitc___nitc__MMethodDef___constant_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$constant_value= for (self: MMethodDef, nullable Object) */
void nitc___nitc__MMethodDef___constant_value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val = p0; /* _constant_value on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MAttributeDef$static_mtype for (self: MAttributeDef): nullable MType */
val* nitc___nitc__MAttributeDef___static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MAttributeDef$static_mtype= for (self: MAttributeDef, nullable MType) */
void nitc___nitc__MAttributeDef___static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model$MVirtualTypeDef$bound for (self: MVirtualTypeDef): nullable MType */
val* nitc___nitc__MVirtualTypeDef___bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MVirtualTypeDef$bound= for (self: MVirtualTypeDef, nullable MType) */
void nitc___nitc__MVirtualTypeDef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model$MVirtualTypeDef$is_fixed for (self: MVirtualTypeDef): Bool */
short int nitc___nitc__MVirtualTypeDef___is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MVirtualTypeDef$is_fixed= for (self: MVirtualTypeDef, Bool) */
void nitc___nitc__MVirtualTypeDef___is_fixed_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model$MClassKind$to_s for (self: MClassKind): String */
val* nitc___nitc__MClassKind___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClassKind___to_s].val; /* _to_s on <self:MClassKind> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2555);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassKind$to_s= for (self: MClassKind, String) */
void nitc___nitc__MClassKind___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassKind___to_s].val = p0; /* _to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model$MClassKind$need_init for (self: MClassKind): Bool */
short int nitc___nitc__MClassKind___need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MClassKind___need_init].s; /* _need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassKind$need_init= for (self: MClassKind, Bool) */
void nitc___nitc__MClassKind___need_init_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MClassKind___need_init].s = p0; /* _need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model$MClassKind$can_specialize for (self: MClassKind, MClassKind): Bool */
short int nitc___nitc__MClassKind___can_specialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
short int var3 /* : Bool */;
val* var_other5 /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : Sys */;
val* var18 /* : MClassKind */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : Sys */;
val* var25 /* : MClassKind */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : Sys */;
val* var38 /* : MClassKind */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
val* var45 /* : Sys */;
val* var46 /* : MClassKind */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
var_other = p0;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___interface_kind(var1);
}
{
{ /* Inline kernel$Object$== (var_other,var2) on <var_other:MClassKind> */
var_other5 = var2;
{
{ /* Inline kernel$Object$is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var8 = var_other == var_other5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___interface_kind(var10);
}
{
{ /* Inline kernel$Object$== (self,var11) on <self:MClassKind> */
var_other5 = var11;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var16 = self == var_other5;
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
var_ = var12;
if (var12){
var9 = var_;
} else {
var17 = glob_sys;
{
var18 = nitc__model___core__Sys___enum_kind(var17);
}
{
{ /* Inline kernel$Object$== (self,var18) on <self:MClassKind> */
var_other5 = var18;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var23 = self == var_other5;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var9 = var19;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
var24 = glob_sys;
{
var25 = nitc__model___core__Sys___extern_kind(var24);
}
{
{ /* Inline kernel$Object$== (self,var25) on <self:MClassKind> */
var_other5 = var25;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var30 = self == var_other5;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline kernel$Object$== (self,var_other) on <self:MClassKind> */
var_other5 = var_other;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var35 = self == var_other5;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var = var31;
goto RET_LABEL;
} else {
var37 = glob_sys;
{
var38 = nitc__model___core__Sys___enum_kind(var37);
}
{
{ /* Inline kernel$Object$== (var_other,var38) on <var_other:MClassKind> */
var_other5 = var38;
{
{ /* Inline kernel$Object$is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var43 = var_other == var_other5;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_44 = var39;
if (var39){
var36 = var_44;
} else {
var45 = glob_sys;
{
var46 = nitc__model___core__Sys___extern_kind(var45);
}
{
{ /* Inline kernel$Object$== (var_other,var46) on <var_other:MClassKind> */
var_other5 = var46;
{
{ /* Inline kernel$Object$is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var51 = var_other == var_other5;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var36 = var47;
}
if (var36){
var = 0;
goto RET_LABEL;
} else {
}
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassKind$init for (self: MClassKind) */
void nitc___nitc__MClassKind___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MClassKind___core__kernel__Object__init]))(self); /* init on <self:MClassKind>*/
}
RET_LABEL:;
}
/* method model$Sys$abstract_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = core__flat___NativeString___to_s_full(var5, 14l, 14l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$concrete_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "class";
var6 = core__flat___NativeString___to_s_full(var5, 5l, 5l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$interface_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = core__flat___NativeString___to_s_full(var5, 9l, 9l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$enum_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = core__flat___NativeString___to_s_full(var5, 4l, 4l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$extern_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "extern class";
var6 = core__flat___NativeString___to_s_full(var5, 12l, 12l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}

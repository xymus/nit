#include "nitc__loader.sep.0.h"
/* method loader$MPackage$excludes for (self: MPackage): nullable Array[String] */
val* nitc__loader___MPackage___excludes(val* self) {
val* var /* : nullable Array[String] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Array[String] */;
val* var3 /* : nullable Array[String] */;
val* var5 /* : nullable ConfigTree */;
val* var7 /* : nullable ConfigTree */;
val* var_ini /* var ini: nullable ConfigTree */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : nullable String */;
val* var_exclude /* var exclude: nullable String */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : Array[String] */;
val* var_excludes /* var excludes: Array[String] */;
var1 = self->attrs[COLOR_nitc__loader__MPackage__lazy_32d_excludes].s; /* lazy _excludes on <self:MPackage> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__loader__MPackage___excludes].val; /* _excludes on <self:MPackage> */
} else {
{
{
{ /* Inline loader$MPackage$ini (self) on <self:MPackage> */
var7 = self->attrs[COLOR_nitc__loader__MPackage___ini].val; /* _ini on <self:MPackage> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ini = var5;
if (var_ini == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ini,((val*)NULL)) on <var_ini:nullable ConfigTree> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ini,var_other) on <var_ini:nullable ConfigTree(ConfigTree)> */
var13 = var_ini == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var3 = ((val*)NULL);
goto RET_LABEL4;
} else {
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "source.exclude";
var16 = core__flat___NativeString___to_s_full(var15, 14l, 14l);
var14 = var16;
varonce = var14;
}
{
var17 = ini___ini__ConfigTree____91d_93d(var_ini, var14);
}
var_exclude = var17;
if (var_exclude == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_exclude->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_exclude, ((val*)NULL)); /* == on <var_exclude:nullable String>*/
var18 = var19;
}
if (var18){
var3 = ((val*)NULL);
goto RET_LABEL4;
} else {
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ":";
var23 = core__flat___NativeString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
{
var24 = core__string_search___Text___split(var_exclude, var21);
}
var_excludes = var24;
var3 = var_excludes;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__loader__MPackage___excludes].val = var3; /* _excludes on <self:MPackage> */
var2 = var3;
self->attrs[COLOR_nitc__loader__MPackage__lazy_32d_excludes].s = 1; /* lazy _excludes on <self:MPackage> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method loader$MPackage$accept for (self: MPackage, String): Bool */
short int nitc__loader___MPackage___accept(val* self, val* p0) {
short int var /* : Bool */;
val* var_filepath /* var filepath: String */;
val* var1 /* : nullable Array[String] */;
val* var_excludes /* var excludes: nullable Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable MGroup */;
val* var9 /* : nullable MGroup */;
val* var10 /* : nullable String */;
val* var11 /* : String */;
val* var_relpath /* var relpath: String */;
short int var12 /* : Bool */;
var_filepath = p0;
{
var1 = nitc__loader___MPackage___excludes(self);
}
var_excludes = var1;
if (var_excludes == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_excludes,((val*)NULL)) on <var_excludes:nullable Array[String]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_excludes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_excludes, var_other); /* == on <var_excludes:nullable Array[String](Array[String])>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline mpackage$MPackage$root (self) on <self:MPackage> */
var9 = self->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <self:MPackage> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1174);
fatal_exit(1);
} else {
var10 = nitc___nitc__MGroup___filepath(var7);
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1174);
fatal_exit(1);
} else {
var11 = core__file___String___relpath(var10, var_filepath);
}
var_relpath = var11;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_excludes, var_relpath);
}
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$MGroup$scanned for (self: MGroup): Bool */
short int nitc__loader___MGroup___scanned(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__MGroup___scanned].s; /* _scanned on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$MGroup$scanned= for (self: MGroup, Bool) */
void nitc__loader___MGroup___scanned_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__MGroup___scanned].s = p0; /* _scanned on <self:MGroup> */
RET_LABEL:;
}
/* method loader$MGroup$mmodules_by_name for (self: MGroup, String): Array[MModule] */
val* nitc__loader___MGroup___mmodules_by_name(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MGroup] */;
val* var4 /* : POSetElement[MGroup] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MGroup] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MGroup] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_g /* var g: MGroup */;
val* var10 /* : Array[MModule] */;
val* var12 /* : Array[MModule] */;
val* var_13 /* var : Array[MModule] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[MModule] */;
short int var16 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_mp /* var mp: MModule */;
val* var19 /* : String */;
val* var21 /* : String */;
short int var22 /* : Bool */;
var_name = p0;
var1 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[MModule]>*/
}
var_res = var1;
{
{ /* Inline mpackage$MGroup$in_nesting (self) on <self:MGroup> */
var4 = self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val; /* _in_nesting on <self:MGroup> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_nesting");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 95);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSetElement___smallers(var2);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MGroup]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((int64_t)var_7&3)?class_info[((int64_t)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MGroup]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((int64_t)var_7&3)?class_info[((int64_t)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MGroup]>*/
}
var_g = var9;
{
{ /* Inline mmodule$MGroup$mmodules (var_g) on <var_g:MGroup> */
var12 = var_g->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_g:MGroup> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_13 = var10;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_13);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((int64_t)var_15&3)?class_info[((int64_t)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[MModule]>*/
}
if (var16){
} else {
goto BREAK_label17;
}
{
var18 = ((val*(*)(val* self))((((int64_t)var_15&3)?class_info[((int64_t)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[MModule]>*/
}
var_mp = var18;
{
{ /* Inline mmodule$MModule$name (var_mp) on <var_mp:MModule> */
var21 = var_mp->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mp:MModule> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_name); /* == on <var19:String>*/
}
if (var22){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array$Array$add on <var_res:Array[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((int64_t)var_15&3)?class_info[((int64_t)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[MModule]>*/
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((int64_t)var_15&3)?class_info[((int64_t)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((int64_t)var_7&3)?class_info[((int64_t)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_7&3)?class_info[((int64_t)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader$SourceFile$mmodule for (self: SourceFile): nullable MModule */
val* nitc__loader___SourceFile___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$SourceFile$mmodule= for (self: SourceFile, nullable MModule) */
void nitc__loader___SourceFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = p0; /* _mmodule on <self:SourceFile> */
RET_LABEL:;
}
/* method loader$AStdImport$mmodule for (self: AStdImport): nullable MModule */
val* nitc__loader___AStdImport___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$AStdImport$mmodule= for (self: AStdImport, nullable MModule) */
void nitc__loader___AStdImport___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method loader$AModule$mmodule for (self: AModule): nullable MModule */
val* nitc__loader___AModule___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$AModule$mmodule= for (self: AModule, nullable MModule) */
void nitc__loader___AModule___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method loader$AModule$is_importation_done for (self: AModule): Bool */
short int nitc__loader___AModule___is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader$AModule$is_importation_done= for (self: AModule, Bool) */
void nitc__loader___AModule___is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}

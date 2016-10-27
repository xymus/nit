#include "core__ropes.sep.0.h"
/* method ropes$Concat$chars for (self: Concat): SequenceRead[Char] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : RopeChars */;
var1 = NEW_core__ropes__RopeChars(&type_core__ropes__RopeChars);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var1, self); /* target= on <var1:RopeChars>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RopeChars>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$length for (self: Concat): Int */
int64_t core__ropes___core__ropes__Concat___core__abstract_text__Text__length(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$byte_length for (self: Concat): Int */
int64_t core__ropes___core__ropes__Concat___core__abstract_text__Text__byte_length(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$substrings for (self: Concat): Iterator[FlatText] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeSubstrings */;
var1 = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
core__ropes___core__ropes__RopeSubstrings___from(var1, self, 0l); /* Direct call ropes$RopeSubstrings$from on <var1:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$empty for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__flat___NativeString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$to_cstring for (self: Concat): NativeString */
char* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
int64_t var1 /* : Int */;
int64_t var_len /* var len: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
int64_t var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var7 /* : Int */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
int64_t var_off /* var off: Int */;
val* var12 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[FlatText] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_i /* var i: FlatText */;
int64_t var17 /* : Int */;
int64_t var_ilen /* var ilen: Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
char* var22 /* : NativeString */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
int64_t var27 /* : Int */;
int64_t var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
int64_t var35 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <self:Concat> */
var_len = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_len + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var2,var4) on <var2:NativeString> */
var10 = (char*)nit_alloc(var4);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ns = var8;
{
{ /* Inline native$NativeString$[]= (var_ns,var_len,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_len]=(unsigned char)((unsigned char)0x00);
RET_LABEL11:(void)0;
}
}
var_off = 0l;
{
var12 = core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings(self);
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[FlatText]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[FlatText]>*/
}
var_i = var16;
var17 = var_i->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_i:FlatText> */
var_ilen = var17;
/* <var_i:FlatText> isa FlatString */
cltype19 = type_core__FlatString.color;
idtype20 = type_core__FlatString.id;
if(cltype19 >= var_i->type->table_size) {
var18 = 0;
} else {
var18 = var_i->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
var_class_name21 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 98);
fatal_exit(1);
}
var22 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
/* <var_i:FlatText> isa FlatString */
cltype24 = type_core__FlatString.color;
idtype25 = type_core__FlatString.id;
if(cltype24 >= var_i->type->table_size) {
var23 = 0;
} else {
var23 = var_i->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 98);
fatal_exit(1);
}
var27 = var_i->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_i:FlatText(FlatString)> */
{
{ /* Inline native$NativeString$copy_to (var22,var_ns,var_ilen,var27,var_off) on <var22:NativeString> */
memmove(var_ns+var_off,var22+var27,var_ilen);
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var31 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_off + var_ilen;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_off = var29;
{
((void(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[FlatText]>*/
}
var = var_ns;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$left= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___left_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___left].val = p0; /* _left on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$right= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___right_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___right].val = p0; /* _right on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$init for (self: Concat) */
void core__ropes___core__ropes__Concat___core__kernel__Object__init(val* self) {
val* var /* : String */;
val* var_l /* var l: String */;
val* var1 /* : String */;
val* var_r /* var r: String */;
int64_t var2 /* : Int */;
int64_t var3 /* : Int */;
int64_t var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var7 /* : Int */;
int64_t var8 /* : Int */;
int64_t var9 /* : Int */;
int64_t var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
int64_t var16 /* : Int */;
int64_t var17 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__Concat___core__kernel__Object__init]))(self); /* init on <self:Concat>*/
}
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 110);
fatal_exit(1);
}
var_l = var;
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 111);
fatal_exit(1);
}
var_r = var1;
{
var2 = ((int64_t(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__length]))(var_l); /* length on <var_l:String>*/
}
{
var3 = ((int64_t(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__length]))(var_r); /* length on <var_r:String>*/
}
{
{ /* Inline kernel$Int$+ (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var2 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___length].l = var4; /* _length on <self:Concat> */
{
var8 = ((int64_t(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_l); /* byte_length on <var_l:String>*/
}
{
var9 = ((int64_t(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_r); /* byte_length on <var_r:String>*/
}
{
{ /* Inline kernel$Int$+ (var8,var9) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var8 + var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___byte_length].l = var10; /* _byte_length on <self:Concat> */
var17 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = var17; /* _flat_last_pos_start on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$is_empty for (self: Concat): Bool */
short int core__ropes___core__ropes__Concat___core__abstract_text__Text__is_empty(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <self:Concat> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
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
/* method ropes$Concat$* for (self: Concat, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text___42d(val* self, int64_t p0) {
val* var /* : String */;
int64_t var_i /* var i: Int */;
val* var_x /* var x: String */;
int64_t var_j /* var j: Int */;
int64_t var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Text */;
int64_t var6 /* : Int */;
var_i = p0;
var_x = self;
var_j = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_j < var_;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__abstract_text__Text___43d]))(var_x, self); /* + on <var_x:String>*/
}
var_x = var5;
{
var6 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var6;
}
BREAK_label: (void)0;
var = var_x;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$[] for (self: Concat, Int): Char */
uint32_t core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d(val* self, int64_t p0) {
uint32_t var /* : Char */;
int64_t var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
int64_t var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
int64_t var14 /* : Int */;
int64_t var_flps /* var flps: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : FlatString */;
val* var_fc /* var fc: FlatString */;
int64_t var23 /* : Int */;
int64_t var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
int64_t var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
int64_t var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
int64_t var44 /* : Int */;
uint32_t var45 /* : Char */;
val* var46 /* : FlatString */;
val* var_lf /* var lf: FlatString */;
int64_t var47 /* : Int */;
int64_t var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
int64_t var54 /* : Int */;
uint32_t var55 /* : Char */;
var_i = p0;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var6 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
{
{ /* Inline kernel$Int$< (var_i,var6) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_i < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 133);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var14;
{
{ /* Inline kernel$Int$>= (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var17 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var_i >= var_flps;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 136);
fatal_exit(1);
}
var_fc = var22;
var23 = var_fc->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_fc:FlatString> */
{
{ /* Inline kernel$Int$+ (var_flps,var23) on <var_flps:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var_flps + var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var33 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var37 = var_i < var24;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel$Int$- (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var40 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var_i - var_flps;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((uint32_t(*)(val* self, int64_t p0))(var_fc->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(var_fc, var38); /* fetch_char_at on <var_fc:FlatString>*/
}
var = var45;
goto RET_LABEL;
} else {
}
} else {
}
{
var46 = core__ropes___core__ropes__Concat___get_leaf_at(self, var_i);
}
var_lf = var46;
var47 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
{
{ /* Inline kernel$Int$- (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var54 = var_i - var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
var55 = ((uint32_t(*)(val* self, int64_t p0))(var_lf->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(var_lf, var48); /* fetch_char_at on <var_lf:FlatString>*/
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$get_leaf_at for (self: Concat, Int): FlatString */
val* core__ropes___core__ropes__Concat___get_leaf_at(val* self, int64_t p0) {
val* var /* : FlatString */;
int64_t var_pos /* var pos: Int */;
int64_t var1 /* : Int */;
int64_t var_flps /* var flps: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : FlatString */;
val* var_fc /* var fc: FlatString */;
int64_t var7 /* : Int */;
int64_t var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
int64_t var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var_s /* var s: String */;
int64_t var_st /* var st: Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
val* var29 /* : String */;
val* var_lft /* var lft: String */;
int64_t var30 /* : Int */;
int64_t var_llen /* var llen: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
val* var38 /* : String */;
int64_t var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
int64_t var45 /* : Int */;
int64_t var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
int64_t var52 /* : Int */;
var_pos = p0;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var1;
{
{ /* Inline kernel$Int$>= (var_pos,var_flps) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var4 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_pos >= var_flps;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var6 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 146);
fatal_exit(1);
}
var_fc = var6;
var7 = var_fc->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_fc:FlatString> */
{
{ /* Inline kernel$Int$+ (var_flps,var7) on <var_flps:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_flps + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_pos,var8) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var17 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_pos < var8;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = var_fc;
goto RET_LABEL;
} else {
}
} else {
}
var_s = self;
var_st = var_pos;
for(;;) {
/* <var_s:String> isa FlatString */
cltype23 = type_core__FlatString.color;
idtype24 = type_core__FlatString.id;
if(cltype23 >= var_s->type->table_size) {
var22 = 0;
} else {
var22 = var_s->type->type_table[cltype23] == idtype24;
}
if (var22){
goto BREAK_label;
} else {
}
/* <var_s:String> isa Concat */
cltype26 = type_core__ropes__Concat.color;
idtype27 = type_core__ropes__Concat.id;
if(cltype26 >= var_s->type->table_size) {
var25 = 0;
} else {
var25 = var_s->type->type_table[cltype26] == idtype27;
}
if (unlikely(!var25)) {
var_class_name28 = var_s == NULL ? "null" : var_s->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Concat", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 153);
fatal_exit(1);
}
var_s = var_s;
var29 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 154);
fatal_exit(1);
}
var_lft = var29;
{
var30 = ((int64_t(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var30;
{
{ /* Inline kernel$Int$>= (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var33 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var37 = var_pos >= var_llen;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var38 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 157);
fatal_exit(1);
}
var_s = var38;
{
{ /* Inline kernel$Int$- (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var41 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var45 = var_pos - var_llen;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_pos = var39;
} else {
var_s = var_lft;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var48 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var52 = var_st - var_pos;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = var46; /* _flat_last_pos_start on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___flat_cache].val = var_s; /* _flat_cache on <self:Concat> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$substring for (self: Concat, Int, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substring(val* self, int64_t p0, int64_t p1) {
val* var /* : String */;
int64_t var_from /* var from: Int */;
int64_t var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
int64_t var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
int64_t var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
int64_t var22 /* : Int */;
int64_t var_ln /* var ln: Int */;
int64_t var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
int64_t var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
int64_t var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
int64_t var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
int64_t var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
int64_t var61 /* : Int */;
int64_t var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
int64_t var68 /* : Int */;
int64_t var_end_index /* var end_index: Int */;
int64_t var69 /* : Int */;
int64_t var_flps /* var flps: Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : FlatString */;
val* var_fc /* var fc: FlatString */;
int64_t var78 /* : Int */;
int64_t var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
int64_t var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
int64_t var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
int64_t var99 /* : Int */;
int64_t var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
int64_t var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var_lft /* var lft: String */;
int64_t var109 /* : Int */;
int64_t var_llen /* var llen: Int */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
short int var116 /* : Bool */;
int64_t var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
int64_t var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
short int var130 /* : Bool */;
val* var131 /* : Text */;
int64_t var132 /* : Int */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
int64_t var138 /* : Int */;
int64_t var_lsublen /* var lsublen: Int */;
val* var139 /* : Text */;
val* var140 /* : String */;
int64_t var141 /* : Int */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const char* var_class_name146;
int64_t var147 /* : Int */;
val* var148 /* : Text */;
val* var149 /* : Text */;
val* var150 /* : String */;
int64_t var151 /* : Int */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
const char* var_class_name156;
int64_t var157 /* : Int */;
val* var158 /* : Text */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_from < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_count + var_from;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_count = var5;
{
{ /* Inline kernel$Int$< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_count < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "";
var21 = core__flat___NativeString___to_s_full(var20, 0l, 0l);
var19 = var21;
varonce = var19;
}
var = var19;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var22 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var_ln = var22;
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var25 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var_count + var_from;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var23,var_ln) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var32 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var23 > var_ln;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel$Int$- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var39 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var43 = var_ln - var_from;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_count = var37;
} else {
}
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var50 = var_count <= 0l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "";
var54 = core__flat___NativeString___to_s_full(var53, 0l, 0l);
var52 = var54;
varonce51 = var52;
}
var = var52;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var57 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var61 = var_from + var_count;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var55,1l) on <var55:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var64 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var68 = var55 - 1l;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_end_index = var62;
var69 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var69;
{
{ /* Inline kernel$Int$>= (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var72 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var76 = var_from >= var_flps;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
var77 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 182);
fatal_exit(1);
}
var_fc = var77;
var78 = var_fc->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_fc:FlatString> */
{
{ /* Inline kernel$Int$+ (var_flps,var78) on <var_flps:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var85 = var_flps + var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_end_index,var79) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var79:Int> isa OTHER */
/* <var79:Int> isa OTHER */
var88 = 1; /* easy <var79:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var92 = var_end_index < var79;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
{
{ /* Inline kernel$Int$- (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var95 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var99 = var_from - var_flps;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_end_index,var_flps) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var102 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var106 = var_end_index - var_flps;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
var107 = ((val*(*)(val* self, int64_t p0, int64_t p1, int64_t p2))(var_fc->class->vft[COLOR_core__flat__FlatString__substring_impl]))(var_fc, var93, var_count, var100); /* substring_impl on <var_fc:FlatString>*/
}
var = var107;
goto RET_LABEL;
} else {
}
} else {
}
var108 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 188);
fatal_exit(1);
}
var_lft = var108;
{
var109 = ((int64_t(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var109;
{
{ /* Inline kernel$Int$< (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var112 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var116 = var_from < var_llen;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
if (var110){
{
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var119 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_from + var_count;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var117,var_llen) on <var117:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var126 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var130 = var117 < var_llen;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
{
var131 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring]))(var_lft, var_from, var_count); /* substring on <var_lft:String>*/
}
var = var131;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_llen,var_from) on <var_llen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var134 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var138 = var_llen - var_from;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
var_lsublen = var132;
{
var139 = ((val*(*)(val* self, int64_t p0))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_lft, var_from); /* substring_from on <var_lft:String>*/
}
var140 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var140 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 193);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$- (var_count,var_lsublen) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var143 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var143)) {
var_class_name146 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var147 = var_count - var_lsublen;
var141 = var147;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
var148 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var140->class->vft[COLOR_core__abstract_text__Text__substring]))(var140, 0l, var141); /* substring on <var140:String>*/
}
{
var149 = ((val*(*)(val* self, val* p0))(var139->class->vft[COLOR_core__abstract_text__Text___43d]))(var139, var148); /* + on <var139:Text(String)>*/
}
var = var149;
goto RET_LABEL;
} else {
var150 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var150 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 195);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var153 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var153)) {
var_class_name156 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name156);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var157 = var_from - var_llen;
var151 = var157;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
{
var158 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var150->class->vft[COLOR_core__abstract_text__Text__substring]))(var150, var151, var_count); /* substring on <var150:String>*/
}
var = var158;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes$Concat$to_upper for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Text */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 209);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var2); /* to_upper on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 209);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var4); /* to_upper on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$to_lower for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Text */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 211);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__to_lower]))(var2); /* to_lower on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 211);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_lower]))(var4); /* to_lower on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$+ for (self: Concat, Text): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
int64_t var2 /* : Int */;
int64_t var_slen /* var slen: Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Concat */;
val* var5 /* : String */;
val* var_r /* var r: String */;
int64_t var6 /* : Int */;
int64_t var_rlen /* var rlen: Int */;
int64_t var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name;
int64_t var12 /* : Int */;
val* var13 /* : Sys */;
int64_t var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : Concat */;
val* var23 /* : Concat */;
val* var24 /* : String */;
val* var25 /* : Text */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((int64_t(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:String>*/
}
var_slen = var2;
/* <var_s:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_s->type->table_size) {
var3 = 0;
} else {
var3 = var_s->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__left_61d]))(var4, self); /* left= on <var4:Concat>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__right_61d]))(var4, var_s); /* right= on <var4:Concat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Concat>*/
}
var = var4;
goto RET_LABEL;
} else {
var5 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 219);
fatal_exit(1);
}
var_r = var5;
{
var6 = ((int64_t(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_r); /* byte_length on <var_r:String>*/
}
var_rlen = var6;
{
{ /* Inline kernel$Int$+ (var_rlen,var_slen) on <var_rlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var9 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_rlen + var_slen;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var13 = glob_sys;
{
var14 = core__ropes___Sys___maxlen(var13);
}
{
{ /* Inline kernel$Int$> (var7,var14) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var21 = var7 > var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__left_61d]))(var22, self); /* left= on <var22:Concat>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__right_61d]))(var22, var_s); /* right= on <var22:Concat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:Concat>*/
}
var = var22;
goto RET_LABEL;
} else {
}
var23 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var24 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 222);
fatal_exit(1);
}
{
var25 = ((val*(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__abstract_text__Text___43d]))(var_r, var_s); /* + on <var_r:String>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__left_61d]))(var23, var24); /* left= on <var23:Concat>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__right_61d]))(var23, var25); /* right= on <var23:Concat>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:Concat>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes$Concat$balance for (self: Concat): String */
val* core__ropes___core__ropes__Concat___balance(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var_children /* var children: Array[String] */;
val* var2 /* : RopeCharIteratorPiece */;
val* var_iter /* var iter: nullable RopeCharIteratorPiece */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
val* var_rnod /* var rnod: String */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
val* var14 /* : nullable RopeCharIteratorPiece */;
val* var16 /* : nullable RopeCharIteratorPiece */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : RopeCharIteratorPiece */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var30 /* : RopeCharIteratorPiece */;
val* var31 /* : String */;
val* var32 /* : nullable RopeCharIteratorPiece */;
val* var34 /* : nullable RopeCharIteratorPiece */;
int64_t var35 /* : Int */;
int64_t var37 /* : Int */;
val* var38 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[String]>*/
}
var_children = var1;
var2 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var2, self); /* node= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var2, 0); /* ldone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var2, 0); /* rdone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var2, ((val*)NULL)); /* prev= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RopeCharIteratorPiece>*/
}
var_iter = var2;
for(;;) {
if (var_iter == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_iter,((val*)NULL)) on <var_iter:nullable RopeCharIteratorPiece> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_iter,var_other) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var8 = var_iter == var_other;
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
goto BREAK_label;
} else {
}
{
{ /* Inline ropes$RopeCharIteratorPiece$node (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var11 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_rnod = var9;
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var12 = 0;
} else {
var12 = var_rnod->type->type_table[cltype] == idtype;
}
var13 = !var12;
if (var13){
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_children, var_rnod); /* Direct call array$AbstractArray$push on <var_children:Array[String]>*/
}
{
{ /* Inline ropes$RopeCharIteratorPiece$prev (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var16 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_iter = var14;
goto BREAK_label17;
} else {
}
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var20 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = !var18;
if (var21){
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone= (var_iter,1) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL22:(void)0;
}
}
var23 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var24 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 254);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var23, var24); /* node= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var23, 0); /* ldone= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var23, 0); /* rdone= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var23, var_iter); /* prev= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RopeCharIteratorPiece>*/
}
var_iter = var23;
} else {
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var27 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = !var25;
if (var28){
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone= (var_iter,1) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL29:(void)0;
}
}
var30 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var31 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 257);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var30, var31); /* node= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var30, 0); /* ldone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var30, var_iter); /* prev= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:RopeCharIteratorPiece>*/
}
var_iter = var30;
} else {
{
{ /* Inline ropes$RopeCharIteratorPiece$prev (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var34 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_iter = var32;
}
}
BREAK_label17: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline array$AbstractArrayRead$length (var_children) on <var_children:Array[String]> */
var37 = var_children->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_children:Array[String]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core__ropes___core__ropes__Concat___recurse_balance(self, var_children, var35);
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$recurse_balance for (self: Concat, Array[String], Int): String */
val* core__ropes___core__ropes__Concat___recurse_balance(val* self, val* p0, int64_t p1) {
val* var /* : String */;
val* var_nodes /* var nodes: Array[String] */;
int64_t var_len /* var len: Int */;
int64_t var_finpos /* var finpos: Int */;
int64_t var_stpos /* var stpos: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
int64_t var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
int64_t var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : Concat */;
val* var20 /* : nullable Object */;
int64_t var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
int64_t var27 /* : Int */;
val* var28 /* : nullable Object */;
int64_t var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
int64_t var35 /* : Int */;
val* var36 /* : nullable Object */;
int64_t var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
int64_t var43 /* : Int */;
int64_t var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
int64_t var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
var_nodes = p0;
var_len = p1;
var_finpos = 0l;
var_stpos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_stpos,var_len) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var3 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_stpos < var_len;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$- (var_len,var_stpos) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_stpos:Int> isa OTHER */
/* <var_stpos:Int> isa OTHER */
var7 = 1; /* easy <var_stpos:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var11 = var_len - var_stpos;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var18 = var5 > 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var19 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var20 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, var_stpos);
}
{
{ /* Inline kernel$Int$+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var27 = var_stpos + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, var21);
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__left_61d]))(var19, var20); /* left= on <var19:Concat>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__right_61d]))(var19, var28); /* right= on <var19:Concat>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:Concat>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_nodes, var_finpos, var19); /* Direct call array$Array$[]= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_stpos,2l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var31 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_stpos + 2l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_stpos = var29;
} else {
{
var36 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, var_stpos);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_nodes, var_finpos, var36); /* Direct call array$Array$[]= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_stpos + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_stpos = var37;
}
{
{ /* Inline kernel$Int$+ (var_finpos,1l) on <var_finpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_finpos + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_finpos = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_finpos,1l) on <var_finpos:Int> */
var53 = var_finpos == 1l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
var54 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, 0l);
}
var = var54;
goto RET_LABEL;
} else {
}
{
var55 = core__ropes___core__ropes__Concat___recurse_balance(self, var_nodes, var_finpos);
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$FlatString$+ for (self: FlatString, Text): String */
val* core__ropes___FlatString___core__abstract_text__Text___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
int64_t var2 /* : Int */;
int64_t var_slen /* var slen: Int */;
int64_t var3 /* : Int */;
int64_t var_mlen /* var mlen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int64_t var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var13 /* : Int */;
int64_t var_nlen /* var nlen: Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Sys */;
int64_t var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Concat */;
char* var27 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
int64_t var28 /* : Int */;
int64_t var_sifrom /* var sifrom: Int */;
int64_t var29 /* : Int */;
int64_t var_mifrom /* var mifrom: Int */;
char* var30 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
static char* varoncenew;
static int varoncenew_guard;
char* var31 /* : NativeString */;
char* var32 /* : NativeString */;
int64_t var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
int64_t var39 /* : Int */;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
static val* varoncenew45;
static int varoncenew45_guard;
val* var46 /* : FlatString */;
val* var47 /* : FlatString */;
int64_t var48 /* : Int */;
int64_t var50 /* : Int */;
int64_t var51 /* : Int */;
int64_t var53 /* : Int */;
int64_t var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
int64_t var60 /* : Int */;
val* var61 /* : FlatString */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
val* var65 /* : String */;
val* var_sl /* var sl: String */;
int64_t var66 /* : Int */;
int64_t var_sllen /* var sllen: Int */;
int64_t var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
int64_t var73 /* : Int */;
val* var74 /* : Sys */;
int64_t var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
val* var83 /* : Concat */;
val* var84 /* : Concat */;
val* var85 /* : String */;
val* var86 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((int64_t(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:String>*/
}
var_slen = var2;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_mlen = var3;
{
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var6 = var_slen == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_mlen,0l) on <var_mlen:Int> */
var9 = var_mlen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var12 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_slen + var_mlen;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
/* <var_s:String> isa FlatString */
cltype15 = type_core__FlatString.color;
idtype16 = type_core__FlatString.id;
if(cltype15 >= var_s->type->table_size) {
var14 = 0;
} else {
var14 = var_s->type->type_table[cltype15] == idtype16;
}
if (var14){
var17 = glob_sys;
{
var18 = core__ropes___Sys___maxlen(var17);
}
{
{ /* Inline kernel$Int$> (var_nlen,var18) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var25 = var_nlen > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var26 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__left_61d]))(var26, self); /* left= on <var26:Concat>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__right_61d]))(var26, var_s); /* right= on <var26:Concat>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:Concat>*/
}
var = var26;
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_mits = var27;
var28 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:String(FlatString)> */
var_sifrom = var28;
var29 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mifrom = var29;
var30 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:String(FlatString)> */
var_sits = var30;
if (likely(varoncenew_guard)) {
var31 = varoncenew;
} else {
var32 = NULL/*special!*/;
var31 = var32;
varoncenew = var31;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_nlen + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var31,var33) on <var31:NativeString> */
var42 = (char*)nit_alloc(var33);
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_ns = var40;
{
{ /* Inline native$NativeString$copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:NativeString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL43:(void)0;
}
}
{
{ /* Inline native$NativeString$copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL44:(void)0;
}
}
if (likely(varoncenew45_guard)) {
var46 = varoncenew45;
} else {
var47 = NEW_core__FlatString(&type_core__FlatString);
var46 = var47;
varoncenew45 = var46;
varoncenew45_guard = 1;
}
{
{ /* Inline abstract_text$FlatText$length (self) on <self:FlatString> */
var50 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline abstract_text$FlatText$length (var_s) on <var_s:String(FlatString)> */
var53 = var_s->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_s:String(FlatString)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var48,var51) on <var48:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var56 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var48 + var51;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = core___core__FlatString___full(var46, var_ns, var_nlen, 0l, var54);
}
var = var61;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype63 = type_core__ropes__Concat.color;
idtype64 = type_core__ropes__Concat.id;
if(cltype63 >= var_s->type->table_size) {
var62 = 0;
} else {
var62 = var_s->type->type_table[cltype63] == idtype64;
}
if (var62){
var65 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var_sl = var65;
{
var66 = ((int64_t(*)(val* self))(var_sl->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_sl); /* byte_length on <var_sl:String>*/
}
var_sllen = var66;
{
{ /* Inline kernel$Int$+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var69 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_sllen + var_mlen;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var74 = glob_sys;
{
var75 = core__ropes___Sys___maxlen(var74);
}
{
{ /* Inline kernel$Int$> (var67,var75) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var75:Int> isa OTHER */
/* <var75:Int> isa OTHER */
var78 = 1; /* easy <var75:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var82 = var67 > var75;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
var83 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var83->class->vft[COLOR_core__ropes__Concat__left_61d]))(var83, self); /* left= on <var83:Concat>*/
}
{
((void(*)(val* self, val* p0))(var83->class->vft[COLOR_core__ropes__Concat__right_61d]))(var83, var_s); /* right= on <var83:Concat>*/
}
{
((void(*)(val* self))(var83->class->vft[COLOR_core__kernel__Object__init]))(var83); /* init on <var83:Concat>*/
}
var = var83;
goto RET_LABEL;
} else {
}
var84 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var85 = core__ropes___FlatString___core__abstract_text__Text___43d(self, var_sl);
}
var86 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 313);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_core__ropes__Concat__left_61d]))(var84, var85); /* left= on <var84:Concat>*/
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_core__ropes__Concat__right_61d]))(var84, var86); /* right= on <var84:Concat>*/
}
{
((void(*)(val* self))(var84->class->vft[COLOR_core__kernel__Object__init]))(var84); /* init on <var84:Concat>*/
}
var = var84;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 315);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$node for (self: RopeCharIteratorPiece): String */
val* core__ropes___core__ropes__RopeCharIteratorPiece___node(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <self:RopeCharIteratorPiece> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$node= for (self: RopeCharIteratorPiece, String) */
void core__ropes___core__ropes__RopeCharIteratorPiece___node_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val = p0; /* _node on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$ldone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___ldone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$ldone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___ldone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = p0; /* _ldone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$rdone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___rdone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$rdone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___rdone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = p0; /* _rdone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$prev for (self: RopeCharIteratorPiece): nullable RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeCharIteratorPiece___prev(val* self) {
val* var /* : nullable RopeCharIteratorPiece */;
val* var1 /* : nullable RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$prev= for (self: RopeCharIteratorPiece, nullable RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___prev_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val = p0; /* _prev on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$init for (self: RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init]))(self); /* init on <self:RopeCharIteratorPiece>*/
}
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$ns for (self: RopeCharReverseIterator): String */
val* core__ropes___core__ropes__RopeCharReverseIterator___ns(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 419);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$ns= for (self: RopeCharReverseIterator, String) */
void core__ropes___core__ropes__RopeCharReverseIterator___ns_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = p0; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$pns for (self: RopeCharReverseIterator): Int */
int64_t core__ropes___core__ropes__RopeCharReverseIterator___pns(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$pns= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pns_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = p0; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$pos for (self: RopeCharReverseIterator): Int */
int64_t core__ropes___core__ropes__RopeCharReverseIterator___pos(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$pos= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pos_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = p0; /* _pos on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$subs for (self: RopeCharReverseIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$subs= for (self: RopeCharReverseIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val = p0; /* _subs on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$from for (self: RopeCharReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___from(val* self, val* p0, int64_t p1) {
val* var_root /* var root: Concat */;
int64_t var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var4 /* : IndexedIterator[String] */;
val* var6 /* : IndexedIterator[String] */;
val* var7 /* : nullable Object */;
val* var9 /* : IndexedIterator[String] */;
val* var11 /* : IndexedIterator[String] */;
int64_t var12 /* : Int */;
int64_t var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var16 /* : Int */;
{
{ /* Inline kernel$Object$init (self) on <self:RopeCharReverseIterator> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
{
{ /* Inline ropes$RopeCharReverseIterator$pos= (self,var_pos) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = var_pos; /* _pos on <self:RopeCharReverseIterator> */
RET_LABEL2:(void)0;
}
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
core__ropes___core__ropes__ReverseRopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes$ReverseRopeSubstrings$from on <var:ReverseRopeSubstrings>*/
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs= (self,var) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val = var; /* _subs on <self:RopeCharReverseIterator> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs (self) on <self:RopeCharReverseIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))((((int64_t)var4&3)?class_info[((int64_t)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var4); /* item on <var4:IndexedIterator[String]>*/
}
{
{ /* Inline ropes$RopeCharReverseIterator$ns= (self,var7) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = var7; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs (self) on <self:RopeCharReverseIterator> */
var11 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((int64_t(*)(val* self))((((int64_t)var9&3)?class_info[((int64_t)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var9); /* index on <var9:IndexedIterator[String]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var12) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var_pos - var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$pns= (self,var13) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = var13; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL17:(void)0;
}
}
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$index for (self: RopeCharReverseIterator): Int */
int64_t core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
{
{ /* Inline ropes$RopeCharReverseIterator$pos (self) on <self:RopeCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$is_ok for (self: RopeCharReverseIterator): Bool */
short int core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline ropes$RopeCharReverseIterator$pos (self) on <self:RopeCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var1 >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$item for (self: RopeCharReverseIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
val* var3 /* : String */;
int64_t var4 /* : Int */;
int64_t var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline ropes$RopeCharReverseIterator$ns (self) on <self:RopeCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 419);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$pns (self) on <self:RopeCharReverseIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, int64_t p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var4); /* [] on <var1:String>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((int64_t)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$next for (self: RopeCharReverseIterator) */
void core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharReverseIterator */;
int64_t var /* : Int */;
int64_t var2 /* : Int */;
int64_t var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var6 /* : Int */;
val* var_8 /* var : RopeCharReverseIterator */;
int64_t var9 /* : Int */;
int64_t var11 /* : Int */;
int64_t var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
int64_t var18 /* : Int */;
int64_t var20 /* : Int */;
int64_t var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : IndexedIterator[String] */;
val* var32 /* : IndexedIterator[String] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : IndexedIterator[String] */;
val* var37 /* : IndexedIterator[String] */;
val* var38 /* : IndexedIterator[String] */;
val* var40 /* : IndexedIterator[String] */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : IndexedIterator[String] */;
val* var45 /* : IndexedIterator[String] */;
val* var46 /* : nullable Object */;
val* var48 /* : String */;
val* var50 /* : String */;
int64_t var51 /* : Int */;
int64_t var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
int64_t var58 /* : Int */;
var_ = self;
{
{ /* Inline ropes$RopeCharReverseIterator$pns (var_) on <var_:RopeCharReverseIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <var_:RopeCharReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$pns= (var_,var3) on <var_:RopeCharReverseIterator> */
var_->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = var3; /* _pns on <var_:RopeCharReverseIterator> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes$RopeCharReverseIterator$pos (var_8) on <var_8:RopeCharReverseIterator> */
var11 = var_8->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <var_8:RopeCharReverseIterator> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var9 - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$pos= (var_8,var12) on <var_8:RopeCharReverseIterator> */
var_8->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = var12; /* _pos on <var_8:RopeCharReverseIterator> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$pns (self) on <self:RopeCharReverseIterator> */
var22 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var20,0l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var29 = var20 >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs (self) on <self:RopeCharReverseIterator> */
var32 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((short int(*)(val* self))((((int64_t)var30&3)?class_info[((int64_t)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var30); /* is_ok on <var30:IndexedIterator[String]>*/
}
var34 = !var33;
if (var34){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs (self) on <self:RopeCharReverseIterator> */
var37 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
((void(*)(val* self))((((int64_t)var35&3)?class_info[((int64_t)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var35); /* next on <var35:IndexedIterator[String]>*/
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs (self) on <self:RopeCharReverseIterator> */
var40 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = ((short int(*)(val* self))((((int64_t)var38&3)?class_info[((int64_t)var38&3)]:var38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var38); /* is_ok on <var38:IndexedIterator[String]>*/
}
var42 = !var41;
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharReverseIterator$subs (self) on <self:RopeCharReverseIterator> */
var45 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self))((((int64_t)var43&3)?class_info[((int64_t)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var43); /* item on <var43:IndexedIterator[String]>*/
}
{
{ /* Inline ropes$RopeCharReverseIterator$ns= (self,var46) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = var46; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$ns (self) on <self:RopeCharReverseIterator> */
var50 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 419);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((int64_t(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__Text__length]))(var48); /* length on <var48:String>*/
}
{
{ /* Inline kernel$Int$- (var51,1l) on <var51:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var54 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var58 = var51 - 1l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline ropes$RopeCharReverseIterator$pns= (self,var52) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = var52; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL59:(void)0;
}
}
RET_LABEL:;
}
/* method ropes$RopeCharIterator$pns for (self: RopeCharIterator): Int */
int64_t core__ropes___core__ropes__RopeCharIterator___pns(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$pns= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pns_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = p0; /* _pns on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$str for (self: RopeCharIterator): String */
val* core__ropes___core__ropes__RopeCharIterator___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___str].val; /* _str on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 460);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$str= for (self: RopeCharIterator, String) */
void core__ropes___core__ropes__RopeCharIterator___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = p0; /* _str on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$subs for (self: RopeCharIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$subs= for (self: RopeCharIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val = p0; /* _subs on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$max for (self: RopeCharIterator): Int */
int64_t core__ropes___core__ropes__RopeCharIterator___max(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___max].l; /* _max on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$max= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___max_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___max].l = p0; /* _max on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$pos for (self: RopeCharIterator): Int */
int64_t core__ropes___core__ropes__RopeCharIterator___pos(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$pos= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pos_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = p0; /* _pos on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$from for (self: RopeCharIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharIterator___from(val* self, val* p0, int64_t p1) {
val* var_root /* var root: Concat */;
int64_t var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var3 /* : IndexedIterator[String] */;
val* var5 /* : IndexedIterator[String] */;
int64_t var6 /* : Int */;
int64_t var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var10 /* : Int */;
val* var13 /* : IndexedIterator[String] */;
val* var15 /* : IndexedIterator[String] */;
val* var16 /* : nullable Object */;
int64_t var18 /* : Int */;
int64_t var20 /* : Int */;
int64_t var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
int64_t var27 /* : Int */;
{
{ /* Inline kernel$Object$init (self) on <self:RopeCharIterator> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
core__ropes___core__ropes__RopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes$RopeSubstrings$from on <var:RopeSubstrings>*/
}
{
{ /* Inline ropes$RopeCharIterator$subs= (self,var) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val = var; /* _subs on <self:RopeCharIterator> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var5 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((int64_t(*)(val* self))((((int64_t)var3&3)?class_info[((int64_t)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var3); /* index on <var3:IndexedIterator[String]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var10 = var_pos - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pns= (self,var7) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = var7; /* _pns on <self:RopeCharIterator> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pos= (self,var_pos) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = var_pos; /* _pos on <self:RopeCharIterator> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var15 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val*(*)(val* self))((((int64_t)var13&3)?class_info[((int64_t)var13&3)]:var13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var13); /* item on <var13:IndexedIterator[String]>*/
}
{
{ /* Inline ropes$RopeCharIterator$str= (self,var16) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = var16; /* _str on <self:RopeCharIterator> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline ropes$Concat$length (var_root) on <var_root:Concat> */
var20 = var_root->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <var_root:Concat> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var27 = var18 - 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$max= (self,var21) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___max].l = var21; /* _max on <self:RopeCharIterator> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method ropes$RopeCharIterator$item for (self: RopeCharIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
val* var3 /* : String */;
int64_t var4 /* : Int */;
int64_t var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline ropes$RopeCharIterator$str (self) on <self:RopeCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharIterator___str].val; /* _str on <self:RopeCharIterator> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 460);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pns (self) on <self:RopeCharIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, int64_t p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var4); /* [] on <var1:String>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((int64_t)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$is_ok for (self: RopeCharIterator): Bool */
short int core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
int64_t var4 /* : Int */;
int64_t var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
{
{ /* Inline ropes$RopeCharIterator$pos (self) on <self:RopeCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$max (self) on <self:RopeCharIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharIterator___max].l; /* _max on <self:RopeCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var10 = var1 <= var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$index for (self: RopeCharIterator): Int */
int64_t core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
{
{ /* Inline ropes$RopeCharIterator$pos (self) on <self:RopeCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$next for (self: RopeCharIterator) */
void core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharIterator */;
int64_t var /* : Int */;
int64_t var2 /* : Int */;
int64_t var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var6 /* : Int */;
val* var_8 /* var : RopeCharIterator */;
int64_t var9 /* : Int */;
int64_t var11 /* : Int */;
int64_t var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
int64_t var18 /* : Int */;
int64_t var20 /* : Int */;
int64_t var22 /* : Int */;
val* var23 /* : IndexedIterator[String] */;
val* var25 /* : IndexedIterator[String] */;
val* var26 /* : nullable Object */;
int64_t var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : IndexedIterator[String] */;
val* var37 /* : IndexedIterator[String] */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : IndexedIterator[String] */;
val* var42 /* : IndexedIterator[String] */;
val* var43 /* : IndexedIterator[String] */;
val* var45 /* : IndexedIterator[String] */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : IndexedIterator[String] */;
val* var50 /* : IndexedIterator[String] */;
val* var51 /* : nullable Object */;
var_ = self;
{
{ /* Inline ropes$RopeCharIterator$pns (var_) on <var_:RopeCharIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <var_:RopeCharIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pns= (var_,var3) on <var_:RopeCharIterator> */
var_->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = var3; /* _pns on <var_:RopeCharIterator> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes$RopeCharIterator$pos (var_8) on <var_8:RopeCharIterator> */
var11 = var_8->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <var_8:RopeCharIterator> */
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
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var9 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pos= (var_8,var12) on <var_8:RopeCharIterator> */
var_8->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = var12; /* _pos on <var_8:RopeCharIterator> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pns (self) on <self:RopeCharIterator> */
var22 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var25 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))((((int64_t)var23&3)?class_info[((int64_t)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var23); /* item on <var23:IndexedIterator[String]>*/
}
{
var27 = ((int64_t(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__Text__length]))(var26); /* length on <var26:nullable Object(String)>*/
}
{
{ /* Inline kernel$Int$< (var20,var27) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = var20 < var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var37 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((short int(*)(val* self))((((int64_t)var35&3)?class_info[((int64_t)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var35); /* is_ok on <var35:IndexedIterator[String]>*/
}
var39 = !var38;
if (var39){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var42 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
((void(*)(val* self))((((int64_t)var40&3)?class_info[((int64_t)var40&3)]:var40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var40); /* next on <var40:IndexedIterator[String]>*/
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var45 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((short int(*)(val* self))((((int64_t)var43&3)?class_info[((int64_t)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var43); /* is_ok on <var43:IndexedIterator[String]>*/
}
var47 = !var46;
if (var47){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharIterator$subs (self) on <self:RopeCharIterator> */
var50 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val*(*)(val* self))((((int64_t)var48&3)?class_info[((int64_t)var48&3)]:var48->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var48); /* item on <var48:IndexedIterator[String]>*/
}
{
{ /* Inline ropes$RopeCharIterator$str= (self,var51) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = var51; /* _str on <self:RopeCharIterator> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIterator$pns= (self,0l) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = 0l; /* _pns on <self:RopeCharIterator> */
RET_LABEL53:(void)0;
}
}
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$iter for (self: ReverseRopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__ReverseRopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 499);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$iter= for (self: ReverseRopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__ReverseRopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = p0; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$pos for (self: ReverseRopeSubstrings): Int */
int64_t core__ropes___core__ropes__ReverseRopeSubstrings___pos(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$pos= for (self: ReverseRopeSubstrings, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___pos_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = p0; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$str for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 504);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$str= for (self: ReverseRopeSubstrings, FlatString) */
void core__ropes___core__ropes__ReverseRopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = p0; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$from for (self: ReverseRopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___from(val* self, val* p0, int64_t p1) {
val* var_root /* var root: Concat */;
int64_t var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
val* var_rnod /* var rnod: String */;
int64_t var_off /* var off: Int */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : String */;
int64_t var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : String */;
int64_t var12 /* : Int */;
int64_t var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
int64_t var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : RopeCharIteratorPiece */;
val* var23 /* : String */;
val* var24 /* : RopeCharIteratorPiece */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
int64_t var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
int64_t var38 /* : Int */;
{
{ /* Inline kernel$Object$init (self) on <self:ReverseRopeSubstrings> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 0); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 1); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var2 = 0;
} else {
var2 = var_rnod->type->type_table[cltype] == idtype;
}
if (var2){
var3 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 513);
fatal_exit(1);
}
{
var4 = ((int64_t(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__length]))(var3); /* length on <var3:String>*/
}
{
{ /* Inline kernel$Int$>= (var_off,var4) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var10 = var_off >= var4;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var11 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 514);
fatal_exit(1);
}
{
var12 = ((int64_t(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__length]))(var11); /* length on <var11:String>*/
}
{
{ /* Inline kernel$Int$- (var_off,var12) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var19 = var_off - var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_off = var13;
var20 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 515);
fatal_exit(1);
}
var_rnod = var20;
var21 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var21, var_rnod); /* node= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var21, 0); /* ldone= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var21, 1); /* rdone= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var21, var_r); /* prev= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_core__kernel__Object__init]))(var21); /* init on <var21:RopeCharIteratorPiece>*/
}
var_r = var21;
} else {
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_r:RopeCharIteratorPiece> */
RET_LABEL22:(void)0;
}
}
var23 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 519);
fatal_exit(1);
}
var_rnod = var23;
var24 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var24, var_rnod); /* node= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var24, 0); /* ldone= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var24, 1); /* rdone= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var24, var_r); /* prev= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:RopeCharIteratorPiece>*/
}
var_r = var24;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype26 = type_core__FlatString.color;
idtype27 = type_core__FlatString.id;
if(cltype26 >= var_rnod->type->table_size) {
var25 = 0;
} else {
var25 = var_rnod->type->type_table[cltype26] == idtype27;
}
if (unlikely(!var25)) {
var_class_name28 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 523);
fatal_exit(1);
}
{
{ /* Inline ropes$ReverseRopeSubstrings$str= (self,var_rnod) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = var_rnod; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_r:RopeCharIteratorPiece> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline ropes$ReverseRopeSubstrings$iter= (self,var_r) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = var_r; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var34 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_pos - var_off;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline ropes$ReverseRopeSubstrings$pos= (self,var32) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = var32; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL39:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$item for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
{
{ /* Inline ropes$ReverseRopeSubstrings$str (self) on <self:ReverseRopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 504);
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
/* method ropes$ReverseRopeSubstrings$index for (self: ReverseRopeSubstrings): Int */
int64_t core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
{
{ /* Inline ropes$ReverseRopeSubstrings$pos (self) on <self:ReverseRopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$is_ok for (self: ReverseRopeSubstrings): Bool */
short int core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline ropes$ReverseRopeSubstrings$pos (self) on <self:ReverseRopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var1 >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$next for (self: ReverseRopeSubstrings) */
void core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
int64_t var /* : Int */;
int64_t var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : RopeCharIteratorPiece */;
val* var9 /* : RopeCharIteratorPiece */;
val* var10 /* : nullable RopeCharIteratorPiece */;
val* var12 /* : nullable RopeCharIteratorPiece */;
val* var_curr /* var curr: nullable RopeCharIteratorPiece */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var_currit /* var currit: String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : String */;
val* var23 /* : String */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var_ /* var : ReverseRopeSubstrings */;
int64_t var33 /* : Int */;
int64_t var35 /* : Int */;
val* var36 /* : FlatString */;
val* var38 /* : FlatString */;
int64_t var39 /* : Int */;
int64_t var41 /* : Int */;
int64_t var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
int64_t var48 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var56 /* : RopeCharIteratorPiece */;
val* var57 /* : String */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var63 /* : RopeCharIteratorPiece */;
val* var64 /* : String */;
val* var65 /* : nullable RopeCharIteratorPiece */;
val* var67 /* : nullable RopeCharIteratorPiece */;
int64_t var69 /* : Int */;
int64_t var71 /* : Int */;
{
{ /* Inline ropes$ReverseRopeSubstrings$pos (self) on <self:ReverseRopeSubstrings> */
var2 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$ReverseRopeSubstrings$iter (self) on <self:ReverseRopeSubstrings> */
var9 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 499);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIteratorPiece$prev (var7) on <var7:RopeCharIteratorPiece> */
var12 = var7->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var7:RopeCharIteratorPiece> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_curr = var10;
if (unlikely(var_curr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 541);
fatal_exit(1);
}
{
{ /* Inline ropes$RopeCharIteratorPiece$node (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var15 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_currit = var13;
for(;;) {
if (var_curr == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_curr,((val*)NULL)) on <var_curr:nullable RopeCharIteratorPiece> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_curr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_curr, var_other); /* == on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline ropes$RopeCharIteratorPiece$node (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var23 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_currit = var21;
/* <var_currit:String> isa Concat */
cltype25 = type_core__ropes__Concat.color;
idtype26 = type_core__ropes__Concat.id;
if(cltype25 >= var_currit->type->table_size) {
var24 = 0;
} else {
var24 = var_currit->type->type_table[cltype25] == idtype26;
}
var27 = !var24;
if (var27){
/* <var_currit:String> isa FlatString */
cltype29 = type_core__FlatString.color;
idtype30 = type_core__FlatString.id;
if(cltype29 >= var_currit->type->table_size) {
var28 = 0;
} else {
var28 = var_currit->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name31 = var_currit == NULL ? "null" : var_currit->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 545);
fatal_exit(1);
}
{
{ /* Inline ropes$ReverseRopeSubstrings$str= (self,var_currit) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = var_currit; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL32:(void)0;
}
}
var_ = self;
{
{ /* Inline ropes$ReverseRopeSubstrings$pos (var_) on <var_:ReverseRopeSubstrings> */
var35 = var_->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <var_:ReverseRopeSubstrings> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline ropes$ReverseRopeSubstrings$str (self) on <self:ReverseRopeSubstrings> */
var38 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 504);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_text$FlatText$length (var36) on <var36:FlatString> */
var41 = var36->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var36:FlatString> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var33,var39) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var44 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var33 - var39;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline ropes$ReverseRopeSubstrings$pos= (var_,var42) on <var_:ReverseRopeSubstrings> */
var_->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = var42; /* _pos on <var_:ReverseRopeSubstrings> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline ropes$ReverseRopeSubstrings$iter= (self,var_curr) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = var_curr; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL50:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var53 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = !var51;
if (var54){
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone= (var_curr,1) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL55:(void)0;
}
}
var56 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var57 = var_currit->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_currit:String(Concat)> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 552);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var56, var57); /* node= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var56, 0); /* ldone= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var56, 0); /* rdone= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var56, var_curr); /* prev= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_core__kernel__Object__init]))(var56); /* init on <var56:RopeCharIteratorPiece>*/
}
var_curr = var56;
goto BREAK_label;
} else {
}
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var60 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = !var58;
if (var61){
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone= (var_curr,1) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL62:(void)0;
}
}
var63 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var64 = var_currit->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_currit:String(Concat)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 557);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var63, var64); /* node= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var63, 0); /* ldone= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var63, 0); /* rdone= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var63, var_curr); /* prev= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var63->class->vft[COLOR_core__kernel__Object__init]))(var63); /* init on <var63:RopeCharIteratorPiece>*/
}
var_curr = var63;
goto BREAK_label;
} else {
}
{
{ /* Inline ropes$RopeCharIteratorPiece$prev (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var67 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_curr = var65;
} else {
goto BREAK_label68;
}
BREAK_label: (void)0;
}
BREAK_label68: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var71 = -1l;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline ropes$ReverseRopeSubstrings$pos= (self,var69) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = var69; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL72:(void)0;
}
}
RET_LABEL:;
}
/* method ropes$RopeSubstrings$iter for (self: RopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 570);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$iter= for (self: RopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = p0; /* _iter on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$pos for (self: RopeSubstrings): Int */
int64_t core__ropes___core__ropes__RopeSubstrings___pos(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$pos= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___pos_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = p0; /* _pos on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$max for (self: RopeSubstrings): Int */
int64_t core__ropes___core__ropes__RopeSubstrings___max(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$max= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___max_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___max].l = p0; /* _max on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$str for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 577);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$str= for (self: RopeSubstrings, FlatString) */
void core__ropes___core__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$from for (self: RopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__RopeSubstrings___from(val* self, val* p0, int64_t p1) {
val* var_root /* var root: Concat */;
int64_t var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
int64_t var2 /* : Int */;
int64_t var4 /* : Int */;
int64_t var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var8 /* : Int */;
val* var_rnod /* var rnod: String */;
int64_t var_off /* var off: Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : String */;
int64_t var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var23 /* : String */;
int64_t var24 /* : Int */;
int64_t var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
int64_t var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : RopeCharIteratorPiece */;
val* var34 /* : String */;
val* var35 /* : RopeCharIteratorPiece */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
int64_t var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
int64_t var49 /* : Int */;
{
{ /* Inline kernel$Object$init (self) on <self:RopeSubstrings> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
{
{ /* Inline ropes$Concat$length (var_root) on <var_root:Concat> */
var4 = var_root->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <var_root:Concat> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var2 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$max= (self,var5) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___max].l = var5; /* _max on <self:RopeSubstrings> */
RET_LABEL9:(void)0;
}
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype11 = type_core__ropes__Concat.color;
idtype12 = type_core__ropes__Concat.id;
if(cltype11 >= var_rnod->type->table_size) {
var10 = 0;
} else {
var10 = var_rnod->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 587);
fatal_exit(1);
}
{
var14 = ((int64_t(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__length]))(var13); /* length on <var13:String>*/
}
{
{ /* Inline kernel$Int$>= (var_off,var14) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var_off >= var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_r:RopeCharIteratorPiece> */
RET_LABEL22:(void)0;
}
}
var23 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 589);
fatal_exit(1);
}
{
var24 = ((int64_t(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__Text__length]))(var23); /* length on <var23:String>*/
}
{
{ /* Inline kernel$Int$- (var_off,var24) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_off - var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_off = var25;
var32 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 590);
fatal_exit(1);
}
var_rnod = var32;
var33 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var33, var_rnod); /* node= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var33, 1); /* ldone= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var33, 0); /* rdone= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var33, var_r); /* prev= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:RopeCharIteratorPiece>*/
}
var_r = var33;
} else {
var34 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 593);
fatal_exit(1);
}
var_rnod = var34;
var35 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var35, var_rnod); /* node= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var35, 1); /* ldone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var35, 0); /* rdone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var35, var_r); /* prev= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:RopeCharIteratorPiece>*/
}
var_r = var35;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype37 = type_core__FlatString.color;
idtype38 = type_core__FlatString.id;
if(cltype37 >= var_rnod->type->table_size) {
var36 = 0;
} else {
var36 = var_rnod->type->type_table[cltype37] == idtype38;
}
if (unlikely(!var36)) {
var_class_name39 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 597);
fatal_exit(1);
}
{
{ /* Inline ropes$RopeSubstrings$str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL40:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_r:RopeCharIteratorPiece> */
RET_LABEL41:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$iter= (self,var_r) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = var_r; /* _iter on <self:RopeSubstrings> */
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var45 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var_pos - var_off;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$pos= (self,var43) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = var43; /* _pos on <self:RopeSubstrings> */
RET_LABEL50:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes$RopeSubstrings$item for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
{
{ /* Inline ropes$RopeSubstrings$str (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 577);
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
/* method ropes$RopeSubstrings$is_ok for (self: RopeSubstrings): Bool */
short int core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
int64_t var4 /* : Int */;
int64_t var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
{
{ /* Inline ropes$RopeSubstrings$pos (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$max (self) on <self:RopeSubstrings> */
var6 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var10 = var1 <= var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$index for (self: RopeSubstrings): Int */
int64_t core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
{
{ /* Inline ropes$RopeSubstrings$pos (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$next for (self: RopeSubstrings) */
void core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeSubstrings */;
int64_t var /* : Int */;
int64_t var2 /* : Int */;
val* var3 /* : FlatString */;
val* var5 /* : FlatString */;
int64_t var6 /* : Int */;
int64_t var8 /* : Int */;
int64_t var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var12 /* : Int */;
int64_t var14 /* : Int */;
int64_t var16 /* : Int */;
int64_t var17 /* : Int */;
int64_t var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
val* var27 /* : RopeCharIteratorPiece */;
val* var29 /* : RopeCharIteratorPiece */;
val* var30 /* : nullable RopeCharIteratorPiece */;
val* var32 /* : nullable RopeCharIteratorPiece */;
val* var_it /* var it: RopeCharIteratorPiece */;
val* var33 /* : String */;
val* var35 /* : String */;
val* var_rnod /* var rnod: String */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
short int var39 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : String */;
val* var54 /* : RopeCharIteratorPiece */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : String */;
val* var61 /* : RopeCharIteratorPiece */;
val* var62 /* : nullable RopeCharIteratorPiece */;
val* var64 /* : nullable RopeCharIteratorPiece */;
val* var65 /* : String */;
val* var67 /* : String */;
var_ = self;
{
{ /* Inline ropes$RopeSubstrings$pos (var_) on <var_:RopeSubstrings> */
var2 = var_->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <var_:RopeSubstrings> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$str (self) on <self:RopeSubstrings> */
var5 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 577);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_text$FlatText$length (var3) on <var3:FlatString> */
var8 = var3->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var3:FlatString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var,var6) on <var:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var + var6;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$pos= (var_,var9) on <var_:RopeSubstrings> */
var_->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = var9; /* _pos on <var_:RopeSubstrings> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$pos (self) on <self:RopeSubstrings> */
var16 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$max (self) on <self:RopeSubstrings> */
var19 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var26 = var14 > var17;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes$RopeSubstrings$iter (self) on <self:RopeSubstrings> */
var29 = self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 570);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIteratorPiece$prev (var27) on <var27:RopeCharIteratorPiece> */
var32 = var27->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var27:RopeCharIteratorPiece> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 615);
fatal_exit(1);
}
var_it = var30;
{
{ /* Inline ropes$RopeCharIteratorPiece$node (var_it) on <var_it:RopeCharIteratorPiece> */
var35 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_it:RopeCharIteratorPiece> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_rnod = var33;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype37 = type_core__ropes__Concat.color;
idtype38 = type_core__ropes__Concat.id;
if(cltype37 >= var_rnod->type->table_size) {
var36 = 0;
} else {
var36 = var_rnod->type->type_table[cltype37] == idtype38;
}
var39 = !var36;
if (var39){
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone= (var_it,1) on <var_it:RopeCharIteratorPiece> */
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_it:RopeCharIteratorPiece> */
RET_LABEL40:(void)0;
}
}
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone= (var_it,1) on <var_it:RopeCharIteratorPiece> */
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_it:RopeCharIteratorPiece> */
RET_LABEL41:(void)0;
}
}
/* <var_rnod:String> isa FlatString */
cltype43 = type_core__FlatString.color;
idtype44 = type_core__FlatString.id;
if(cltype43 >= var_rnod->type->table_size) {
var42 = 0;
} else {
var42 = var_rnod->type->type_table[cltype43] == idtype44;
}
if (unlikely(!var42)) {
var_class_name45 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 621);
fatal_exit(1);
}
{
{ /* Inline ropes$RopeSubstrings$str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline ropes$RopeSubstrings$iter= (self,var_it) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = var_it; /* _iter on <self:RopeSubstrings> */
RET_LABEL47:(void)0;
}
}
goto BREAK_label;
} else {
}
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone (var_it) on <var_it:RopeCharIteratorPiece> */
var50 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <var_it:RopeCharIteratorPiece> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = !var48;
if (var51){
var52 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 626);
fatal_exit(1);
}
var_rnod = var52;
{
{ /* Inline ropes$RopeCharIteratorPiece$ldone= (var_it,1) on <var_it:RopeCharIteratorPiece> */
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_it:RopeCharIteratorPiece> */
RET_LABEL53:(void)0;
}
}
var54 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var54, var_rnod); /* node= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var54, 0); /* ldone= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var54, 0); /* rdone= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var54, var_it); /* prev= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:RopeCharIteratorPiece>*/
}
var_it = var54;
} else {
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone (var_it) on <var_it:RopeCharIteratorPiece> */
var57 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <var_it:RopeCharIteratorPiece> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var58 = !var55;
if (var58){
{
{ /* Inline ropes$RopeCharIteratorPiece$rdone= (var_it,1) on <var_it:RopeCharIteratorPiece> */
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_it:RopeCharIteratorPiece> */
RET_LABEL59:(void)0;
}
}
var60 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 631);
fatal_exit(1);
}
var_rnod = var60;
var61 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var61, var_rnod); /* node= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var61, 0); /* ldone= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var61, 0); /* rdone= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var61, var_it); /* prev= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:RopeCharIteratorPiece>*/
}
var_it = var61;
} else {
{
{ /* Inline ropes$RopeCharIteratorPiece$prev (var_it) on <var_it:RopeCharIteratorPiece> */
var64 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_it:RopeCharIteratorPiece> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 634);
fatal_exit(1);
}
var_it = var62;
{
{ /* Inline ropes$RopeCharIteratorPiece$node (var_it) on <var_it:RopeCharIteratorPiece> */
var67 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_it:RopeCharIteratorPiece> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_rnod = var65;
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes$RopeChars$[] for (self: RopeChars, Int): Char */
uint32_t core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, int64_t p0) {
uint32_t var /* : Char */;
int64_t var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_i = p0;
{
{ /* Inline abstract_text$StringCharView$target (self) on <self:RopeChars> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1319);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d(var1, var_i);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeChars$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, int64_t p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((int64_t)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeChars$iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__iterator_from(val* self, int64_t p0) {
val* var /* : IndexedIterator[Char] */;
int64_t var_i /* var i: Int */;
val* var1 /* : RopeCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharIterator(&type_core__ropes__RopeCharIterator);
{
{ /* Inline abstract_text$StringCharView$target (self) on <self:RopeChars> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1319);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core__ropes___core__ropes__RopeCharIterator___from(var1, var2, var_i); /* Direct call ropes$RopeCharIterator$from on <var1:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeChars$reverse_iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, int64_t p0) {
val* var /* : IndexedIterator[Char] */;
int64_t var_i /* var i: Int */;
val* var1 /* : RopeCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharReverseIterator(&type_core__ropes__RopeCharReverseIterator);
{
{ /* Inline abstract_text$StringCharView$target (self) on <self:RopeChars> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1319);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core__ropes___core__ropes__RopeCharReverseIterator___from(var1, var2, var_i); /* Direct call ropes$RopeCharReverseIterator$from on <var1:RopeCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Sys$maxlen for (self: Sys): Int */
int64_t core__ropes___Sys___maxlen(val* self) {
int64_t var /* : Int */;
var = 512l;
goto RET_LABEL;
RET_LABEL:;
return var;
}

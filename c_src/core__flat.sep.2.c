#include "core__flat.sep.0.h"
/* method flat$FlatBufferCharIterator$init for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
val* var2 /* : FlatBuffer */;
int64_t var3 /* : Int */;
int64_t var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharIterator>*/
}
{
{ /* Inline flat$FlatBufferCharIterator$target (self) on <self:FlatBufferCharIterator> */
var2 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatBuffer> */
{
{ /* Inline kernel$Int$- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$max= (self,var4) on <self:FlatBufferCharIterator> */
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = var4; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$index for (self: FlatBufferCharIterator): Int */
int64_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$is_ok for (self: FlatBufferCharIterator): Bool */
short int core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline flat$FlatBufferCharIterator$curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$max (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
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
/* method flat$FlatBufferCharIterator$item for (self: FlatBufferCharIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
int64_t var4 /* : Int */;
int64_t var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat$FlatBufferCharIterator$target (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((int64_t)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$next for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharIterator */;
int64_t var /* : Int */;
int64_t var2 /* : Int */;
int64_t var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var6 /* : Int */;
var_ = self;
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (var_) on <var_:FlatBufferCharIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferCharIterator> */
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
{ /* Inline flat$FlatBufferCharIterator$curr_pos= (var_,var3) on <var_:FlatBufferCharIterator> */
var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferCharIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat$NativeString$to_s for (self: NativeString): String */
val* core__flat___NativeString___core__abstract_text__Object__to_s(char* self) {
val* var /* : String */;
int64_t var1 /* : Int */;
val* var2 /* : String */;
{
var1 = core___core__NativeString___cstring_length(self);
}
{
var2 = core__flat___NativeString___to_s_with_length(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$to_s for (self: Object): String */
val* VIRTUAL_core__flat___NativeString___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_core__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = core__flat___NativeString___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat$NativeString$to_s_with_length for (self: NativeString, Int): String */
val* core__flat___NativeString___to_s_with_length(char* self, int64_t p0) {
val* var /* : String */;
int64_t var_length /* var length: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : FlatString */;
var_length = p0;
{
{ /* Inline kernel$Int$>= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_length >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1318);
fatal_exit(1);
}
{
var5 = core__flat___NativeString___clean_utf8(self, var_length);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$to_s_full for (self: NativeString, Int, Int): String */
val* core__flat___NativeString___to_s_full(char* self, int64_t p0, int64_t p1) {
val* var /* : String */;
int64_t var_byte_length /* var byte_length: Int */;
int64_t var_unilen /* var unilen: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : FlatString */;
val* var2 /* : FlatString */;
val* var3 /* : FlatString */;
var_byte_length = p0;
var_unilen = p1;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__FlatString(&type_core__FlatString);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = core___core__FlatString___full(var1, self, var_byte_length, 0l, var_unilen);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$to_s_unsafe for (self: NativeString, nullable Int): String */
val* core__flat___NativeString___to_s_unsafe(char* self, val* p0) {
val* var /* : String */;
val* var_len /* var len: nullable Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int64_t var5 /* : Int */;
val* var6 /* : nullable Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var7 /* : FlatString */;
val* var8 /* : FlatString */;
val* var9 /* : FlatString */;
int64_t var10 /* : Int */;
var_len = p0;
if (var_len == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_len,((val*)NULL)) on <var_len:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
var5 = core___core__NativeString___cstring_length(self);
}
var6 = (val*)(var5<<2|1);
var_len = var6;
} else {
}
if (likely(varoncenew_guard)) {
var7 = varoncenew;
} else {
var8 = NEW_core__FlatString(&type_core__FlatString);
var7 = var8;
varoncenew = var7;
varoncenew_guard = 1;
}
{
var10 = (int64_t)(var_len)>>2;
var9 = core___core__FlatString___with_infos(var7, self, var10, 0l);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$to_s_with_copy for (self: NativeString): String */
val* core__flat___NativeString___to_s_with_copy(char* self) {
val* var /* : String */;
int64_t var1 /* : Int */;
val* var2 /* : String */;
{
var1 = core___core__NativeString___cstring_length(self);
}
{
var2 = core__flat___NativeString___to_s_with_copy_and_length(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$to_s_with_copy_and_length for (self: NativeString, Int): String */
val* core__flat___NativeString___to_s_with_copy_and_length(char* self, int64_t p0) {
val* var /* : String */;
int64_t var_length /* var length: Int */;
val* var1 /* : FlatString */;
val* var_r /* var r: FlatString */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var9 /* : NativeString */;
char* var10 /* : NativeString */;
int64_t var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
static val* varoncenew19;
static int varoncenew19_guard;
val* var20 /* : FlatString */;
val* var21 /* : FlatString */;
val* var22 /* : FlatString */;
val* var_str /* var str: FlatString */;
var_length = p0;
{
var1 = core__flat___NativeString___clean_utf8(self, var_length);
}
var_r = var1;
{
{ /* Inline abstract_text$FlatText$items (var_r) on <var_r:FlatString> */
var4 = var_r->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_r:FlatString> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline native$NativeString$!= (var2,self) on <var2:NativeString> */
var7 = var2 == self;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_r;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var9 = varoncenew;
} else {
var10 = NULL/*special!*/;
var9 = var10;
varoncenew = var9;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_length + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var9,var11) on <var9:NativeString> */
var17 = (char*)nit_alloc(var11);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_new_self = var15;
{
{ /* Inline native$NativeString$copy_to (self,var_new_self,var_length,0l,0l) on <self:NativeString> */
memmove(var_new_self+0l,self+0l,var_length);
RET_LABEL18:(void)0;
}
}
if (likely(varoncenew19_guard)) {
var20 = varoncenew19;
} else {
var21 = NEW_core__FlatString(&type_core__FlatString);
var20 = var21;
varoncenew19 = var20;
varoncenew19_guard = 1;
}
{
var22 = core___core__FlatString___with_infos(var20, var_new_self, var_length, 0l);
}
var_str = var22;
{
{ /* Inline native$NativeString$[]= (var_new_self,var_length,((unsigned char)0x00)) on <var_new_self:NativeString> */
var_new_self[var_length]=(unsigned char)((unsigned char)0x00);
RET_LABEL23:(void)0;
}
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$clean_utf8 for (self: NativeString, Int): FlatString */
val* core__flat___NativeString___clean_utf8(char* self, int64_t p0) {
val* var /* : FlatString */;
int64_t var_len /* var len: Int */;
val* var_replacements /* var replacements: nullable Array[Int] */;
int64_t var_end_length /* var end_length: Int */;
int64_t var_pos /* var pos: Int */;
int64_t var_chr_ln /* var chr_ln: Int */;
int64_t var_rem /* var rem: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
int64_t var12 /* : Int */;
int64_t var14 /* : Int */;
int64_t var_i /* var i: Int */;
int64_t var15 /* : Int */;
int64_t var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int64_t var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
int64_t var28 /* : Int */;
int64_t var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
int64_t var35 /* : Int */;
int64_t var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
int64_t var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
unsigned char var47 /* : Byte */;
unsigned char var49 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var50 /* : Byte */;
unsigned char var52 /* : Byte */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int64_t var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
int64_t var62 /* : Int */;
int64_t var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
int64_t var69 /* : Int */;
int64_t var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
int64_t var76 /* : Int */;
int64_t var78 /* : Int */;
int64_t var_nxst /* var nxst: Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
unsigned char var82 /* : Byte */;
unsigned char var84 /* : Byte */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var_ok_st /* var ok_st: Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
unsigned char var91 /* : Byte */;
unsigned char var93 /* : Byte */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
unsigned char var100 /* : Byte */;
unsigned char var102 /* : Byte */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
unsigned char var106 /* : Byte */;
unsigned char var108 /* : Byte */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : Array[Int] */;
val* var116 /* : nullable Object */;
int64_t var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
int64_t var123 /* : Int */;
int64_t var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
int64_t var130 /* : Int */;
int64_t var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
int64_t var137 /* : Int */;
int64_t var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
int64_t var144 /* : Int */;
uint32_t var145 /* : Char */;
uint32_t var_c /* var c: Char */;
int64_t var146 /* : Int */;
int64_t var148 /* : Int */;
int64_t var_cp /* var cp: Int */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
short int var159 /* : Bool */;
short int var_ /* var : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
short int var166 /* : Bool */;
short int var_ok_c /* var ok_c: Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
short int var177 /* : Bool */;
short int var_178 /* var : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
short int var196 /* : Bool */;
short int var_197 /* var : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var_208 /* var : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
const char* var_class_name215;
short int var216 /* : Bool */;
short int var_217 /* var : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
const char* var_class_name223;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var_226 /* var : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var_231 /* var : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
short int var243 /* : Bool */;
short int var_244 /* var : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : Array[Int] */;
val* var256 /* : nullable Object */;
int64_t var257 /* : Int */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
int64_t var263 /* : Int */;
int64_t var264 /* : Int */;
short int var266 /* : Bool */;
int cltype267;
int idtype268;
const char* var_class_name269;
int64_t var270 /* : Int */;
int64_t var271 /* : Int */;
short int var273 /* : Bool */;
int cltype274;
int idtype275;
const char* var_class_name276;
int64_t var277 /* : Int */;
int64_t var278 /* : Int */;
short int var280 /* : Bool */;
int cltype281;
int idtype282;
const char* var_class_name283;
int64_t var284 /* : Int */;
int64_t var285 /* : Int */;
int64_t var_clen /* var clen: Int */;
int64_t var286 /* : Int */;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
const char* var_class_name291;
int64_t var292 /* : Int */;
int64_t var293 /* : Int */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
const char* var_class_name298;
int64_t var299 /* : Int */;
int64_t var300 /* : Int */;
short int var302 /* : Bool */;
int cltype303;
int idtype304;
const char* var_class_name305;
int64_t var306 /* : Int */;
char* var_ret /* var ret: NativeString */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var311 /* : NativeString */;
char* var312 /* : NativeString */;
char* var313 /* : NativeString */;
char* var315 /* : NativeString */;
int64_t var_old_repl /* var old_repl: Int */;
int64_t var_off /* var off: Int */;
val* var_repls /* var repls: Array[Int] */;
val* var316 /* : nullable NativeArray[nullable Object] */;
val* var318 /* : nullable NativeArray[nullable Object] */;
val* var_r /* var r: NativeArray[Int] */;
int64_t var319 /* : Int */;
int64_t var321 /* : Int */;
int64_t var_imax /* var imax: Int */;
int64_t var_i322 /* var i: Int */;
int64_t var_323 /* var : Int */;
short int var324 /* : Bool */;
short int var326 /* : Bool */;
int cltype327;
int idtype328;
const char* var_class_name329;
short int var330 /* : Bool */;
val* var332 /* : nullable Object */;
val* var334 /* : Object */;
int64_t var335 /* : Int */;
int64_t var_repl_pos /* var repl_pos: Int */;
int64_t var336 /* : Int */;
short int var338 /* : Bool */;
int cltype339;
int idtype340;
const char* var_class_name341;
int64_t var342 /* : Int */;
int64_t var_chkln /* var chkln: Int */;
int64_t var344 /* : Int */;
short int var346 /* : Bool */;
int cltype347;
int idtype348;
const char* var_class_name349;
int64_t var350 /* : Int */;
int64_t var352 /* : Int */;
short int var354 /* : Bool */;
int cltype355;
int idtype356;
const char* var_class_name357;
int64_t var358 /* : Int */;
int64_t var360 /* : Int */;
short int var362 /* : Bool */;
int cltype363;
int idtype364;
const char* var_class_name365;
int64_t var366 /* : Int */;
int64_t var368 /* : Int */;
short int var370 /* : Bool */;
int cltype371;
int idtype372;
const char* var_class_name373;
int64_t var374 /* : Int */;
int64_t var375 /* : Int */;
short int var377 /* : Bool */;
int cltype378;
int idtype379;
const char* var_class_name380;
int64_t var381 /* : Int */;
int64_t var382 /* : Int */;
int64_t var383 /* : Int */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
const char* var_class_name388;
int64_t var389 /* : Int */;
static val* varoncenew391;
static int varoncenew391_guard;
val* var392 /* : FlatString */;
val* var393 /* : FlatString */;
val* var394 /* : FlatString */;
var_len = p0;
var_replacements = ((val*)NULL);
var_end_length = var_len;
var_pos = 0l;
var_chr_ln = 0l;
var_rem = var_len;
for(;;) {
{
{ /* Inline kernel$Int$> (var_rem,0l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var4 = var_rem > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
for(;;) {
{
{ /* Inline kernel$Int$>= (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_rem >= 4l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline native$NativeString$fetch_4_chars (self,var_pos) on <self:NativeString> */
var14 = (int64_t)*((uint32_t*)(self + var_pos));
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
{
{ /* Inline math$Int$& (var_i,2155905152l) on <var_i:Int> */
var17 = var_i & 2155905152l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var15,0l) on <var15:Int> */
var20 = var15 == 0l;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,4l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var24 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_pos + 4l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_pos = var22;
{
{ /* Inline kernel$Int$+ (var_chr_ln,4l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var31 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_chr_ln + 4l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_chr_ln = var29;
{
{ /* Inline kernel$Int$- (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var38 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_rem - 4l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_rem = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_rem,0l) on <var_rem:Int> */
var45 = var_rem == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
goto BREAK_label46;
} else {
}
{
{ /* Inline native$NativeString$[] (self,var_pos) on <self:NativeString> */
var49 = (unsigned char)((int)self[var_pos]);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_b = var47;
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var52 = var_b & ((unsigned char)0x80);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var50,((unsigned char)0x00)) on <var50:Byte> */
var55 = var50 == ((unsigned char)0x00);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_pos + 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_pos = var56;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var_chr_ln + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_chr_ln = var63;
{
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var76 = var_rem - 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_rem = var70;
goto BREAK_label77;
} else {
}
{
var78 = core___core__NativeString___length_of_char_at(self, var_pos);
}
var_nxst = var78;
{
{ /* Inline kernel$Int$== (var_nxst,1l) on <var_nxst:Int> */
var81 = var_nxst == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var84 = var_b & ((unsigned char)0x80);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var82,((unsigned char)0x00)) on <var82:Byte> */
var87 = var82 == ((unsigned char)0x00);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ok_st = var85;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,2l) on <var_nxst:Int> */
var90 = var_nxst == 2l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xe0)) on <var_b:Byte> */
var93 = var_b & ((unsigned char)0xe0);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var91,((unsigned char)0xc0)) on <var91:Byte> */
var96 = var91 == ((unsigned char)0xc0);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_ok_st = var94;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,3l) on <var_nxst:Int> */
var99 = var_nxst == 3l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xf0)) on <var_b:Byte> */
var102 = var_b & ((unsigned char)0xf0);
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var100,((unsigned char)0xe0)) on <var100:Byte> */
var105 = var100 == ((unsigned char)0xe0);
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_ok_st = var103;
} else {
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xf8)) on <var_b:Byte> */
var108 = var_b & ((unsigned char)0xf8);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var106,((unsigned char)0xf0)) on <var106:Byte> */
var111 = var106 == ((unsigned char)0xf0);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var_ok_st = var109;
}
}
}
var112 = !var_ok_st;
if (var112){
if (var_replacements == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
var114 = core___core__Array___core__kernel__Object___61d_61d(var_replacements, ((val*)NULL));
var113 = var114;
}
if (var113){
var115 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var115); /* Direct call array$Array$init on <var115:Array[Int]>*/
}
var_replacements = var115;
} else {
}
{
var116 = (val*)(var_pos<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_replacements, var116); /* Direct call array$Array$add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel$Int$+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var119 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_end_length + 2l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_end_length = var117;
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var126 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var130 = var_pos + 1l;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var_pos = var124;
{
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var137 = var_rem - 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_rem = var131;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var140 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var144 = var_chr_ln + 1l;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var_chr_ln = var138;
goto BREAK_label77;
} else {
}
{
var145 = core___core__NativeString___char_at(self, var_pos);
}
var_c = var145;
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var148 = (int64_t)var_c;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_cp = var146;
{
{ /* Inline kernel$Int$== (var_nxst,1l) on <var_nxst:Int> */
var151 = var_nxst == 1l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
if (var149){
{
{ /* Inline kernel$Int$>= (var_cp,0l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var155 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var159 = var_cp >= 0l;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_ = var153;
if (var153){
{
{ /* Inline kernel$Int$<= (var_cp,127l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <127l:Int> isa OTHER */
/* <127l:Int> isa OTHER */
var162 = 1; /* easy <127l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var166 = var_cp <= 127l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var152 = var160;
} else {
var152 = var_;
}
var_ok_c = var152;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,2l) on <var_nxst:Int> */
var169 = var_nxst == 2l;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
{ /* Inline kernel$Int$>= (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var173 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var177 = var_cp >= 128l;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var_178 = var171;
if (var171){
{
{ /* Inline kernel$Int$<= (var_cp,2047l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var181 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var185 = var_cp <= 2047l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var170 = var179;
} else {
var170 = var_178;
}
var_ok_c = var170;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,3l) on <var_nxst:Int> */
var188 = var_nxst == 3l;
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
if (var186){
{
{ /* Inline kernel$Int$>= (var_cp,2048l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2048l:Int> isa OTHER */
/* <2048l:Int> isa OTHER */
var192 = 1; /* easy <2048l:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var196 = var_cp >= 2048l;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_197 = var190;
if (var190){
{
{ /* Inline kernel$Int$<= (var_cp,65535l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var200 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var204 = var_cp <= 65535l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
var189 = var198;
} else {
var189 = var_197;
}
var_ok_c = var189;
var_208 = var_ok_c;
if (var_ok_c){
{
{ /* Inline kernel$Int$>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var212 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var212)) {
var_class_name215 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name215);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var216 = var_cp >= 55296l;
var210 = var216;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var_217 = var210;
if (var210){
{
{ /* Inline kernel$Int$<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var220 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var220)) {
var_class_name223 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name223);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var224 = var_cp <= 57343l;
var218 = var224;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
}
var209 = var218;
} else {
var209 = var_217;
}
var225 = !var209;
var207 = var225;
} else {
var207 = var_208;
}
var_226 = var207;
if (var207){
{
{ /* Inline kernel$Int$!= (var_cp,65534l) on <var_cp:Int> */
var229 = var_cp == 65534l;
var230 = !var229;
var227 = var230;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var206 = var227;
} else {
var206 = var_226;
}
var_231 = var206;
if (var206){
{
{ /* Inline kernel$Int$!= (var_cp,65535l) on <var_cp:Int> */
var234 = var_cp == 65535l;
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var205 = var232;
} else {
var205 = var_231;
}
var_ok_c = var205;
} else {
{
{ /* Inline kernel$Int$>= (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var239 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var243 = var_cp >= 65536l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_244 = var237;
if (var237){
{
{ /* Inline kernel$Int$<= (var_cp,1114111l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var247 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var247)) {
var_class_name250 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var251 = var_cp <= 1114111l;
var245 = var251;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var236 = var245;
} else {
var236 = var_244;
}
var_ok_c = var236;
}
}
}
var252 = !var_ok_c;
if (var252){
if (var_replacements == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
var254 = core___core__Array___core__kernel__Object___61d_61d(var_replacements, ((val*)NULL));
var253 = var254;
}
if (var253){
var255 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var255); /* Direct call array$Array$init on <var255:Array[Int]>*/
}
var_replacements = var255;
} else {
}
{
var256 = (val*)(var_pos<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_replacements, var256); /* Direct call array$Array$add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel$Int$+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var259 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var259)) {
var_class_name262 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var263 = var_end_length + 2l;
var257 = var263;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
var_end_length = var257;
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var266 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var266)) {
var_class_name269 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name269);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var270 = var_pos + 1l;
var264 = var270;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var_pos = var264;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var273 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var273)) {
var_class_name276 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name276);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var277 = var_chr_ln + 1l;
var271 = var277;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var_chr_ln = var271;
{
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var280 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var280)) {
var_class_name283 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name283);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var284 = var_rem - 1l;
var278 = var284;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
}
var_rem = var278;
goto BREAK_label77;
} else {
}
{
var285 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var285;
{
{ /* Inline kernel$Int$+ (var_pos,var_clen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var288 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var288)) {
var_class_name291 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name291);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var292 = var_pos + var_clen;
var286 = var292;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var_pos = var286;
{
{ /* Inline kernel$Int$- (var_rem,var_clen) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var295 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var295)) {
var_class_name298 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name298);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var299 = var_rem - var_clen;
var293 = var299;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
}
var_rem = var293;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var302 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var302)) {
var_class_name305 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name305);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var306 = var_chr_ln + 1l;
var300 = var306;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var_chr_ln = var300;
} else {
goto BREAK_label46;
}
BREAK_label77: (void)0;
}
BREAK_label46: (void)0;
var_ret = self;
{
{ /* Inline kernel$Int$!= (var_end_length,var_len) on <var_end_length:Int> */
var309 = var_end_length == var_len;
var310 = !var309;
var307 = var310;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
}
if (var307){
if (likely(varoncenew_guard)) {
var311 = varoncenew;
} else {
var312 = NULL/*special!*/;
var311 = var312;
varoncenew = var311;
varoncenew_guard = 1;
}
{
{ /* Inline native$NativeString$new (var311,var_end_length) on <var311:NativeString> */
var315 = (char*)nit_alloc(var_end_length);
var313 = var315;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var_ret = var313;
var_old_repl = 0l;
var_off = 0l;
if (unlikely(var_replacements == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1420);
fatal_exit(1);
}
var_repls = var_replacements;
{
{ /* Inline array$Array$items (var_repls) on <var_repls:Array[Int]> */
var318 = var_repls->attrs[COLOR_core__array__Array___items].val; /* _items on <var_repls:Array[Int]> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
if (unlikely(var316 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1421);
fatal_exit(1);
}
var_r = var316;
{
{ /* Inline array$AbstractArrayRead$length (var_repls) on <var_repls:Array[Int]> */
var321 = var_repls->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_repls:Array[Int]> */
var319 = var321;
RET_LABEL320:(void)0;
}
}
var_imax = var319;
var_i322 = 0l;
var_323 = var_imax;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i322,var_323) on <var_i322:Int> */
/* Covariant cast for argument 0 (i) <var_323:Int> isa OTHER */
/* <var_323:Int> isa OTHER */
var326 = 1; /* easy <var_323:Int> isa OTHER*/
if (unlikely(!var326)) {
var_class_name329 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name329);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var330 = var_i322 < var_323;
var324 = var330;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
}
if (var324){
} else {
goto BREAK_label331;
}
{
{ /* Inline array$NativeArray$[] (var_r,var_i322) on <var_r:NativeArray[Int]> */
var334 = ((struct instance_core__NativeArray*)var_r)->values[var_i322];
var332 = var334;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
}
var335 = (int64_t)(var332)>>2;
var_repl_pos = var335;
{
{ /* Inline kernel$Int$- (var_repl_pos,var_old_repl) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var338 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var338)) {
var_class_name341 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name341);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var342 = var_repl_pos - var_old_repl;
var336 = var342;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
}
var_chkln = var336;
{
{ /* Inline native$NativeString$copy_to (self,var_ret,var_chkln,var_old_repl,var_off) on <self:NativeString> */
memmove(var_ret+var_off,self+var_old_repl,var_chkln);
RET_LABEL343:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_chkln) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_chkln:Int> isa OTHER */
/* <var_chkln:Int> isa OTHER */
var346 = 1; /* easy <var_chkln:Int> isa OTHER*/
if (unlikely(!var346)) {
var_class_name349 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name349);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var350 = var_off + var_chkln;
var344 = var350;
goto RET_LABEL345;
RET_LABEL345:(void)0;
}
}
var_off = var344;
{
{ /* Inline native$NativeString$[]= (var_ret,var_off,((unsigned char)0xef)) on <var_ret:NativeString> */
var_ret[var_off]=(unsigned char)((unsigned char)0xef);
RET_LABEL351:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,1l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var354 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var354)) {
var_class_name357 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name357);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var358 = var_off + 1l;
var352 = var358;
goto RET_LABEL353;
RET_LABEL353:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (var_ret,var352,((unsigned char)0xbf)) on <var_ret:NativeString> */
var_ret[var352]=(unsigned char)((unsigned char)0xbf);
RET_LABEL359:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,2l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var362 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var362)) {
var_class_name365 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name365);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var366 = var_off + 2l;
var360 = var366;
goto RET_LABEL361;
RET_LABEL361:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (var_ret,var360,((unsigned char)0xbd)) on <var_ret:NativeString> */
var_ret[var360]=(unsigned char)((unsigned char)0xbd);
RET_LABEL367:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_repl_pos,1l) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var370 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var370)) {
var_class_name373 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name373);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var374 = var_repl_pos + 1l;
var368 = var374;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
}
var_old_repl = var368;
{
{ /* Inline kernel$Int$+ (var_off,3l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var377 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var377)) {
var_class_name380 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name380);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var381 = var_off + 3l;
var375 = var381;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
}
var_off = var375;
{
var382 = core___core__Int___Discrete__successor(var_i322, 1l);
}
var_i322 = var382;
}
BREAK_label331: (void)0;
{
{ /* Inline kernel$Int$- (var_len,var_old_repl) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var385 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var385)) {
var_class_name388 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name388);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var389 = var_len - var_old_repl;
var383 = var389;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
}
{
{ /* Inline native$NativeString$copy_to (self,var_ret,var383,var_old_repl,var_off) on <self:NativeString> */
memmove(var_ret+var_off,self+var_old_repl,var383);
RET_LABEL390:(void)0;
}
}
} else {
}
if (likely(varoncenew391_guard)) {
var392 = varoncenew391;
} else {
var393 = NEW_core__FlatString(&type_core__FlatString);
var392 = var393;
varoncenew391 = var392;
varoncenew391_guard = 1;
}
{
var394 = core___core__FlatString___full(var392, var_ret, var_end_length, 0l, var_chr_ln);
}
var = var394;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeString$set_char_at for (self: NativeString, Int, Char) */
void core__flat___NativeString___set_char_at(char* self, int64_t p0, uint32_t p1) {
int64_t var_pos /* var pos: Int */;
uint32_t var_c /* var c: Char */;
int64_t var /* : Int */;
int64_t var2 /* : Int */;
int64_t var_cp /* var cp: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
int64_t var11 /* : Int */;
int64_t var_ln /* var ln: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int64_t var15 /* : Int */;
int64_t var17 /* : Int */;
int64_t var18 /* : Int */;
int64_t var20 /* : Int */;
int64_t var21 /* : Int */;
int64_t var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
int64_t var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
int64_t var34 /* : Int */;
int64_t var35 /* : Int */;
int64_t var37 /* : Int */;
int64_t var38 /* : Int */;
int64_t var40 /* : Int */;
unsigned char var41 /* : Byte */;
unsigned char var43 /* : Byte */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int64_t var48 /* : Int */;
int64_t var50 /* : Int */;
int64_t var51 /* : Int */;
int64_t var53 /* : Int */;
int64_t var54 /* : Int */;
int64_t var56 /* : Int */;
unsigned char var57 /* : Byte */;
unsigned char var59 /* : Byte */;
int64_t var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
int64_t var67 /* : Int */;
int64_t var68 /* : Int */;
int64_t var70 /* : Int */;
int64_t var71 /* : Int */;
int64_t var73 /* : Int */;
int64_t var74 /* : Int */;
int64_t var76 /* : Int */;
unsigned char var77 /* : Byte */;
unsigned char var79 /* : Byte */;
int64_t var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
int64_t var87 /* : Int */;
int64_t var88 /* : Int */;
int64_t var90 /* : Int */;
int64_t var91 /* : Int */;
int64_t var93 /* : Int */;
unsigned char var94 /* : Byte */;
unsigned char var96 /* : Byte */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int64_t var101 /* : Int */;
int64_t var103 /* : Int */;
int64_t var104 /* : Int */;
int64_t var106 /* : Int */;
int64_t var107 /* : Int */;
int64_t var109 /* : Int */;
unsigned char var110 /* : Byte */;
unsigned char var112 /* : Byte */;
int64_t var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
int64_t var120 /* : Int */;
int64_t var121 /* : Int */;
int64_t var123 /* : Int */;
int64_t var124 /* : Int */;
int64_t var126 /* : Int */;
int64_t var127 /* : Int */;
int64_t var129 /* : Int */;
unsigned char var130 /* : Byte */;
unsigned char var132 /* : Byte */;
int64_t var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
int64_t var140 /* : Int */;
int64_t var141 /* : Int */;
int64_t var143 /* : Int */;
int64_t var144 /* : Int */;
int64_t var146 /* : Int */;
int64_t var147 /* : Int */;
int64_t var149 /* : Int */;
unsigned char var150 /* : Byte */;
unsigned char var152 /* : Byte */;
int64_t var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
int64_t var160 /* : Int */;
int64_t var161 /* : Int */;
int64_t var163 /* : Int */;
int64_t var164 /* : Int */;
int64_t var166 /* : Int */;
unsigned char var167 /* : Byte */;
unsigned char var169 /* : Byte */;
var_pos = p0;
var_c = p1;
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var2 = (int64_t)var_c;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_cp = var;
{
{ /* Inline kernel$Int$< (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var5 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_cp < 128l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel$Int$to_b (var_cp) on <var_cp:Int> */
var9 = (unsigned char)var_cp;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var_pos,var7) on <self:NativeString> */
self[var_pos]=(unsigned char)var7;
RET_LABEL10:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var11 = core__abstract_text___Char___u8char_len(var_c);
}
var_ln = var11;
{
{ /* Inline kernel$Int$== (var_ln,2l) on <var_ln:Int> */
var14 = var_ln == 2l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline math$Int$& (var_cp,1984l) on <var_cp:Int> */
var17 = var_cp & 1984l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var15,6l) on <var15:Int> */
var20 = var15 >> 6l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline math$Int$| (192l,var18) on <192l:Int> */
var23 = 192l | var18;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var21) on <var21:Int> */
var26 = (unsigned char)var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var_pos,var24) on <self:NativeString> */
self[var_pos]=(unsigned char)var24;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var_pos + 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var37 = var_cp & 63l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var35) on <128l:Int> */
var40 = 128l | var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var38) on <var38:Int> */
var43 = (unsigned char)var38;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var28,var41) on <self:NativeString> */
self[var28]=(unsigned char)var41;
RET_LABEL44:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_ln,3l) on <var_ln:Int> */
var47 = var_ln == 3l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline math$Int$& (var_cp,61440l) on <var_cp:Int> */
var50 = var_cp & 61440l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var48,12l) on <var48:Int> */
var53 = var48 >> 12l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline math$Int$| (224l,var51) on <224l:Int> */
var56 = 224l | var51;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var54) on <var54:Int> */
var59 = (unsigned char)var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var_pos,var57) on <self:NativeString> */
self[var_pos]=(unsigned char)var57;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_pos + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,4032l) on <var_cp:Int> */
var70 = var_cp & 4032l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var68,6l) on <var68:Int> */
var73 = var68 >> 6l;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var71) on <128l:Int> */
var76 = 128l | var71;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var74) on <var74:Int> */
var79 = (unsigned char)var74;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var61,var77) on <self:NativeString> */
self[var61]=(unsigned char)var77;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var83 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_pos + 2l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var90 = var_cp & 63l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var88) on <128l:Int> */
var93 = 128l | var88;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var91) on <var91:Int> */
var96 = (unsigned char)var91;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var81,var94) on <self:NativeString> */
self[var81]=(unsigned char)var94;
RET_LABEL97:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_ln,4l) on <var_ln:Int> */
var100 = var_ln == 4l;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline math$Int$& (var_cp,1835008l) on <var_cp:Int> */
var103 = var_cp & 1835008l;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var101,18l) on <var101:Int> */
var106 = var101 >> 18l;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline math$Int$| (240l,var104) on <240l:Int> */
var109 = 240l | var104;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var107) on <var107:Int> */
var112 = (unsigned char)var107;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var_pos,var110) on <self:NativeString> */
self[var_pos]=(unsigned char)var110;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var116 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var120 = var_pos + 1l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,258048l) on <var_cp:Int> */
var123 = var_cp & 258048l;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var121,12l) on <var121:Int> */
var126 = var121 >> 12l;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var124) on <128l:Int> */
var129 = 128l | var124;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var127) on <var127:Int> */
var132 = (unsigned char)var127;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var114,var130) on <self:NativeString> */
self[var114]=(unsigned char)var130;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var136 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var140 = var_pos + 2l;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,4032l) on <var_cp:Int> */
var143 = var_cp & 4032l;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var141,6l) on <var141:Int> */
var146 = var141 >> 6l;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var144) on <128l:Int> */
var149 = 128l | var144;
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var147) on <var147:Int> */
var152 = (unsigned char)var147;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var134,var150) on <self:NativeString> */
self[var134]=(unsigned char)var150;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,3l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var156 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var160 = var_pos + 3l;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var163 = var_cp & 63l;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var161) on <128l:Int> */
var166 = 128l | var161;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var164) on <var164:Int> */
var169 = (unsigned char)var164;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline native$NativeString$[]= (self,var154,var167) on <self:NativeString> */
self[var154]=(unsigned char)var167;
RET_LABEL170:(void)0;
}
}
} else {
}
}
}
RET_LABEL:;
}
/* method flat$Int$to_s for (self: Int): String */
val* core__flat___Int___core__abstract_text__Object__to_s(int64_t self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
int64_t var14 /* : Int */;
int64_t var16 /* : Int */;
int64_t var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var17 /* : NativeString */;
char* var18 /* : NativeString */;
int64_t var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var22 /* : Int */;
char* var23 /* : NativeString */;
char* var25 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
int64_t var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
int64_t var33 /* : Int */;
static val* varoncenew35;
static int varoncenew35_guard;
val* var36 /* : FlatString */;
val* var37 /* : FlatString */;
val* var38 /* : FlatString */;
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
var3 = self == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "0";
var6 = core__flat___NativeString___to_s_full(var5, 1l, 1l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (self,1l) on <self:Int> */
var9 = self == 1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "1";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text$Int$int_to_s_len (self) on <self:Int> */
var16 = core__abstract_text___Int_int_to_s_len___impl(self);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nslen = var14;
if (likely(varoncenew_guard)) {
var17 = varoncenew;
} else {
var18 = NULL/*special!*/;
var17 = var18;
varoncenew = var17;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_nslen + 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var17,var19) on <var17:NativeString> */
var25 = (char*)nit_alloc(var19);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ns = var23;
{
{ /* Inline native$NativeString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_nslen + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_text$Int$native_int_to_s (self,var_ns,var27) on <self:Int> */
core__abstract_text___Int_native_int_to_s___impl(self, var_ns, var27);
RET_LABEL34:(void)0;
}
}
if (likely(varoncenew35_guard)) {
var36 = varoncenew35;
} else {
var37 = NEW_core__FlatString(&type_core__FlatString);
var36 = var37;
varoncenew35 = var36;
varoncenew35_guard = 1;
}
{
var38 = core___core__FlatString___full(var36, var_ns, var_nslen, 0l, var_nslen);
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Int$to_s for (self: Object): String */
val* VIRTUAL_core__flat___Int___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int64_t var2 /* : Int */;
var2 = (int64_t)(self)>>2;
var1 = core__flat___Int___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat$Array$plain_to_s for (self: Array[nullable Object]): String */
val* core__flat___Array___core__abstract_text__Collection__plain_to_s(val* self) {
val* var /* : String */;
int64_t var1 /* : Int */;
int64_t var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: NativeArray[nullable Object] */;
val* var9 /* : nullable Object */;
val* var11 /* : Object */;
val* var_first /* var first: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
int64_t var_i /* var i: Int */;
int64_t var_sl /* var sl: Int */;
int64_t var_mypos /* var mypos: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var29 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
int64_t var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
int64_t var38 /* : Int */;
val* var39 /* : String */;
val* var_tmp /* var tmp: String */;
int64_t var40 /* : Int */;
int64_t var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
int64_t var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const struct type* type_struct;
const char* var_class_name52;
int64_t var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
int64_t var59 /* : Int */;
int64_t var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
int64_t var66 /* : Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var68 /* : NativeString */;
char* var69 /* : NativeString */;
int64_t var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
int64_t var76 /* : Int */;
char* var77 /* : NativeString */;
char* var79 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
int64_t var_off /* var off: Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var90 /* : Object */;
val* var_tmp91 /* var tmp: String */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
int64_t var95 /* : Int */;
int64_t var_tpl /* var tpl: Int */;
char* var96 /* : NativeString */;
int64_t var97 /* : Int */;
int64_t var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
int64_t var105 /* : Int */;
val* var106 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var107 /* : Iterator[nullable Object] */;
val* var_108 /* var : Iterator[FlatText] */;
short int var109 /* : Bool */;
val* var111 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
val* var_s /* var s: FlatString */;
int64_t var116 /* : Int */;
int64_t var_slen /* var slen: Int */;
char* var117 /* : NativeString */;
int64_t var118 /* : Int */;
int64_t var120 /* : Int */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
int64_t var126 /* : Int */;
int64_t var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
int64_t var133 /* : Int */;
static val* varoncenew135;
static int varoncenew135_guard;
val* var136 /* : FlatString */;
val* var137 /* : FlatString */;
val* var138 /* : FlatString */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var4 = var_l == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var7 = core__flat___NativeString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1490);
fatal_exit(1);
}
var_its = var8;
{
{ /* Inline array$NativeArray$[] (var_its,0l) on <var_its:NativeArray[nullable Object]> */
var11 = ((struct instance_core__NativeArray*)var_its)->values[0l];
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_first = var9;
{
{ /* Inline kernel$Int$== (var_l,1l) on <var_l:Int> */
var14 = var_l == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (var_first == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))((((int64_t)var_first&3)?class_info[((int64_t)var_first&3)]:var_first->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_first, ((val*)NULL)); /* == on <var_first:nullable Object>*/
var15 = var16;
}
if (var15){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "";
var20 = core__flat___NativeString___to_s_full(var19, 0l, 0l);
var18 = var20;
varonce17 = var18;
}
var = var18;
goto RET_LABEL;
} else {
{
var21 = ((val*(*)(val* self))((((int64_t)var_first&3)?class_info[((int64_t)var_first&3)]:var_first->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_first); /* to_s on <var_first:nullable Object(Object)>*/
}
var = var21;
goto RET_LABEL;
}
} else {
}
var22 = NEW_core__NativeArray(var_l, &type_core__NativeArray__core__String);
var_na = var22;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var25 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_i < var_l;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline array$NativeArray$[] (var_its,var_i) on <var_its:NativeArray[nullable Object]> */
var29 = ((struct instance_core__NativeArray*)var_its)->values[var_i];
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_itsi = var27;
if (var_itsi == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
var31 = ((short int(*)(val* self, val* p0))((((int64_t)var_itsi&3)?class_info[((int64_t)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var30 = var31;
}
if (var30){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var_i + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_i = var32;
goto BREAK_label;
} else {
}
{
var39 = ((val*(*)(val* self))((((int64_t)var_itsi&3)?class_info[((int64_t)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var39;
{
var40 = ((int64_t(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_tmp); /* byte_length on <var_tmp:String>*/
}
{
{ /* Inline kernel$Int$+ (var_sl,var40) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_sl + var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_sl = var41;
{
{ /* Inline array$NativeArray$[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype50 = type_struct->color;
idtype51 = type_struct->id;
if(cltype50 >= var_tmp->type->table_size) {
var49 = 0;
} else {
var49 = var_tmp->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
var_class_name52 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var_i + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_i = var53;
{
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_mypos + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_mypos = var60;
} else {
goto BREAK_label67;
}
BREAK_label: (void)0;
}
BREAK_label67: (void)0;
if (likely(varoncenew_guard)) {
var68 = varoncenew;
} else {
var69 = NULL/*special!*/;
var68 = var69;
varoncenew = var68;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_sl + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var68,var70) on <var68:NativeString> */
var79 = (char*)nit_alloc(var70);
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_ns = var77;
{
{ /* Inline native$NativeString$[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL80:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var83 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var87 = var_i < var_mypos;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (var81){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var90 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_tmp91 = var88;
/* <var_tmp91:String> isa FlatString */
cltype93 = type_core__FlatString.color;
idtype94 = type_core__FlatString.id;
if(cltype93 >= var_tmp91->type->table_size) {
var92 = 0;
} else {
var92 = var_tmp91->type->type_table[cltype93] == idtype94;
}
if (var92){
var95 = var_tmp91->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp91:String(FlatString)> */
var_tpl = var95;
var96 = var_tmp91->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp91:String(FlatString)> */
var97 = var_tmp91->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp91:String(FlatString)> */
{
{ /* Inline native$NativeString$copy_to (var96,var_ns,var_tpl,var97,var_off) on <var96:NativeString> */
memmove(var_ns+var_off,var96+var97,var_tpl);
RET_LABEL98:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var101 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var105 = var_off + var_tpl;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_off = var99;
} else {
{
var106 = ((val*(*)(val* self))(var_tmp91->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp91); /* substrings on <var_tmp91:String>*/
}
var_ = var106;
{
var107 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))((((int64_t)var_108&3)?class_info[((int64_t)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:Iterator[FlatText]>*/
}
if (var109){
} else {
goto BREAK_label110;
}
{
var111 = ((val*(*)(val* self))((((int64_t)var_108&3)?class_info[((int64_t)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:Iterator[FlatText]>*/
}
var_j = var111;
/* <var_j:FlatText> isa FlatString */
cltype113 = type_core__FlatString.color;
idtype114 = type_core__FlatString.id;
if(cltype113 >= var_j->type->table_size) {
var112 = 0;
} else {
var112 = var_j->type->type_table[cltype113] == idtype114;
}
if (unlikely(!var112)) {
var_class_name115 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1521);
fatal_exit(1);
}
var_s = var_j;
var116 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var116;
var117 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var118 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native$NativeString$copy_to (var117,var_ns,var_slen,var118,var_off) on <var117:NativeString> */
memmove(var_ns+var_off,var117+var118,var_slen);
RET_LABEL119:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var122 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var126 = var_off + var_slen;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var_off = var120;
{
((void(*)(val* self))((((int64_t)var_108&3)?class_info[((int64_t)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:Iterator[FlatText]>*/
}
}
BREAK_label110: (void)0;
{
((void(*)(val* self))((((int64_t)var_108&3)?class_info[((int64_t)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var129 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var133 = var_i + 1l;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_i = var127;
} else {
goto BREAK_label134;
}
}
BREAK_label134: (void)0;
if (likely(varoncenew135_guard)) {
var136 = varoncenew135;
} else {
var137 = NEW_core__FlatString(&type_core__FlatString);
var136 = var137;
varoncenew135 = var136;
varoncenew135_guard = 1;
}
{
var138 = core___core__FlatString___with_infos(var136, var_ns, var_sl, 0l);
}
var = var138;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeArray$native_to_s for (self: NativeArray[nullable Object]): String */
val* core__flat___NativeArray___native_to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
int64_t var2 /* : Int */;
int64_t var4 /* : Int */;
int64_t var_l /* var l: Int */;
val* var_na /* var na: NativeArray[String] */;
int64_t var_i /* var i: Int */;
int64_t var_sl /* var sl: Int */;
int64_t var_mypos /* var mypos: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
int64_t var14 /* : Int */;
int64_t var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
int64_t var21 /* : Int */;
int64_t var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
int64_t var28 /* : Int */;
int64_t var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
int64_t var35 /* : Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var36 /* : NativeString */;
char* var37 /* : NativeString */;
int64_t var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
int64_t var44 /* : Int */;
char* var45 /* : NativeString */;
char* var47 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
int64_t var_off /* var off: Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var58 /* : Object */;
val* var_tmp /* var tmp: String */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
int64_t var62 /* : Int */;
int64_t var_tpl /* var tpl: Int */;
char* var63 /* : NativeString */;
int64_t var64 /* : Int */;
int64_t var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
int64_t var72 /* : Int */;
val* var73 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var74 /* : Iterator[nullable Object] */;
val* var_75 /* var : Iterator[FlatText] */;
short int var76 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var_s /* var s: FlatString */;
int64_t var83 /* : Int */;
int64_t var_slen /* var slen: Int */;
char* var84 /* : NativeString */;
int64_t var85 /* : Int */;
int64_t var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
int64_t var93 /* : Int */;
int64_t var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
int64_t var100 /* : Int */;
static val* varoncenew102;
static int varoncenew102_guard;
val* var103 /* : FlatString */;
val* var104 /* : FlatString */;
val* var105 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_core__NativeArray__core__String.color;
idtype = type_core__NativeArray__core__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1535);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
var4 = ((struct instance_core__NativeArray*)self)->length;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
var_na = self;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var13 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = ((int64_t(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var11); /* byte_length on <var11:nullable Object(String)>*/
}
{
{ /* Inline kernel$Int$+ (var_sl,var14) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_sl + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_sl = var15;
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_mypos + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_mypos = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varoncenew_guard)) {
var36 = varoncenew;
} else {
var37 = NULL/*special!*/;
var36 = var37;
varoncenew = var36;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_sl + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var36,var38) on <var36:NativeString> */
var47 = (char*)nit_alloc(var38);
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_ns = var45;
{
{ /* Inline native$NativeString$[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL48:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var51 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var55 = var_i < var_mypos;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var58 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_tmp = var56;
/* <var_tmp:String> isa FlatString */
cltype60 = type_core__FlatString.color;
idtype61 = type_core__FlatString.id;
if(cltype60 >= var_tmp->type->table_size) {
var59 = 0;
} else {
var59 = var_tmp->type->type_table[cltype60] == idtype61;
}
if (var59){
var62 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp:String(FlatString)> */
var_tpl = var62;
var63 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp:String(FlatString)> */
var64 = var_tmp->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp:String(FlatString)> */
{
{ /* Inline native$NativeString$copy_to (var63,var_ns,var_tpl,var64,var_off) on <var63:NativeString> */
memmove(var_ns+var_off,var63+var64,var_tpl);
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var68 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var72 = var_off + var_tpl;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_off = var66;
} else {
{
var73 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var73;
{
var74 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_75 = var74;
for(;;) {
{
var76 = ((short int(*)(val* self))((((int64_t)var_75&3)?class_info[((int64_t)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_75); /* is_ok on <var_75:Iterator[FlatText]>*/
}
if (var76){
} else {
goto BREAK_label77;
}
{
var78 = ((val*(*)(val* self))((((int64_t)var_75&3)?class_info[((int64_t)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_75); /* item on <var_75:Iterator[FlatText]>*/
}
var_j = var78;
/* <var_j:FlatText> isa FlatString */
cltype80 = type_core__FlatString.color;
idtype81 = type_core__FlatString.id;
if(cltype80 >= var_j->type->table_size) {
var79 = 0;
} else {
var79 = var_j->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name82 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1558);
fatal_exit(1);
}
var_s = var_j;
var83 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var83;
var84 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var85 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native$NativeString$copy_to (var84,var_ns,var_slen,var85,var_off) on <var84:NativeString> */
memmove(var_ns+var_off,var84+var85,var_slen);
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var89 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var93 = var_off + var_slen;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var_off = var87;
{
((void(*)(val* self))((((int64_t)var_75&3)?class_info[((int64_t)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_75); /* next on <var_75:Iterator[FlatText]>*/
}
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((int64_t)var_75&3)?class_info[((int64_t)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_75); /* finish on <var_75:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var96 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var100 = var_i + 1l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_i = var94;
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
if (likely(varoncenew102_guard)) {
var103 = varoncenew102;
} else {
var104 = NEW_core__FlatString(&type_core__FlatString);
var103 = var104;
varoncenew102 = var103;
varoncenew102_guard = 1;
}
{
var105 = core___core__FlatString___with_infos(var103, var_ns, var_sl, 0l);
}
var = var105;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Map$join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__flat___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var7 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var8 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
val* var9 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var10 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
val* var13 /* : Object */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : Object */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var28 /* : nullable Object */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
val* var31 /* : Object */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : Object */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
var_sep = p0;
var_couple_sep = p1;
{
var1 = ((short int(*)(val* self))((((int64_t)self&3)?class_info[((int64_t)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__is_empty]))(self); /* is_empty on <self:Map[nullable Object, nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__flat___NativeString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var5 = varoncenew;
} else {
var6 = NEW_core__Buffer(&type_core__Buffer);
var5 = var6;
varoncenew = var5;
varoncenew_guard = 1;
}
{
var7 = core__flat___Buffer___new(var5);
}
var_s = var7;
{
var8 = ((val*(*)(val* self))((((int64_t)self&3)?class_info[((int64_t)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(self); /* iterator on <self:Map[nullable Object, nullable Object]>*/
}
var_i = var8;
{
var9 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var9;
{
var10 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
} else {
var12 = varonce11;
varonce11 = NULL;
}
if (var_k!=NULL) {
var13 = var_k;
} else {
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "<null>";
var17 = core__flat___NativeString___to_s_full(var16, 6l, 6l);
var15 = var17;
varonce14 = var15;
}
var13 = var15;
}
{
var18 = ((val*(*)(val* self))((((int64_t)var13&3)?class_info[((int64_t)var13&3)]:var13->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var13); /* to_s on <var13:Object>*/
}
((struct instance_core__NativeArray*)var12)->values[0]=var18;
((struct instance_core__NativeArray*)var12)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var19 = var_e;
} else {
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "<null>";
var23 = core__flat___NativeString___to_s_full(var22, 6l, 6l);
var21 = var23;
varonce20 = var21;
}
var19 = var21;
}
{
var24 = ((val*(*)(val* self))((((int64_t)var19&3)?class_info[((int64_t)var19&3)]:var19->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var19); /* to_s on <var19:Object>*/
}
((struct instance_core__NativeArray*)var12)->values[2]=var24;
{
var25 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var25); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
for(;;) {
{
var26 = ((short int(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var26){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_sep); /* append on <var_s:Buffer>*/
}
{
var27 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var27;
{
var28 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var28;
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
} else {
var30 = varonce29;
varonce29 = NULL;
}
if (var_k!=NULL) {
var31 = var_k;
} else {
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "<null>";
var35 = core__flat___NativeString___to_s_full(var34, 6l, 6l);
var33 = var35;
varonce32 = var33;
}
var31 = var33;
}
{
var36 = ((val*(*)(val* self))((((int64_t)var31&3)?class_info[((int64_t)var31&3)]:var31->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var31); /* to_s on <var31:Object>*/
}
((struct instance_core__NativeArray*)var30)->values[0]=var36;
((struct instance_core__NativeArray*)var30)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var37 = var_e;
} else {
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "<null>";
var41 = core__flat___NativeString___to_s_full(var40, 6l, 6l);
var39 = var41;
varonce38 = var39;
}
var37 = var39;
}
{
var42 = ((val*(*)(val* self))((((int64_t)var37&3)?class_info[((int64_t)var37&3)]:var37->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var37); /* to_s on <var37:Object>*/
}
((struct instance_core__NativeArray*)var30)->values[2]=var42;
{
var43 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var43); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var44 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}

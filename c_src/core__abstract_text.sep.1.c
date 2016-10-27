#include "core__abstract_text.sep.0.h"
/* method abstract_text$Text$length for (self: Text): Int */
int64_t core___core__Text___length(val* self) {
int64_t var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 45);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$byte_length for (self: Text): Int */
int64_t core___core__Text___byte_length(val* self) {
int64_t var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "byte_length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 52);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$substring for (self: Text, Int, Int): Text */
val* core___core__Text___substring(val* self, int64_t p0, int64_t p1) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 58);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$substrings for (self: Text): Iterator[FlatText] */
val* core___core__Text___substrings(val* self) {
val* var /* : Iterator[FlatText] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 71);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_empty for (self: Text): Bool */
short int core___core__Text___is_empty(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
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
/* method abstract_text$Text$empty for (self: Text): Text */
val* core___core__Text___empty(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "empty", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 80);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$first for (self: Text): Char */
uint32_t core___core__Text___first(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, int64_t p0))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, 0l); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((int64_t)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$[] for (self: Text, Int): Char */
uint32_t core___core__Text____91d_93d(val* self, int64_t p0) {
uint32_t var /* : Char */;
int64_t var_index /* var index: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, int64_t p0))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var_index); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((int64_t)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$index_of for (self: Text, Char): Int */
int64_t core___core__Text___index_of(val* self, uint32_t p0) {
int64_t var /* : Int */;
uint32_t var_c /* var c: Char */;
int64_t var1 /* : Int */;
var_c = p0;
{
var1 = core___core__Text___index_of_from(self, var_c, 0l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$last for (self: Text): Char */
uint32_t core___core__Text___last(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
int64_t var2 /* : Int */;
int64_t var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var6 /* : Int */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self, int64_t p0))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var3); /* [] on <var1:SequenceRead[Char]>*/
}
var8 = (uint32_t)((int64_t)(var7)>>2);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$index_of_from for (self: Text, Char, Int): Int */
int64_t core___core__Text___index_of_from(val* self, uint32_t p0, int64_t p1) {
int64_t var /* : Int */;
uint32_t var_c /* var c: Char */;
int64_t var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
int64_t var9 /* : Int */;
int64_t var10 /* : Int */;
int64_t var12 /* : Int */;
var_c = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, int64_t p0))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var1, var_pos); /* iterator_from on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$== (var4,var_c) on <var4:nullable Object(Char)> */
var8 = (uint32_t)((int64_t)(var4)>>2);
var7 = var8 == var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((int64_t(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$last_index_of for (self: Text, Char): Int */
int64_t core___core__Text___last_index_of(val* self, uint32_t p0) {
int64_t var /* : Int */;
uint32_t var_c /* var c: Char */;
int64_t var1 /* : Int */;
int64_t var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var5 /* : Int */;
int64_t var6 /* : Int */;
var_c = p0;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = core___core__Text___last_index_of_from(self, var_c, var2);
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_cstring for (self: Text): NativeString */
char* core___core__Text___to_cstring(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 141);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$last_index_of_from for (self: Text, Char, Int): Int */
int64_t core___core__Text___last_index_of_from(val* self, uint32_t p0, int64_t p1) {
int64_t var /* : Int */;
uint32_t var_item /* var item: Char */;
int64_t var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
int64_t var3 /* : Int */;
var_item = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = (val*)((int64_t)(var_item)<<2|2);
var3 = ((int64_t(*)(val* self, val* p0, int64_t p1))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var1, var2, var_pos); /* last_index_of_from on <var1:SequenceRead[Char]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$+ for (self: Text, Text): Text */
val* core___core__Text____43d(val* self, val* p0) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 155);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$substring_from for (self: Text, Int): Text */
val* core___core__Text___substring_from(val* self, int64_t p0) {
val* var /* : Text */;
int64_t var_from /* var from: Int */;
int64_t var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Text */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
int64_t var14 /* : Int */;
int64_t var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
int64_t var21 /* : Int */;
val* var22 /* : Text */;
var_from = p0;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_from < 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_from = 0l;
} else {
}
{
var14 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var14,var_from) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var14 - var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, int64_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_from, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$has_substring for (self: Text, String, Int): Bool */
short int core___core__Text___has_substring(val* self, val* p0, int64_t p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
int64_t var_pos /* var pos: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
int64_t var7 /* : Int */;
int64_t var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
int64_t var14 /* : Int */;
int64_t var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = ((short int(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_str); /* is_empty on <var_str:String>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_pos < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var2 = var_;
} else {
{
var7 = ((int64_t(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel$Int$+ (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_pos + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$> (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var22 = var8 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var2 = var16;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var24 = ((val*(*)(val* self, int64_t p0))((((int64_t)var23&3)?class_info[((int64_t)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var23, var_pos); /* iterator_from on <var23:SequenceRead[Char]>*/
}
var_myiter = var24;
{
var25 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var26 = ((val*(*)(val* self))((((int64_t)var25&3)?class_info[((int64_t)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var25); /* iterator on <var25:SequenceRead[Char]>*/
}
var_itsiter = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((int64_t)var_myiter&3)?class_info[((int64_t)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_myiter); /* is_ok on <var_myiter:IndexedIterator[Char]>*/
}
var_29 = var28;
if (var28){
{
var30 = ((short int(*)(val* self))((((int64_t)var_itsiter&3)?class_info[((int64_t)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
var27 = var30;
} else {
var27 = var_29;
}
if (var27){
{
var31 = ((val*(*)(val* self))((((int64_t)var_myiter&3)?class_info[((int64_t)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_myiter); /* item on <var_myiter:IndexedIterator[Char]>*/
}
{
var32 = ((val*(*)(val* self))((((int64_t)var_itsiter&3)?class_info[((int64_t)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_itsiter); /* item on <var_itsiter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$!= (var31,var32) on <var31:nullable Object(Char)> */
var35 = var31 == var32;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((int64_t)var_myiter&3)?class_info[((int64_t)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_myiter); /* next on <var_myiter:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((int64_t)var_itsiter&3)?class_info[((int64_t)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_itsiter); /* next on <var_itsiter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var37 = ((short int(*)(val* self))((((int64_t)var_itsiter&3)?class_info[((int64_t)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
if (var37){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$has_prefix for (self: Text, String): Bool */
short int core___core__Text___has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
short int var1 /* : Bool */;
var_prefix = p0;
{
var1 = core___core__Text___has_substring(self, var_prefix, 0l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$has_suffix for (self: Text, String): Bool */
short int core___core__Text___has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
int64_t var1 /* : Int */;
int64_t var2 /* : Int */;
int64_t var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var6 /* : Int */;
short int var7 /* : Bool */;
var_suffix = p0;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var2 = ((int64_t(*)(val* self))(var_suffix->class->vft[COLOR_core__abstract_text__Text__length]))(var_suffix); /* length on <var_suffix:String>*/
}
{
{ /* Inline kernel$Int$- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = core___core__Text___has_substring(self, var_suffix, var3);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_f for (self: Text): Float */
double core___core__Text___to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
double var3 /* : Float */;
double var5 /* : Float */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
{
{ /* Inline native$NativeString$atof (var2) on <var2:NativeString> */
var5 = core__native___NativeString_atof___impl(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_hex for (self: Text, nullable Int, nullable Int): Int */
int64_t core___core__Text___to_hex(val* self, val* p0, val* p1) {
int64_t var /* : Int */;
val* var_pos /* var pos: nullable Int */;
val* var_ln /* var ln: nullable Int */;
int64_t var_res /* var res: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int64_t var10 /* : Int */;
int64_t var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var14 /* : Int */;
int64_t var15 /* : Int */;
val* var16 /* : nullable Int */;
int64_t var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
int64_t var23 /* : Int */;
int64_t var24 /* : Int */;
int64_t var25 /* : Int */;
int64_t var_max /* var max: Int */;
int64_t var26 /* : Int */;
int64_t var_i /* var i: Int */;
int64_t var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
int64_t var34 /* : Int */;
int64_t var36 /* : Int */;
uint32_t var37 /* : Char */;
int64_t var38 /* : Int */;
int64_t var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
int64_t var45 /* : Int */;
int64_t var46 /* : Int */;
var_pos = p0;
var_ln = p1;
var_res = 0l;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = (val*)(0l<<2|1);
var_pos = var5;
} else {
}
if (var_ln == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_ln,((val*)NULL)) on <var_ln:nullable Int> */
var9 = 0; /* incompatible types Int vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var10 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:nullable Int(Int)> isa OTHER */
/* <var_pos:nullable Int(Int)> isa OTHER */
var13 = 1; /* easy <var_pos:nullable Int(Int)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = var_pos == NULL ? "null" : (((int64_t)var_pos&3)?type_info[((int64_t)var_pos&3)]:var_pos->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = (int64_t)(var_pos)>>2;
var15 = var10 - var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var16 = (val*)(var11<<2|1);
var_ln = var16;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var19 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = var_ln == NULL ? "null" : (((int64_t)var_ln&3)?type_info[((int64_t)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = (int64_t)(var_pos)>>2;
var24 = (int64_t)(var_ln)>>2;
var25 = var23 + var24;
var17 = var25;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_max = var17;
var26 = (int64_t)(var_pos)>>2;
var_i = var26;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var33 = var_i < var_;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$<< (var_res,4l) on <var_res:Int> */
var36 = var_res << 4l;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_res = var34;
{
var37 = ((uint32_t(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
var38 = core__abstract_text___Char___from_hex(var37);
}
{
{ /* Inline kernel$Int$+ (var_res,var38) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_res + var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_res = var39;
{
var46 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var46;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_oct for (self: Text): Int */
int64_t core___core__Text___to_oct(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
{
var1 = core___core__Text___a_to(self, 8l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_bin for (self: Text): Int */
int64_t core___core__Text___to_bin(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
{
var1 = core___core__Text___a_to(self, 2l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_dec for (self: Text): Int */
int64_t core___core__Text___to_dec(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
{
var1 = core___core__Text___a_to(self, 10l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$a_to for (self: Text, Int): Int */
int64_t core___core__Text___a_to(val* self, int64_t p0) {
int64_t var /* : Int */;
int64_t var_base /* var base: Int */;
int64_t var_i /* var i: Int */;
short int var_neg /* var neg: Bool */;
int64_t var_j /* var j: Int */;
int64_t var1 /* : Int */;
int64_t var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
int64_t var9 /* : Int */;
int64_t var_v /* var v: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
int64_t var17 /* : Int */;
int64_t var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
int64_t var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
int64_t var33 /* : Int */;
int64_t var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
int64_t var40 /* : Int */;
int64_t var41 /* : Int */;
int64_t var42 /* : Int */;
int64_t var44 /* : Int */;
var_base = p0;
var_i = 0l;
var_neg = 0;
var_j = 0l;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_j < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, int64_t p0))((((int64_t)var6&3)?class_info[((int64_t)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_j); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((int64_t)(var7)>>2);
var_c = var8;
{
var9 = core___core__Char___to_i(var_c);
}
var_v = var9;
{
{ /* Inline kernel$Int$> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var12 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var16 = var_v > var_base;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_neg){
{
{ /* Inline kernel$Int$unary - (var_i) on <var_i:Int> */
var19 = -var_i;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
{
{ /* Inline kernel$Int$< (var_v,0l) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_v < 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var_neg = 1;
} else {
{
{ /* Inline kernel$Int$* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var29 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var33 = var_i * var_base;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var27,var_v) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var36 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var27 + var_v;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_i = var34;
}
}
{
var41 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var41;
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel$Int$unary - (var_i) on <var_i:Int> */
var44 = -var_i;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_numeric for (self: Text): Bool */
short int core___core__Text___is_numeric(val* self) {
short int var /* : Bool */;
short int var_has_point /* var has_point: Bool */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
int64_t var_e_index /* var e_index: Int */;
int64_t var_i /* var i: Int */;
int64_t var4 /* : Int */;
int64_t var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
int64_t var28 /* : Int */;
int64_t var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
int64_t var43 /* : Int */;
int64_t var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
int64_t var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : SequenceRead[Char] */;
int64_t var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
int64_t var66 /* : Int */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
uint32_t var71 /* : Char */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
int64_t var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
int64_t var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
int64_t var90 /* : Int */;
int64_t var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
int64_t var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
short int var104 /* : Bool */;
int64_t var105 /* : Int */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
var_has_point = 0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var3 = -1l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_e_index = var1;
var_i = 0l;
{
var4 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, int64_t p0))((((int64_t)var9&3)?class_info[((int64_t)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((int64_t)(var10)>>2);
var_c = var11;
{
var12 = core__abstract_text___Char___is_numeric(var_c);
}
var13 = !var12;
if (var13){
{
{ /* Inline kernel$Char$== (var_c,'.') on <var_c:Char> */
var17 = var_c == '.';
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
if (var15){
var19 = !var_has_point;
var14 = var19;
} else {
var14 = var_18;
}
if (var14){
var_has_point = 1;
} else {
{
{ /* Inline kernel$Char$== (var_c,'e') on <var_c:Char> */
var26 = var_c == 'e';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
if (var24){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var30 = -1l;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_e_index,var28) on <var_e_index:Int> */
var33 = var_e_index == var28;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var23 = var31;
} else {
var23 = var_27;
}
var_34 = var23;
if (var23){
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var41 = var_i > 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var22 = var35;
} else {
var22 = var_34;
}
var_42 = var22;
if (var22){
{
var43 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var43 - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var44) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var53 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var57 = var_i < var44;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var21 = var51;
} else {
var21 = var_42;
}
var_58 = var21;
if (var21){
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var66 = var_i - 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = ((val*(*)(val* self, int64_t p0))((((int64_t)var59&3)?class_info[((int64_t)var59&3)]:var59->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var59, var60); /* [] on <var59:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$!= (var67,'-') on <var67:nullable Object(Char)> */
var71 = (uint32_t)((int64_t)(var67)>>2);
var70 = var71 == '-';
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var20 = var68;
} else {
var20 = var_58;
}
if (var20){
var_e_index = var_i;
} else {
{
{ /* Inline kernel$Char$== (var_c,'-') on <var_c:Char> */
var77 = var_c == '-';
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_78 = var75;
if (var75){
{
{ /* Inline kernel$Int$+ (var_e_index,1l) on <var_e_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var85 = var_e_index + 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_i,var79) on <var_i:Int> */
var88 = var_i == var79;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var74 = var86;
} else {
var74 = var_78;
}
var_89 = var74;
if (var74){
{
var90 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var90,1l) on <var90:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var97 = var90 - 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var91) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var91:Int> isa OTHER */
/* <var91:Int> isa OTHER */
var100 = 1; /* easy <var91:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var104 = var_i < var91;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var73 = var98;
} else {
var73 = var_89;
}
if (var73){
} else {
var = 0;
goto RET_LABEL;
}
}
}
} else {
}
{
var105 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var105;
}
BREAK_label: (void)0;
{
var106 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
var107 = !var106;
var = var107;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_hex for (self: Text): Bool */
short int core___core__Text___is_hex(val* self) {
short int var /* : Bool */;
int64_t var_i /* var i: Int */;
int64_t var1 /* : Int */;
int64_t var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
int64_t var64 /* : Int */;
var_i = 0l;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, int64_t p0))((((int64_t)var6&3)?class_info[((int64_t)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((int64_t)(var7)>>2);
var_c = var8;
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var14 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var18 = var_c >= 'a';
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_19 = var12;
if (var12){
{
{ /* Inline kernel$Char$<= (var_c,'f') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var22 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var26 = var_c <= 'f';
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var11 = var20;
} else {
var11 = var_19;
}
var27 = !var11;
var_28 = var27;
if (var27){
{
{ /* Inline kernel$Char$>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var32 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var36 = var_c >= 'A';
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_37 = var30;
if (var30){
{
{ /* Inline kernel$Char$<= (var_c,'F') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var40 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var44 = var_c <= 'F';
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var29 = var38;
} else {
var29 = var_37;
}
var45 = !var29;
var10 = var45;
} else {
var10 = var_28;
}
var_46 = var10;
if (var10){
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var50 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var54 = var_c >= '0';
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_55 = var48;
if (var48){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var58 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var62 = var_c <= '9';
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var47 = var56;
} else {
var47 = var_55;
}
var63 = !var47;
var9 = var63;
} else {
var9 = var_46;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
var64 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var64;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_bin for (self: Text): Bool */
short int core___core__Text___is_bin(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((int64_t)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel$Char$!= (var_i,'0') on <var_i:Char> */
var10 = var_i == '0';
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
{
{ /* Inline kernel$Char$!= (var_i,'1') on <var_i:Char> */
var15 = var_i == '1';
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
} else {
var7 = var_12;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_oct for (self: Text): Bool */
short int core___core__Text___is_oct(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((int64_t)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel$Char$< (var_i,'0') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var10 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var11 = var_i < '0';
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
var7 = var_12;
} else {
{
{ /* Inline kernel$Char$> (var_i,'7') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'7':Char> isa OTHER */
/* <'7':Char> isa OTHER */
var15 = 1; /* easy <'7':Char> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var19 = var_i > '7';
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_dec for (self: Text): Bool */
short int core___core__Text___is_dec(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((int64_t)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel$Char$< (var_i,'0') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var10 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var11 = var_i < '0';
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
var7 = var_12;
} else {
{
{ /* Inline kernel$Char$> (var_i,'9') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var15 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var19 = var_i > '9';
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_3&3)?class_info[((int64_t)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_lower for (self: Text): Bool */
short int core___core__Text___is_lower(val* self) {
short int var /* : Bool */;
int64_t var_i /* var i: Int */;
int64_t var1 /* : Int */;
int64_t var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
int64_t var10 /* : Int */;
var_i = 0l;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, int64_t p0))((((int64_t)var6&3)?class_info[((int64_t)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((int64_t)(var7)>>2);
var_char = var8;
{
var9 = core___core__Char___is_upper(var_char);
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
var10 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var10;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$l_trim for (self: Text): Text */
val* core___core__Text___l_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
int64_t var8 /* : Int */;
int64_t var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Text */;
int64_t var14 /* : Int */;
val* var15 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
var6 = (uint32_t)((int64_t)(var4)>>2);
var5 = core___core__Char___is_whitespace(var6);
}
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((int64_t(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var9 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$== (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((int64_t(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var15 = ((val*(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var14); /* substring_from on <self:Text>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$r_trim for (self: Text): Text */
val* core___core__Text___r_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
int64_t var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : Text */;
int64_t var14 /* : Int */;
int64_t var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
int64_t var21 /* : Int */;
val* var22 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var1); /* reverse_iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
var6 = (uint32_t)((int64_t)(var4)>>2);
var5 = core___core__Char___is_whitespace(var6);
}
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((int64_t(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Int$< (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var8 < 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((int64_t(*)(val* self))((((int64_t)var_iter&3)?class_info[((int64_t)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Int$+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var14 + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, int64_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$trim for (self: Text): Text */
val* core___core__Text___trim(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var2 /* : Text */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
var1 = core___core__Text___l_trim(self);
}
{
var2 = core___core__Text___r_trim(var1);
}
/* <var2:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 456);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$chomp for (self: Text): Text */
val* core___core__Text___chomp(val* self) {
val* var /* : Text */;
int64_t var1 /* : Int */;
int64_t var_len /* var len: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_l /* var l: Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int64_t var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
int64_t var18 /* : Int */;
val* var19 /* : Text */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
val* var37 /* : SequenceRead[Char] */;
int64_t var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
int64_t var44 /* : Int */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
uint32_t var49 /* : Char */;
int64_t var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
int64_t var56 /* : Int */;
val* var57 /* : Text */;
int64_t var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
int64_t var64 /* : Int */;
val* var65 /* : Text */;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
{ /* Inline kernel$Int$== (var_len,0l) on <var_len:Int> */
var4 = var_len == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 495);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self))((((int64_t)var6&3)?class_info[((int64_t)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var6); /* last on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((int64_t)(var7)>>2);
var_l = var8;
{
{ /* Inline kernel$Char$== (var_l,'\015') on <var_l:Char> */
var11 = var_l == '\015';
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var_len - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self, int64_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var12); /* substring on <self:Text>*/
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Char$!= (var_l,'\n') on <var_l:Char> */
var22 = var_l == '\n';
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <self:Text> isa SELFTYPE */
type_struct27 = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= self->type->table_size) {
var24 = 0;
} else {
var24 = self->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 500);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$> (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var_len > 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_ = var30;
if (var30){
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var40 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var_len - 2l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((val*(*)(val* self, int64_t p0))((((int64_t)var37&3)?class_info[((int64_t)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var37, var38); /* [] on <var37:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var45,'\015') on <var45:nullable Object(Char)> */
var49 = (uint32_t)((int64_t)(var45)>>2);
var48 = var49 == '\015';
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var29 = var46;
} else {
var29 = var_;
}
if (var29){
{
{ /* Inline kernel$Int$- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var52 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_len - 2l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, int64_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var50); /* substring on <self:Text>*/
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var64 = var_len - 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
var65 = ((val*(*)(val* self, int64_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var58); /* substring on <self:Text>*/
}
var = var65;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_cmangle for (self: Text): String */
val* core___core__Text___to_cmangle(val* self) {
val* var /* : String */;
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
val* var_res /* var res: Buffer */;
short int var_underscore /* var underscore: Bool */;
int64_t var_start /* var start: Int */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
int64_t var21 /* : Int */;
int64_t var23 /* : Int */;
val* var24 /* : String */;
int64_t var_i /* var i: Int */;
int64_t var25 /* : Int */;
int64_t var_26 /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
uint32_t var34 /* : Char */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
short int var68 /* : Bool */;
int64_t var70 /* : Int */;
int64_t var72 /* : Int */;
val* var73 /* : String */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
int64_t var93 /* : Int */;
int64_t var95 /* : Int */;
val* var96 /* : String */;
int64_t var97 /* : Int */;
int64_t var98 /* : Int */;
int64_t var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
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
var_res = var7;
var_underscore = 0;
var_start = 0l;
{
var8 = ((uint32_t(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 0l); /* [] on <self:Text>*/
}
var_c = var8;
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var12 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var13 = var_c >= '0';
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ = var10;
if (var10){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var16 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var20 = var_c <= '9';
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var9 = var14;
} else {
var9 = var_;
}
if (var9){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var23 = (int64_t)var_c;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var24 = core__flat___Int___core__abstract_text__Object__to_s(var21);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var24); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_start = 1l;
} else {
}
var_i = var_start;
{
var25 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_26 = var25;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_26) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_26:Int> isa OTHER */
/* <var_26:Int> isa OTHER */
var29 = 1; /* easy <var_26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var33 = var_i < var_26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
} else {
goto BREAK_label;
}
{
var34 = ((uint32_t(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_c = var34;
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var39 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var43 = var_c >= 'a';
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_44 = var37;
if (var37){
{
{ /* Inline kernel$Char$<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var47 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var51 = var_c <= 'z';
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var36 = var45;
} else {
var36 = var_44;
}
var_52 = var36;
if (var36){
var35 = var_52;
} else {
{
{ /* Inline kernel$Char$>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var56 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var60 = var_c >= 'A';
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_61 = var54;
if (var54){
{
{ /* Inline kernel$Char$<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var64 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var68 = var_c <= 'Z';
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var53 = var62;
} else {
var53 = var_61;
}
var35 = var53;
}
if (var35){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
goto BREAK_label69;
} else {
}
if (var_underscore){
{
{ /* Inline kernel$Char$code_point ('_') on <'_':Char> */
var72 = (int64_t)'_';
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
var73 = core__flat___Int___core__abstract_text__Object__to_s(var70);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var73); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var77 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var81 = var_c >= '0';
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_82 = var75;
if (var75){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var85 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var89 = var_c <= '9';
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var74 = var83;
} else {
var74 = var_82;
}
if (var74){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
} else {
{
{ /* Inline kernel$Char$== (var_c,'_') on <var_c:Char> */
var92 = var_c == '_';
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
if (var90){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var95 = (int64_t)var_c;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
var96 = core__flat___Int___core__abstract_text__Object__to_s(var93);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var96); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
}
}
BREAK_label69: (void)0;
{
var97 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var97;
}
BREAK_label: (void)0;
if (var_underscore){
{
{ /* Inline kernel$Char$code_point ('_') on <'_':Char> */
var100 = (int64_t)'_';
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
var101 = core__flat___Int___core__abstract_text__Object__to_s(var98);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var101); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
var102 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var102;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_c for (self: Text): String */
val* core___core__Text___escape_to_c(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
int64_t var_i /* var i: Int */;
int64_t var4 /* : Int */;
int64_t var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int64_t var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
int64_t var55 /* : Int */;
int64_t var_j /* var j: Int */;
int64_t var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : SequenceRead[Char] */;
val* var65 /* : nullable Object */;
uint32_t var66 /* : Char */;
uint32_t var_next /* var next: Char */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var_77 /* var : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var_85 /* var : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var_93 /* var : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var_97 /* var : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var_101 /* var : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
int64_t var105 /* : Int */;
int64_t var107 /* : Int */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
short int var114 /* : Bool */;
int64_t var115 /* : Int */;
int64_t var117 /* : Int */;
val* var118 /* : String */;
val* var_oct /* var oct: String */;
int64_t var119 /* : Int */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
int64_t var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
int64_t var127 /* : Int */;
val* var128 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = core__flat___Buffer___new(var1);
}
var_b = var3;
var_i = 0l;
{
var4 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, int64_t p0))((((int64_t)var9&3)?class_info[((int64_t)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((int64_t)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel$Char$== (var_c,'\n') on <var_c:Char> */
var14 = var_c == '\n';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "\\n";
var17 = core__flat___NativeString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var15); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\t') on <var_c:Char> */
var20 = var_c == '\t';
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\\t";
var24 = core__flat___NativeString___to_s_full(var23, 2l, 2l);
var22 = var24;
varonce21 = var22;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var22); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\"') on <var_c:Char> */
var27 = var_c == '\"';
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "\\\"";
var31 = core__flat___NativeString___to_s_full(var30, 2l, 2l);
var29 = var31;
varonce28 = var29;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var29); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\'') on <var_c:Char> */
var34 = var_c == '\'';
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "\\\'";
var38 = core__flat___NativeString___to_s_full(var37, 2l, 2l);
var36 = var38;
varonce35 = var36;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var36); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var41 = var_c == '\\';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "\\\\";
var45 = core__flat___NativeString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce42 = var43;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var43); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'?') on <var_c:Char> */
var48 = var_c == '?';
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_i + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_j = var49;
{
var56 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_j,var56) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var56:Int> isa OTHER */
/* <var56:Int> isa OTHER */
var59 = 1; /* easy <var56:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var63 = var_j < var56;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var65 = ((val*(*)(val* self, int64_t p0))((((int64_t)var64&3)?class_info[((int64_t)var64&3)]:var64->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var64, var_j); /* [] on <var64:SequenceRead[Char]>*/
}
var66 = (uint32_t)((int64_t)(var65)>>2);
var_next = var66;
{
{ /* Inline kernel$Char$== (var_next,'!') on <var_next:Char> */
var76 = var_next == '!';
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var_77 = var74;
if (var74){
var73 = var_77;
} else {
{
{ /* Inline kernel$Char$== (var_next,'(') on <var_next:Char> */
var80 = var_next == '(';
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var73 = var78;
}
var_81 = var73;
if (var73){
var72 = var_81;
} else {
{
{ /* Inline kernel$Char$== (var_next,')') on <var_next:Char> */
var84 = var_next == ')';
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var72 = var82;
}
var_85 = var72;
if (var72){
var71 = var_85;
} else {
{
{ /* Inline kernel$Char$== (var_next,'-') on <var_next:Char> */
var88 = var_next == '-';
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var71 = var86;
}
var_89 = var71;
if (var71){
var70 = var_89;
} else {
{
{ /* Inline kernel$Char$== (var_next,'/') on <var_next:Char> */
var92 = var_next == '/';
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var70 = var90;
}
var_93 = var70;
if (var70){
var69 = var_93;
} else {
{
{ /* Inline kernel$Char$== (var_next,'<') on <var_next:Char> */
var96 = var_next == '<';
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var69 = var94;
}
var_97 = var69;
if (var69){
var68 = var_97;
} else {
{
{ /* Inline kernel$Char$== (var_next,'=') on <var_next:Char> */
var100 = var_next == '=';
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var68 = var98;
}
var_101 = var68;
if (var68){
var67 = var_101;
} else {
{
{ /* Inline kernel$Char$== (var_next,'>') on <var_next:Char> */
var104 = var_next == '>';
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var67 = var102;
}
if (var67){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
} else {
}
} else {
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '?'); /* add on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var107 = (int64_t)var_c;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var105,32l) on <var105:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var110 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var114 = var105 < 32l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var117 = (int64_t)var_c;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
var118 = core__abstract_text___Int___to_base(var115, 8l);
}
var_oct = var118;
{
var119 = ((int64_t(*)(val* self))(var_oct->class->vft[COLOR_core__abstract_text__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel$Int$== (var119,1l) on <var119:Int> */
var122 = var119 == 1l;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
if (var120){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
{
var123 = ((int64_t(*)(val* self))(var_oct->class->vft[COLOR_core__abstract_text__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel$Int$== (var123,2l) on <var123:Int> */
var126 = var123 == 2l;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var_oct); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
}
}
}
}
{
var127 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var127;
}
BREAK_label: (void)0;
{
var128 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var128;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_sh for (self: Text): String */
val* core___core__Text___escape_to_sh(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : nullable Object */;
int64_t var_i /* var i: Int */;
int64_t var6 /* : Int */;
int64_t var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
uint32_t var13 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int64_t var24 /* : Int */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : nullable Object */;
val* var27 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = core__flat___Buffer___new(var1);
}
var_b = var3;
{
var4 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var5 = (val*)((int64_t)('\'')<<2|2);
((void(*)(val* self, val* p0))((((int64_t)var4&3)?class_info[((int64_t)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var4, var5); /* add on <var4:SequenceRead[Char](Sequence[Char])>*/
}
var_i = 0l;
{
var6 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var12 = ((val*(*)(val* self, int64_t p0))((((int64_t)var11&3)?class_info[((int64_t)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var11, var_i); /* [] on <var11:SequenceRead[Char]>*/
}
var13 = (uint32_t)((int64_t)(var12)>>2);
var_c = var13;
{
{ /* Inline kernel$Char$== (var_c,'\'') on <var_c:Char> */
var16 = var_c == '\'';
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "\'\\\'\'";
var19 = core__flat___NativeString___to_s_full(var18, 4l, 4l);
var17 = var19;
varonce = var17;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var17); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$!= (var_c,'\000') on <var_c:Char> */
var22 = var_c == '\000';
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (unlikely(!var20)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'without_null_byte\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 705);
fatal_exit(1);
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
{
var24 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var24;
}
BREAK_label: (void)0;
{
var25 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var26 = (val*)((int64_t)('\'')<<2|2);
((void(*)(val* self, val* p0))((((int64_t)var25&3)?class_info[((int64_t)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var25, var26); /* add on <var25:SequenceRead[Char](Sequence[Char])>*/
}
{
var27 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_mk for (self: Text): String */
val* core___core__Text___escape_to_mk(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
int64_t var_i /* var i: Int */;
int64_t var4 /* : Int */;
int64_t var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int64_t var35 /* : Int */;
int64_t var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
short int var_45 /* var : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var_49 /* var : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
int64_t var67 /* : Int */;
int64_t var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : String */;
int64_t var72 /* : Int */;
val* var73 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = core__flat___Buffer___new(var1);
}
var_b = var3;
var_i = 0l;
{
var4 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, int64_t p0))((((int64_t)var9&3)?class_info[((int64_t)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((int64_t)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel$Char$== (var_c,'$') on <var_c:Char> */
var14 = var_c == '$';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "$$";
var17 = core__flat___NativeString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var15); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,':') on <var_c:Char> */
var22 = var_c == ':';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_23 = var20;
if (var20){
var19 = var_23;
} else {
{
{ /* Inline kernel$Char$== (var_c,' ') on <var_c:Char> */
var26 = var_c == ' ';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var19 = var24;
}
var_27 = var19;
if (var19){
var18 = var_27;
} else {
{
{ /* Inline kernel$Char$== (var_c,'#') on <var_c:Char> */
var30 = var_c == '#';
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var18 = var28;
}
if (var18){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var37 = (int64_t)var_c;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var35,32l) on <var35:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var40 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var44 = var35 < 32l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_45 = var38;
if (var38){
var34 = var_45;
} else {
{
{ /* Inline kernel$Char$== (var_c,';') on <var_c:Char> */
var48 = var_c == ';';
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var34 = var46;
}
var_49 = var34;
if (var34){
var33 = var_49;
} else {
{
{ /* Inline kernel$Char$== (var_c,'|') on <var_c:Char> */
var52 = var_c == '|';
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var33 = var50;
}
var_53 = var33;
if (var33){
var32 = var_53;
} else {
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var56 = var_c == '\\';
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var32 = var54;
}
var_57 = var32;
if (var32){
var31 = var_57;
} else {
{
{ /* Inline kernel$Char$== (var_c,'=') on <var_c:Char> */
var60 = var_c == '=';
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var31 = var58;
}
if (var31){
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "?";
var66 = core__flat___NativeString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var69 = (int64_t)var_c;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var70 = core__abstract_text___Int___to_base(var67, 16l);
}
((struct instance_core__NativeArray*)var62)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var71); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
{
var72 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var72;
}
BREAK_label: (void)0;
{
var73 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var73;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$unescape_nit for (self: Text): String */
val* core___core__Text___unescape_nit(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
int64_t var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_was_slash /* var was_slash: Bool */;
int64_t var_i /* var i: Int */;
int64_t var5 /* : Int */;
int64_t var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
uint32_t var12 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int64_t var30 /* : Int */;
val* var31 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var4 = core__flat___Buffer___with_cap(var1, var3);
}
var_res = var4;
var_was_slash = 0;
var_i = 0l;
{
var5 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var11 = ((val*(*)(val* self, int64_t p0))((((int64_t)var10&3)?class_info[((int64_t)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Char]>*/
}
var12 = (uint32_t)((int64_t)(var11)>>2);
var_c = var12;
var13 = !var_was_slash;
if (var13){
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var16 = var_c == '\\';
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var_was_slash = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
goto BREAK_label17;
} else {
}
var_was_slash = 0;
{
{ /* Inline kernel$Char$== (var_c,'n') on <var_c:Char> */
var20 = var_c == 'n';
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\n'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'r') on <var_c:Char> */
var23 = var_c == 'r';
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\015'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'t') on <var_c:Char> */
var26 = var_c == 't';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\t'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'0') on <var_c:Char> */
var29 = var_c == '0';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\000'); /* add on <var_res:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
}
}
}
BREAK_label17: (void)0;
{
var30 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var30;
}
BREAK_label: (void)0;
{
var31 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$== for (self: Text, nullable Object): Bool */
short int core___core__Text___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int64_t var8 /* : Int */;
int64_t var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : SequenceRead[Char] */;
short int var16 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((int64_t)var_o&3)?class_info[((int64_t)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_o, ((val*)NULL)); /* == on <var_o:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_core__Text.color;
idtype = type_core__Text.id;
if(cltype >= (((int64_t)var_o&3)?type_info[((int64_t)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((int64_t)var_o&3)?type_info[((int64_t)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Object$is_same_instance (self,var_o) on <self:Text> */
var7 = self == var_o;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
var8 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var9 = ((int64_t(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__length]))(var_o); /* length on <var_o:nullable Object(Text)>*/
}
{
{ /* Inline kernel$Int$!= (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var15 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__chars]))(var_o); /* chars on <var_o:nullable Object(Text)>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((int64_t)var14&3)?class_info[((int64_t)var14&3)]:var14->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:SequenceRead[Char]>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$< for (self: Text, Text): Bool */
short int core___core__Text___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_self_chars /* var self_chars: IndexedIterator[Char] */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_other_chars /* var other_chars: IndexedIterator[Char] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
uint32_t var28 /* : Char */;
uint32_t var29 /* : Char */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 954);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))((((int64_t)var2&3)?class_info[((int64_t)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:SequenceRead[Char]>*/
}
var_self_chars = var3;
{
var4 = ((val*(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__chars]))(var_other); /* chars on <var_other:Text>*/
}
{
var5 = ((val*(*)(val* self))((((int64_t)var4&3)?class_info[((int64_t)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var4); /* iterator on <var4:SequenceRead[Char]>*/
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((int64_t)var_self_chars&3)?class_info[((int64_t)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
var_ = var7;
if (var7){
{
var8 = ((short int(*)(val* self))((((int64_t)var_other_chars&3)?class_info[((int64_t)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_other_chars); /* is_ok on <var_other_chars:IndexedIterator[Char]>*/
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val*(*)(val* self))((((int64_t)var_self_chars&3)?class_info[((int64_t)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var10 = ((val*(*)(val* self))((((int64_t)var_other_chars&3)?class_info[((int64_t)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : (((int64_t)var10&3)?type_info[((int64_t)var10&3)]:var10->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var17 = (uint32_t)((int64_t)(var9)>>2);
var18 = (uint32_t)((int64_t)(var10)>>2);
var19 = var17 < var18;
var11 = var19;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))((((int64_t)var_self_chars&3)?class_info[((int64_t)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var21 = ((val*(*)(val* self))((((int64_t)var_other_chars&3)?class_info[((int64_t)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$> (var20,var21) on <var20:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var21:nullable Object(Char)> isa OTHER */
/* <var21:nullable Object(Char)> isa OTHER */
var24 = 1; /* easy <var21:nullable Object(Char)> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = var21 == NULL ? "null" : (((int64_t)var21&3)?type_info[((int64_t)var21&3)]:var21->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var28 = (uint32_t)((int64_t)(var20)>>2);
var29 = (uint32_t)((int64_t)(var21)>>2);
var30 = var28 > var29;
var22 = var30;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((int64_t)var_self_chars&3)?class_info[((int64_t)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_self_chars); /* next on <var_self_chars:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((int64_t)var_other_chars&3)?class_info[((int64_t)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_other_chars); /* next on <var_other_chars:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((short int(*)(val* self))((((int64_t)var_self_chars&3)?class_info[((int64_t)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text$Text$hash_cache for (self: Text): nullable Int */
val* core___core__Text___hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$hash_cache= for (self: Text, nullable Int) */
void core___core__Text___hash_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__Text___hash_cache].val = p0; /* _hash_cache on <self:Text> */
RET_LABEL:;
}
/* method abstract_text$Text$hash for (self: Text): Int */
int64_t core___core__Text___core__kernel__Object__hash(val* self) {
int64_t var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int64_t var_h /* var h: Int */;
int64_t var_i /* var i: Int */;
int64_t var8 /* : Int */;
int64_t var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : SequenceRead[Char] */;
val* var14 /* : nullable Object */;
uint32_t var15 /* : Char */;
uint32_t var_char /* var char: Char */;
int64_t var16 /* : Int */;
int64_t var18 /* : Int */;
int64_t var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
int64_t var25 /* : Int */;
int64_t var26 /* : Int */;
int64_t var28 /* : Int */;
int64_t var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
int64_t var35 /* : Int */;
int64_t var36 /* : Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var41 /* : nullable Int */;
int64_t var42 /* : Int */;
{
{ /* Inline abstract_text$Text$hash_cache (self) on <self:Text> */
var3 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var1,((val*)NULL)) on <var1:nullable Int> */
var7 = 0; /* incompatible types Int vs. null; cannot be NULL */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var_h = 5381l;
var_i = 0l;
{
var8 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var8;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var14 = ((val*(*)(val* self, int64_t p0))((((int64_t)var13&3)?class_info[((int64_t)var13&3)]:var13->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var13, var_i); /* [] on <var13:SequenceRead[Char]>*/
}
var15 = (uint32_t)((int64_t)(var14)>>2);
var_char = var15;
{
{ /* Inline kernel$Int$<< (var_h,5l) on <var_h:Int> */
var18 = var_h << 5l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var16,var_h) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var21 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var16 + var_h;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel$Char$code_point (var_char) on <var_char:Char> */
var28 = (int64_t)var_char;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var19,var26) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var31 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var19 + var26;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_h = var29;
{
var36 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var36;
}
BREAK_label: (void)0;
{
{ /* Inline abstract_text$Text$hash_cache= (self,var_h) on <self:Text> */
var38 = (val*)(var_h<<2|1);
self->attrs[COLOR_core__abstract_text__Text___hash_cache].val = var38; /* _hash_cache on <self:Text> */
RET_LABEL37:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_text$Text$hash_cache (self) on <self:Text> */
var41 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1000);
fatal_exit(1);
}
var42 = (int64_t)(var39)>>2;
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$levenshtein_distance for (self: Text, String): Int */
int64_t core___core__Text___levenshtein_distance(val* self, val* p0) {
int64_t var /* : Int */;
val* var_other /* var other: String */;
int64_t var1 /* : Int */;
int64_t var_slen /* var slen: Int */;
int64_t var2 /* : Int */;
int64_t var_olen /* var olen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Int] */;
int64_t var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var14 /* : Int */;
val* var_v0 /* var v0: Array[Int] */;
val* var15 /* : Array[Int] */;
int64_t var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
int64_t var22 /* : Int */;
val* var_v1 /* var v1: Array[Int] */;
int64_t var_j /* var j: Int */;
int64_t var_ /* var : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
int64_t var31 /* : Int */;
int64_t var_i /* var i: Int */;
int64_t var_32 /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
int64_t var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
int64_t var47 /* : Int */;
val* var48 /* : nullable Object */;
int64_t var_j49 /* var j: Int */;
int64_t var_50 /* var : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
int64_t var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
int64_t var66 /* : Int */;
int64_t var67 /* : Int */;
int64_t var_cost1 /* var cost1: Int */;
int64_t var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
int64_t var74 /* : Int */;
val* var75 /* : nullable Object */;
int64_t var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
int64_t var82 /* : Int */;
int64_t var83 /* : Int */;
int64_t var_cost2 /* var cost2: Int */;
val* var84 /* : nullable Object */;
int64_t var85 /* : Int */;
int64_t var_cost3 /* var cost3: Int */;
uint32_t var86 /* : Char */;
uint32_t var87 /* : Char */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
int64_t var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
int64_t var98 /* : Int */;
int64_t var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
int64_t var105 /* : Int */;
int64_t var106 /* : Int */;
int64_t var107 /* : Int */;
val* var108 /* : nullable Object */;
int64_t var109 /* : Int */;
val* var_tmp /* var tmp: Array[Int] */;
int64_t var110 /* : Int */;
val* var111 /* : nullable Object */;
int64_t var112 /* : Int */;
var_other = p0;
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_slen = var1;
{
var2 = ((int64_t(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__length]))(var_other); /* length on <var_other:String>*/
}
var_olen = var2;
{
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var5 = var_slen == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = var_olen;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_olen,0l) on <var_olen:Int> */
var8 = var_olen == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = var_slen;
goto RET_LABEL;
} else {
}
{
var9 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var_other); /* == on <self:Text>*/
}
if (var9){
var = 0l;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel$Int$+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_olen + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
core___core__Array___with_capacity(var10, var11); /* Direct call array$Array$with_capacity on <var10:Array[Int]>*/
}
var_v0 = var10;
var15 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel$Int$+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_olen + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
core___core__Array___with_capacity(var15, var16); /* Direct call array$Array$with_capacity on <var15:Array[Int]>*/
}
var_v1 = var15;
var_j = 0l;
var_ = var_olen;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var25 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var29 = var_j <= var_;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
} else {
goto BREAK_label;
}
{
var30 = (val*)(var_j<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_v0, var_j, var30); /* Direct call array$Array$[]= on <var_v0:Array[Int]>*/
}
{
var31 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var31;
}
BREAK_label: (void)0;
var_i = 0l;
var_32 = var_slen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_32) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_32:Int> isa OTHER */
/* <var_32:Int> isa OTHER */
var35 = 1; /* easy <var_32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var39 = var_i < var_32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label40;
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_i + 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var48 = (val*)(var41<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_v1, 0l, var48); /* Direct call array$Array$[]= on <var_v1:Array[Int]>*/
}
var_j49 = 0l;
var_50 = var_olen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j49,var_50) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <var_50:Int> isa OTHER */
/* <var_50:Int> isa OTHER */
var53 = 1; /* easy <var_50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var57 = var_j49 < var_50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
} else {
goto BREAK_label58;
}
{
var59 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v1, var_j49);
}
{
{ /* Inline kernel$Int$+ (var59,1l) on <var59:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = (int64_t)(var59)>>2;
var67 = var66 + 1l;
var60 = var67;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_cost1 = var60;
{
{ /* Inline kernel$Int$+ (var_j49,1l) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_j49 + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
var75 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v0, var68);
}
{
{ /* Inline kernel$Int$+ (var75,1l) on <var75:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var78 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var82 = (int64_t)(var75)>>2;
var83 = var82 + 1l;
var76 = var83;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_cost2 = var76;
{
var84 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v0, var_j49);
}
var85 = (int64_t)(var84)>>2;
var_cost3 = var85;
{
var86 = ((uint32_t(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
var87 = ((uint32_t(*)(val* self, int64_t p0))(var_other->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_other, var_j49); /* [] on <var_other:String>*/
}
{
{ /* Inline kernel$Char$!= (var86,var87) on <var86:Char> */
var90 = var86 == var87;
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline kernel$Int$+ (var_cost3,1l) on <var_cost3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var94 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var98 = var_cost3 + 1l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_cost3 = var92;
} else {
}
{
{ /* Inline kernel$Int$+ (var_j49,1l) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var101 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var105 = var_j49 + 1l;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
{
var106 = core___core__Int___Comparable__min(var_cost1, var_cost2);
}
{
var107 = core___core__Int___Comparable__min(var106, var_cost3);
}
{
var108 = (val*)(var107<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_v1, var99, var108); /* Direct call array$Array$[]= on <var_v1:Array[Int]>*/
}
{
var109 = core___core__Int___Discrete__successor(var_j49, 1l);
}
var_j49 = var109;
}
BREAK_label58: (void)0;
var_tmp = var_v1;
var_v1 = var_v0;
var_v0 = var_tmp;
{
var110 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var110;
}
BREAK_label40: (void)0;
{
var111 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v0, var_olen);
}
var112 = (int64_t)(var111)>>2;
var = var112;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$items for (self: FlatText): NativeString */
char* core___core__FlatText___items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$length for (self: FlatText): Int */
int64_t core___core__FlatText___Text__length(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$length= for (self: FlatText, Int) */
void core___core__FlatText___length_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__abstract_text__FlatText___length].l = p0; /* _length on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text$FlatText$byte_length for (self: FlatText): Int */
int64_t core___core__FlatText___Text__byte_length(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$byte_length= for (self: FlatText, Int) */
void core___core__FlatText___byte_length_61d(val* self, int64_t p0) {
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = p0; /* _byte_length on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text$StringCharView$target for (self: StringCharView): Text */
val* core__abstract_text___core__abstract_text__StringCharView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1319);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$target= for (self: StringCharView, Text) */
void core__abstract_text___core__abstract_text__StringCharView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__StringCharView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1319);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_text__StringCharView___target].val = p0; /* _target on <self:StringCharView> */
RET_LABEL:;
}
/* method abstract_text$StringCharView$is_empty for (self: StringCharView): Bool */
short int core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
val* var3 /* : Text */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_text$StringCharView$target (self) on <self:StringCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:StringCharView> */
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
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var1); /* is_empty on <var1:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$length for (self: StringCharView): Int */
int64_t core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(val* self) {
int64_t var /* : Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
int64_t var4 /* : Int */;
{
{ /* Inline abstract_text$StringCharView$target (self) on <self:StringCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:StringCharView> */
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
var4 = ((int64_t(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$iterator for (self: StringCharView): IndexedIterator[Char] */
val* core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$reverse_iterator for (self: StringCharView): IndexedIterator[Char] */
val* core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
int64_t var1 /* : Int */;
int64_t var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var5 /* : Int */;
val* var6 /* : IndexedIterator[nullable Object] */;
{
var1 = core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = ((val*(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(self, var2); /* reverse_iterator_from on <self:StringCharView>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$init for (self: StringCharView) */
void core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init]))(self); /* init on <self:StringCharView>*/
}
RET_LABEL:;
}
/* method abstract_text$String$to_s for (self: String): String */
val* core___core__String___Object__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$String$clone for (self: String): String */
val* core___core__String___core__kernel__Cloneable__clone(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* <self:String> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1360);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$String$to_snake_case for (self: String): String */
val* core___core__String___Text__to_snake_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
int64_t var4 /* : Int */;
val* var5 /* : Buffer */;
val* var_new_str /* var new_str: Buffer */;
val* var6 /* : String */;
{
var1 = core___core__Text___is_lower(self);
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__Buffer(&type_core__Buffer);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var5 = core__flat___Buffer___with_cap(var2, var4);
}
var_new_str = var5;
{
((void(*)(val* self, val* p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_new_str, self); /* append on <var_new_str:Buffer>*/
}
{
core___core__Buffer___snake_case(var_new_str); /* Direct call abstract_text$Buffer$snake_case on <var_new_str:Buffer>*/
}
{
var6 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_new_str); /* to_s on <var_new_str:Buffer>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$written for (self: Buffer): Bool */
short int core___core__Buffer___written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$written= for (self: Buffer, Bool) */
void core___core__Buffer___written_61d(val* self, short int p0) {
self->attrs[COLOR_core__abstract_text__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method abstract_text$Buffer$[]= for (self: Buffer, Int, Char) */
void core___core__Buffer____91d_93d_61d(val* self, int64_t p0, uint32_t p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1410);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$clone for (self: Buffer): Buffer */
val* core___core__Buffer___core__kernel__Cloneable__clone(val* self) {
val* var /* : Buffer */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
int64_t var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_cln /* var cln: Buffer */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Buffer>*/
}
{
var4 = core__flat___Buffer___with_cap(var1, var3);
}
var_cln = var4;
{
((void(*)(val* self, val* p0))(var_cln->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_cln, self); /* append on <var_cln:Buffer>*/
}
/* <var_cln:Buffer> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_cln->type->table_size) {
var5 = 0;
} else {
var5 = var_cln->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var_cln == NULL ? "null" : var_cln->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1426);
fatal_exit(1);
}
var = var_cln;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$add for (self: Buffer, Char) */
void core___core__Buffer___add(val* self, uint32_t p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1429);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$enlarge for (self: Buffer, Int) */
void core___core__Buffer___enlarge(val* self, int64_t p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "enlarge", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1443);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$append for (self: Buffer, Text) */
void core___core__Buffer___append(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "append", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1446);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$upper for (self: Buffer) */
void core___core__Buffer___upper(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1470);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$lower for (self: Buffer) */
void core___core__Buffer___lower(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1478);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$chars for (self: Buffer): Sequence[Char] */
val* core___core__Buffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1541);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$* for (self: Buffer, Int): Buffer */
val* core___core__Buffer___Text___42d(val* self, int64_t p0) {
val* var /* : Buffer */;
int64_t var_i /* var i: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
int64_t var3 /* : Int */;
int64_t var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var7 /* : Int */;
val* var8 /* : Buffer */;
val* var_ret /* var ret: Buffer */;
int64_t var_its /* var its: Int */;
int64_t var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
int64_t var16 /* : Int */;
var_i = p0;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$* (var3,var_i) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var6 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var7 = var3 * var_i;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = core__flat___Buffer___with_cap(var1, var4);
}
var_ret = var8;
var_its = 0l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel$Int$< (var_its,var_) on <var_its:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var_its < var_;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
((void(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_ret, self); /* append on <var_ret:Buffer>*/
}
{
var16 = core___core__Int___Discrete__successor(var_its, 1l);
}
var_its = var16;
}
BREAK_label: (void)0;
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$insert_char for (self: Buffer, Char, Int) */
void core___core__Buffer___insert_char(val* self, uint32_t p0, int64_t p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert_char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1602);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$to_upper for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_upper(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var_ret /* var ret: Buffer */;
{
var1 = core___core__Buffer___core__kernel__Cloneable__clone(self);
}
var_ret = var1;
{
((void(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__upper]))(var_ret); /* upper on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$to_lower for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_lower(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var_ret /* var ret: Buffer */;
{
var1 = core___core__Buffer___core__kernel__Cloneable__clone(self);
}
var_ret = var1;
{
((void(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__lower]))(var_ret); /* lower on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$to_snake_case for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_snake_case(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var_ret /* var ret: Buffer */;
{
var1 = core___core__Buffer___core__kernel__Cloneable__clone(self);
}
var_ret = var1;
{
core___core__Buffer___snake_case(var_ret); /* Direct call abstract_text$Buffer$snake_case on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$snake_case for (self: Buffer) */
void core___core__Buffer___snake_case(val* self) {
short int var /* : Bool */;
short int var_prev_is_lower /* var prev_is_lower: Bool */;
short int var_prev_is_upper /* var prev_is_upper: Bool */;
int64_t var_i /* var i: Int */;
int64_t var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int64_t var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
int64_t var17 /* : Int */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
int64_t var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
int64_t var26 /* : Int */;
int64_t var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
int64_t var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
int64_t var42 /* : Int */;
uint32_t var43 /* : Char */;
short int var44 /* : Bool */;
int64_t var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
int64_t var51 /* : Int */;
uint32_t var52 /* : Char */;
int64_t var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
int64_t var59 /* : Int */;
{
var = core___core__Text___is_lower(self);
}
if (var){
goto RET_LABEL;
} else {
}
var_prev_is_lower = 0;
var_prev_is_upper = 0;
var_i = 0l;
for(;;) {
{
var1 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$< (var_i,var1) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Buffer>*/
}
{
var7 = ((val*(*)(val* self, int64_t p0))((((int64_t)var6&3)?class_info[((int64_t)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char](Sequence[Char])>*/
}
var8 = (uint32_t)((int64_t)(var7)>>2);
var_char = var8;
{
var9 = core___core__Char___is_lower(var_char);
}
if (var9){
var_prev_is_lower = 1;
var_prev_is_upper = 0;
} else {
{
var10 = core___core__Char___is_upper(var_char);
}
if (var10){
if (var_prev_is_lower){
{
((void(*)(val* self, uint32_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer__insert_char]))(self, '_', var_i); /* insert_char on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var_i + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_i = var11;
} else {
var_ = var_prev_is_upper;
if (var_prev_is_upper){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_i + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((int64_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
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
var19 = var28;
} else {
var19 = var_;
}
var_35 = var19;
if (var19){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_i + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
var43 = ((uint32_t(*)(val* self, int64_t p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var36); /* [] on <self:Buffer>*/
}
{
var44 = core___core__Char___is_lower(var43);
}
var18 = var44;
} else {
var18 = var_35;
}
if (var18){
{
((void(*)(val* self, uint32_t p0, int64_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer__insert_char]))(self, '_', var_i); /* insert_char on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var47 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_i + 1l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_i = var45;
} else {
}
}
{
var52 = core___core__Char___to_lower(var_char);
}
{
((void(*)(val* self, int64_t p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var52); /* []= on <self:Buffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 1;
} else {
var_prev_is_lower = 0;
var_prev_is_upper = 0;
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
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$Object$to_s for (self: Object): String */
val* core__abstract_text___Object___to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))((((int64_t)self&3)?class_info[((int64_t)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__inspect]))(self); /* inspect on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$native_class_name for (self: Object): NativeString */
char* core__abstract_text___Object___native_class_name(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
char* var1 /* : NativeString */;
var_class_name = self == NULL ? "null" : (((int64_t)self&3)?type_info[((int64_t)self&3)]:self->type)->name;
var1 = (char*)var_class_name;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$class_name for (self: Object): String */
val* core__abstract_text___Object___class_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
const char* var_class_name;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text$Object$native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : (((int64_t)self&3)?type_info[((int64_t)self&3)]:self->type)->name;
var3 = (char*)var_class_name;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___NativeString___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$inspect for (self: Object): String */
val* core__abstract_text___Object___inspect(val* self) {
val* var /* : String */;
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
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "<";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ">";
var9 = core__flat___NativeString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = core__abstract_text___Object___inspect_head(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$inspect_head for (self: Object): String */
val* core__abstract_text___Object___inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : String */;
int64_t var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ":#";
var5 = core__flat___NativeString___to_s_full(var4, 2l, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((int64_t(*)(val* self))((((int64_t)self&3)?class_info[((int64_t)self&3)]:self->class)->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
{
var8 = core__abstract_text___Int___to_hex(var7);
}
((struct instance_core__NativeArray*)var1)->values[2]=var8;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Bool$to_s for (self: Bool): String */
val* core__abstract_text___Bool___Object__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
static val* varonce6;
static int varonce6_guard;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
if (self){
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "true";
var5 = core__flat___NativeString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (likely(varonce6_guard)) {
var7 = varonce6;
} else {
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "false";
var11 = core__flat___NativeString___to_s_full(var10, 5l, 5l);
var9 = var11;
varonce8 = var9;
}
var7 = var9;
varonce6 = var7;
varonce6_guard = 1;
}
var = var7;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text$Bool$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Bool___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
short int var2 /* : Bool */;
var2 = (short int)((int64_t)(self)>>2);
var1 = core__abstract_text___Bool___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Byte$byte_to_s_len for (self: Byte): Int */
int64_t core__abstract_text___Byte___byte_to_s_len(unsigned char self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = core__abstract_text___Byte_byte_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Byte$native_byte_to_s for (self: Byte, NativeString, Int) */
void core__abstract_text___Byte___native_byte_to_s(unsigned char self, char* p0, int64_t p1) {
core__abstract_text___Byte_native_byte_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text$Byte$to_s for (self: Byte): String */
val* core__abstract_text___Byte___Object__to_s(unsigned char self) {
val* var /* : String */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
int64_t var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : NativeString */;
char* var5 /* : NativeString */;
int64_t var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var9 /* : Int */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
int64_t var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
int64_t var20 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
{
{ /* Inline abstract_text$Byte$byte_to_s_len (self) on <self:Byte> */
var3 = core__abstract_text___Byte_byte_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_nslen + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native$NativeString$new (var4,var6) on <var4:NativeString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
{
{ /* Inline native$NativeString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_nslen + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_text$Byte$native_byte_to_s (self,var_ns,var14) on <self:Byte> */
core__abstract_text___Byte_native_byte_to_s___impl(self, var_ns, var14);
RET_LABEL21:(void)0;
}
}
{
var23 = (val*)(var_nslen<<2|1);
var22 = core__flat___NativeString___to_s_unsafe(var_ns, var23);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Byte$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Byte___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
unsigned char var2 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Object to Byte */;
var1 = core__abstract_text___Byte___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$strerror_ext for (self: Int): NativeString */
char* core__abstract_text___Int___strerror_ext(int64_t self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = core__abstract_text___Int_strerror_ext___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$strerror for (self: Int): String */
val* core__abstract_text___Int___strerror(int64_t self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text$Int$strerror_ext (self) on <self:Int> */
var3 = core__abstract_text___Int_strerror_ext___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___NativeString___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$fill_buffer for (self: Int, Buffer, Int) */
void core__abstract_text___Int___fill_buffer(int64_t self, val* p0, int64_t p1) {
val* var_s /* var s: Buffer */;
int64_t var_base /* var base: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
int64_t var4 /* : Int */;
int64_t var6 /* : Int */;
int64_t var_n /* var n: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
int64_t var14 /* : Int */;
int64_t var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
int64_t var21 /* : Int */;
int64_t var_pos /* var pos: Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : SequenceRead[Char] */;
int64_t var38 /* : Int */;
int64_t var40 /* : Int */;
uint32_t var41 /* : Char */;
val* var42 /* : nullable Object */;
int64_t var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
int64_t var49 /* : Int */;
int64_t var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
int64_t var56 /* : Int */;
var_s = p0;
var_base = p1;
{
{ /* Inline kernel$Int$< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var3 = self < 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline kernel$Int$unary - (self) on <self:Int> */
var6 = -self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_n = var4;
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var8 = (val*)((int64_t)('-')<<2|2);
((void(*)(val* self, int64_t p0, val* p1))((((int64_t)var7&3)?class_info[((int64_t)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var7, 0l, var8); /* []= on <var7:SequenceRead[Char](Sequence[Char])>*/
}
} else {
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
var11 = self == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var13 = (val*)((int64_t)('0')<<2|2);
((void(*)(val* self, int64_t p0, val* p1))((((int64_t)var12&3)?class_info[((int64_t)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var12, 0l, var13); /* []= on <var12:SequenceRead[Char](Sequence[Char])>*/
}
goto RET_LABEL;
} else {
var_n = self;
}
}
{
var14 = core___core__Int___digit_count(self, var_base);
}
{
{ /* Inline kernel$Int$- (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var14 - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_pos = var15;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var29 = var_pos >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
{ /* Inline kernel$Int$> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var_n > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var37 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
{ /* Inline kernel$Int$% (var_n,var_base) on <var_n:Int> */
var40 = var_n % var_base;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var41 = core___core__Int___to_c(var38);
}
{
var42 = (val*)((int64_t)(var41)<<2|2);
((void(*)(val* self, int64_t p0, val* p1))((((int64_t)var37&3)?class_info[((int64_t)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var37, var_pos, var42); /* []= on <var37:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel$Int$/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var45 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var49 = var_n / var_base;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_n = var43;
{
{ /* Inline kernel$Int$- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_pos - 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_pos = var50;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$Int$int_to_s_len for (self: Int): Int */
int64_t core__abstract_text___Int___int_to_s_len(int64_t self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = core__abstract_text___Int_int_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$native_int_to_s for (self: Int, NativeString, Int) */
void core__abstract_text___Int___native_int_to_s(int64_t self, char* p0, int64_t p1) {
core__abstract_text___Int_native_int_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text$Int$to_base for (self: Int, Int): String */
val* core__abstract_text___Int___to_base(int64_t self, int64_t p0) {
val* var /* : String */;
int64_t var_base /* var base: Int */;
int64_t var1 /* : Int */;
int64_t var_l /* var l: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var4 /* : Buffer */;
val* var_s /* var s: Buffer */;
int64_t var_x /* var x: Int */;
int64_t var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
int64_t var9 /* : Int */;
val* var10 /* : String */;
var_base = p0;
{
var1 = core___core__Int___digit_count(self, var_base);
}
var_l = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__Buffer(&type_core__Buffer);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = core__flat___Buffer___new(var2);
}
var_s = var4;
{
((void(*)(val* self, int64_t p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(var_s, var_l); /* enlarge on <var_s:Buffer>*/
}
var_x = 0l;
var_ = var_l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_x,var_) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_x < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
((void(*)(val* self, uint32_t p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_s, ' '); /* add on <var_s:Buffer>*/
}
{
var9 = core___core__Int___Discrete__successor(var_x, 1l);
}
var_x = var9;
}
BREAK_label: (void)0;
{
core__abstract_text___Int___fill_buffer(self, var_s, var_base); /* Direct call abstract_text$Int$fill_buffer on <self:Int>*/
}
{
var10 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$to_hex for (self: Int): String */
val* core__abstract_text___Int___to_hex(int64_t self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = core__abstract_text___Int___to_base(self, 16l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Float$to_s for (self: Float): String */
val* core__abstract_text___Float___Object__to_s(double self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_str /* var str: String */;
short int var2 /* : Bool */;
int64_t var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int64_t var11 /* : Int */;
int64_t var_len /* var len: Int */;
int64_t var_i /* var i: Int */;
int64_t var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var15 /* : Int */;
int64_t var_16 /* var : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
int64_t var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
int64_t var30 /* : Int */;
int64_t var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
int64_t var37 /* : Int */;
int64_t var_j /* var j: Int */;
val* var38 /* : SequenceRead[Char] */;
val* var39 /* : nullable Object */;
uint32_t var40 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int64_t var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
int64_t var54 /* : Int */;
val* var55 /* : Text */;
int64_t var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
int64_t var62 /* : Int */;
val* var63 /* : Text */;
int64_t var64 /* : Int */;
{
var1 = core__abstract_text___Float___to_precision(self, 3l);
}
var_str = var1;
{
var3 = core__math___Float___is_inf(self);
}
{
{ /* Inline kernel$Int$!= (var3,0l) on <var3:Int> */
var6 = var3 == 0l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var2 = var_;
} else {
{
{ /* Inline math$Float$is_nan (self) on <self:Float> */
var10 = core__math___Float_is_nan___impl(self);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var2 = var8;
}
if (var2){
var = var_str;
goto RET_LABEL;
} else {
}
{
var11 = ((int64_t(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_len = var11;
var_i = 0l;
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var15 = var_len - 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_16 = var12;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_16) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_16:Int> isa OTHER */
/* <var_16:Int> isa OTHER */
var19 = 1; /* easy <var_16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var23 = var_i <= var_16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var30 = var_len - 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var24,var_i) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var33 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var37 = var24 - var_i;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_j = var31;
{
var38 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var39 = ((val*(*)(val* self, int64_t p0))((((int64_t)var38&3)?class_info[((int64_t)var38&3)]:var38->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var38, var_j); /* [] on <var38:SequenceRead[Char]>*/
}
var40 = (uint32_t)((int64_t)(var39)>>2);
var_c = var40;
{
{ /* Inline kernel$Char$== (var_c,'0') on <var_c:Char> */
var43 = var_c == '0';
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
goto BREAK_label44;
} else {
{
{ /* Inline kernel$Char$== (var_c,'.') on <var_c:Char> */
var47 = var_c == '.';
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline kernel$Int$+ (var_j,2l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var50 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_j + 2l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
var55 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, var48); /* substring on <var_str:String>*/
}
var = var55;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_j + 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
var63 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, var56); /* substring on <var_str:String>*/
}
var = var63;
goto RET_LABEL;
}
}
BREAK_label44: (void)0;
{
var64 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var64;
}
BREAK_label: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Float$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Float___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Object to Float */;
var1 = core__abstract_text___Float___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Float$to_precision for (self: Float, Int): String */
val* core__abstract_text___Float___to_precision(double self, int64_t p0) {
val* var /* : String */;
int64_t var_decimals /* var decimals: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
int64_t var7 /* : Int */;
int64_t var_isinf /* var isinf: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
int64_t var15 /* : Int */;
int64_t var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int64_t var28 /* : Int */;
int64_t var30 /* : Int */;
val* var31 /* : String */;
double var_f /* var f: Float */;
int64_t var_i /* var i: Int */;
int64_t var_ /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
double var36 /* : Float */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
double var42 /* : Float */;
int64_t var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
double var51 /* : Float */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
double var57 /* : Float */;
double var58 /* : Float */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
double var64 /* : Float */;
int64_t var65 /* : Int */;
int64_t var67 /* : Int */;
int64_t var_i68 /* var i: Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
val* var80 /* : Text */;
val* var81 /* : Text */;
int64_t var82 /* : Int */;
val* var83 /* : String */;
val* var_s /* var s: String */;
int64_t var84 /* : Int */;
int64_t var_sl /* var sl: Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
int64_t var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
int64_t var98 /* : Int */;
val* var99 /* : Text */;
val* var_p1 /* var p1: nullable Object */;
int64_t var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
int64_t var106 /* : Int */;
val* var107 /* : Text */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
int64_t var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
int64_t var122 /* : Int */;
val* var123 /* : Text */;
val* var124 /* : Text */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
short int var131 /* : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : String */;
val* var136 /* : Text */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : String */;
val* var141 /* : Text */;
val* var142 /* : Text */;
var_decimals = p0;
{
{ /* Inline math$Float$is_nan (self) on <self:Float> */
var3 = core__math___Float_is_nan___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "nan";
var6 = core__flat___NativeString___to_s_full(var5, 3l, 3l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var7 = core__math___Float___is_inf(self);
}
var_isinf = var7;
{
{ /* Inline kernel$Int$== (var_isinf,1l) on <var_isinf:Int> */
var10 = var_isinf == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "inf";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var17 = -1l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_isinf,var15) on <var_isinf:Int> */
var20 = var_isinf == var15;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "-inf";
var24 = core__flat___NativeString___to_s_full(var23, 4l, 4l);
var22 = var24;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel$Int$== (var_decimals,0l) on <var_decimals:Int> */
var27 = var_decimals == 0l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline kernel$Float$to_i (self) on <self:Float> */
var30 = (int64_t)self;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var31 = core__flat___Int___core__abstract_text__Object__to_s(var28);
}
var = var31;
goto RET_LABEL;
} else {
}
var_f = self;
var_i = 0l;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_i < var_;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Float$* (var_f,10.0) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var38 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var42 = var_f * 10.0;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_f = var36;
{
var43 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var43;
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Float$> (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var46 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var50 = self > 0.0;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline kernel$Float$+ (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var53 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var57 = var_f + 0.5;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_f = var51;
} else {
{
{ /* Inline kernel$Float$- (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var60 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var64 = var_f - 0.5;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_f = var58;
}
{
{ /* Inline kernel$Float$to_i (var_f) on <var_f:Float> */
var67 = (int64_t)var_f;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_i68 = var65;
{
{ /* Inline kernel$Int$== (var_i68,0l) on <var_i68:Int> */
var71 = var_i68 == 0l;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "0.";
var75 = core__flat___NativeString___to_s_full(var74, 2l, 2l);
var73 = var75;
varonce72 = var73;
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "0";
var79 = core__flat___NativeString___to_s_full(var78, 1l, 1l);
var77 = var79;
varonce76 = var77;
}
{
var80 = ((val*(*)(val* self, int64_t p0))(var77->class->vft[COLOR_core__abstract_text__Text___42d]))(var77, var_decimals); /* * on <var77:String>*/
}
{
var81 = ((val*(*)(val* self, val* p0))(var73->class->vft[COLOR_core__abstract_text__Text___43d]))(var73, var80); /* + on <var73:String>*/
}
var = var81;
goto RET_LABEL;
} else {
}
{
var82 = core___core__Int___abs(var_i68);
}
{
var83 = core__flat___Int___core__abstract_text__Object__to_s(var82);
}
var_s = var83;
{
var84 = ((int64_t(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_sl = var84;
{
{ /* Inline kernel$Int$> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var87 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var91 = var_sl > var_decimals;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline kernel$Int$- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var94 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var98 = var_sl - var_decimals;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
var99 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, 0l, var92); /* substring on <var_s:String>*/
}
var_p1 = var99;
{
{ /* Inline kernel$Int$- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var102 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var106 = var_sl - var_decimals;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
var107 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, var100, var_decimals); /* substring on <var_s:String>*/
}
var_p2 = var107;
} else {
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "0";
var111 = core__flat___NativeString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
var_p1 = var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "0";
var115 = core__flat___NativeString___to_s_full(var114, 1l, 1l);
var113 = var115;
varonce112 = var113;
}
{
{ /* Inline kernel$Int$- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var118 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var122 = var_decimals - var_sl;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var123 = ((val*(*)(val* self, int64_t p0))(var113->class->vft[COLOR_core__abstract_text__Text___42d]))(var113, var116); /* * on <var113:String>*/
}
{
var124 = ((val*(*)(val* self, val* p0))(var123->class->vft[COLOR_core__abstract_text__Text___43d]))(var123, var_s); /* + on <var123:Text(String)>*/
}
var_p2 = var124;
}
{
{ /* Inline kernel$Int$< (var_i68,0l) on <var_i68:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var127 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var131 = var_i68 < 0l;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
if (var125){
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "-";
var135 = core__flat___NativeString___to_s_full(var134, 1l, 1l);
var133 = var135;
varonce132 = var133;
}
{
var136 = ((val*(*)(val* self, val* p0))(var133->class->vft[COLOR_core__abstract_text__Text___43d]))(var133, var_p1); /* + on <var133:String>*/
}
var_p1 = var136;
} else {
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = ".";
var140 = core__flat___NativeString___to_s_full(var139, 1l, 1l);
var138 = var140;
varonce137 = var138;
}
{
var141 = ((val*(*)(val* self, val* p0))(var_p1->class->vft[COLOR_core__abstract_text__Text___43d]))(var_p1, var138); /* + on <var_p1:nullable Object(String)>*/
}
{
var142 = ((val*(*)(val* self, val* p0))(var141->class->vft[COLOR_core__abstract_text__Text___43d]))(var141, var_p2); /* + on <var141:Text(String)>*/
}
var = var142;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$u8char_len for (self: Char): Int */
int64_t core__abstract_text___Char___u8char_len(uint32_t self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
int64_t var3 /* : Int */;
int64_t var_c /* var c: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (int64_t)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
{
{ /* Inline kernel$Int$< (var_c,128l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var6 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_c < 128l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = 1l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,2047l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var10 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var_c <= 2047l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = 2l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,65535l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var17 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var21 = var_c <= 65535l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = 3l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,1114111l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var24 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var28 = var_c <= 1114111l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 4l;
goto RET_LABEL;
} else {
}
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$to_s for (self: Char): String */
val* core__abstract_text___Char___Object__to_s(uint32_t self) {
val* var /* : String */;
int64_t var1 /* : Int */;
int64_t var_ln /* var ln: Int */;
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
val* var12 /* : String */;
val* var13 /* : nullable Int */;
{
var1 = core__abstract_text___Char___u8char_len(self);
}
var_ln = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_ln + 1l;
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
{ /* Inline abstract_text$Char$u8char_tos (self,var_ns,var_ln) on <self:Char> */
core__abstract_text___Char_u8char_tos___impl(self, var_ns, var_ln);
RET_LABEL11:(void)0;
}
}
{
var13 = (val*)(var_ln<<2|1);
var12 = core__flat___NativeString___to_s_unsafe(var_ns, var13);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Char___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((int64_t)(self)>>2);
var1 = core__abstract_text___Char___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$u8char_tos for (self: Char, NativeString, Int) */
void core__abstract_text___Char___u8char_tos(uint32_t self, char* p0, int64_t p1) {
core__abstract_text___Char_u8char_tos___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text$Char$is_numeric for (self: Char): Bool */
short int core__abstract_text___Char___is_numeric(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_hexdigit for (self: Char): Bool */
short int core__abstract_text___Char___is_hexdigit(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var6 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var7 = self >= '0';
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var10 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var14 = self <= '9';
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var3 = var8;
} else {
var3 = var_;
}
var_15 = var3;
if (var3){
var2 = var_15;
} else {
{
{ /* Inline kernel$Char$>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var19 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var23 = self >= 'A';
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_24 = var17;
if (var17){
{
{ /* Inline kernel$Char$<= (self,'F') on <self:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var27 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var31 = self <= 'F';
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var16 = var25;
} else {
var16 = var_24;
}
var2 = var16;
}
var_32 = var2;
if (var2){
var1 = var_32;
} else {
{
{ /* Inline kernel$Char$>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var36 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var40 = self >= 'a';
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
{ /* Inline kernel$Char$<= (self,'f') on <self:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var44 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var48 = self <= 'f';
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var33 = var42;
} else {
var33 = var_41;
}
var1 = var33;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$from_hex for (self: Char): Int */
int64_t core__abstract_text___Char___from_hex(uint32_t self) {
int64_t var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
int64_t var13 /* : Int */;
int64_t var15 /* : Int */;
int64_t var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
int64_t var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
int64_t var39 /* : Int */;
int64_t var41 /* : Int */;
int64_t var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
int64_t var48 /* : Int */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
int64_t var65 /* : Int */;
int64_t var67 /* : Int */;
int64_t var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
int64_t var74 /* : Int */;
short int var75 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var15 = (int64_t)self;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var13,48l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <48l:Int> isa OTHER */
/* <48l:Int> isa OTHER */
var18 = 1; /* easy <48l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var13 - 48l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Char$>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var26 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var30 = self >= 'A';
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_31 = var24;
if (var24){
{
{ /* Inline kernel$Char$<= (self,'F') on <self:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var34 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var38 = self <= 'F';
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var23 = var32;
} else {
var23 = var_31;
}
if (var23){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var41 = (int64_t)self;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var39,55l) on <var39:Int> */
/* Covariant cast for argument 0 (i) <55l:Int> isa OTHER */
/* <55l:Int> isa OTHER */
var44 = 1; /* easy <55l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var39 - 55l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Char$>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var52 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var56 = self >= 'a';
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_57 = var50;
if (var50){
{
{ /* Inline kernel$Char$<= (self,'f') on <self:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var60 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var64 = self <= 'f';
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var49 = var58;
} else {
var49 = var_57;
}
if (var49){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var67 = (int64_t)self;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var65,87l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <87l:Int> isa OTHER */
/* <87l:Int> isa OTHER */
var70 = 1; /* easy <87l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var74 = var65 - 87l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var = var68;
goto RET_LABEL;
} else {
}
{
var75 = core__abstract_text___Char___is_hexdigit(self);
}
if (unlikely(!var75)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2115);
fatal_exit(1);
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2117);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Collection$to_s for (self: Collection[nullable Object]): String */
val* core__abstract_text___Collection___Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : Text */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : Text */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = ",";
var7 = core__flat___NativeString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce4 = var5;
}
{
var8 = core__abstract_text___Collection___join(self, var5, ((val*)NULL));
}
{
var9 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__Text___43d]))(var1, var8); /* + on <var1:String>*/
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "]";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_core__abstract_text__Text___43d]))(var9, var11); /* + on <var9:Text(String)>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Collection$plain_to_s for (self: Collection[nullable Object]): String */
val* core__abstract_text___Collection___plain_to_s(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = core__flat___Buffer___new(var1);
}
var_s = var3;
var_ = self;
{
var4 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((int64_t)var_5&3)?class_info[((int64_t)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[nullable Object]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((int64_t)var_5&3)?class_info[((int64_t)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[nullable Object]>*/
}
var_e = var7;
if (var_e == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((int64_t)var_e&3)?class_info[((int64_t)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))((((int64_t)var_e&3)?class_info[((int64_t)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var10); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((int64_t)var_5&3)?class_info[((int64_t)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_5&3)?class_info[((int64_t)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[nullable Object]>*/
}
{
var11 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Collection$join for (self: Collection[nullable Object], nullable Text, nullable Text): String */
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_separator /* var separator: nullable Text */;
val* var_last_separator /* var last_separator: nullable Text */;
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
val* var8 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : String */;
val* var31 /* : String */;
var_separator = p0;
var_last_separator = p1;
{
var1 = ((short int(*)(val* self))((((int64_t)self&3)?class_info[((int64_t)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
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
var8 = ((val*(*)(val* self))((((int64_t)self&3)?class_info[((int64_t)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
var_i = var8;
{
var9 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var9;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))((((int64_t)var_e&3)?class_info[((int64_t)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var10 = var11;
}
if (var10){
{
var12 = ((val*(*)(val* self))((((int64_t)var_e&3)?class_info[((int64_t)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var12); /* append on <var_s:Buffer>*/
}
} else {
}
if (var_last_separator == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_last_separator->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_last_separator, ((val*)NULL)); /* == on <var_last_separator:nullable Text>*/
var13 = var14;
}
if (var13){
var_last_separator = var_separator;
} else {
}
{
((void(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
for(;;) {
{
var15 = ((short int(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var16;
{
((void(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
{
var17 = ((short int(*)(val* self))((((int64_t)var_i&3)?class_info[((int64_t)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var17){
if (var_separator == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_separator,((val*)NULL)) on <var_separator:nullable Text> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var_separator->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_separator, var_other); /* == on <var_separator:nullable Text(Text)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_separator); /* append on <var_s:Buffer>*/
}
} else {
}
} else {
if (var_last_separator == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_last_separator,((val*)NULL)) on <var_last_separator:nullable Text> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_last_separator->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_last_separator, var_other); /* == on <var_last_separator:nullable Text(Text)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_last_separator); /* append on <var_s:Buffer>*/
}
} else {
}
}
if (var_e == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
var29 = ((short int(*)(val* self, val* p0))((((int64_t)var_e&3)?class_info[((int64_t)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var28 = var29;
}
if (var28){
{
var30 = ((val*(*)(val* self))((((int64_t)var_e&3)?class_info[((int64_t)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var30); /* append on <var_s:Buffer>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$program_args for (self: Sys): Sequence[String] */
val* core__abstract_text___Sys___program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((int64_t)var1&3)?class_info[((int64_t)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable Sequence[String]>*/
var2 = var3;
}
if (var2){
{
core__abstract_text___Sys___init_args(self); /* Direct call abstract_text$Sys$init_args on <self:Sys>*/
}
} else {
}
var4 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2211);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$program_name for (self: Sys): String */
val* core__abstract_text___Sys___program_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text$Sys$native_argv (self,0l) on <self:Sys> */
var3 = glob_argv[0l];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___NativeString___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$init_args for (self: Sys) */
void core__abstract_text___Sys___init_args(val* self) {
int64_t var /* : Int */;
int64_t var2 /* : Int */;
int64_t var_argc /* var argc: Int */;
val* var3 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
int64_t var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
int64_t var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
int64_t var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
int64_t var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
int64_t var25 /* : Int */;
{
{ /* Inline abstract_text$Sys$native_argc (self) on <self:Sys> */
var2 = glob_argc;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_argc = var;
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var3, 0l); /* Direct call array$Array$with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var_i = 1l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var_argc;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_text$Sys$native_argv (self,var_i) on <self:Sys> */
var17 = glob_argv[var_i];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var18 = core__flat___NativeString___core__abstract_text__Object__to_s(var15);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var8, var18); /* Direct call array$Array$[]= on <var_args:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_core__abstract_text__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method abstract_text$Sys$native_argc for (self: Sys): Int */
int64_t core__abstract_text___Sys___native_argc(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$native_argv for (self: Sys, Int): NativeString */
char* core__abstract_text___Sys___native_argv(val* self, int64_t p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$alpha_comparator for (self: Sys): Comparator */
val* core__abstract_text___Sys___alpha_comparator(val* self) {
val* var /* : Comparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : AlphaComparator */;
val* var2 /* : AlphaComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__abstract_text__AlphaComparator(&type_core__abstract_text__AlphaComparator);
{
{ /* Inline kernel$Object$init (var2) on <var2:AlphaComparator> */
RET_LABEL3:(void)0;
}
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
/* method abstract_text$Sys$args for (self: Sys): Sequence[String] */
val* core__abstract_text___Sys___args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = core__abstract_text___Sys___program_args(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$CachedAlphaComparator$cache for (self: CachedAlphaComparator): HashMap[Object, String] */
val* core___core__CachedAlphaComparator___cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2256);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$CachedAlphaComparator$do_to_s for (self: CachedAlphaComparator, Object): String */
val* core___core__CachedAlphaComparator___do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var_a /* var a: Object */;
val* var1 /* : HashMap[Object, String] */;
val* var3 /* : HashMap[Object, String] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Object, String] */;
val* var7 /* : HashMap[Object, String] */;
val* var8 /* : nullable Object */;
val* var9 /* : String */;
val* var_res /* var res: String */;
val* var10 /* : HashMap[Object, String] */;
val* var12 /* : HashMap[Object, String] */;
var_a = p0;
{
{ /* Inline abstract_text$CachedAlphaComparator$cache (self) on <self:CachedAlphaComparator> */
var3 = self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2256);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_a);
}
if (var4){
{
{ /* Inline abstract_text$CachedAlphaComparator$cache (self) on <self:CachedAlphaComparator> */
var7 = self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2256);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_a);
}
var = var8;
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))((((int64_t)var_a&3)?class_info[((int64_t)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:Object>*/
}
var_res = var9;
{
{ /* Inline abstract_text$CachedAlphaComparator$cache (self) on <self:CachedAlphaComparator> */
var12 = self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2256);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var10, var_a, var_res); /* Direct call hash_collection$HashMap$[]= on <var10:HashMap[Object, String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$CachedAlphaComparator$compare for (self: CachedAlphaComparator, Object, Object): Int */
int64_t core___core__CachedAlphaComparator___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
int64_t var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var7 /* : String */;
val* var8 /* : String */;
int64_t var9 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa COMPARED */
/* <p0:Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((int64_t)p0&3)?type_info[((int64_t)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((int64_t)p0&3)?type_info[((int64_t)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((int64_t)p0&3)?type_info[((int64_t)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2265);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa COMPARED */
/* <p1:Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((int64_t)p1&3)?type_info[((int64_t)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((int64_t)p1&3)?type_info[((int64_t)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((int64_t)p1&3)?type_info[((int64_t)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2265);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = core___core__CachedAlphaComparator___do_to_s(self, var_a);
}
{
var8 = core___core__CachedAlphaComparator___do_to_s(self, var_b);
}
{
var9 = core___core__Comparable____60d_61d_62d(var7, var8);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$AlphaComparator$compare for (self: AlphaComparator, nullable Object, nullable Object): Int */
int64_t core__abstract_text___core__abstract_text__AlphaComparator___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
int64_t var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int64_t var12 /* : Int */;
int64_t var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : String */;
int64_t var19 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((int64_t)p0&3)?type_info[((int64_t)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((int64_t)p0&3)?type_info[((int64_t)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((int64_t)p0&3)?type_info[((int64_t)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2273);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((int64_t)p1&3)?type_info[((int64_t)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((int64_t)p1&3)?type_info[((int64_t)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((int64_t)p1&3)?type_info[((int64_t)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2273);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
if (var_a == NULL) {
var8 = (var_b == NULL);
} else {
var9 = ((short int(*)(val* self, val* p0))((((int64_t)var_a&3)?class_info[((int64_t)var_a&3)]:var_a->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_a, var_b); /* == on <var_a:nullable Object>*/
var8 = var9;
}
if (var8){
var = 0l;
goto RET_LABEL;
} else {
}
if (var_a == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))((((int64_t)var_a&3)?class_info[((int64_t)var_a&3)]:var_a->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_a, ((val*)NULL)); /* == on <var_a:nullable Object>*/
var10 = var11;
}
if (var10){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var14 = -1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
}
if (var_b == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))((((int64_t)var_b&3)?class_info[((int64_t)var_b&3)]:var_b->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_b, ((val*)NULL)); /* == on <var_b:nullable Object>*/
var15 = var16;
}
if (var15){
var = 1l;
goto RET_LABEL;
} else {
}
{
var17 = ((val*(*)(val* self))((((int64_t)var_a&3)?class_info[((int64_t)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:nullable Object(Object)>*/
}
{
var18 = ((val*(*)(val* self))((((int64_t)var_b&3)?class_info[((int64_t)var_b&3)]:var_b->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:nullable Object(Object)>*/
}
{
var19 = core___core__Comparable____60d_61d_62d(var17, var18);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}

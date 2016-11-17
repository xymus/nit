#include "core__stream.sep.0.h"
/* method stream$Stream$last_error for (self: Stream): nullable IOError */
val* core___core__Stream___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:Stream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$Stream$last_error= for (self: Stream, nullable IOError) */
void core___core__Stream___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Stream___last_error].val = p0; /* _last_error on <self:Stream> */
RET_LABEL:;
}
/* method stream$Reader$read_line for (self: Reader): String */
val* core___core__Reader___read_line(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var19 /* : String */;
val* var20 /* : Text */;
{
{ /* Inline stream$Stream$last_error (self) on <self:Reader> */
var3 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:Reader> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "";
var11 = core__flat___NativeString___to_s_full(var10, 0l, 0l);
var9 = var11;
varonce = var9;
}
var = var9;
goto RET_LABEL;
} else {
}
{
var12 = core___core__BufferedReader___Reader__eof(self);
}
if (var12){
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "";
var16 = core__flat___NativeString___to_s_full(var15, 0l, 0l);
var14 = var16;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
}
var17 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var17) on <var17:FlatBuffer> */
{
((void(*)(val* self))(var17->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var17); /* init on <var17:FlatBuffer>*/
}
RET_LABEL18:(void)0;
}
}
var_s = var17;
{
core___core__BufferedReader___Reader__append_line_to(self, var_s); /* Direct call stream$BufferedReader$append_line_to on <self:Reader>*/
}
{
var19 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_s);
}
{
var20 = core___core__Text___chomp(var19);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_all for (self: Reader): String */
val* core___core__Reader___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var_s /* var s: Bytes */;
int64_t var2 /* : Int */;
int64_t var4 /* : Int */;
int64_t var_slen /* var slen: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var_rets /* var rets: String */;
int64_t var_pos /* var pos: Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var_str /* var str: FlatString */;
int64_t var19 /* : Int */;
int64_t var21 /* : Int */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
int64_t var_remsp /* var remsp: Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
int64_t var_chunksz /* var chunksz: Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var36 /* : FlatString */;
val* var37 /* : FlatString */;
val* var38 /* : FlatString */;
val* var39 /* : Text */;
int64_t var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
int64_t var46 /* : Int */;
int64_t var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
int64_t var53 /* : Int */;
int64_t var54 /* : Int */;
int64_t var_st /* var st: Int */;
int64_t var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
int64_t var61 /* : Int */;
int64_t var_byte_length /* var byte_length: Int */;
static val* varoncenew62;
static int varoncenew62_guard;
val* var63 /* : FlatString */;
val* var64 /* : FlatString */;
val* var65 /* : FlatString */;
val* var66 /* : Text */;
int64_t var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
int64_t var73 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
val* var77 /* : String */;
{
var1 = core___core__BufferedReader___Reader__read_all_bytes(self);
}
var_s = var1;
{
{ /* Inline bytes$Bytes$length (var_s) on <var_s:Bytes> */
var4 = var_s->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_s:Bytes> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_slen = var2;
{
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var7 = var_slen == 0l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "";
var10 = core__flat___NativeString___to_s_full(var9, 0l, 0l);
var8 = var10;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "";
var14 = core__flat___NativeString___to_s_full(var13, 0l, 0l);
var12 = var14;
varonce11 = var12;
}
var_rets = var12;
var_pos = 0l;
{
{ /* Inline bytes$Bytes$items (var_s) on <var_s:Bytes> */
var17 = var_s->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_s:Bytes> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = core__flat___NativeString___clean_utf8(var15, var_slen);
}
var_str = var18;
{
{ /* Inline abstract_text$FlatText$byte_length (var_str) on <var_str:FlatString> */
var21 = var_str->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_str:FlatString> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_slen = var19;
{
{ /* Inline abstract_text$FlatText$items (var_str) on <var_str:FlatString> */
var24 = var_str->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_str:FlatString> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_sits = var22;
var_remsp = var_slen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_pos,var_slen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var27 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_pos < var_slen;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var_chunksz = 129l;
{
{ /* Inline kernel$Int$> (var_chunksz,var_remsp) on <var_chunksz:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var31 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var35 = var_chunksz > var_remsp;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
if (likely(varoncenew_guard)) {
var36 = varoncenew;
} else {
var37 = NEW_core__FlatString(&type_core__FlatString);
var36 = var37;
varoncenew = var36;
varoncenew_guard = 1;
}
{
var38 = core___core__FlatString___with_infos(var36, var_sits, var_remsp, var_pos);
}
{
var39 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__Text___43d]))(var_rets, var38); /* + on <var_rets:String>*/
}
var_rets = var39;
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,var_chunksz) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_chunksz:Int> isa OTHER */
/* <var_chunksz:Int> isa OTHER */
var42 = 1; /* easy <var_chunksz:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_pos + var_chunksz;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var40,1l) on <var40:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var40 - 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var54 = core___core__NativeString___find_beginning_of_char_at(var_sits, var47);
}
var_st = var54;
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var57 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var61 = var_st - var_pos;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_byte_length = var55;
if (likely(varoncenew62_guard)) {
var63 = varoncenew62;
} else {
var64 = NEW_core__FlatString(&type_core__FlatString);
var63 = var64;
varoncenew62 = var63;
varoncenew62_guard = 1;
}
{
var65 = core___core__FlatString___with_infos(var63, var_sits, var_byte_length, var_pos);
}
{
var66 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__Text___43d]))(var_rets, var65); /* + on <var_rets:String>*/
}
var_rets = var66;
var_pos = var_st;
{
{ /* Inline kernel$Int$- (var_remsp,var_byte_length) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <var_byte_length:Int> isa OTHER */
/* <var_byte_length:Int> isa OTHER */
var69 = 1; /* easy <var_byte_length:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var73 = var_remsp - var_byte_length;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_remsp = var67;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_rets:String> isa Concat */
cltype75 = type_core__ropes__Concat.color;
idtype76 = type_core__ropes__Concat.id;
if(cltype75 >= var_rets->type->table_size) {
var74 = 0;
} else {
var74 = var_rets->type->type_table[cltype75] == idtype76;
}
if (var74){
{
var77 = core__ropes___core__ropes__Concat___balance(var_rets);
}
var = var77;
goto RET_LABEL;
} else {
}
var = var_rets;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Writer$write_char for (self: Writer, Char) */
void core___core__Writer___write_char(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
val* var /* : String */;
var_c = p0;
{
var = core__abstract_text___Char___Object__to_s(var_c);
}
{
core___core__FileWriter___core__stream__Writer__write(self, var); /* Direct call file$FileWriter$write on <self:Writer>*/
}
RET_LABEL:;
}
/* method stream$Bytes$write_to for (self: Bytes, Writer) */
void core__stream___Bytes___Writable__write_to(val* self, val* p0) {
val* var_s /* var s: Writer */;
var_s = p0;
{
core___core__FileWriter___core__stream__Writer__write_bytes(var_s, self); /* Direct call file$FileWriter$write_bytes on <var_s:Writer>*/
}
RET_LABEL:;
}
/* method stream$Text$write_to for (self: Text, Writer) */
void core__stream___Text___Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
var_stream = p0;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, self); /* Direct call file$FileWriter$write on <var_stream:Writer>*/
}
RET_LABEL:;
}
/* method stream$BufferedReader$buffer_reset for (self: BufferedReader) */
void core___core__BufferedReader___buffer_reset(val* self) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$read_bytes for (self: BufferedReader, Int): Bytes */
val* core___core__BufferedReader___Reader__read_bytes(val* self, int64_t p0) {
val* var /* : Bytes */;
int64_t var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Bytes */;
val* var10 /* : Bytes */;
val* var_buf /* var buf: Bytes */;
int64_t var11 /* : Int */;
var_i = p0;
{
{ /* Inline stream$Stream$last_error (self) on <self:BufferedReader> */
var3 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:BufferedReader> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___empty(var9); /* Direct call bytes$Bytes$empty on <var9:Bytes>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___with_capacity(var10, var_i); /* Direct call bytes$Bytes$with_capacity on <var10:Bytes>*/
}
var_buf = var10;
{
var11 = core___core__BufferedReader___read_intern(self, var_i, var_buf);
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_intern for (self: BufferedReader, Int, Bytes): Int */
int64_t core___core__BufferedReader___read_intern(val* self, int64_t p0, val* p1) {
int64_t var /* : Int */;
int64_t var_i /* var i: Int */;
val* var_buf /* var buf: Bytes */;
short int var1 /* : Bool */;
int64_t var2 /* : Int */;
int64_t var_p /* var p: Int */;
int64_t var3 /* : Int */;
int64_t var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var7 /* : Int */;
int64_t var_bufsp /* var bufsp: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var_ /* var : BufferedReader */;
int64_t var15 /* : Int */;
int64_t var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
int64_t var22 /* : Int */;
char* var23 /* : NativeString */;
int64_t var24 /* : Int */;
int64_t var25 /* : Int */;
int64_t var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
int64_t var32 /* : Int */;
int64_t var_readln /* var readln: Int */;
char* var33 /* : NativeString */;
int64_t var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
int64_t var40 /* : Int */;
int64_t var41 /* : Int */;
int64_t var_rd /* var rd: Int */;
int64_t var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
int64_t var48 /* : Int */;
var_i = p0;
var_buf = p1;
{
var1 = core___core__BufferedReader___Reader__eof(self);
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_p = var2;
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var3,var_p) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var6 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - var_p;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_bufsp = var4;
{
{ /* Inline kernel$Int$>= (var_bufsp,var_i) on <var_bufsp:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var10 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var14 = var_bufsp >= var_i;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var_ = self;
var15 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel$Int$+ (var15,var_i) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var15 + var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var16; /* _buffer_pos on <var_:BufferedReader> */
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
core___core__Bytes___append_ns_from(var_buf, var23, var_i, var_p); /* Direct call bytes$Bytes$append_ns_from on <var_buf:Bytes>*/
}
var = var_i;
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var24; /* _buffer_pos on <self:BufferedReader> */
var25 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var25,var_p) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var28 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var25 - var_p;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_readln = var26;
var33 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
core___core__Bytes___append_ns_from(var_buf, var33, var_readln, var_p); /* Direct call bytes$Bytes$append_ns_from on <var_buf:Bytes>*/
}
{
{ /* Inline kernel$Int$- (var_i,var_readln) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var36 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_i - var_readln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = core___core__BufferedReader___read_intern(self, var34, var_buf);
}
var_rd = var41;
{
{ /* Inline kernel$Int$+ (var_rd,var_readln) on <var_rd:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var44 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_rd + var_readln;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_all_bytes for (self: BufferedReader): Bytes */
val* core___core__BufferedReader___Reader__read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Bytes */;
val* var10 /* : Bytes */;
val* var_s /* var s: Bytes */;
char* var11 /* : NativeString */;
char* var_b /* var b: NativeString */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int64_t var14 /* : Int */;
int64_t var_j /* var j: Int */;
int64_t var15 /* : Int */;
int64_t var_k /* var k: Int */;
int64_t var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var19 /* : Int */;
int64_t var_rd_sz /* var rd_sz: Int */;
{
{ /* Inline stream$Stream$last_error (self) on <self:BufferedReader> */
var3 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:BufferedReader> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___empty(var9); /* Direct call bytes$Bytes$empty on <var9:Bytes>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___with_capacity(var10, 10l); /* Direct call bytes$Bytes$with_capacity on <var10:Bytes>*/
}
var_s = var10;
var11 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var_b = var11;
for(;;) {
{
var12 = core___core__BufferedReader___Reader__eof(self);
}
var13 = !var12;
if (var13){
var14 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var14;
var15 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var_k = var15;
{
{ /* Inline kernel$Int$- (var_k,var_j) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var18 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var19 = var_k - var_j;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_rd_sz = var16;
{
core___core__Bytes___append_ns_from(var_s, var_b, var_rd_sz, var_j); /* Direct call bytes$Bytes$append_ns_from on <var_s:Bytes>*/
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_k; /* _buffer_pos on <self:BufferedReader> */
{
core___core__FileReader___core__stream__BufferedReader__fill_buffer(self); /* Direct call file$FileReader$fill_buffer on <self:BufferedReader>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$append_line_to for (self: BufferedReader, Buffer) */
void core___core__BufferedReader___Reader__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : Bytes */;
val* var_lb /* var lb: Bytes */;
int64_t var1 /* : Int */;
int64_t var_i /* var i: Int */;
short int var2 /* : Bool */;
int64_t var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
char* var8 /* : NativeString */;
unsigned char var9 /* : Byte */;
unsigned char var11 /* : Byte */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int64_t var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
int64_t var22 /* : Int */;
int64_t var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
char* var31 /* : NativeString */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int64_t var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
int64_t var44 /* : Int */;
val* var45 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
val* var46 /* : nullable Object */;
int64_t var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
int64_t var55 /* : Int */;
int64_t var_j /* var j: Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
char* var63 /* : NativeString */;
unsigned char var64 /* : Byte */;
unsigned char var66 /* : Byte */;
int64_t var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
int64_t var73 /* : Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : String */;
short int var79 /* : Bool */;
val* var80 /* : String */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : String */;
var_s = p0;
var = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___with_capacity(var, 10l); /* Direct call bytes$Bytes$with_capacity on <var:Bytes>*/
}
var_lb = var;
for(;;) {
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_i = var1;
for(;;) {
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var8 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$NativeString$[] (var8,var_i) on <var8:NativeString> */
var11 = (unsigned char)((int)var8[var_i]);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var9,((unsigned char)0x0a)) on <var9:Byte> */
var14 = var9 == ((unsigned char)0x0a);
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_i + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var_i,var23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_i < var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$NativeString$[] (var31,var_i) on <var31:NativeString> */
var34 = (unsigned char)((int)var31[var_i]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var32,((unsigned char)0x0a)) on <var32:Byte> */
var37 = var32 == ((unsigned char)0x0a);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (unlikely(!var35)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 586);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
var45 = (val*)((int64_t)(1)<<2|3);
var_eol = var45;
} else {
var46 = (val*)((int64_t)(0)<<2|3);
var_eol = var46;
}
var47 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel$Int$> (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var54 = var_i > var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
var55 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var55;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var58 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var_j < var_i;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
var63 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$NativeString$[] (var63,var_j) on <var63:NativeString> */
var66 = (unsigned char)((int)var63[var_j]);
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
core___core__Bytes___core__abstract_collection__SimpleCollection__add(var_lb, var64); /* Direct call bytes$Bytes$add on <var_lb:Bytes>*/
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_j + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_j = var67;
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedReader> */
} else {
{
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var77 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (unlikely(!var75)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 603);
fatal_exit(1);
}
{
var78 = core___core__Bytes___core__abstract_text__Object__to_s(var_lb);
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var78); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
}
var79 = (short int)((int64_t)(var_eol)>>2);
if (var79){
{
var80 = core___core__Bytes___core__abstract_text__Object__to_s(var_lb);
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var80); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var83 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (var81){
{
var84 = core___core__Bytes___core__abstract_text__Object__to_s(var_lb);
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var84); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
}
{
core___core__FileReader___core__stream__BufferedReader__fill_buffer(self); /* Direct call file$FileReader$fill_buffer on <self:BufferedReader>*/
}
}
}
RET_LABEL:;
}
/* method stream$BufferedReader$eof for (self: BufferedReader): Bool */
short int core___core__BufferedReader___Reader__eof(val* self) {
short int var /* : Bool */;
int64_t var1 /* : Int */;
int64_t var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int64_t var11 /* : Int */;
int64_t var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var1 < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var9 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
}
{
core___core__FileReader___core__stream__BufferedReader__fill_buffer(self); /* Direct call file$FileReader$fill_buffer on <self:BufferedReader>*/
}
var11 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var12 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$>= (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var19 = var11 >= var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_ = var13;
if (var13){
{
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var22 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var10 = var20;
} else {
var10 = var_;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$prepare_buffer for (self: BufferedReader, Int) */
void core___core__BufferedReader___prepare_buffer(val* self, int64_t p0) {
int64_t var_capacity /* var capacity: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
var_capacity = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
{ /* Inline native$NativeString$new (var,var_capacity) on <var:NativeString> */
var4 = (char*)nit_alloc(var_capacity);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var2; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = var_capacity; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}

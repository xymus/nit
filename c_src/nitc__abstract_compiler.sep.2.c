#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AbstractCompiler$compile_header for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_header(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : CodeWriter */;
val* var8 /* : CodeWriter */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : CodeWriter */;
val* var15 /* : CodeWriter */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : CodeWriter */;
val* var22 /* : CodeWriter */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : CodeWriter */;
val* var29 /* : CodeWriter */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : CodeWriter */;
val* var36 /* : CodeWriter */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
val* var41 /* : CodeWriter */;
val* var43 /* : CodeWriter */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
val* var48 /* : CodeWriter */;
val* var50 /* : CodeWriter */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : CodeWriter */;
val* var57 /* : CodeWriter */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : CodeWriter */;
val* var64 /* : CodeWriter */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : CodeWriter */;
val* var71 /* : CodeWriter */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
val* var76 /* : CodeWriter */;
val* var78 /* : CodeWriter */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : String */;
val* var83 /* : CodeWriter */;
val* var85 /* : CodeWriter */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : CodeWriter */;
val* var92 /* : CodeWriter */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
val* var97 /* : CodeWriter */;
val* var99 /* : CodeWriter */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
val* var104 /* : CodeWriter */;
val* var106 /* : CodeWriter */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : String */;
val* var111 /* : CodeWriter */;
val* var113 /* : CodeWriter */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
val* var118 /* : CodeWriter */;
val* var120 /* : CodeWriter */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : String */;
val* var125 /* : CodeWriter */;
val* var127 /* : CodeWriter */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
val* var132 /* : CodeWriter */;
val* var134 /* : CodeWriter */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : String */;
val* var139 /* : CodeWriter */;
val* var141 /* : CodeWriter */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : CodeWriter */;
val* var148 /* : CodeWriter */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : String */;
val* var153 /* : CodeWriter */;
val* var155 /* : CodeWriter */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : String */;
val* var160 /* : CodeWriter */;
val* var162 /* : CodeWriter */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
val* var167 /* : CodeWriter */;
val* var169 /* : CodeWriter */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : String */;
val* var174 /* : CodeWriter */;
val* var176 /* : CodeWriter */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : String */;
val* var181 /* : CodeWriter */;
val* var183 /* : CodeWriter */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : String */;
val* var188 /* : CodeWriter */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : String */;
val* var195 /* : CodeWriter */;
val* var197 /* : CodeWriter */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : String */;
val* var202 /* : CodeWriter */;
val* var204 /* : CodeWriter */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : String */;
val* var209 /* : CodeWriter */;
val* var211 /* : CodeWriter */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : String */;
val* var216 /* : CodeWriter */;
val* var218 /* : CodeWriter */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : String */;
val* var223 /* : CodeWriter */;
val* var225 /* : CodeWriter */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
val* var229 /* : String */;
val* var230 /* : CodeWriter */;
val* var232 /* : CodeWriter */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : String */;
val* var237 /* : CodeWriter */;
val* var239 /* : CodeWriter */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
val* var243 /* : String */;
val* var244 /* : CodeWriter */;
val* var246 /* : CodeWriter */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
val* var250 /* : String */;
val* var251 /* : ModelBuilder */;
val* var253 /* : ModelBuilder */;
val* var254 /* : ToolContext */;
val* var256 /* : ToolContext */;
val* var257 /* : OptionArray */;
val* var259 /* : OptionArray */;
val* var260 /* : nullable Object */;
val* var262 /* : nullable Object */;
val* var_gccd_disable /* var gccd_disable: Array[String] */;
short int var263 /* : Bool */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
val* var267 /* : String */;
short int var268 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
short int var273 /* : Bool */;
val* var274 /* : CodeWriter */;
val* var276 /* : CodeWriter */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : String */;
val* var281 /* : CodeWriter */;
val* var283 /* : CodeWriter */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
val* var287 /* : String */;
short int var288 /* : Bool */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : String */;
short int var293 /* : Bool */;
short int var_294 /* var : Bool */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : String */;
short int var299 /* : Bool */;
val* var300 /* : CodeWriter */;
val* var302 /* : CodeWriter */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
val* var306 /* : String */;
val* var307 /* : CodeWriter */;
val* var309 /* : CodeWriter */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
val* var313 /* : String */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
val* var317 /* : String */;
short int var318 /* : Bool */;
val* var319 /* : CodeWriter */;
val* var321 /* : CodeWriter */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
val* var325 /* : String */;
val* var326 /* : CodeWriter */;
val* var328 /* : CodeWriter */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : String */;
val* var333 /* : CodeWriter */;
val* var335 /* : CodeWriter */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : String */;
val* var340 /* : CodeWriter */;
val* var342 /* : CodeWriter */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
val* var346 /* : String */;
val* var347 /* : CodeWriter */;
val* var349 /* : CodeWriter */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
val* var353 /* : String */;
val* var354 /* : CodeWriter */;
val* var356 /* : CodeWriter */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
val* var360 /* : String */;
val* var361 /* : CodeWriter */;
val* var363 /* : CodeWriter */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
val* var367 /* : String */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "#include <stdlib.h>";
var5 = core__flat___NativeString___to_s_full(var4, 19l, 19l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "#include <stdio.h>";
var12 = core__flat___NativeString___to_s_full(var11, 18l, 18l);
var10 = var12;
varonce9 = var10;
}
{
nitc___nitc__CodeWriter___add_decl(var6, var10); /* Direct call abstract_compiler$CodeWriter$add_decl on <var6:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "#include <string.h>";
var19 = core__flat___NativeString___to_s_full(var18, 19l, 19l);
var17 = var19;
varonce16 = var17;
}
{
nitc___nitc__CodeWriter___add_decl(var13, var17); /* Direct call abstract_compiler$CodeWriter$add_decl on <var13:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#include <setjmp.h>\n";
var26 = core__flat___NativeString___to_s_full(var25, 20l, 20l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__CodeWriter___add_decl(var20, var24); /* Direct call abstract_compiler$CodeWriter$add_decl on <var20:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "#include <sys/types.h>\n";
var33 = core__flat___NativeString___to_s_full(var32, 23l, 23l);
var31 = var33;
varonce30 = var31;
}
{
nitc___nitc__CodeWriter___add_decl(var27, var31); /* Direct call abstract_compiler$CodeWriter$add_decl on <var27:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "#include <unistd.h>\n";
var40 = core__flat___NativeString___to_s_full(var39, 20l, 20l);
var38 = var40;
varonce37 = var38;
}
{
nitc___nitc__CodeWriter___add_decl(var34, var38); /* Direct call abstract_compiler$CodeWriter$add_decl on <var34:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var43 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "#include <stdint.h>\n";
var47 = core__flat___NativeString___to_s_full(var46, 20l, 20l);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__CodeWriter___add_decl(var41, var45); /* Direct call abstract_compiler$CodeWriter$add_decl on <var41:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var50 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "#ifdef __linux__";
var54 = core__flat___NativeString___to_s_full(var53, 16l, 16l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__CodeWriter___add_decl(var48, var52); /* Direct call abstract_compiler$CodeWriter$add_decl on <var48:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\t#include <endian.h>";
var61 = core__flat___NativeString___to_s_full(var60, 20l, 20l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__CodeWriter___add_decl(var55, var59); /* Direct call abstract_compiler$CodeWriter$add_decl on <var55:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var64 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "#endif";
var68 = core__flat___NativeString___to_s_full(var67, 6l, 6l);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__CodeWriter___add_decl(var62, var66); /* Direct call abstract_compiler$CodeWriter$add_decl on <var62:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var71 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "#include <inttypes.h>\n";
var75 = core__flat___NativeString___to_s_full(var74, 22l, 22l);
var73 = var75;
varonce72 = var73;
}
{
nitc___nitc__CodeWriter___add_decl(var69, var73); /* Direct call abstract_compiler$CodeWriter$add_decl on <var69:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "#include \"gc_chooser.h\"";
var82 = core__flat___NativeString___to_s_full(var81, 23l, 23l);
var80 = var82;
varonce79 = var80;
}
{
nitc___nitc__CodeWriter___add_decl(var76, var80); /* Direct call abstract_compiler$CodeWriter$add_decl on <var76:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var85 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "#ifdef __APPLE__";
var89 = core__flat___NativeString___to_s_full(var88, 16l, 16l);
var87 = var89;
varonce86 = var87;
}
{
nitc___nitc__CodeWriter___add_decl(var83, var87); /* Direct call abstract_compiler$CodeWriter$add_decl on <var83:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var92 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "\t#include <TargetConditionals.h>";
var96 = core__flat___NativeString___to_s_full(var95, 32l, 32l);
var94 = var96;
varonce93 = var94;
}
{
nitc___nitc__CodeWriter___add_decl(var90, var94); /* Direct call abstract_compiler$CodeWriter$add_decl on <var90:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var99 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "\t#include <syslog.h>";
var103 = core__flat___NativeString___to_s_full(var102, 20l, 20l);
var101 = var103;
varonce100 = var101;
}
{
nitc___nitc__CodeWriter___add_decl(var97, var101); /* Direct call abstract_compiler$CodeWriter$add_decl on <var97:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var106 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "\t#include <libkern/OSByteOrder.h>";
var110 = core__flat___NativeString___to_s_full(var109, 33l, 33l);
var108 = var110;
varonce107 = var108;
}
{
nitc___nitc__CodeWriter___add_decl(var104, var108); /* Direct call abstract_compiler$CodeWriter$add_decl on <var104:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var113 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\t#define be32toh(x) OSSwapBigToHostInt32(x)";
var117 = core__flat___NativeString___to_s_full(var116, 43l, 43l);
var115 = var117;
varonce114 = var115;
}
{
nitc___nitc__CodeWriter___add_decl(var111, var115); /* Direct call abstract_compiler$CodeWriter$add_decl on <var111:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var120 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var120 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "#endif";
var124 = core__flat___NativeString___to_s_full(var123, 6l, 6l);
var122 = var124;
varonce121 = var122;
}
{
nitc___nitc__CodeWriter___add_decl(var118, var122); /* Direct call abstract_compiler$CodeWriter$add_decl on <var118:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var127 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "#ifdef _WIN32";
var131 = core__flat___NativeString___to_s_full(var130, 13l, 13l);
var129 = var131;
varonce128 = var129;
}
{
nitc___nitc__CodeWriter___add_decl(var125, var129); /* Direct call abstract_compiler$CodeWriter$add_decl on <var125:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var134 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "\t#define be32toh(val) _byteswap_ulong(val)";
var138 = core__flat___NativeString___to_s_full(var137, 42l, 42l);
var136 = var138;
varonce135 = var136;
}
{
nitc___nitc__CodeWriter___add_decl(var132, var136); /* Direct call abstract_compiler$CodeWriter$add_decl on <var132:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var141 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var141 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "#endif";
var145 = core__flat___NativeString___to_s_full(var144, 6l, 6l);
var143 = var145;
varonce142 = var143;
}
{
nitc___nitc__CodeWriter___add_decl(var139, var143); /* Direct call abstract_compiler$CodeWriter$add_decl on <var139:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var148 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "#ifdef __pnacl__";
var152 = core__flat___NativeString___to_s_full(var151, 16l, 16l);
var150 = var152;
varonce149 = var150;
}
{
nitc___nitc__CodeWriter___add_decl(var146, var150); /* Direct call abstract_compiler$CodeWriter$add_decl on <var146:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var155 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "\t#define be16toh(val) (((val) >> 8) | ((val) << 8))";
var159 = core__flat___NativeString___to_s_full(var158, 51l, 51l);
var157 = var159;
varonce156 = var157;
}
{
nitc___nitc__CodeWriter___add_decl(var153, var157); /* Direct call abstract_compiler$CodeWriter$add_decl on <var153:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var162 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var162 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "\t#define be32toh(val) ((be16toh((val) << 16) | (be16toh((val) >> 16))))";
var166 = core__flat___NativeString___to_s_full(var165, 71l, 71l);
var164 = var166;
varonce163 = var164;
}
{
nitc___nitc__CodeWriter___add_decl(var160, var164); /* Direct call abstract_compiler$CodeWriter$add_decl on <var160:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var169 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "#endif";
var173 = core__flat___NativeString___to_s_full(var172, 6l, 6l);
var171 = var173;
varonce170 = var171;
}
{
nitc___nitc__CodeWriter___add_decl(var167, var171); /* Direct call abstract_compiler$CodeWriter$add_decl on <var167:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var176 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var176 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "#ifdef ANDROID";
var180 = core__flat___NativeString___to_s_full(var179, 14l, 14l);
var178 = var180;
varonce177 = var178;
}
{
nitc___nitc__CodeWriter___add_decl(var174, var178); /* Direct call abstract_compiler$CodeWriter$add_decl on <var174:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var183 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var183 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "\t#ifndef be32toh";
var187 = core__flat___NativeString___to_s_full(var186, 16l, 16l);
var185 = var187;
varonce184 = var185;
}
{
nitc___nitc__CodeWriter___add_decl(var181, var185); /* Direct call abstract_compiler$CodeWriter$add_decl on <var181:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var190 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "\t\t#define be32toh(val) betoh32(val)";
var194 = core__flat___NativeString___to_s_full(var193, 35l, 35l);
var192 = var194;
varonce191 = var192;
}
{
nitc___nitc__CodeWriter___add_decl(var188, var192); /* Direct call abstract_compiler$CodeWriter$add_decl on <var188:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var197 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var197 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "\t#endif";
var201 = core__flat___NativeString___to_s_full(var200, 7l, 7l);
var199 = var201;
varonce198 = var199;
}
{
nitc___nitc__CodeWriter___add_decl(var195, var199); /* Direct call abstract_compiler$CodeWriter$add_decl on <var195:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var204 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var204 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "\t#include <android/log.h>";
var208 = core__flat___NativeString___to_s_full(var207, 25l, 25l);
var206 = var208;
varonce205 = var206;
}
{
nitc___nitc__CodeWriter___add_decl(var202, var206); /* Direct call abstract_compiler$CodeWriter$add_decl on <var202:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var211 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var211 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "\t#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)";
var215 = core__flat___NativeString___to_s_full(var214, 89l, 89l);
var213 = var215;
varonce212 = var213;
}
{
nitc___nitc__CodeWriter___add_decl(var209, var213); /* Direct call abstract_compiler$CodeWriter$add_decl on <var209:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var218 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var218 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "#elif TARGET_OS_IPHONE";
var222 = core__flat___NativeString___to_s_full(var221, 22l, 22l);
var220 = var222;
varonce219 = var220;
}
{
nitc___nitc__CodeWriter___add_decl(var216, var220); /* Direct call abstract_compiler$CodeWriter$add_decl on <var216:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var225 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var225 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "\t#define PRINT_ERROR(...) syslog(LOG_ERR, __VA_ARGS__)";
var229 = core__flat___NativeString___to_s_full(var228, 54l, 54l);
var227 = var229;
varonce226 = var227;
}
{
nitc___nitc__CodeWriter___add_decl(var223, var227); /* Direct call abstract_compiler$CodeWriter$add_decl on <var223:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var232 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var232 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "#else";
var236 = core__flat___NativeString___to_s_full(var235, 5l, 5l);
var234 = var236;
varonce233 = var234;
}
{
nitc___nitc__CodeWriter___add_decl(var230, var234); /* Direct call abstract_compiler$CodeWriter$add_decl on <var230:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var239 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var239 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "\t#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)";
var243 = core__flat___NativeString___to_s_full(var242, 54l, 54l);
var241 = var243;
varonce240 = var241;
}
{
nitc___nitc__CodeWriter___add_decl(var237, var241); /* Direct call abstract_compiler$CodeWriter$add_decl on <var237:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var246 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var246 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "#endif";
var250 = core__flat___NativeString___to_s_full(var249, 6l, 6l);
var248 = var250;
varonce247 = var248;
}
{
nitc___nitc__CodeWriter___add_decl(var244, var248); /* Direct call abstract_compiler$CodeWriter$add_decl on <var244:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__compile_header_structs]))(self); /* compile_header_structs on <self:AbstractCompiler>*/
}
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(self); /* Direct call separate_compiler$SeparateCompiler$compile_nitni_structs on <self:AbstractCompiler>*/
}
{
nitc___nitc__AbstractCompiler___compile_catch_stack(self); /* Direct call abstract_compiler$AbstractCompiler$compile_catch_stack on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var253 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var253 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var251) on <var251:ModelBuilder> */
var256 = var251->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var251:ModelBuilder> */
if (unlikely(var256 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_gcc_directive (var254) on <var254:ToolContext> */
var259 = var254->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var254:ToolContext> */
if (unlikely(var259 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline opts$Option$value (var257) on <var257:OptionArray> */
var262 = var257->attrs[COLOR_opts__Option___value].val; /* _value on <var257:OptionArray> */
var260 = var262;
RET_LABEL261:(void)0;
}
}
var_gccd_disable = var260;
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "noreturn";
var267 = core__flat___NativeString___to_s_full(var266, 8l, 8l);
var265 = var267;
varonce264 = var265;
}
{
var268 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var265);
}
var_ = var268;
if (var268){
var263 = var_;
} else {
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "all";
var272 = core__flat___NativeString___to_s_full(var271, 3l, 3l);
var270 = var272;
varonce269 = var270;
}
{
var273 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var270);
}
var263 = var273;
}
if (var263){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var276 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "void fatal_exit(int);";
var280 = core__flat___NativeString___to_s_full(var279, 21l, 21l);
var278 = var280;
varonce277 = var278;
}
{
nitc___nitc__CodeWriter___add_decl(var274, var278); /* Direct call abstract_compiler$CodeWriter$add_decl on <var274:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var283 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var283 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "void fatal_exit(int) __attribute__ ((noreturn));";
var287 = core__flat___NativeString___to_s_full(var286, 48l, 48l);
var285 = var287;
varonce284 = var285;
}
{
nitc___nitc__CodeWriter___add_decl(var281, var285); /* Direct call abstract_compiler$CodeWriter$add_decl on <var281:CodeWriter>*/
}
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "likely";
var292 = core__flat___NativeString___to_s_full(var291, 6l, 6l);
var290 = var292;
varonce289 = var290;
}
{
var293 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var290);
}
var_294 = var293;
if (var293){
var288 = var_294;
} else {
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "all";
var298 = core__flat___NativeString___to_s_full(var297, 3l, 3l);
var296 = var298;
varonce295 = var296;
}
{
var299 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var296);
}
var288 = var299;
}
if (var288){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var302 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var302 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "#define likely(x)       (x)";
var306 = core__flat___NativeString___to_s_full(var305, 27l, 27l);
var304 = var306;
varonce303 = var304;
}
{
nitc___nitc__CodeWriter___add_decl(var300, var304); /* Direct call abstract_compiler$CodeWriter$add_decl on <var300:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var309 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var309 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "#define unlikely(x)     (x)";
var313 = core__flat___NativeString___to_s_full(var312, 27l, 27l);
var311 = var313;
varonce310 = var311;
}
{
nitc___nitc__CodeWriter___add_decl(var307, var311); /* Direct call abstract_compiler$CodeWriter$add_decl on <var307:CodeWriter>*/
}
} else {
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "correct-likely";
var317 = core__flat___NativeString___to_s_full(var316, 14l, 14l);
var315 = var317;
varonce314 = var315;
}
{
var318 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var315);
}
if (var318){
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var321 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var321 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "#define likely(x)       __builtin_expect((x),0)";
var325 = core__flat___NativeString___to_s_full(var324, 47l, 47l);
var323 = var325;
varonce322 = var323;
}
{
nitc___nitc__CodeWriter___add_decl(var319, var323); /* Direct call abstract_compiler$CodeWriter$add_decl on <var319:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var328 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var328 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "#define unlikely(x)     __builtin_expect((x),1)";
var332 = core__flat___NativeString___to_s_full(var331, 47l, 47l);
var330 = var332;
varonce329 = var330;
}
{
nitc___nitc__CodeWriter___add_decl(var326, var330); /* Direct call abstract_compiler$CodeWriter$add_decl on <var326:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var335 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var335 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "#define likely(x)       __builtin_expect((x),1)";
var339 = core__flat___NativeString___to_s_full(var338, 47l, 47l);
var337 = var339;
varonce336 = var337;
}
{
nitc___nitc__CodeWriter___add_decl(var333, var337); /* Direct call abstract_compiler$CodeWriter$add_decl on <var333:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var342 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var342 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "#define unlikely(x)     __builtin_expect((x),0)";
var346 = core__flat___NativeString___to_s_full(var345, 47l, 47l);
var344 = var346;
varonce343 = var344;
}
{
nitc___nitc__CodeWriter___add_decl(var340, var344); /* Direct call abstract_compiler$CodeWriter$add_decl on <var340:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var349 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var349 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "extern int glob_argc;";
var353 = core__flat___NativeString___to_s_full(var352, 21l, 21l);
var351 = var353;
varonce350 = var351;
}
{
nitc___nitc__CodeWriter___add_decl(var347, var351); /* Direct call abstract_compiler$CodeWriter$add_decl on <var347:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var356 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var356 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "extern char **glob_argv;";
var360 = core__flat___NativeString___to_s_full(var359, 24l, 24l);
var358 = var360;
varonce357 = var358;
}
{
nitc___nitc__CodeWriter___add_decl(var354, var358); /* Direct call abstract_compiler$CodeWriter$add_decl on <var354:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var363 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var363 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "extern val *glob_sys;";
var367 = core__flat___NativeString___to_s_full(var366, 21l, 21l);
var365 = var367;
varonce364 = var365;
}
{
nitc___nitc__CodeWriter___add_decl(var361, var365); /* Direct call abstract_compiler$CodeWriter$add_decl on <var361:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_catch_stack for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_catch_stack(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct catch_stack_t {\n\tint cursor;\n\tjmp_buf envs[100];\n};\nextern struct catch_stack_t catchStack;\n";
var5 = core__flat___NativeString___to_s_full(var4, 99l, 99l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_nitni_structs for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/* Native reference to Nit objects */\n/* This structure is used to represent every Nit type in extern methods and custom C code. */\nstruct nitni_ref {\n\tstruct nitni_ref *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n};\n\n/* List of global references from C code to Nit objects */\n/* Instanciated empty at init of Nit system and filled explicitly by user in C code */\nstruct nitni_global_ref_list_t {\n\tstruct nitni_ref *head, *tail;\n};\nextern struct nitni_global_ref_list_t *nitni_global_ref_list;\n\n/* Initializer of global reference list */\nextern void nitni_global_ref_list_init();\n\n/* Intern function to add a global reference to the list */\nextern void nitni_global_ref_add( struct nitni_ref *ref );\n\n/* Intern function to remove a global reference from the list */\nextern void nitni_global_ref_remove( struct nitni_ref *ref );\n\n/* Increase count on an existing global reference */\nextern void nitni_global_ref_incr( struct nitni_ref *ref );\n\n/* Decrease count on an existing global reference */\nextern void nitni_global_ref_decr( struct nitni_ref *ref );\n";
var5 = core__flat___NativeString___to_s_full(var4, 1146l, 1146l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_finalizer_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_finalizer_function(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : Message */;
val* var37 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var47 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var48 /* : nullable RuntimeVariable */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__model___MModule___finalizable_type(var);
}
var_finalizable_type = var3;
if (var_finalizable_type == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_finalizable_type,var_other) on <var_finalizable_type:nullable MClassType(MClassType)> */
var9 = var_finalizable_type == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "finalize";
var15 = core__flat___NativeString___to_s_full(var14, 8l, 8l);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model$MClassType$mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var18 = var_finalizable_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc__model___MModule___try_get_primitive_method(var10, var13, var16);
}
var_finalize_meth = var19;
if (var_finalize_meth == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_finalize_meth,var_other) on <var_finalize_meth:nullable MMethod(MMethod)> */
var25 = var_finalize_meth == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Error: the `Finalizable` class does not declare the `finalize` method.";
var35 = core__flat___NativeString___to_s_full(var34, 70l, 70l);
var33 = var35;
varonce32 = var33;
}
{
var36 = nitc___nitc__ToolContext___error(var29, ((val*)NULL), var33);
}
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var37;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "void gc_finalize (void *obj, void *client_data) {";
var41 = core__flat___NativeString___to_s_full(var40, 49l, 49l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "obj";
var45 = core__flat___NativeString___to_s_full(var44, 3l, 3l);
var43 = var45;
varonce42 = var43;
}
{
var46 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var43, var_finalizable_type);
}
var_recv = var46;
var47 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var47, 1l); /* Direct call array$Array$with_capacity on <var47:Array[RuntimeVariable]>*/
}
var_ = var47;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var48 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_finalize_meth, var_);
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_before_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompiler___compile_before_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 795);
fatal_exit(1);
}
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_begin_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompiler___compile_begin_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 802);
fatal_exit(1);
}
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_main_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Platform */;
val* var6 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var_no_main /* var no_main: Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
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
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : String */;
val* var59 /* : ModelBuilder */;
val* var61 /* : ModelBuilder */;
val* var62 /* : ToolContext */;
val* var64 /* : ToolContext */;
val* var65 /* : OptionBool */;
val* var67 /* : OptionBool */;
val* var68 /* : nullable Object */;
val* var70 /* : nullable Object */;
short int var71 /* : Bool */;
val* var72 /* : Array[String] */;
val* var74 /* : Array[String] */;
val* var_75 /* var : Array[String] */;
val* var76 /* : IndexedIterator[nullable Object] */;
val* var_77 /* var : IndexedIterator[String] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
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
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : AbstractCompiler */;
val* var115 /* : AbstractCompiler */;
val* var116 /* : CodeWriter */;
val* var118 /* : CodeWriter */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : AbstractCompiler */;
val* var132 /* : AbstractCompiler */;
val* var133 /* : CodeWriter */;
val* var135 /* : CodeWriter */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : AbstractCompiler */;
val* var149 /* : AbstractCompiler */;
val* var150 /* : CodeWriter */;
val* var152 /* : CodeWriter */;
val* var154 /* : NativeArray[String] */;
static val* varonce153;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var164 /* : ModelBuilder */;
val* var166 /* : ModelBuilder */;
val* var167 /* : ToolContext */;
val* var169 /* : ToolContext */;
val* var170 /* : OptionBool */;
val* var172 /* : OptionBool */;
val* var173 /* : nullable Object */;
val* var175 /* : nullable Object */;
short int var176 /* : Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : String */;
val* var189 /* : AbstractCompiler */;
val* var191 /* : AbstractCompiler */;
val* var192 /* : CodeWriter */;
val* var194 /* : CodeWriter */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : String */;
val* var199 /* : AbstractCompiler */;
val* var201 /* : AbstractCompiler */;
val* var202 /* : CodeWriter */;
val* var204 /* : CodeWriter */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : String */;
val* var209 /* : AbstractCompiler */;
val* var211 /* : AbstractCompiler */;
val* var212 /* : CodeWriter */;
val* var214 /* : CodeWriter */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : String */;
val* var219 /* : ModelBuilder */;
val* var221 /* : ModelBuilder */;
val* var222 /* : ToolContext */;
val* var224 /* : ToolContext */;
val* var225 /* : OptionBool */;
val* var227 /* : OptionBool */;
val* var228 /* : nullable Object */;
val* var230 /* : nullable Object */;
short int var231 /* : Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
val* var239 /* : String */;
val* var240 /* : AbstractCompiler */;
val* var242 /* : AbstractCompiler */;
val* var243 /* : CodeWriter */;
val* var245 /* : CodeWriter */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
val* var249 /* : String */;
val* var250 /* : AbstractCompiler */;
val* var252 /* : AbstractCompiler */;
val* var253 /* : CodeWriter */;
val* var255 /* : CodeWriter */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
val* var259 /* : String */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
val* var263 /* : String */;
short int var264 /* : Bool */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
val* var288 /* : String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : String */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
val* var308 /* : String */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
val* var320 /* : String */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
val* var336 /* : String */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
val* var340 /* : String */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : String */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
val* var352 /* : String */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
val* var368 /* : String */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
val* var372 /* : String */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
val* var384 /* : String */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
val* var404 /* : String */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : String */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
val* var424 /* : String */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
val* var428 /* : String */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
val* var432 /* : String */;
short int var434 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v435 /* var v: AbstractCompilerVisitor */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
val* var439 /* : String */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
val* var443 /* : String */;
short int var445 /* : Bool */;
int cltype446;
int idtype447;
const struct type* type_struct448;
const char* var_class_name449;
val* var_v450 /* var v: AbstractCompilerVisitor */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
val* var454 /* : String */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
val* var458 /* : String */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
val* var462 /* : String */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : NativeString */;
val* var466 /* : String */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
val* var470 /* : String */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : NativeString */;
val* var474 /* : String */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : NativeString */;
val* var478 /* : String */;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
val* var482 /* : String */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
val* var486 /* : String */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
val* var490 /* : String */;
static val* varonce491;
val* var492 /* : String */;
char* var493 /* : NativeString */;
val* var494 /* : String */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
val* var498 /* : String */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
val* var502 /* : String */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
val* var506 /* : String */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : NativeString */;
val* var510 /* : String */;
val* var511 /* : MModule */;
val* var513 /* : MModule */;
val* var514 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
short int var515 /* : Bool */;
short int var516 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var518 /* : Bool */;
short int var519 /* : Bool */;
val* var520 /* : AbstractCompiler */;
val* var522 /* : AbstractCompiler */;
val* var523 /* : MModule */;
val* var525 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var526 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
val* var528 /* : NativeArray[String] */;
static val* varonce527;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
val* var532 /* : String */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : NativeString */;
val* var536 /* : String */;
val* var537 /* : String */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
val* var542 /* : String */;
val* var543 /* : MClass */;
val* var545 /* : MClass */;
val* var546 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
short int var547 /* : Bool */;
short int var548 /* : Bool */;
short int var550 /* : Bool */;
short int var551 /* : Bool */;
val* var552 /* : Array[RuntimeVariable] */;
val* var_553 /* var : Array[RuntimeVariable] */;
val* var554 /* : nullable RuntimeVariable */;
val* var555 /* : nullable MMethod */;
static val* varonce556;
val* var557 /* : String */;
char* var558 /* : NativeString */;
val* var559 /* : String */;
val* var560 /* : MClass */;
val* var562 /* : MClass */;
val* var563 /* : nullable MMethod */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
val* var567 /* : String */;
val* var568 /* : MClass */;
val* var570 /* : MClass */;
val* var571 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
short int var572 /* : Bool */;
short int var573 /* : Bool */;
short int var575 /* : Bool */;
short int var576 /* : Bool */;
val* var577 /* : Array[RuntimeVariable] */;
val* var_578 /* var : Array[RuntimeVariable] */;
val* var579 /* : nullable RuntimeVariable */;
val* var580 /* : ModelBuilder */;
val* var582 /* : ModelBuilder */;
val* var583 /* : ToolContext */;
val* var585 /* : ToolContext */;
val* var586 /* : OptionBool */;
val* var588 /* : OptionBool */;
val* var589 /* : nullable Object */;
val* var591 /* : nullable Object */;
short int var592 /* : Bool */;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : NativeString */;
val* var596 /* : String */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
val* var600 /* : String */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : NativeString */;
val* var604 /* : String */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
val* var608 /* : String */;
val* var609 /* : Array[String] */;
val* var611 /* : Array[String] */;
val* var_612 /* var : Array[String] */;
val* var613 /* : IndexedIterator[nullable Object] */;
val* var_614 /* var : IndexedIterator[String] */;
short int var615 /* : Bool */;
val* var617 /* : nullable Object */;
val* var_tag618 /* var tag: String */;
val* var620 /* : NativeArray[String] */;
static val* varonce619;
static val* varonce621;
val* var622 /* : String */;
char* var623 /* : NativeString */;
val* var624 /* : String */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
val* var628 /* : String */;
val* var629 /* : String */;
val* var631 /* : NativeArray[String] */;
static val* varonce630;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : NativeString */;
val* var635 /* : String */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
val* var639 /* : String */;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : NativeString */;
val* var643 /* : String */;
static val* varonce644;
val* var645 /* : String */;
char* var646 /* : NativeString */;
val* var647 /* : String */;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : NativeString */;
val* var651 /* : String */;
val* var652 /* : String */;
val* var654 /* : NativeArray[String] */;
static val* varonce653;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
val* var658 /* : String */;
static val* varonce659;
val* var660 /* : String */;
char* var661 /* : NativeString */;
val* var662 /* : String */;
val* var663 /* : String */;
val* var665 /* : NativeArray[String] */;
static val* varonce664;
static val* varonce666;
val* var667 /* : String */;
char* var668 /* : NativeString */;
val* var669 /* : String */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
val* var673 /* : String */;
val* var674 /* : String */;
val* var676 /* : NativeArray[String] */;
static val* varonce675;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : NativeString */;
val* var680 /* : String */;
static val* varonce681;
val* var682 /* : String */;
char* var683 /* : NativeString */;
val* var684 /* : String */;
val* var685 /* : String */;
val* var687 /* : NativeArray[String] */;
static val* varonce686;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
val* var691 /* : String */;
static val* varonce692;
val* var693 /* : String */;
char* var694 /* : NativeString */;
val* var695 /* : String */;
val* var696 /* : String */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
val* var700 /* : String */;
static val* varonce701;
val* var702 /* : String */;
char* var703 /* : NativeString */;
val* var704 /* : String */;
val* var705 /* : Array[String] */;
val* var707 /* : Array[String] */;
val* var708 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce709;
val* var710 /* : String */;
char* var711 /* : NativeString */;
val* var712 /* : String */;
val* var_713 /* var : Array[String] */;
val* var714 /* : IndexedIterator[nullable Object] */;
val* var_715 /* var : IndexedIterator[String] */;
short int var716 /* : Bool */;
val* var718 /* : nullable Object */;
val* var_tag719 /* var tag: String */;
val* var721 /* : NativeArray[String] */;
static val* varonce720;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : NativeString */;
val* var725 /* : String */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : NativeString */;
val* var729 /* : String */;
val* var730 /* : String */;
val* var732 /* : NativeArray[String] */;
static val* varonce731;
static val* varonce733;
val* var734 /* : String */;
char* var735 /* : NativeString */;
val* var736 /* : String */;
static val* varonce737;
val* var738 /* : String */;
char* var739 /* : NativeString */;
val* var740 /* : String */;
static val* varonce741;
val* var742 /* : String */;
char* var743 /* : NativeString */;
val* var744 /* : String */;
val* var745 /* : String */;
val* var747 /* : NativeArray[String] */;
static val* varonce746;
static val* varonce748;
val* var749 /* : String */;
char* var750 /* : NativeString */;
val* var751 /* : String */;
static val* varonce752;
val* var753 /* : String */;
char* var754 /* : NativeString */;
val* var755 /* : String */;
static val* varonce756;
val* var757 /* : String */;
char* var758 /* : NativeString */;
val* var759 /* : String */;
val* var760 /* : String */;
val* var762 /* : NativeArray[String] */;
static val* varonce761;
static val* varonce763;
val* var764 /* : String */;
char* var765 /* : NativeString */;
val* var766 /* : String */;
static val* varonce767;
val* var768 /* : String */;
char* var769 /* : NativeString */;
val* var770 /* : String */;
static val* varonce771;
val* var772 /* : String */;
char* var773 /* : NativeString */;
val* var774 /* : String */;
val* var775 /* : String */;
val* var777 /* : NativeArray[String] */;
static val* varonce776;
static val* varonce778;
val* var779 /* : String */;
char* var780 /* : NativeString */;
val* var781 /* : String */;
static val* varonce782;
val* var783 /* : String */;
char* var784 /* : NativeString */;
val* var785 /* : String */;
static val* varonce786;
val* var787 /* : String */;
char* var788 /* : NativeString */;
val* var789 /* : String */;
val* var790 /* : String */;
val* var791 /* : ModelBuilder */;
val* var793 /* : ModelBuilder */;
val* var794 /* : ToolContext */;
val* var796 /* : ToolContext */;
val* var797 /* : OptionBool */;
val* var799 /* : OptionBool */;
val* var800 /* : nullable Object */;
val* var802 /* : nullable Object */;
short int var803 /* : Bool */;
static val* varonce804;
val* var805 /* : String */;
char* var806 /* : NativeString */;
val* var807 /* : String */;
static val* varonce808;
val* var809 /* : String */;
char* var810 /* : NativeString */;
val* var811 /* : String */;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : NativeString */;
val* var815 /* : String */;
static val* varonce816;
val* var817 /* : String */;
char* var818 /* : NativeString */;
val* var819 /* : String */;
static val* varonce820;
val* var821 /* : String */;
char* var822 /* : NativeString */;
val* var823 /* : String */;
static val* varonce824;
val* var825 /* : String */;
char* var826 /* : NativeString */;
val* var827 /* : String */;
val* var828 /* : ModelBuilder */;
val* var830 /* : ModelBuilder */;
val* var831 /* : ToolContext */;
val* var833 /* : ToolContext */;
val* var834 /* : OptionBool */;
val* var836 /* : OptionBool */;
val* var837 /* : nullable Object */;
val* var839 /* : nullable Object */;
short int var840 /* : Bool */;
static val* varonce841;
val* var842 /* : String */;
char* var843 /* : NativeString */;
val* var844 /* : String */;
static val* varonce845;
val* var846 /* : String */;
char* var847 /* : NativeString */;
val* var848 /* : String */;
static val* varonce849;
val* var850 /* : String */;
char* var851 /* : NativeString */;
val* var852 /* : String */;
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
val* var856 /* : String */;
val* var857 /* : MModule */;
val* var859 /* : MModule */;
val* var860 /* : POSetElement[MModule] */;
val* var862 /* : POSetElement[MModule] */;
val* var863 /* : Collection[nullable Object] */;
val* var_864 /* var : Collection[MModule] */;
val* var865 /* : Iterator[nullable Object] */;
val* var_866 /* var : Iterator[MModule] */;
short int var867 /* : Bool */;
val* var869 /* : nullable Object */;
val* var_m /* var m: MModule */;
static val* varonce870;
val* var871 /* : String */;
char* var872 /* : NativeString */;
val* var873 /* : String */;
val* var874 /* : String */;
val* var875 /* : Text */;
val* var_f /* var f: String */;
val* var877 /* : NativeArray[String] */;
static val* varonce876;
static val* varonce878;
val* var879 /* : String */;
char* var880 /* : NativeString */;
val* var881 /* : String */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : NativeString */;
val* var885 /* : String */;
static val* varonce886;
val* var887 /* : String */;
char* var888 /* : NativeString */;
val* var889 /* : String */;
val* var890 /* : Location */;
val* var892 /* : Location */;
val* var893 /* : nullable SourceFile */;
val* var895 /* : nullable SourceFile */;
val* var896 /* : String */;
val* var898 /* : String */;
val* var899 /* : String */;
val* var900 /* : String */;
val* var902 /* : NativeArray[String] */;
static val* varonce901;
static val* varonce903;
val* var904 /* : String */;
char* var905 /* : NativeString */;
val* var906 /* : String */;
static val* varonce907;
val* var908 /* : String */;
char* var909 /* : NativeString */;
val* var910 /* : String */;
val* var911 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var3 = core__flat___NativeString___to_s_full(var2, 19l, 19l);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$target_platform (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 555);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_platform = var4;
{
var8 = nitc___nitc__Platform___no_main(var_platform);
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_main (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts$Option$value (var15) on <var15:OptionBool> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionBool> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = (short int)((int64_t)(var18)>>2);
var7 = var21;
}
var_no_main = var7;
{
var22 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#ifndef NO_STACKTRACE";
var26 = core__flat___NativeString___to_s_full(var25, 21l, 21l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var24); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#define UNW_LOCAL_ONLY";
var30 = core__flat___NativeString___to_s_full(var29, 22l, 22l);
var28 = var30;
varonce27 = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var28); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "#include <libunwind.h>";
var34 = core__flat___NativeString___to_s_full(var33, 22l, 22l);
var32 = var34;
varonce31 = var32;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var32); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "#include \"c_functions_hash.h\"";
var38 = core__flat___NativeString___to_s_full(var37, 29l, 29l);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var36); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "#endif";
var42 = core__flat___NativeString___to_s_full(var41, 6l, 6l);
var40 = var42;
varonce39 = var40;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "int glob_argc;";
var46 = core__flat___NativeString___to_s_full(var45, 14l, 14l);
var44 = var46;
varonce43 = var44;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var44); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "char **glob_argv;";
var50 = core__flat___NativeString___to_s_full(var49, 17l, 17l);
var48 = var50;
varonce47 = var48;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var48); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "val *glob_sys;";
var54 = core__flat___NativeString___to_s_full(var53, 14l, 14l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var52); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "struct catch_stack_t catchStack;";
var58 = core__flat___NativeString___to_s_full(var57, 32l, 32l);
var56 = var58;
varonce55 = var56;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var56); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var59) on <var59:ModelBuilder> */
var64 = var59->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var59:ModelBuilder> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var62) on <var62:ToolContext> */
var67 = var62->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var62:ToolContext> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline opts$Option$value (var65) on <var65:OptionBool> */
var70 = var65->attrs[COLOR_opts__Option___value].val; /* _value on <var65:OptionBool> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = (short int)((int64_t)(var68)>>2);
if (var71){
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var74 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_75 = var72;
{
var76 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_75);
}
var_77 = var76;
for(;;) {
{
var78 = ((short int(*)(val* self))((((int64_t)var_77&3)?class_info[((int64_t)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_77); /* is_ok on <var_77:IndexedIterator[String]>*/
}
if (var78){
} else {
goto BREAK_label;
}
{
var79 = ((val*(*)(val* self))((((int64_t)var_77&3)?class_info[((int64_t)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_77); /* item on <var_77:IndexedIterator[String]>*/
}
var_tag = var79;
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "long count_type_test_resolved_";
var85 = core__flat___NativeString___to_s_full(var84, 30l, 30l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ";";
var89 = core__flat___NativeString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var81)->values[2]=var87;
} else {
var81 = varonce80;
varonce80 = NULL;
}
((struct instance_core__NativeArray*)var81)->values[1]=var_tag;
{
var90 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var90); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "long count_type_test_unresolved_";
var96 = core__flat___NativeString___to_s_full(var95, 32l, 32l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = ";";
var100 = core__flat___NativeString___to_s_full(var99, 1l, 1l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[2]=var98;
} else {
var92 = varonce91;
varonce91 = NULL;
}
((struct instance_core__NativeArray*)var92)->values[1]=var_tag;
{
var101 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var101); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "long count_type_test_skipped_";
var107 = core__flat___NativeString___to_s_full(var106, 29l, 29l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ";";
var111 = core__flat___NativeString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[2]=var109;
} else {
var103 = varonce102;
varonce102 = NULL;
}
((struct instance_core__NativeArray*)var103)->values[1]=var_tag;
{
var112 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var112); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var115 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var113) on <var113:AbstractCompiler> */
var118 = var113->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var113:AbstractCompiler> */
if (unlikely(var118 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "extern long count_type_test_resolved_";
var124 = core__flat___NativeString___to_s_full(var123, 37l, 37l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[0]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ";";
var128 = core__flat___NativeString___to_s_full(var127, 1l, 1l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var120)->values[2]=var126;
} else {
var120 = varonce119;
varonce119 = NULL;
}
((struct instance_core__NativeArray*)var120)->values[1]=var_tag;
{
var129 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nitc___nitc__CodeWriter___add_decl(var116, var129); /* Direct call abstract_compiler$CodeWriter$add_decl on <var116:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var132 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var132 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var130) on <var130:AbstractCompiler> */
var135 = var130->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var130:AbstractCompiler> */
if (unlikely(var135 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "extern long count_type_test_unresolved_";
var141 = core__flat___NativeString___to_s_full(var140, 39l, 39l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[0]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = ";";
var145 = core__flat___NativeString___to_s_full(var144, 1l, 1l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var137)->values[2]=var143;
} else {
var137 = varonce136;
varonce136 = NULL;
}
((struct instance_core__NativeArray*)var137)->values[1]=var_tag;
{
var146 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nitc___nitc__CodeWriter___add_decl(var133, var146); /* Direct call abstract_compiler$CodeWriter$add_decl on <var133:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var149 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var149 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var147) on <var147:AbstractCompiler> */
var152 = var147->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var147:AbstractCompiler> */
if (unlikely(var152 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
if (unlikely(varonce153==NULL)) {
var154 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "extern long count_type_test_skipped_";
var158 = core__flat___NativeString___to_s_full(var157, 36l, 36l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var154)->values[0]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ";";
var162 = core__flat___NativeString___to_s_full(var161, 1l, 1l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var154)->values[2]=var160;
} else {
var154 = varonce153;
varonce153 = NULL;
}
((struct instance_core__NativeArray*)var154)->values[1]=var_tag;
{
var163 = ((val*(*)(val* self))(var154->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var154); /* native_to_s on <var154:NativeArray[String]>*/
}
varonce153 = var154;
{
nitc___nitc__CodeWriter___add_decl(var150, var163); /* Direct call abstract_compiler$CodeWriter$add_decl on <var150:CodeWriter>*/
}
{
((void(*)(val* self))((((int64_t)var_77&3)?class_info[((int64_t)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_77); /* next on <var_77:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_77&3)?class_info[((int64_t)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_77); /* finish on <var_77:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var166 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var164) on <var164:ModelBuilder> */
var169 = var164->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var164:ModelBuilder> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var167) on <var167:ToolContext> */
var172 = var167->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var167:ToolContext> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline opts$Option$value (var170) on <var170:OptionBool> */
var175 = var170->attrs[COLOR_opts__Option___value].val; /* _value on <var170:OptionBool> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
var176 = (short int)((int64_t)(var173)>>2);
if (var176){
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "long count_invoke_by_tables;";
var180 = core__flat___NativeString___to_s_full(var179, 28l, 28l);
var178 = var180;
varonce177 = var178;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var178); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "long count_invoke_by_direct;";
var184 = core__flat___NativeString___to_s_full(var183, 28l, 28l);
var182 = var184;
varonce181 = var182;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var182); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "long count_invoke_by_inline;";
var188 = core__flat___NativeString___to_s_full(var187, 28l, 28l);
var186 = var188;
varonce185 = var186;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var186); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var191 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var191 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var189) on <var189:AbstractCompiler> */
var194 = var189->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var189:AbstractCompiler> */
if (unlikely(var194 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "extern long count_invoke_by_tables;";
var198 = core__flat___NativeString___to_s_full(var197, 35l, 35l);
var196 = var198;
varonce195 = var196;
}
{
nitc___nitc__CodeWriter___add_decl(var192, var196); /* Direct call abstract_compiler$CodeWriter$add_decl on <var192:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var201 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var201 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var199) on <var199:AbstractCompiler> */
var204 = var199->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var199:AbstractCompiler> */
if (unlikely(var204 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "extern long count_invoke_by_direct;";
var208 = core__flat___NativeString___to_s_full(var207, 35l, 35l);
var206 = var208;
varonce205 = var206;
}
{
nitc___nitc__CodeWriter___add_decl(var202, var206); /* Direct call abstract_compiler$CodeWriter$add_decl on <var202:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var211 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var211 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var209) on <var209:AbstractCompiler> */
var214 = var209->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var209:AbstractCompiler> */
if (unlikely(var214 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "extern long count_invoke_by_inline;";
var218 = core__flat___NativeString___to_s_full(var217, 35l, 35l);
var216 = var218;
varonce215 = var216;
}
{
nitc___nitc__CodeWriter___add_decl(var212, var216); /* Direct call abstract_compiler$CodeWriter$add_decl on <var212:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var221 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var219) on <var219:ModelBuilder> */
var224 = var219->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var219:ModelBuilder> */
if (unlikely(var224 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var222) on <var222:ToolContext> */
var227 = var222->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var222:ToolContext> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline opts$Option$value (var225) on <var225:OptionBool> */
var230 = var225->attrs[COLOR_opts__Option___value].val; /* _value on <var225:OptionBool> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
var231 = (short int)((int64_t)(var228)>>2);
if (var231){
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "long count_attr_reads = 0;";
var235 = core__flat___NativeString___to_s_full(var234, 26l, 26l);
var233 = var235;
varonce232 = var233;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var233); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "long count_isset_checks = 0;";
var239 = core__flat___NativeString___to_s_full(var238, 28l, 28l);
var237 = var239;
varonce236 = var237;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var237); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var242 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$header (var240) on <var240:AbstractCompiler> */
var245 = var240->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var240:AbstractCompiler> */
if (unlikely(var245 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var243 = var245;
RET_LABEL244:(void)0;
}
}
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = "extern long count_attr_reads;";
var249 = core__flat___NativeString___to_s_full(var248, 29l, 29l);
var247 = var249;
varonce246 = var247;
}
{
nitc___nitc__CodeWriter___add_decl(var243, var247); /* Direct call abstract_compiler$CodeWriter$add_decl on <var243:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var252 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var252 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var250) on <var250:AbstractCompiler> */
var255 = var250->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var250:AbstractCompiler> */
if (unlikely(var255 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 591);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "extern long count_isset_checks;";
var259 = core__flat___NativeString___to_s_full(var258, 31l, 31l);
var257 = var259;
varonce256 = var257;
}
{
nitc___nitc__CodeWriter___add_decl(var253, var257); /* Direct call abstract_compiler$CodeWriter$add_decl on <var253:CodeWriter>*/
}
} else {
}
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = "static void show_backtrace(void) {";
var263 = core__flat___NativeString___to_s_full(var262, 34l, 34l);
var261 = var263;
varonce260 = var261;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var261); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var264 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var264){
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "#ifndef NO_STACKTRACE";
var268 = core__flat___NativeString___to_s_full(var267, 21l, 21l);
var266 = var268;
varonce265 = var266;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var266); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "char* opt = getenv(\"NIT_NO_STACK\");";
var272 = core__flat___NativeString___to_s_full(var271, 35l, 35l);
var270 = var272;
varonce269 = var270;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var270); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "unw_cursor_t cursor;";
var276 = core__flat___NativeString___to_s_full(var275, 20l, 20l);
var274 = var276;
varonce273 = var274;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var274); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "if(opt==NULL){";
var280 = core__flat___NativeString___to_s_full(var279, 14l, 14l);
var278 = var280;
varonce277 = var278;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var278); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "unw_context_t uc;";
var284 = core__flat___NativeString___to_s_full(var283, 17l, 17l);
var282 = var284;
varonce281 = var282;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var282); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "unw_word_t ip;";
var288 = core__flat___NativeString___to_s_full(var287, 14l, 14l);
var286 = var288;
varonce285 = var286;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var286); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "char* procname = malloc(sizeof(char) * 100);";
var292 = core__flat___NativeString___to_s_full(var291, 44l, 44l);
var290 = var292;
varonce289 = var290;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var290); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "unw_getcontext(&uc);";
var296 = core__flat___NativeString___to_s_full(var295, 20l, 20l);
var294 = var296;
varonce293 = var294;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var294); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "unw_init_local(&cursor, &uc);";
var300 = core__flat___NativeString___to_s_full(var299, 29l, 29l);
var298 = var300;
varonce297 = var298;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var298); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var304 = core__flat___NativeString___to_s_full(var303, 67l, 67l);
var302 = var304;
varonce301 = var302;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var302); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var308 = core__flat___NativeString___to_s_full(var307, 67l, 67l);
var306 = var308;
varonce305 = var306;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var306); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var312 = core__flat___NativeString___to_s_full(var311, 67l, 67l);
var310 = var312;
varonce309 = var310;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var310); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "while (unw_step(&cursor) > 0) {";
var316 = core__flat___NativeString___to_s_full(var315, 31l, 31l);
var314 = var316;
varonce313 = var314;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var314); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "\tunw_get_proc_name(&cursor, procname, 100, &ip);";
var320 = core__flat___NativeString___to_s_full(var319, 48l, 48l);
var318 = var320;
varonce317 = var318;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var318); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "\tconst char* recv = get_nit_name(procname, strlen(procname));";
var324 = core__flat___NativeString___to_s_full(var323, 61l, 61l);
var322 = var324;
varonce321 = var322;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var322); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "\tif (recv != NULL){";
var328 = core__flat___NativeString___to_s_full(var327, 19l, 19l);
var326 = var328;
varonce325 = var326;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var326); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "\t\tPRINT_ERROR(\"` %s\\n\", recv);";
var332 = core__flat___NativeString___to_s_full(var331, 30l, 30l);
var330 = var332;
varonce329 = var330;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var330); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "\t}else{";
var336 = core__flat___NativeString___to_s_full(var335, 7l, 7l);
var334 = var336;
varonce333 = var334;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var334); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "\t\tPRINT_ERROR(\"` %s\\n\", procname);";
var340 = core__flat___NativeString___to_s_full(var339, 34l, 34l);
var338 = var340;
varonce337 = var338;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var338); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "\t}";
var344 = core__flat___NativeString___to_s_full(var343, 2l, 2l);
var342 = var344;
varonce341 = var342;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var342); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "}";
var348 = core__flat___NativeString___to_s_full(var347, 1l, 1l);
var346 = var348;
varonce345 = var346;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var346); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var352 = core__flat___NativeString___to_s_full(var351, 67l, 67l);
var350 = var352;
varonce349 = var350;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var350); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "free(procname);";
var356 = core__flat___NativeString___to_s_full(var355, 15l, 15l);
var354 = var356;
varonce353 = var354;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var354); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "}";
var360 = core__flat___NativeString___to_s_full(var359, 1l, 1l);
var358 = var360;
varonce357 = var358;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var358); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "#endif /* NO_STACKTRACE */";
var364 = core__flat___NativeString___to_s_full(var363, 26l, 26l);
var362 = var364;
varonce361 = var362;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var362); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "}";
var368 = core__flat___NativeString___to_s_full(var367, 1l, 1l);
var366 = var368;
varonce365 = var366;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var366); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "void sig_handler(int signo){";
var372 = core__flat___NativeString___to_s_full(var371, 28l, 28l);
var370 = var372;
varonce369 = var370;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var370); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = "#ifdef _WIN32";
var376 = core__flat___NativeString___to_s_full(var375, 13l, 13l);
var374 = var376;
varonce373 = var374;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var374); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "PRINT_ERROR(\"Caught signal : %s\\n\", signo);";
var380 = core__flat___NativeString___to_s_full(var379, 43l, 43l);
var378 = var380;
varonce377 = var378;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var378); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "#else";
var384 = core__flat___NativeString___to_s_full(var383, 5l, 5l);
var382 = var384;
varonce381 = var382;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var382); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var388 = core__flat___NativeString___to_s_full(var387, 54l, 54l);
var386 = var388;
varonce385 = var386;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var386); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "#endif";
var392 = core__flat___NativeString___to_s_full(var391, 6l, 6l);
var390 = var392;
varonce389 = var390;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var390); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "show_backtrace();";
var396 = core__flat___NativeString___to_s_full(var395, 17l, 17l);
var394 = var396;
varonce393 = var394;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var394); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "signal(signo, SIG_DFL);";
var400 = core__flat___NativeString___to_s_full(var399, 23l, 23l);
var398 = var400;
varonce397 = var398;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var398); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "#ifndef _WIN32";
var404 = core__flat___NativeString___to_s_full(var403, 14l, 14l);
var402 = var404;
varonce401 = var402;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var402); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "kill(getpid(), signo);";
var408 = core__flat___NativeString___to_s_full(var407, 22l, 22l);
var406 = var408;
varonce405 = var406;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var406); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "#endif";
var412 = core__flat___NativeString___to_s_full(var411, 6l, 6l);
var410 = var412;
varonce409 = var410;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var410); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "}";
var416 = core__flat___NativeString___to_s_full(var415, 1l, 1l);
var414 = var416;
varonce413 = var414;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var414); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "void fatal_exit(int status) {";
var420 = core__flat___NativeString___to_s_full(var419, 29l, 29l);
var418 = var420;
varonce417 = var418;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var418); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "show_backtrace();";
var424 = core__flat___NativeString___to_s_full(var423, 17l, 17l);
var422 = var424;
varonce421 = var422;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var422); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce425!=NULL)) {
var426 = varonce425;
} else {
var427 = "exit(status);";
var428 = core__flat___NativeString___to_s_full(var427, 13l, 13l);
var426 = var428;
varonce425 = var426;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var426); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "}";
var432 = core__flat___NativeString___to_s_full(var431, 1l, 1l);
var430 = var432;
varonce429 = var430;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var430); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$compile_before_main (self,var_v) on <self:AbstractCompiler> */
/* Covariant cast for argument 0 (v) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_v->type->table_size) {
var434 = 0;
} else {
var434 = var_v->type->type_table[cltype] == idtype;
}
if (unlikely(!var434)) {
var_class_name = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 795);
fatal_exit(1);
}
var_v435 = var_v;
RET_LABEL433:(void)0;
}
}
if (var_no_main){
if (likely(varonce436!=NULL)) {
var437 = varonce436;
} else {
var438 = "int nit_main(int argc, char** argv) {";
var439 = core__flat___NativeString___to_s_full(var438, 37l, 37l);
var437 = var439;
varonce436 = var437;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var437); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce440!=NULL)) {
var441 = varonce440;
} else {
var442 = "int main(int argc, char** argv) {";
var443 = core__flat___NativeString___to_s_full(var442, 33l, 33l);
var441 = var443;
varonce440 = var441;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var441); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$compile_begin_main (self,var_v) on <self:AbstractCompiler> */
/* Covariant cast for argument 0 (v) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct448 = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype446 = type_struct448->color;
idtype447 = type_struct448->id;
if(cltype446 >= var_v->type->table_size) {
var445 = 0;
} else {
var445 = var_v->type->type_table[cltype446] == idtype447;
}
if (unlikely(!var445)) {
var_class_name449 = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name449);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 802);
fatal_exit(1);
}
var_v450 = var_v;
RET_LABEL444:(void)0;
}
}
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = "#if !defined(__ANDROID__) && !defined(TARGET_OS_IPHONE)";
var454 = core__flat___NativeString___to_s_full(var453, 55l, 55l);
var452 = var454;
varonce451 = var452;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var452); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce455!=NULL)) {
var456 = varonce455;
} else {
var457 = "signal(SIGABRT, sig_handler);";
var458 = core__flat___NativeString___to_s_full(var457, 29l, 29l);
var456 = var458;
varonce455 = var456;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var456); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce459!=NULL)) {
var460 = varonce459;
} else {
var461 = "signal(SIGFPE, sig_handler);";
var462 = core__flat___NativeString___to_s_full(var461, 28l, 28l);
var460 = var462;
varonce459 = var460;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var460); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce463!=NULL)) {
var464 = varonce463;
} else {
var465 = "signal(SIGILL, sig_handler);";
var466 = core__flat___NativeString___to_s_full(var465, 28l, 28l);
var464 = var466;
varonce463 = var464;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var464); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "signal(SIGINT, sig_handler);";
var470 = core__flat___NativeString___to_s_full(var469, 28l, 28l);
var468 = var470;
varonce467 = var468;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var468); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce471!=NULL)) {
var472 = varonce471;
} else {
var473 = "signal(SIGTERM, sig_handler);";
var474 = core__flat___NativeString___to_s_full(var473, 29l, 29l);
var472 = var474;
varonce471 = var472;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var472); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce475!=NULL)) {
var476 = varonce475;
} else {
var477 = "signal(SIGSEGV, sig_handler);";
var478 = core__flat___NativeString___to_s_full(var477, 29l, 29l);
var476 = var478;
varonce475 = var476;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var476); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "#endif";
var482 = core__flat___NativeString___to_s_full(var481, 6l, 6l);
var480 = var482;
varonce479 = var480;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var480); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce483!=NULL)) {
var484 = varonce483;
} else {
var485 = "#ifndef _WIN32";
var486 = core__flat___NativeString___to_s_full(var485, 14l, 14l);
var484 = var486;
varonce483 = var484;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var484); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "signal(SIGPIPE, SIG_IGN);";
var490 = core__flat___NativeString___to_s_full(var489, 25l, 25l);
var488 = var490;
varonce487 = var488;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var488); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce491!=NULL)) {
var492 = varonce491;
} else {
var493 = "#endif";
var494 = core__flat___NativeString___to_s_full(var493, 6l, 6l);
var492 = var494;
varonce491 = var492;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var492); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce495!=NULL)) {
var496 = varonce495;
} else {
var497 = "glob_argc = argc; glob_argv = argv;";
var498 = core__flat___NativeString___to_s_full(var497, 35l, 35l);
var496 = var498;
varonce495 = var496;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var496); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "catchStack.cursor = -1;";
var502 = core__flat___NativeString___to_s_full(var501, 23l, 23l);
var500 = var502;
varonce499 = var500;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var500); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce503!=NULL)) {
var504 = varonce503;
} else {
var505 = "initialize_gc_option();";
var506 = core__flat___NativeString___to_s_full(var505, 23l, 23l);
var504 = var506;
varonce503 = var504;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var504); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce507!=NULL)) {
var508 = varonce507;
} else {
var509 = "initialize_nitni_global_refs();";
var510 = core__flat___NativeString___to_s_full(var509, 31l, 31l);
var508 = var510;
varonce507 = var508;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var508); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var513 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var513 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var511 = var513;
RET_LABEL512:(void)0;
}
}
{
var514 = nitc__model___MModule___sys_type(var511);
}
var_main_type = var514;
if (var_main_type == NULL) {
var515 = 0; /* is null */
} else {
var515 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_main_type,((val*)NULL)) on <var_main_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var518 = ((short int(*)(val* self, val* p0))(var_main_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_type, var_other); /* == on <var_main_type:nullable MClassType(MClassType)>*/
}
var519 = !var518;
var516 = var519;
goto RET_LABEL517;
RET_LABEL517:(void)0;
}
var515 = var516;
}
if (var515){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var522 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var522 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var520 = var522;
RET_LABEL521:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var520) on <var520:AbstractCompiler> */
var525 = var520->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var520:AbstractCompiler> */
if (unlikely(var525 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var523 = var525;
RET_LABEL524:(void)0;
}
}
var_mainmodule = var523;
{
var526 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_glob_sys = var526;
if (unlikely(varonce527==NULL)) {
var528 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce529!=NULL)) {
var530 = varonce529;
} else {
var531 = "glob_sys = ";
var532 = core__flat___NativeString___to_s_full(var531, 11l, 11l);
var530 = var532;
varonce529 = var530;
}
((struct instance_core__NativeArray*)var528)->values[0]=var530;
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = ";";
var536 = core__flat___NativeString___to_s_full(var535, 1l, 1l);
var534 = var536;
varonce533 = var534;
}
((struct instance_core__NativeArray*)var528)->values[2]=var534;
} else {
var528 = varonce527;
varonce527 = NULL;
}
{
var537 = ((val*(*)(val* self))(var_glob_sys->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_glob_sys); /* to_s on <var_glob_sys:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var528)->values[1]=var537;
{
var538 = ((val*(*)(val* self))(var528->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var528); /* native_to_s on <var528:NativeArray[String]>*/
}
varonce527 = var528;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var538); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce539!=NULL)) {
var540 = varonce539;
} else {
var541 = "init";
var542 = core__flat___NativeString___to_s_full(var541, 4l, 4l);
var540 = var542;
varonce539 = var540;
}
{
{ /* Inline model$MClassType$mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var545 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var545 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var543 = var545;
RET_LABEL544:(void)0;
}
}
{
var546 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var540, var543);
}
var_main_init = var546;
if (var_main_init == NULL) {
var547 = 0; /* is null */
} else {
var547 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_main_init,((val*)NULL)) on <var_main_init:nullable MMethod> */
var_other = ((val*)NULL);
{
var550 = ((short int(*)(val* self, val* p0))(var_main_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_init, var_other); /* == on <var_main_init:nullable MMethod(MMethod)>*/
}
var551 = !var550;
var548 = var551;
goto RET_LABEL549;
RET_LABEL549:(void)0;
}
var547 = var548;
}
if (var547){
var552 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var552, 1l); /* Direct call array$Array$with_capacity on <var552:Array[RuntimeVariable]>*/
}
var_553 = var552;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_553, var_glob_sys); /* Direct call array$AbstractArray$push on <var_553:Array[RuntimeVariable]>*/
}
{
var554 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_init, var_553);
}
} else {
}
if (likely(varonce556!=NULL)) {
var557 = varonce556;
} else {
var558 = "run";
var559 = core__flat___NativeString___to_s_full(var558, 3l, 3l);
var557 = var559;
varonce556 = var557;
}
{
{ /* Inline model$MClassType$mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var562 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var562 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var560 = var562;
RET_LABEL561:(void)0;
}
}
{
var563 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var557, var560);
}
if (var563!=NULL) {
var555 = var563;
} else {
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = "main";
var567 = core__flat___NativeString___to_s_full(var566, 4l, 4l);
var565 = var567;
varonce564 = var565;
}
{
{ /* Inline model$MClassType$mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var570 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var570 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var568 = var570;
RET_LABEL569:(void)0;
}
}
{
var571 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var565, var568);
}
var555 = var571;
}
var_main_method = var555;
if (var_main_method == NULL) {
var572 = 0; /* is null */
} else {
var572 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_main_method,((val*)NULL)) on <var_main_method:nullable MMethod> */
var_other = ((val*)NULL);
{
var575 = ((short int(*)(val* self, val* p0))(var_main_method->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_method, var_other); /* == on <var_main_method:nullable MMethod(MMethod)>*/
}
var576 = !var575;
var573 = var576;
goto RET_LABEL574;
RET_LABEL574:(void)0;
}
var572 = var573;
}
if (var572){
var577 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var577, 1l); /* Direct call array$Array$with_capacity on <var577:Array[RuntimeVariable]>*/
}
var_578 = var577;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_578, var_glob_sys); /* Direct call array$AbstractArray$push on <var_578:Array[RuntimeVariable]>*/
}
{
var579 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_main_method, var_578);
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var582 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var582 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var580 = var582;
RET_LABEL581:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var580) on <var580:ModelBuilder> */
var585 = var580->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var580:ModelBuilder> */
if (unlikely(var585 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var583 = var585;
RET_LABEL584:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var583) on <var583:ToolContext> */
var588 = var583->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var583:ToolContext> */
if (unlikely(var588 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var586 = var588;
RET_LABEL587:(void)0;
}
}
{
{ /* Inline opts$Option$value (var586) on <var586:OptionBool> */
var591 = var586->attrs[COLOR_opts__Option___value].val; /* _value on <var586:OptionBool> */
var589 = var591;
RET_LABEL590:(void)0;
}
}
var592 = (short int)((int64_t)(var589)>>2);
if (var592){
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = "long count_type_test_resolved_total = 0;";
var596 = core__flat___NativeString___to_s_full(var595, 40l, 40l);
var594 = var596;
varonce593 = var594;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var594); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce597!=NULL)) {
var598 = varonce597;
} else {
var599 = "long count_type_test_unresolved_total = 0;";
var600 = core__flat___NativeString___to_s_full(var599, 42l, 42l);
var598 = var600;
varonce597 = var598;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var598); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce601!=NULL)) {
var602 = varonce601;
} else {
var603 = "long count_type_test_skipped_total = 0;";
var604 = core__flat___NativeString___to_s_full(var603, 39l, 39l);
var602 = var604;
varonce601 = var602;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var602); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = "long count_type_test_total_total = 0;";
var608 = core__flat___NativeString___to_s_full(var607, 37l, 37l);
var606 = var608;
varonce605 = var606;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var606); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var611 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var611 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var609 = var611;
RET_LABEL610:(void)0;
}
}
var_612 = var609;
{
var613 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_612);
}
var_614 = var613;
for(;;) {
{
var615 = ((short int(*)(val* self))((((int64_t)var_614&3)?class_info[((int64_t)var_614&3)]:var_614->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_614); /* is_ok on <var_614:IndexedIterator[String]>*/
}
if (var615){
} else {
goto BREAK_label616;
}
{
var617 = ((val*(*)(val* self))((((int64_t)var_614&3)?class_info[((int64_t)var_614&3)]:var_614->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_614); /* item on <var_614:IndexedIterator[String]>*/
}
var_tag618 = var617;
if (unlikely(varonce619==NULL)) {
var620 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce621!=NULL)) {
var622 = varonce621;
} else {
var623 = "long count_type_test_total_";
var624 = core__flat___NativeString___to_s_full(var623, 27l, 27l);
var622 = var624;
varonce621 = var622;
}
((struct instance_core__NativeArray*)var620)->values[0]=var622;
if (likely(varonce625!=NULL)) {
var626 = varonce625;
} else {
var627 = ";";
var628 = core__flat___NativeString___to_s_full(var627, 1l, 1l);
var626 = var628;
varonce625 = var626;
}
((struct instance_core__NativeArray*)var620)->values[2]=var626;
} else {
var620 = varonce619;
varonce619 = NULL;
}
((struct instance_core__NativeArray*)var620)->values[1]=var_tag618;
{
var629 = ((val*(*)(val* self))(var620->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var620); /* native_to_s on <var620:NativeArray[String]>*/
}
varonce619 = var620;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var629); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce630==NULL)) {
var631 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce632!=NULL)) {
var633 = varonce632;
} else {
var634 = "count_type_test_total_";
var635 = core__flat___NativeString___to_s_full(var634, 22l, 22l);
var633 = var635;
varonce632 = var633;
}
((struct instance_core__NativeArray*)var631)->values[0]=var633;
if (likely(varonce636!=NULL)) {
var637 = varonce636;
} else {
var638 = " = count_type_test_resolved_";
var639 = core__flat___NativeString___to_s_full(var638, 28l, 28l);
var637 = var639;
varonce636 = var637;
}
((struct instance_core__NativeArray*)var631)->values[2]=var637;
if (likely(varonce640!=NULL)) {
var641 = varonce640;
} else {
var642 = " + count_type_test_unresolved_";
var643 = core__flat___NativeString___to_s_full(var642, 30l, 30l);
var641 = var643;
varonce640 = var641;
}
((struct instance_core__NativeArray*)var631)->values[4]=var641;
if (likely(varonce644!=NULL)) {
var645 = varonce644;
} else {
var646 = " + count_type_test_skipped_";
var647 = core__flat___NativeString___to_s_full(var646, 27l, 27l);
var645 = var647;
varonce644 = var645;
}
((struct instance_core__NativeArray*)var631)->values[6]=var645;
if (likely(varonce648!=NULL)) {
var649 = varonce648;
} else {
var650 = ";";
var651 = core__flat___NativeString___to_s_full(var650, 1l, 1l);
var649 = var651;
varonce648 = var649;
}
((struct instance_core__NativeArray*)var631)->values[8]=var649;
} else {
var631 = varonce630;
varonce630 = NULL;
}
((struct instance_core__NativeArray*)var631)->values[1]=var_tag618;
((struct instance_core__NativeArray*)var631)->values[3]=var_tag618;
((struct instance_core__NativeArray*)var631)->values[5]=var_tag618;
((struct instance_core__NativeArray*)var631)->values[7]=var_tag618;
{
var652 = ((val*(*)(val* self))(var631->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var631); /* native_to_s on <var631:NativeArray[String]>*/
}
varonce630 = var631;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var652); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce653==NULL)) {
var654 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce655!=NULL)) {
var656 = varonce655;
} else {
var657 = "count_type_test_resolved_total += count_type_test_resolved_";
var658 = core__flat___NativeString___to_s_full(var657, 59l, 59l);
var656 = var658;
varonce655 = var656;
}
((struct instance_core__NativeArray*)var654)->values[0]=var656;
if (likely(varonce659!=NULL)) {
var660 = varonce659;
} else {
var661 = ";";
var662 = core__flat___NativeString___to_s_full(var661, 1l, 1l);
var660 = var662;
varonce659 = var660;
}
((struct instance_core__NativeArray*)var654)->values[2]=var660;
} else {
var654 = varonce653;
varonce653 = NULL;
}
((struct instance_core__NativeArray*)var654)->values[1]=var_tag618;
{
var663 = ((val*(*)(val* self))(var654->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var654); /* native_to_s on <var654:NativeArray[String]>*/
}
varonce653 = var654;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var663); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce664==NULL)) {
var665 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce666!=NULL)) {
var667 = varonce666;
} else {
var668 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var669 = core__flat___NativeString___to_s_full(var668, 63l, 63l);
var667 = var669;
varonce666 = var667;
}
((struct instance_core__NativeArray*)var665)->values[0]=var667;
if (likely(varonce670!=NULL)) {
var671 = varonce670;
} else {
var672 = ";";
var673 = core__flat___NativeString___to_s_full(var672, 1l, 1l);
var671 = var673;
varonce670 = var671;
}
((struct instance_core__NativeArray*)var665)->values[2]=var671;
} else {
var665 = varonce664;
varonce664 = NULL;
}
((struct instance_core__NativeArray*)var665)->values[1]=var_tag618;
{
var674 = ((val*(*)(val* self))(var665->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var665); /* native_to_s on <var665:NativeArray[String]>*/
}
varonce664 = var665;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var674); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce675==NULL)) {
var676 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce677!=NULL)) {
var678 = varonce677;
} else {
var679 = "count_type_test_skipped_total += count_type_test_skipped_";
var680 = core__flat___NativeString___to_s_full(var679, 57l, 57l);
var678 = var680;
varonce677 = var678;
}
((struct instance_core__NativeArray*)var676)->values[0]=var678;
if (likely(varonce681!=NULL)) {
var682 = varonce681;
} else {
var683 = ";";
var684 = core__flat___NativeString___to_s_full(var683, 1l, 1l);
var682 = var684;
varonce681 = var682;
}
((struct instance_core__NativeArray*)var676)->values[2]=var682;
} else {
var676 = varonce675;
varonce675 = NULL;
}
((struct instance_core__NativeArray*)var676)->values[1]=var_tag618;
{
var685 = ((val*(*)(val* self))(var676->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var676); /* native_to_s on <var676:NativeArray[String]>*/
}
varonce675 = var676;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var685); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce686==NULL)) {
var687 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce688!=NULL)) {
var689 = varonce688;
} else {
var690 = "count_type_test_total_total += count_type_test_total_";
var691 = core__flat___NativeString___to_s_full(var690, 53l, 53l);
var689 = var691;
varonce688 = var689;
}
((struct instance_core__NativeArray*)var687)->values[0]=var689;
if (likely(varonce692!=NULL)) {
var693 = varonce692;
} else {
var694 = ";";
var695 = core__flat___NativeString___to_s_full(var694, 1l, 1l);
var693 = var695;
varonce692 = var693;
}
((struct instance_core__NativeArray*)var687)->values[2]=var693;
} else {
var687 = varonce686;
varonce686 = NULL;
}
((struct instance_core__NativeArray*)var687)->values[1]=var_tag618;
{
var696 = ((val*(*)(val* self))(var687->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var687); /* native_to_s on <var687:NativeArray[String]>*/
}
varonce686 = var687;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var696); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((int64_t)var_614&3)?class_info[((int64_t)var_614&3)]:var_614->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_614); /* next on <var_614:IndexedIterator[String]>*/
}
}
BREAK_label616: (void)0;
{
((void(*)(val* self))((((int64_t)var_614&3)?class_info[((int64_t)var_614&3)]:var_614->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_614); /* finish on <var_614:IndexedIterator[String]>*/
}
if (likely(varonce697!=NULL)) {
var698 = varonce697;
} else {
var699 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var700 = core__flat___NativeString___to_s_full(var699, 48l, 48l);
var698 = var700;
varonce697 = var698;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var698); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce701!=NULL)) {
var702 = varonce701;
} else {
var703 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var704 = core__flat___NativeString___to_s_full(var703, 51l, 51l);
var702 = var704;
varonce701 = var702;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var702); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var707 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var707 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var705 = var707;
RET_LABEL706:(void)0;
}
}
{
var708 = core__array___Collection___to_a(var705);
}
var_tags = var708;
if (likely(varonce709!=NULL)) {
var710 = varonce709;
} else {
var711 = "total";
var712 = core__flat___NativeString___to_s_full(var711, 5l, 5l);
var710 = var712;
varonce709 = var710;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var710); /* Direct call array$Array$add on <var_tags:Array[String]>*/
}
var_713 = var_tags;
{
var714 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_713);
}
var_715 = var714;
for(;;) {
{
var716 = ((short int(*)(val* self))((((int64_t)var_715&3)?class_info[((int64_t)var_715&3)]:var_715->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_715); /* is_ok on <var_715:IndexedIterator[String]>*/
}
if (var716){
} else {
goto BREAK_label717;
}
{
var718 = ((val*(*)(val* self))((((int64_t)var_715&3)?class_info[((int64_t)var_715&3)]:var_715->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_715); /* item on <var_715:IndexedIterator[String]>*/
}
var_tag719 = var718;
if (unlikely(varonce720==NULL)) {
var721 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce722!=NULL)) {
var723 = varonce722;
} else {
var724 = "printf(\"";
var725 = core__flat___NativeString___to_s_full(var724, 8l, 8l);
var723 = var725;
varonce722 = var723;
}
((struct instance_core__NativeArray*)var721)->values[0]=var723;
if (likely(varonce726!=NULL)) {
var727 = varonce726;
} else {
var728 = "\");";
var729 = core__flat___NativeString___to_s_full(var728, 3l, 3l);
var727 = var729;
varonce726 = var727;
}
((struct instance_core__NativeArray*)var721)->values[2]=var727;
} else {
var721 = varonce720;
varonce720 = NULL;
}
((struct instance_core__NativeArray*)var721)->values[1]=var_tag719;
{
var730 = ((val*(*)(val* self))(var721->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var721); /* native_to_s on <var721:NativeArray[String]>*/
}
varonce720 = var721;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var730); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce731==NULL)) {
var732 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce733!=NULL)) {
var734 = varonce733;
} else {
var735 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var736 = core__flat___NativeString___to_s_full(var735, 50l, 50l);
var734 = var736;
varonce733 = var734;
}
((struct instance_core__NativeArray*)var732)->values[0]=var734;
if (likely(varonce737!=NULL)) {
var738 = varonce737;
} else {
var739 = ", 100.0*count_type_test_resolved_";
var740 = core__flat___NativeString___to_s_full(var739, 33l, 33l);
var738 = var740;
varonce737 = var738;
}
((struct instance_core__NativeArray*)var732)->values[2]=var738;
if (likely(varonce741!=NULL)) {
var742 = varonce741;
} else {
var743 = "/count_type_test_total_total);";
var744 = core__flat___NativeString___to_s_full(var743, 30l, 30l);
var742 = var744;
varonce741 = var742;
}
((struct instance_core__NativeArray*)var732)->values[4]=var742;
} else {
var732 = varonce731;
varonce731 = NULL;
}
((struct instance_core__NativeArray*)var732)->values[1]=var_tag719;
((struct instance_core__NativeArray*)var732)->values[3]=var_tag719;
{
var745 = ((val*(*)(val* self))(var732->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var732); /* native_to_s on <var732:NativeArray[String]>*/
}
varonce731 = var732;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var745); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce746==NULL)) {
var747 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce748!=NULL)) {
var749 = varonce748;
} else {
var750 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var751 = core__flat___NativeString___to_s_full(var750, 52l, 52l);
var749 = var751;
varonce748 = var749;
}
((struct instance_core__NativeArray*)var747)->values[0]=var749;
if (likely(varonce752!=NULL)) {
var753 = varonce752;
} else {
var754 = ", 100.0*count_type_test_unresolved_";
var755 = core__flat___NativeString___to_s_full(var754, 35l, 35l);
var753 = var755;
varonce752 = var753;
}
((struct instance_core__NativeArray*)var747)->values[2]=var753;
if (likely(varonce756!=NULL)) {
var757 = varonce756;
} else {
var758 = "/count_type_test_total_total);";
var759 = core__flat___NativeString___to_s_full(var758, 30l, 30l);
var757 = var759;
varonce756 = var757;
}
((struct instance_core__NativeArray*)var747)->values[4]=var757;
} else {
var747 = varonce746;
varonce746 = NULL;
}
((struct instance_core__NativeArray*)var747)->values[1]=var_tag719;
((struct instance_core__NativeArray*)var747)->values[3]=var_tag719;
{
var760 = ((val*(*)(val* self))(var747->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var747); /* native_to_s on <var747:NativeArray[String]>*/
}
varonce746 = var747;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var760); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce761==NULL)) {
var762 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce763!=NULL)) {
var764 = varonce763;
} else {
var765 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var766 = core__flat___NativeString___to_s_full(var765, 49l, 49l);
var764 = var766;
varonce763 = var764;
}
((struct instance_core__NativeArray*)var762)->values[0]=var764;
if (likely(varonce767!=NULL)) {
var768 = varonce767;
} else {
var769 = ", 100.0*count_type_test_skipped_";
var770 = core__flat___NativeString___to_s_full(var769, 32l, 32l);
var768 = var770;
varonce767 = var768;
}
((struct instance_core__NativeArray*)var762)->values[2]=var768;
if (likely(varonce771!=NULL)) {
var772 = varonce771;
} else {
var773 = "/count_type_test_total_total);";
var774 = core__flat___NativeString___to_s_full(var773, 30l, 30l);
var772 = var774;
varonce771 = var772;
}
((struct instance_core__NativeArray*)var762)->values[4]=var772;
} else {
var762 = varonce761;
varonce761 = NULL;
}
((struct instance_core__NativeArray*)var762)->values[1]=var_tag719;
((struct instance_core__NativeArray*)var762)->values[3]=var_tag719;
{
var775 = ((val*(*)(val* self))(var762->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var762); /* native_to_s on <var762:NativeArray[String]>*/
}
varonce761 = var762;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var775); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce776==NULL)) {
var777 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce778!=NULL)) {
var779 = varonce778;
} else {
var780 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var781 = core__flat___NativeString___to_s_full(var780, 49l, 49l);
var779 = var781;
varonce778 = var779;
}
((struct instance_core__NativeArray*)var777)->values[0]=var779;
if (likely(varonce782!=NULL)) {
var783 = varonce782;
} else {
var784 = ", 100.0*count_type_test_total_";
var785 = core__flat___NativeString___to_s_full(var784, 30l, 30l);
var783 = var785;
varonce782 = var783;
}
((struct instance_core__NativeArray*)var777)->values[2]=var783;
if (likely(varonce786!=NULL)) {
var787 = varonce786;
} else {
var788 = "/count_type_test_total_total);";
var789 = core__flat___NativeString___to_s_full(var788, 30l, 30l);
var787 = var789;
varonce786 = var787;
}
((struct instance_core__NativeArray*)var777)->values[4]=var787;
} else {
var777 = varonce776;
varonce776 = NULL;
}
((struct instance_core__NativeArray*)var777)->values[1]=var_tag719;
((struct instance_core__NativeArray*)var777)->values[3]=var_tag719;
{
var790 = ((val*(*)(val* self))(var777->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var777); /* native_to_s on <var777:NativeArray[String]>*/
}
varonce776 = var777;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var790); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((int64_t)var_715&3)?class_info[((int64_t)var_715&3)]:var_715->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_715); /* next on <var_715:IndexedIterator[String]>*/
}
}
BREAK_label717: (void)0;
{
((void(*)(val* self))((((int64_t)var_715&3)?class_info[((int64_t)var_715&3)]:var_715->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_715); /* finish on <var_715:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var793 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var793 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var791 = var793;
RET_LABEL792:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var791) on <var791:ModelBuilder> */
var796 = var791->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var791:ModelBuilder> */
if (unlikely(var796 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var794 = var796;
RET_LABEL795:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (var794) on <var794:ToolContext> */
var799 = var794->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var794:ToolContext> */
if (unlikely(var799 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var797 = var799;
RET_LABEL798:(void)0;
}
}
{
{ /* Inline opts$Option$value (var797) on <var797:OptionBool> */
var802 = var797->attrs[COLOR_opts__Option___value].val; /* _value on <var797:OptionBool> */
var800 = var802;
RET_LABEL801:(void)0;
}
}
var803 = (short int)((int64_t)(var800)>>2);
if (var803){
if (likely(varonce804!=NULL)) {
var805 = varonce804;
} else {
var806 = "long count_invoke_total;";
var807 = core__flat___NativeString___to_s_full(var806, 24l, 24l);
var805 = var807;
varonce804 = var805;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var805); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce808!=NULL)) {
var809 = varonce808;
} else {
var810 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var811 = core__flat___NativeString___to_s_full(var810, 94l, 94l);
var809 = var811;
varonce808 = var809;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var809); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce812!=NULL)) {
var813 = varonce812;
} else {
var814 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var815 = core__flat___NativeString___to_s_full(var814, 70l, 70l);
var813 = var815;
varonce812 = var813;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var813); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce816!=NULL)) {
var817 = varonce816;
} else {
var818 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var819 = core__flat___NativeString___to_s_full(var818, 108l, 108l);
var817 = var819;
varonce816 = var817;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var817); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce820!=NULL)) {
var821 = varonce820;
} else {
var822 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var823 = core__flat___NativeString___to_s_full(var822, 108l, 108l);
var821 = var823;
varonce820 = var821;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var821); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce824!=NULL)) {
var825 = varonce824;
} else {
var826 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var827 = core__flat___NativeString___to_s_full(var826, 108l, 108l);
var825 = var827;
varonce824 = var825;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var825); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var830 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var830 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var828 = var830;
RET_LABEL829:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var828) on <var828:ModelBuilder> */
var833 = var828->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var828:ModelBuilder> */
if (unlikely(var833 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var831 = var833;
RET_LABEL832:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var831) on <var831:ToolContext> */
var836 = var831->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var831:ToolContext> */
if (unlikely(var836 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var834 = var836;
RET_LABEL835:(void)0;
}
}
{
{ /* Inline opts$Option$value (var834) on <var834:OptionBool> */
var839 = var834->attrs[COLOR_opts__Option___value].val; /* _value on <var834:OptionBool> */
var837 = var839;
RET_LABEL838:(void)0;
}
}
var840 = (short int)((int64_t)(var837)>>2);
if (var840){
if (likely(varonce841!=NULL)) {
var842 = varonce841;
} else {
var843 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var844 = core__flat___NativeString___to_s_full(var843, 61l, 61l);
var842 = var844;
varonce841 = var842;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var842); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce845!=NULL)) {
var846 = varonce845;
} else {
var847 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var848 = core__flat___NativeString___to_s_full(var847, 60l, 60l);
var846 = var848;
varonce845 = var846;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var846); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce849!=NULL)) {
var850 = varonce849;
} else {
var851 = "return 0;";
var852 = core__flat___NativeString___to_s_full(var851, 9l, 9l);
var850 = var852;
varonce849 = var850;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var850); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce853!=NULL)) {
var854 = varonce853;
} else {
var855 = "}";
var856 = core__flat___NativeString___to_s_full(var855, 1l, 1l);
var854 = var856;
varonce853 = var854;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var854); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var859 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var859 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var857 = var859;
RET_LABEL858:(void)0;
}
}
{
{ /* Inline mmodule$MModule$in_importation (var857) on <var857:MModule> */
var862 = var857->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var857:MModule> */
if (unlikely(var862 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var860 = var862;
RET_LABEL861:(void)0;
}
}
{
var863 = poset___poset__POSetElement___greaters(var860);
}
var_864 = var863;
{
var865 = ((val*(*)(val* self))((((int64_t)var_864&3)?class_info[((int64_t)var_864&3)]:var_864->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_864); /* iterator on <var_864:Collection[MModule]>*/
}
var_866 = var865;
for(;;) {
{
var867 = ((short int(*)(val* self))((((int64_t)var_866&3)?class_info[((int64_t)var_866&3)]:var_866->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_866); /* is_ok on <var_866:Iterator[MModule]>*/
}
if (var867){
} else {
goto BREAK_label868;
}
{
var869 = ((val*(*)(val* self))((((int64_t)var_866&3)?class_info[((int64_t)var_866&3)]:var_866->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_866); /* item on <var_866:Iterator[MModule]>*/
}
var_m = var869;
if (likely(varonce870!=NULL)) {
var871 = varonce870;
} else {
var872 = "FILE_";
var873 = core__flat___NativeString___to_s_full(var872, 5l, 5l);
var871 = var873;
varonce870 = var871;
}
{
var874 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_m);
}
{
var875 = ((val*(*)(val* self, val* p0))(var871->class->vft[COLOR_core__abstract_text__Text___43d]))(var871, var874); /* + on <var871:String>*/
}
var_f = var875;
if (unlikely(varonce876==NULL)) {
var877 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce878!=NULL)) {
var879 = varonce878;
} else {
var880 = "const char ";
var881 = core__flat___NativeString___to_s_full(var880, 11l, 11l);
var879 = var881;
varonce878 = var879;
}
((struct instance_core__NativeArray*)var877)->values[0]=var879;
if (likely(varonce882!=NULL)) {
var883 = varonce882;
} else {
var884 = "[] = \"";
var885 = core__flat___NativeString___to_s_full(var884, 6l, 6l);
var883 = var885;
varonce882 = var883;
}
((struct instance_core__NativeArray*)var877)->values[2]=var883;
if (likely(varonce886!=NULL)) {
var887 = varonce886;
} else {
var888 = "\";";
var889 = core__flat___NativeString___to_s_full(var888, 2l, 2l);
var887 = var889;
varonce886 = var887;
}
((struct instance_core__NativeArray*)var877)->values[4]=var887;
} else {
var877 = varonce876;
varonce876 = NULL;
}
((struct instance_core__NativeArray*)var877)->values[1]=var_f;
{
{ /* Inline mmodule$MModule$location (var_m) on <var_m:MModule> */
var892 = var_m->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_m:MModule> */
if (unlikely(var892 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var890 = var892;
RET_LABEL891:(void)0;
}
}
{
{ /* Inline location$Location$file (var890) on <var890:Location> */
var895 = var890->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var890:Location> */
var893 = var895;
RET_LABEL894:(void)0;
}
}
if (var893 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1001);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var893) on <var893:nullable SourceFile> */
if (unlikely(var893 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var898 = var893->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var893:nullable SourceFile> */
if (unlikely(var898 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var896 = var898;
RET_LABEL897:(void)0;
}
}
{
var899 = ((val*(*)(val* self))(var896->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var896); /* escape_to_c on <var896:String>*/
}
((struct instance_core__NativeArray*)var877)->values[3]=var899;
{
var900 = ((val*(*)(val* self))(var877->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var877); /* native_to_s on <var877:NativeArray[String]>*/
}
varonce876 = var877;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var900); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce901==NULL)) {
var902 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce903!=NULL)) {
var904 = varonce903;
} else {
var905 = "extern const char ";
var906 = core__flat___NativeString___to_s_full(var905, 18l, 18l);
var904 = var906;
varonce903 = var904;
}
((struct instance_core__NativeArray*)var902)->values[0]=var904;
if (likely(varonce907!=NULL)) {
var908 = varonce907;
} else {
var909 = "[];";
var910 = core__flat___NativeString___to_s_full(var909, 3l, 3l);
var908 = var910;
varonce907 = var908;
}
((struct instance_core__NativeArray*)var902)->values[2]=var908;
} else {
var902 = varonce901;
varonce901 = NULL;
}
((struct instance_core__NativeArray*)var902)->values[1]=var_f;
{
var911 = ((val*(*)(val* self))(var902->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var902); /* native_to_s on <var902:NativeArray[String]>*/
}
varonce901 = var902;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var_f, var911); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <self:AbstractCompiler>*/
}
{
((void(*)(val* self))((((int64_t)var_866&3)?class_info[((int64_t)var_866&3)]:var_866->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_866); /* next on <var_866:Iterator[MModule]>*/
}
}
BREAK_label868: (void)0;
{
((void(*)(val* self))((((int64_t)var_866&3)?class_info[((int64_t)var_866&3)]:var_866->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_866); /* finish on <var_866:Iterator[MModule]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$compile_nitni_global_ref_functions for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\tnitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\tnitni_global_ref_list->head = NULL;\n\tnitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\tif ( nitni_global_ref_list->head == NULL ) {\n\t\tnitni_global_ref_list->head = ref;\n\t\tref->prev = NULL;\n\t} else {\n\t\tnitni_global_ref_list->tail->next = ref;\n\t\tref->prev = nitni_global_ref_list->tail;\n\t}\n\tnitni_global_ref_list->tail = ref;\n\n\tref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\tif ( ref->prev == NULL ) {\n\t\tnitni_global_ref_list->head = ref->next;\n\t} else {\n\t\tref->prev->next = ref->next;\n\t}\n\n\tif ( ref->next == NULL ) {\n\t\tnitni_global_ref_list->tail = ref->prev;\n\t} else {\n\t\tref->next->prev = ref->prev;\n\t}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\tif ( ref->count == 0 ) /* not registered */\n\t{\n\t\t/* add to list */\n\t\tnitni_global_ref_add( ref );\n\t}\n\n\tref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\tif ( ref->count == 1 ) /* was last reference */\n\t{\n\t\t/* remove from list */\n\t\tnitni_global_ref_remove( ref );\n\t}\n\n\tref->count --;\n}\n";
var3 = core__flat___NativeString___to_s_full(var2, 1260l, 1260l);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* nitc___nitc__AbstractCompiler___extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1067);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$files_to_copy for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1070);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* nitc___nitc__AbstractCompiler___seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1073);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Set[MClassDef] */;
val* var5 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_ /* var : Array[MClassDef] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : Array[AAttrPropdef] */;
val* var_17 /* var : Array[AAttrPropdef] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[AAttrPropdef] */;
short int var20 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1076);
fatal_exit(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_mtype, var1);
}
{
var5 = core__array___Collection___to_a(var4);
}
var_cds = var5;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
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
nitc__model___MModule___linearize_mclassdefs(var6, var_cds); /* Direct call model$MModule$linearize_mclassdefs on <var6:MModule>*/
}
var_ = var_cds;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((int64_t)var_10&3)?class_info[((int64_t)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[MClassDef]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((int64_t)var_10&3)?class_info[((int64_t)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[MClassDef]>*/
}
var_cd = var12;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{
var16 = nitc__modelize_property___ModelBuilder___collect_attr_propdef(var13, var_cd);
}
var_17 = var16;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((int64_t)var_19&3)?class_info[((int64_t)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[AAttrPropdef]>*/
}
if (var20){
} else {
goto BREAK_label21;
}
{
var22 = ((val*(*)(val* self))((((int64_t)var_19&3)?class_info[((int64_t)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[AAttrPropdef]>*/
}
var_npropdef = var22;
{
nitc__separate_compiler___AAttrPropdef___init_expr(var_npropdef, var_v, var_recv); /* Direct call separate_compiler$AAttrPropdef$init_expr on <var_npropdef:AAttrPropdef>*/
}
{
((void(*)(val* self))((((int64_t)var_19&3)?class_info[((int64_t)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[AAttrPropdef]>*/
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((int64_t)var_19&3)?class_info[((int64_t)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((int64_t)var_10&3)?class_info[((int64_t)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_10&3)?class_info[((int64_t)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var_res /* var res: HashMap[String, Int] */;
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[String] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var9 /* : nullable Object */;
var1 = NEW_core__HashMap(&type_core__HashMap__core__String__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[String, Int]>*/
}
var_res = var1;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((int64_t)var_6&3)?class_info[((int64_t)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[String]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((int64_t)var_6&3)?class_info[((int64_t)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[String]>*/
}
var_tag = var8;
{
var9 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_res, var_tag, var9); /* Direct call hash_collection$HashMap$[]= on <var_res:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((int64_t)var_6&3)?class_info[((int64_t)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_6&3)?class_info[((int64_t)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$display_stats for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Sys */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : Sys */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var23 /* : HashMap[String, Int] */;
val* var25 /* : HashMap[String, Int] */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : nullable Object */;
val* var31 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[String, Int] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : nullable Object */;
val* var39 /* : HashMap[String, Int] */;
val* var41 /* : HashMap[String, Int] */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : nullable Object */;
val* var52 /* : Array[String] */;
val* var54 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var55 /* : IndexedIterator[nullable Object] */;
val* var_56 /* var : IndexedIterator[String] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var59 /* : HashMap[String, Int] */;
val* var61 /* : HashMap[String, Int] */;
val* var62 /* : nullable Object */;
val* var63 /* : HashMap[String, Int] */;
val* var65 /* : HashMap[String, Int] */;
val* var66 /* : nullable Object */;
int64_t var67 /* : Int */;
short int var69 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var70 /* : Int */;
int64_t var71 /* : Int */;
int64_t var72 /* : Int */;
val* var73 /* : HashMap[String, Int] */;
val* var75 /* : HashMap[String, Int] */;
val* var76 /* : nullable Object */;
int64_t var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
int64_t var83 /* : Int */;
int64_t var84 /* : Int */;
val* var85 /* : nullable Object */;
val* var86 /* : HashMap[String, Int] */;
val* var88 /* : HashMap[String, Int] */;
val* var_89 /* var : HashMap[String, Int] */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
val* var_94 /* var : String */;
val* var95 /* : nullable Object */;
val* var96 /* : HashMap[String, Int] */;
val* var98 /* : HashMap[String, Int] */;
val* var99 /* : nullable Object */;
int64_t var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
int64_t var106 /* : Int */;
int64_t var107 /* : Int */;
int64_t var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : HashMap[String, Int] */;
val* var112 /* : HashMap[String, Int] */;
val* var_113 /* var : HashMap[String, Int] */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
val* var_118 /* var : String */;
val* var119 /* : nullable Object */;
val* var120 /* : HashMap[String, Int] */;
val* var122 /* : HashMap[String, Int] */;
val* var123 /* : nullable Object */;
int64_t var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
int64_t var130 /* : Int */;
int64_t var131 /* : Int */;
int64_t var132 /* : Int */;
val* var133 /* : nullable Object */;
val* var134 /* : HashMap[String, Int] */;
val* var136 /* : HashMap[String, Int] */;
val* var_137 /* var : HashMap[String, Int] */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
val* var_142 /* var : String */;
val* var143 /* : nullable Object */;
val* var144 /* : HashMap[String, Int] */;
val* var146 /* : HashMap[String, Int] */;
val* var147 /* : nullable Object */;
int64_t var148 /* : Int */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
int64_t var154 /* : Int */;
int64_t var155 /* : Int */;
int64_t var156 /* : Int */;
val* var157 /* : nullable Object */;
val* var_158 /* var : HashMap[String, Int] */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : String */;
val* var_163 /* var : String */;
val* var164 /* : nullable Object */;
val* var165 /* : nullable Object */;
int64_t var166 /* : Int */;
short int var168 /* : Bool */;
int cltype169;
int idtype170;
const char* var_class_name171;
int64_t var172 /* : Int */;
int64_t var173 /* : Int */;
int64_t var174 /* : Int */;
val* var175 /* : nullable Object */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
val* var180 /* : nullable Object */;
int64_t var181 /* : Int */;
int64_t var_count_type_test /* var count_type_test: Int */;
val* var182 /* : Array[String] */;
val* var184 /* : Array[String] */;
val* var185 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : String */;
val* var_190 /* var : Array[String] */;
val* var191 /* : IndexedIterator[nullable Object] */;
val* var_192 /* var : IndexedIterator[String] */;
short int var193 /* : Bool */;
val* var195 /* : nullable Object */;
val* var_tag196 /* var tag: String */;
val* var197 /* : Sys */;
val* var198 /* : Array[Object] */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : Sys */;
val* var202 /* : NativeArray[String] */;
static val* varonce201;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : String */;
val* var215 /* : HashMap[String, Int] */;
val* var217 /* : HashMap[String, Int] */;
val* var218 /* : nullable Object */;
val* var219 /* : String */;
int64_t var220 /* : Int */;
val* var221 /* : Sys */;
val* var222 /* : HashMap[String, Int] */;
val* var224 /* : HashMap[String, Int] */;
val* var225 /* : nullable Object */;
val* var226 /* : String */;
int64_t var227 /* : Int */;
val* var228 /* : String */;
val* var229 /* : Array[Object] */;
val* var230 /* : NativeArray[Object] */;
val* var231 /* : Sys */;
val* var233 /* : NativeArray[String] */;
static val* varonce232;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
val* var246 /* : HashMap[String, Int] */;
val* var248 /* : HashMap[String, Int] */;
val* var249 /* : nullable Object */;
val* var250 /* : String */;
int64_t var251 /* : Int */;
val* var252 /* : Sys */;
val* var253 /* : HashMap[String, Int] */;
val* var255 /* : HashMap[String, Int] */;
val* var256 /* : nullable Object */;
val* var257 /* : String */;
int64_t var258 /* : Int */;
val* var259 /* : String */;
val* var260 /* : Array[Object] */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : Sys */;
val* var264 /* : NativeArray[String] */;
static val* varonce263;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
val* var276 /* : String */;
val* var277 /* : HashMap[String, Int] */;
val* var279 /* : HashMap[String, Int] */;
val* var280 /* : nullable Object */;
val* var281 /* : String */;
int64_t var282 /* : Int */;
val* var283 /* : Sys */;
val* var284 /* : HashMap[String, Int] */;
val* var286 /* : HashMap[String, Int] */;
val* var287 /* : nullable Object */;
val* var288 /* : String */;
int64_t var289 /* : Int */;
val* var290 /* : String */;
val* var291 /* : Array[Object] */;
val* var292 /* : NativeArray[Object] */;
val* var293 /* : Sys */;
val* var295 /* : NativeArray[String] */;
static val* varonce294;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
val* var299 /* : String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
val* var307 /* : String */;
val* var308 /* : nullable Object */;
val* var309 /* : String */;
int64_t var310 /* : Int */;
val* var311 /* : Sys */;
val* var312 /* : nullable Object */;
val* var313 /* : String */;
int64_t var314 /* : Int */;
val* var315 /* : String */;
val* var316 /* : Array[Object] */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : Sys */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : String */;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts$Option$value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((int64_t)(var9)>>2);
if (var12){
var13 = glob_sys;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "# static count_type_test";
var16 = core__flat___NativeString___to_s_full(var15, 24l, 24l);
var14 = var16;
varonce = var14;
}
{
core__file___Sys___print(var13, var14); /* Direct call file$Sys$print on <var13:Sys>*/
}
var17 = glob_sys;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\tresolved:\tunresolved\tskipped\ttotal";
var21 = core__flat___NativeString___to_s_full(var20, 35l, 35l);
var19 = var21;
varonce18 = var19;
}
{
core__file___Sys___print(var17, var19); /* Direct call file$Sys$print on <var17:Sys>*/
}
{
var22 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
var_count_type_test_total = var22;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "total";
var29 = core__flat___NativeString___to_s_full(var28, 5l, 5l);
var27 = var29;
varonce26 = var27;
}
{
var30 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var23, var27, var30); /* Direct call hash_collection$HashMap$[]= on <var23:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "total";
var37 = core__flat___NativeString___to_s_full(var36, 5l, 5l);
var35 = var37;
varonce34 = var35;
}
{
var38 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var31, var35, var38); /* Direct call hash_collection$HashMap$[]= on <var31:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "total";
var45 = core__flat___NativeString___to_s_full(var44, 5l, 5l);
var43 = var45;
varonce42 = var43;
}
{
var46 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var39, var43, var46); /* Direct call hash_collection$HashMap$[]= on <var39:HashMap[String, Int]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "total";
var50 = core__flat___NativeString___to_s_full(var49, 5l, 5l);
var48 = var50;
varonce47 = var48;
}
{
var51 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var48, var51); /* Direct call hash_collection$HashMap$[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var54 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_ = var52;
{
var55 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((int64_t)var_56&3)?class_info[((int64_t)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:IndexedIterator[String]>*/
}
if (var57){
} else {
goto BREAK_label;
}
{
var58 = ((val*(*)(val* self))((((int64_t)var_56&3)?class_info[((int64_t)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:IndexedIterator[String]>*/
}
var_tag = var58;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var59, var_tag);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var65 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var63, var_tag);
}
{
{ /* Inline kernel$Int$+ (var62,var66) on <var62:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var66:nullable Object(Int)> isa OTHER */
/* <var66:nullable Object(Int)> isa OTHER */
var69 = 1; /* easy <var66:nullable Object(Int)> isa OTHER*/
if (unlikely(!var69)) {
var_class_name = var66 == NULL ? "null" : (((int64_t)var66&3)?type_info[((int64_t)var66&3)]:var66->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = (int64_t)(var62)>>2;
var71 = (int64_t)(var66)>>2;
var72 = var70 + var71;
var67 = var72;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var75 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var73, var_tag);
}
{
{ /* Inline kernel$Int$+ (var67,var76) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var76:nullable Object(Int)> isa OTHER */
/* <var76:nullable Object(Int)> isa OTHER */
var79 = 1; /* easy <var76:nullable Object(Int)> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = var76 == NULL ? "null" : (((int64_t)var76&3)?type_info[((int64_t)var76&3)]:var76->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var83 = (int64_t)(var76)>>2;
var84 = var67 + var83;
var77 = var84;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
var85 = (val*)(var77<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var_tag, var85); /* Direct call hash_collection$HashMap$[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var88 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_89 = var86;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "total";
var93 = core__flat___NativeString___to_s_full(var92, 5l, 5l);
var91 = var93;
varonce90 = var91;
}
var_94 = var91;
{
var95 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_89, var_94);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var98 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var96, var_tag);
}
{
{ /* Inline kernel$Int$+ (var95,var99) on <var95:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var99:nullable Object(Int)> isa OTHER */
/* <var99:nullable Object(Int)> isa OTHER */
var102 = 1; /* easy <var99:nullable Object(Int)> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = var99 == NULL ? "null" : (((int64_t)var99&3)?type_info[((int64_t)var99&3)]:var99->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var106 = (int64_t)(var95)>>2;
var107 = (int64_t)(var99)>>2;
var108 = var106 + var107;
var100 = var108;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
var109 = (val*)(var100<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_89, var_94, var109); /* Direct call hash_collection$HashMap$[]= on <var_89:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var112 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var112 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_113 = var110;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "total";
var117 = core__flat___NativeString___to_s_full(var116, 5l, 5l);
var115 = var117;
varonce114 = var115;
}
var_118 = var115;
{
var119 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_113, var_118);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var120, var_tag);
}
{
{ /* Inline kernel$Int$+ (var119,var123) on <var119:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var123:nullable Object(Int)> isa OTHER */
/* <var123:nullable Object(Int)> isa OTHER */
var126 = 1; /* easy <var123:nullable Object(Int)> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = var123 == NULL ? "null" : (((int64_t)var123&3)?type_info[((int64_t)var123&3)]:var123->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var130 = (int64_t)(var119)>>2;
var131 = (int64_t)(var123)>>2;
var132 = var130 + var131;
var124 = var132;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
var133 = (val*)(var124<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_113, var_118, var133); /* Direct call hash_collection$HashMap$[]= on <var_113:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var136 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "total";
var141 = core__flat___NativeString___to_s_full(var140, 5l, 5l);
var139 = var141;
varonce138 = var139;
}
var_142 = var139;
{
var143 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_137, var_142);
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var146 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var144, var_tag);
}
{
{ /* Inline kernel$Int$+ (var143,var147) on <var143:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var147:nullable Object(Int)> isa OTHER */
/* <var147:nullable Object(Int)> isa OTHER */
var150 = 1; /* easy <var147:nullable Object(Int)> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = var147 == NULL ? "null" : (((int64_t)var147&3)?type_info[((int64_t)var147&3)]:var147->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var154 = (int64_t)(var143)>>2;
var155 = (int64_t)(var147)>>2;
var156 = var154 + var155;
var148 = var156;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
var157 = (val*)(var148<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_137, var_142, var157); /* Direct call hash_collection$HashMap$[]= on <var_137:HashMap[String, Int]>*/
}
var_158 = var_count_type_test_total;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "total";
var162 = core__flat___NativeString___to_s_full(var161, 5l, 5l);
var160 = var162;
varonce159 = var160;
}
var_163 = var160;
{
var164 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_158, var_163);
}
{
var165 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel$Int$+ (var164,var165) on <var164:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var165:nullable Object(Int)> isa OTHER */
/* <var165:nullable Object(Int)> isa OTHER */
var168 = 1; /* easy <var165:nullable Object(Int)> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = var165 == NULL ? "null" : (((int64_t)var165&3)?type_info[((int64_t)var165&3)]:var165->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var172 = (int64_t)(var164)>>2;
var173 = (int64_t)(var165)>>2;
var174 = var172 + var173;
var166 = var174;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
{
var175 = (val*)(var166<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_158, var_163, var175); /* Direct call hash_collection$HashMap$[]= on <var_158:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((int64_t)var_56&3)?class_info[((int64_t)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_56&3)?class_info[((int64_t)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:IndexedIterator[String]>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "total";
var179 = core__flat___NativeString___to_s_full(var178, 5l, 5l);
var177 = var179;
varonce176 = var177;
}
{
var180 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var177);
}
var181 = (int64_t)(var180)>>2;
var_count_type_test = var181;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_tags (self) on <self:AbstractCompiler> */
var184 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var184 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1102);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = core__array___Collection___to_a(var182);
}
var_tags = var185;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "total";
var189 = core__flat___NativeString___to_s_full(var188, 5l, 5l);
var187 = var189;
varonce186 = var187;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var187); /* Direct call array$Array$add on <var_tags:Array[String]>*/
}
var_190 = var_tags;
{
var191 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_190);
}
var_192 = var191;
for(;;) {
{
var193 = ((short int(*)(val* self))((((int64_t)var_192&3)?class_info[((int64_t)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_192); /* is_ok on <var_192:IndexedIterator[String]>*/
}
if (var193){
} else {
goto BREAK_label194;
}
{
var195 = ((val*(*)(val* self))((((int64_t)var_192&3)?class_info[((int64_t)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_192); /* item on <var_192:IndexedIterator[String]>*/
}
var_tag196 = var195;
var197 = glob_sys;
var198 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var198 = array_instance Array[Object] */
var199 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var199)->values[0] = (val*) var_tag196;
{
((void(*)(val* self, val* p0, int64_t p1))(var198->class->vft[COLOR_core__array__Array__with_native]))(var198, var199, 1l); /* with_native on <var198:Array[Object]>*/
}
}
{
core__file___Sys___printn(var197, var198); /* Direct call file$Sys$printn on <var197:Sys>*/
}
var200 = glob_sys;
if (unlikely(varonce201==NULL)) {
var202 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "\t";
var206 = core__flat___NativeString___to_s_full(var205, 1l, 1l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var202)->values[0]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = " (";
var210 = core__flat___NativeString___to_s_full(var209, 2l, 2l);
var208 = var210;
varonce207 = var208;
}
((struct instance_core__NativeArray*)var202)->values[2]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "%)";
var214 = core__flat___NativeString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var202)->values[4]=var212;
} else {
var202 = varonce201;
varonce201 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var217 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var217 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var215, var_tag196);
}
var220 = (int64_t)(var218)>>2;
var219 = core__flat___Int___core__abstract_text__Object__to_s(var220);
((struct instance_core__NativeArray*)var202)->values[1]=var219;
var221 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_resolved (self) on <self:AbstractCompiler> */
var224 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var224 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1103);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
var225 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var222, var_tag196);
}
{
var227 = (int64_t)(var225)>>2;
var226 = counter___core__Sys___div(var221, var227, var_count_type_test);
}
((struct instance_core__NativeArray*)var202)->values[3]=var226;
{
var228 = ((val*(*)(val* self))(var202->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var202); /* native_to_s on <var202:NativeArray[String]>*/
}
varonce201 = var202;
var229 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var229 = array_instance Array[Object] */
var230 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var230)->values[0] = (val*) var228;
{
((void(*)(val* self, val* p0, int64_t p1))(var229->class->vft[COLOR_core__array__Array__with_native]))(var229, var230, 1l); /* with_native on <var229:Array[Object]>*/
}
}
{
core__file___Sys___printn(var200, var229); /* Direct call file$Sys$printn on <var200:Sys>*/
}
var231 = glob_sys;
if (unlikely(varonce232==NULL)) {
var233 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = "\t";
var237 = core__flat___NativeString___to_s_full(var236, 1l, 1l);
var235 = var237;
varonce234 = var235;
}
((struct instance_core__NativeArray*)var233)->values[0]=var235;
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = " (";
var241 = core__flat___NativeString___to_s_full(var240, 2l, 2l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var233)->values[2]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "%)";
var245 = core__flat___NativeString___to_s_full(var244, 2l, 2l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var233)->values[4]=var243;
} else {
var233 = varonce232;
varonce232 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var248 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var248 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
var249 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var246, var_tag196);
}
var251 = (int64_t)(var249)>>2;
var250 = core__flat___Int___core__abstract_text__Object__to_s(var251);
((struct instance_core__NativeArray*)var233)->values[1]=var250;
var252 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_unresolved (self) on <self:AbstractCompiler> */
var255 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var255 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1104);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
var256 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var253, var_tag196);
}
{
var258 = (int64_t)(var256)>>2;
var257 = counter___core__Sys___div(var252, var258, var_count_type_test);
}
((struct instance_core__NativeArray*)var233)->values[3]=var257;
{
var259 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var233); /* native_to_s on <var233:NativeArray[String]>*/
}
varonce232 = var233;
var260 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var260 = array_instance Array[Object] */
var261 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var261)->values[0] = (val*) var259;
{
((void(*)(val* self, val* p0, int64_t p1))(var260->class->vft[COLOR_core__array__Array__with_native]))(var260, var261, 1l); /* with_native on <var260:Array[Object]>*/
}
}
{
core__file___Sys___printn(var231, var260); /* Direct call file$Sys$printn on <var231:Sys>*/
}
var262 = glob_sys;
if (unlikely(varonce263==NULL)) {
var264 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "\t";
var268 = core__flat___NativeString___to_s_full(var267, 1l, 1l);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var264)->values[0]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " (";
var272 = core__flat___NativeString___to_s_full(var271, 2l, 2l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var264)->values[2]=var270;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "%)";
var276 = core__flat___NativeString___to_s_full(var275, 2l, 2l);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var264)->values[4]=var274;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var279 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var279 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var277, var_tag196);
}
var282 = (int64_t)(var280)>>2;
var281 = core__flat___Int___core__abstract_text__Object__to_s(var282);
((struct instance_core__NativeArray*)var264)->values[1]=var281;
var283 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$count_type_test_skipped (self) on <self:AbstractCompiler> */
var286 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var286 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1105);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
var287 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var284, var_tag196);
}
{
var289 = (int64_t)(var287)>>2;
var288 = counter___core__Sys___div(var283, var289, var_count_type_test);
}
((struct instance_core__NativeArray*)var264)->values[3]=var288;
{
var290 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
var291 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var291 = array_instance Array[Object] */
var292 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var292)->values[0] = (val*) var290;
{
((void(*)(val* self, val* p0, int64_t p1))(var291->class->vft[COLOR_core__array__Array__with_native]))(var291, var292, 1l); /* with_native on <var291:Array[Object]>*/
}
}
{
core__file___Sys___printn(var262, var291); /* Direct call file$Sys$printn on <var262:Sys>*/
}
var293 = glob_sys;
if (unlikely(varonce294==NULL)) {
var295 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = "\t";
var299 = core__flat___NativeString___to_s_full(var298, 1l, 1l);
var297 = var299;
varonce296 = var297;
}
((struct instance_core__NativeArray*)var295)->values[0]=var297;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = " (";
var303 = core__flat___NativeString___to_s_full(var302, 2l, 2l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var295)->values[2]=var301;
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "%)";
var307 = core__flat___NativeString___to_s_full(var306, 2l, 2l);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var295)->values[4]=var305;
} else {
var295 = varonce294;
varonce294 = NULL;
}
{
var308 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag196);
}
var310 = (int64_t)(var308)>>2;
var309 = core__flat___Int___core__abstract_text__Object__to_s(var310);
((struct instance_core__NativeArray*)var295)->values[1]=var309;
var311 = glob_sys;
{
var312 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag196);
}
{
var314 = (int64_t)(var312)>>2;
var313 = counter___core__Sys___div(var311, var314, var_count_type_test);
}
((struct instance_core__NativeArray*)var295)->values[3]=var313;
{
var315 = ((val*(*)(val* self))(var295->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var295); /* native_to_s on <var295:NativeArray[String]>*/
}
varonce294 = var295;
var316 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var316 = array_instance Array[Object] */
var317 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var317)->values[0] = (val*) var315;
{
((void(*)(val* self, val* p0, int64_t p1))(var316->class->vft[COLOR_core__array__Array__with_native]))(var316, var317, 1l); /* with_native on <var316:Array[Object]>*/
}
}
{
core__file___Sys___printn(var293, var316); /* Direct call file$Sys$printn on <var293:Sys>*/
}
var318 = glob_sys;
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "";
var322 = core__flat___NativeString___to_s_full(var321, 0l, 0l);
var320 = var322;
varonce319 = var320;
}
{
core__file___Sys___print(var318, var320); /* Direct call file$Sys$print on <var318:Sys>*/
}
{
((void(*)(val* self))((((int64_t)var_192&3)?class_info[((int64_t)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_192); /* next on <var_192:IndexedIterator[String]>*/
}
}
BREAK_label194: (void)0;
{
((void(*)(val* self))((((int64_t)var_192&3)?class_info[((int64_t)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_192); /* finish on <var_192:IndexedIterator[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
{
nitc__light___MModule___finalize_ffi(var_mmodule, self); /* Direct call light$MModule$finalize_ffi on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method abstract_compiler$CodeFile$name for (self: CodeFile): String */
val* nitc___nitc__CodeFile___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1161);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeFile$name= for (self: CodeFile, String) */
void nitc___nitc__CodeFile___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler$CodeFile$writers for (self: CodeFile): Array[CodeWriter] */
val* nitc___nitc__CodeFile___writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1162);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeFile$required_declarations for (self: CodeFile): HashSet[String] */
val* nitc___nitc__CodeFile___required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1163);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeFile$init for (self: CodeFile) */
void nitc___nitc__CodeFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeFile___core__kernel__Object__init]))(self); /* init on <self:CodeFile>*/
}
RET_LABEL:;
}
/* method abstract_compiler$CodeWriter$file for (self: CodeWriter): CodeFile */
val* nitc___nitc__CodeWriter___file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1168);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeWriter$file= for (self: CodeWriter, CodeFile) */
void nitc___nitc__CodeWriter___file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler$CodeWriter$lines for (self: CodeWriter): Array[String] */
val* nitc___nitc__CodeWriter___lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1169);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeWriter$decl_lines for (self: CodeWriter): Array[String] */
val* nitc___nitc__CodeWriter___decl_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$CodeWriter$add_decl for (self: CodeWriter, String) */
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var, var_s); /* Direct call array$Array$add on <var:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$CodeWriter$init for (self: CodeWriter) */
void nitc___nitc__CodeWriter___core__kernel__Object__init(val* self) {
val* var /* : CodeFile */;
val* var2 /* : CodeFile */;
val* var3 /* : Array[CodeWriter] */;
val* var5 /* : Array[CodeWriter] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeWriter___core__kernel__Object__init]))(self); /* init on <self:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$CodeWriter$file (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1168);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeFile$writers (var) on <var:CodeFile> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <var:CodeFile> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1162);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array$Array$add on <var3:Array[CodeWriter]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* nitc___nitc__AbstractCompilerVisitor___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void nitc___nitc__AbstractCompilerVisitor___compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* nitc___nitc__AbstractCompilerVisitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void nitc___nitc__AbstractCompilerVisitor___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$frame for (self: AbstractCompilerVisitor): nullable StaticFrame */
val* nitc___nitc__AbstractCompilerVisitor___frame(val* self) {
val* var /* : nullable StaticFrame */;
val* var1 /* : nullable StaticFrame */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$frame= for (self: AbstractCompilerVisitor, nullable StaticFrame) */
void nitc___nitc__AbstractCompilerVisitor___frame_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$object_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
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
var7 = nitc__model___MModule___object_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$bool_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
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
var7 = nitc__model___MModule___bool_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$writer for (self: AbstractCompilerVisitor): CodeWriter */
val* nitc___nitc__AbstractCompilerVisitor___writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1205);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void nitc___nitc__AbstractCompilerVisitor___writer_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$init for (self: AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : Array[CodeFile] */;
val* var6 /* : Array[CodeFile] */;
val* var7 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init]))(self); /* init on <self:AbstractCompilerVisitor>*/
}
var = NEW_nitc__CodeWriter(&type_nitc__CodeWriter);
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
{ /* Inline abstract_compiler$AbstractCompiler$files (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 584);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__SequenceRead___last(var4);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__abstract_compiler__CodeWriter__file_61d]))(var, var7); /* file= on <var:CodeWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer= (self,var) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = var; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var8 /* : nullable ANode */;
val* var10 /* : nullable ANode */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : MMethod */;
var_name = p0;
var_recv = p1;
/* <var_recv:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1215);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ModelBuilder___force_get_primitive_method(var5, var8, var_name, var11, var17);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : Array[MProperty] */;
val* var9 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
int64_t var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var13 /* : IndexedIterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[MProperty] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : Array[RuntimeVariable] */;
val* var_19 /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var20 /* : MPropDef */;
val* var22 /* : MPropDef */;
val* var23 /* : nullable MSignature */;
val* var25 /* : nullable MSignature */;
val* var26 /* : Array[MParameter] */;
val* var28 /* : Array[MParameter] */;
val* var_29 /* var : Array[MParameter] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MParameter] */;
short int var32 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var35 /* : nullable Object */;
int64_t var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name;
int64_t var41 /* : Int */;
val* var42 /* : nullable RuntimeVariable */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable Object */;
int64_t var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
int64_t var53 /* : Int */;
int64_t var54 /* : Int */;
int64_t var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MMethod */;
val* var62 /* : MMethod */;
val* var63 /* : Array[RuntimeVariable] */;
val* var_64 /* var : Array[RuntimeVariable] */;
val* var65 /* : nullable RuntimeVariable */;
val* var66 /* : MMethod */;
val* var68 /* : MMethod */;
val* var69 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline model_base$MEntity$is_broken (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_initializers = var7;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var11 = !var10;
if (var11){
{
var12 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var12;
var_i = 1l;
var_ = var_initializers;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[MProperty]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[MProperty]>*/
}
var_p = var16;
/* <var_p:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_p->type->table_size) {
var17 = 0;
} else {
var17 = var_p->type->type_table[cltype] == idtype;
}
if (var17){
var18 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var18, 1l); /* Direct call array$Array$with_capacity on <var18:Array[RuntimeVariable]>*/
}
var_19 = var18;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_19, var_recv); /* Direct call array$AbstractArray$push on <var_19:Array[RuntimeVariable]>*/
}
var_args = var_19;
{
{ /* Inline model$MProperty$intro (var_p) on <var_p:MProperty(MMethod)> */
var22 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var20) on <var20:MPropDef(MMethodDef)> */
var25 = var20->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var20:MPropDef(MMethodDef)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1230);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var23) on <var23:nullable MSignature> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var23:nullable MSignature> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_29 = var26;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_29);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((int64_t)var_31&3)?class_info[((int64_t)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MParameter]>*/
}
if (var32){
} else {
goto BREAK_label33;
}
{
var34 = ((val*(*)(val* self))((((int64_t)var_31&3)?class_info[((int64_t)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MParameter]>*/
}
var_x = var34;
{
var35 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var35); /* Direct call array$Array$add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_i + 1l;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
{
((void(*)(val* self))((((int64_t)var_31&3)?class_info[((int64_t)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MParameter]>*/
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((int64_t)var_31&3)?class_info[((int64_t)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MParameter]>*/
}
{
var42 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var_p, var_args);
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype44 = type_nitc__MAttribute.color;
idtype45 = type_nitc__MAttribute.id;
if(cltype44 >= var_p->type->table_size) {
var43 = 0;
} else {
var43 = var_p->type->type_table[cltype44] == idtype45;
}
if (var43){
{
var46 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(self, var_p, var_recv, var46); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_i + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_i = var47;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1238);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_14&3)?class_info[((int64_t)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[MProperty]>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var56 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_i,var54) on <var_i:Int> */
var59 = var_i == var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (unlikely(!var57)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1240);
fatal_exit(1);
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var62 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array$Array$with_capacity on <var63:Array[RuntimeVariable]>*/
}
var_64 = var63;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_64, var_recv); /* Direct call array$AbstractArray$push on <var_64:Array[RuntimeVariable]>*/
}
{
var65 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var60, var_64);
}
var = var65;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var68 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var66, var_arguments);
}
var = var69;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$nit_alloc for (self: AbstractCompilerVisitor, String, nullable String): String */
val* nitc___nitc__AbstractCompilerVisitor___nit_alloc(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_size /* var size: String */;
val* var_tag /* var tag: nullable String */;
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
var_size = p0;
var_tag = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "nit_alloc(";
var5 = core__flat___NativeString___to_s_full(var4, 10l, 10l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")";
var9 = core__flat___NativeString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_size;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$varargize for (self: AbstractCompilerVisitor, MMethodDef, nullable SignatureMap, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : Array[RuntimeVariable] */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_map /* var map: nullable SignatureMap */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_args /* var args: SequenceRead[AExpr] */;
val* var1 /* : MSignature */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var5 /* : nullable MSignature */;
val* var7 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_res /* var res: Array[RuntimeVariable] */;
int64_t var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int64_t var19 /* : Int */;
int64_t var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var_ /* var : SequenceRead[AExpr] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[AExpr] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
val* var28 /* : RuntimeVariable */;
val* var29 /* : Array[RuntimeVariable] */;
int64_t var30 /* : Int */;
val* var_exprs /* var exprs: Array[RuntimeVariable] */;
val* var_31 /* var : SequenceRead[AExpr] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[AExpr] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_ne37 /* var ne: AExpr */;
val* var38 /* : RuntimeVariable */;
int64_t var_i /* var i: Int */;
int64_t var39 /* : Int */;
int64_t var_40 /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var46 /* : Array[MParameter] */;
val* var48 /* : Array[MParameter] */;
val* var49 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var50 /* : ArrayMap[Int, Int] */;
val* var52 /* : ArrayMap[Int, Int] */;
val* var53 /* : nullable Object */;
val* var54 /* : nullable Object */;
val* var_j /* var j: nullable Int */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : RuntimeVariable */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
val* var66 /* : nullable Object */;
int64_t var67 /* : Int */;
int64_t var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
int64_t var78 /* : Int */;
int64_t var80 /* : Int */;
val* var81 /* : Array[nullable Object] */;
int64_t var82 /* : Int */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var86 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var87 /* : nullable Object */;
int64_t var88 /* : Int */;
int64_t var89 /* : Int */;
var_mpropdef = p0;
var_map = p1;
var_recv = p2;
var_args = p3;
{
{ /* Inline model$MMethodDef$new_msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var4 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2!=NULL) {
var1 = var2;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1275);
fatal_exit(1);
}
var1 = var5;
}
var_msignature = var1;
var8 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array$Array$init on <var8:Array[RuntimeVariable]>*/
}
var_res = var8;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_recv); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
{
var9 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$== (var9,0l) on <var9:Int> */
var12 = var9 == 0l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
if (var_map == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var18 = var_map == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
var19 = ((int64_t(*)(val* self))((((int64_t)var_args&3)?class_info[((int64_t)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
var20 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$== (var19,var20) on <var19:Int> */
var23 = var19 == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1282);
fatal_exit(1);
}
var_ = var_args;
{
var24 = ((val*(*)(val* self))((((int64_t)var_&3)?class_info[((int64_t)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[AExpr]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((int64_t)var_25&3)?class_info[((int64_t)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[AExpr]>*/
}
if (var26){
} else {
goto BREAK_label;
}
{
var27 = ((val*(*)(val* self))((((int64_t)var_25&3)?class_info[((int64_t)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[AExpr]>*/
}
var_ne = var27;
{
var28 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var28); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((int64_t)var_25&3)?class_info[((int64_t)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_25&3)?class_info[((int64_t)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var29 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
var30 = ((int64_t(*)(val* self))((((int64_t)var_args&3)?class_info[((int64_t)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
core___core__Array___with_capacity(var29, var30); /* Direct call array$Array$with_capacity on <var29:Array[RuntimeVariable]>*/
}
var_exprs = var29;
var_31 = var_args;
{
var32 = ((val*(*)(val* self))((((int64_t)var_31&3)?class_info[((int64_t)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:SequenceRead[AExpr]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((int64_t)var_33&3)?class_info[((int64_t)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[AExpr]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((int64_t)var_33&3)?class_info[((int64_t)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[AExpr]>*/
}
var_ne37 = var36;
{
var38 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne37, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_exprs, var38); /* Direct call array$Array$add on <var_exprs:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((int64_t)var_33&3)?class_info[((int64_t)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[AExpr]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((int64_t)var_33&3)?class_info[((int64_t)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[AExpr]>*/
}
var_i = 0l;
{
var39 = nitc___nitc__MSignature___arity(var_msignature);
}
var_40 = var39;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var44 = var_i < var_40;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
} else {
goto BREAK_label45;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var48 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
var_param = var49;
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var52 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:nullable SignatureMap(SignatureMap)> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var54 = (val*)(var_i<<2|1);
var53 = core___core__MapRead___get_or_null(var50, var54);
}
var_j = var53;
if (var_j == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_j,((val*)NULL)) on <var_j:nullable Int> */
var58 = 0; /* incompatible types Int vs. null; cannot be NULL */
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
{
var59 = nitc___nitc__AbstractCompilerVisitor___null_instance(self);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var59); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
{ /* Inline model$MParameter$is_vararg (var_param) on <var_param:MParameter> */
var64 = var_param->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_param:MParameter> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_65 = var62;
if (var62){
{
var66 = ((val*(*)(val* self, int64_t p0))((((int64_t)var_args&3)?class_info[((int64_t)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing$AExpr$vararg_decl (var66) on <var66:nullable Object(AExpr)> */
var69 = var66->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var66:nullable Object(AExpr)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var67,0l) on <var67:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var72 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var76 = var67 > 0l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var61 = var70;
} else {
var61 = var_65;
}
if (var61){
{
var77 = ((val*(*)(val* self, int64_t p0))((((int64_t)var_args&3)?class_info[((int64_t)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing$AExpr$vararg_decl (var77) on <var77:nullable Object(AExpr)> */
var80 = var77->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var77:nullable Object(AExpr)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var82 = (int64_t)(var_j)>>2;
var81 = core___core__AbstractArrayRead___sub(var_exprs, var82, var78);
}
var_vararg = var81;
{
{ /* Inline model$MParameter$mtype (var_param) on <var_param:MParameter> */
var85 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_elttype = var83;
{
var86 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
var_arg = var86;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_arg); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
var88 = (int64_t)(var_j)>>2;
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_exprs, var88);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var87); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
BREAK_label60: (void)0;
{
var89 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var89;
}
BREAK_label45: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$anchor for (self: AbstractCompilerVisitor, MType): MType */
val* nitc___nitc__AbstractCompilerVisitor___anchor(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable StaticFrame */;
val* var11 /* : nullable StaticFrame */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MType */;
var_mtype = p0;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1322);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$receiver (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2007);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var9:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2007);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var6, var12); /* anchor_to on <var_mtype:MType>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* nitc___nitc__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_recv /* var recv: RuntimeVariable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var5 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1328);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$receiver (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2007);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2007);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var3, var9, var15, 1); /* resolve_for on <var_mtype:MType>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_valmtype /* var valmtype: MType */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : AbstractCompiler */;
val* var19 /* : AbstractCompiler */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : RuntimeVariable */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : MType */;
val* var33 /* : MType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
var_mtype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
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
var_valmtype = var2;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MType___is_subtype(var_valmtype, var8, ((val*)NULL), var_mtype);
}
if (var11){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var13 = 0;
} else {
var13 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
{ /* Inline model$MProxyType$mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var16 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var17) on <var17:AbstractCompiler> */
var22 = var17->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var17:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__MType___is_subtype(var14, var20, ((val*)NULL), var_mtype);
}
var12 = var23;
} else {
var12 = var_;
}
if (var12){
{
{ /* Inline model$MProxyType$mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var26 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mtype = var24;
} else {
}
var27 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
{ /* Inline abstract_compiler$RuntimeVariable$name (var_value) on <var_value:RuntimeVariable> */
var30 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1956);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var33 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var27, var28); /* name= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var27, var31); /* mtype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var27, var_mtype); /* mcasttype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:RuntimeVariable>*/
}
var_res = var27;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1395);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MProperty___lookup_first_definition(var_m, var5, var_t);
}
var_propdef = var8;
{
var9 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1403);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MPropDef___lookup_next_definition(var_m, var5, var_t);
}
var_m = var8;
{
var9 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_m, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$maybenull for (self: AbstractCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__AbstractCompilerVisitor___maybenull(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var6 /* : MType */;
val* var8 /* : MType */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
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
/* <var2:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var2->type->table_size) {
var5 = 0;
} else {
var5 = var2->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var1 = var_;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var8 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:MType> isa MNullType */
cltype10 = type_nitc__MNullType.color;
idtype11 = type_nitc__MNullType.id;
if(cltype10 >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype10] == idtype11;
}
var1 = var9;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
var_recv = p0;
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
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_null (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts$Option$value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((int64_t)(var12)>>2);
if (var15){
goto RET_LABEL;
} else {
}
{
var16 = nitc___nitc__AbstractCompilerVisitor___maybenull(self, var_recv);
}
if (var16){
if (unlikely(varonce==NULL)) {
var17 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "if (unlikely(";
var21 = core__flat___NativeString___to_s_full(var20, 13l, 13l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " == NULL)) {";
var25 = core__flat___NativeString___to_s_full(var24, 12l, 12l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var17)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var27); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Receiver is null";
var31 = core__flat___NativeString___to_s_full(var30, 16l, 16l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var29); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__flat___NativeString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var33); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$names for (self: AbstractCompilerVisitor): HashSet[String] */
val* nitc___nitc__AbstractCompilerVisitor___names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1441);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$last for (self: AbstractCompilerVisitor): Int */
int64_t nitc___nitc__AbstractCompilerVisitor___last(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$last= for (self: AbstractCompilerVisitor, Int) */
void nitc___nitc__AbstractCompilerVisitor___last_61d(val* self, int64_t p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}

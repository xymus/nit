#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AMethPropdef$compile_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AMethPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Array[CallSite] */;
val* var2 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var9 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var_10 /* var : Array[CallSite] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[CallSite] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var15 /* : MMethod */;
val* var17 /* : MMethod */;
val* var18 /* : MProperty */;
val* var20 /* : MProperty */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int64_t var_i /* var i: Int */;
val* var25 /* : MSignature */;
val* var27 /* : MSignature */;
int64_t var28 /* : Int */;
int64_t var29 /* : Int */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int64_t var32 /* : Int */;
int64_t var_33 /* var : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var42 /* : nullable Object */;
int64_t var43 /* : Int */;
val* var44 /* : MMethod */;
val* var46 /* : MMethod */;
val* var47 /* : MProperty */;
val* var49 /* : MProperty */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable RuntimeVariable */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var61 /* : MType */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
val* var66 /* : nullable RuntimeVariable */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : MProperty */;
val* var76 /* : MProperty */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable AExpr */;
val* var84 /* : nullable AExpr */;
val* var_n_block /* var n_block: nullable AExpr */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
int64_t var_i90 /* var i: Int */;
val* var91 /* : nullable MSignature */;
val* var93 /* : nullable MSignature */;
int64_t var94 /* : Int */;
int64_t var_95 /* var : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
short int var102 /* : Bool */;
val* var104 /* : nullable ASignature */;
val* var106 /* : nullable ASignature */;
val* var107 /* : ANodes[AParam] */;
val* var109 /* : ANodes[AParam] */;
val* var110 /* : ANode */;
val* var111 /* : nullable Variable */;
val* var113 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var114 /* : RuntimeVariable */;
int64_t var115 /* : Int */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
int64_t var121 /* : Int */;
val* var122 /* : nullable Object */;
int64_t var123 /* : Int */;
val* var124 /* : nullable Object */;
val* var125 /* : String */;
val* var_cn /* var cn: String */;
val* var126 /* : NativeArray[String] */;
static val* varonce;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : String */;
val* var139 /* : MProperty */;
val* var141 /* : MProperty */;
val* var142 /* : String */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_inits (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_auto_super_inits = var;
if (var_auto_super_inits == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_auto_super_inits,((val*)NULL)) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_auto_super_inits, var_other); /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var8 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var8, 1l); /* Direct call array$Array$with_capacity on <var8:Array[RuntimeVariable]>*/
}
var_ = var8;
{
var9 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var9); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_10 = var_auto_super_inits;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[CallSite]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[CallSite]>*/
}
var_auto_super_init = var14;
{
{ /* Inline typing$CallSite$mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var17 = var_auto_super_init->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var20 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var15,var18) on <var15:MMethod> */
var_other = var18;
{
var23 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_core__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:MMethod>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2225);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_args); /* Direct call array$AbstractArray$clear on <var_args:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
{ /* Inline typing$CallSite$msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var27 = var_auto_super_init->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__MSignature___arity(var25);
}
{
{ /* Inline kernel$Int$+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var28 + 1l;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_33 = var29;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_33:Int> isa OTHER */
/* <var_33:Int> isa OTHER */
var36 = 1; /* easy <var_33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var_i < var_33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
} else {
goto BREAK_label41;
}
{
var42 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var42); /* Direct call array$Array$add on <var_args:Array[RuntimeVariable]>*/
}
{
var43 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var43;
}
BREAK_label41: (void)0;
{
{ /* Inline typing$CallSite$mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var46 = var_auto_super_init->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var44,var47) on <var44:MMethod> */
var_other = var47;
{
var52 = ((short int(*)(val* self, val* p0))(var44->class->vft[COLOR_core__kernel__Object___61d_61d]))(var44, var_other); /* == on <var44:MMethod>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (unlikely(!var50)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2230);
fatal_exit(1);
}
{
var54 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[CallSite]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[CallSite]>*/
}
} else {
}
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_call (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55){
{
var58 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var58) on <var58:nullable Object(RuntimeVariable)> */
var61 = var58->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var58:nullable Object(RuntimeVariable)> */
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
/* <var59:MType> isa MClassType */
cltype63 = type_nitc__MClassType.color;
idtype64 = type_nitc__MClassType.id;
if(cltype63 >= var59->type->table_size) {
var62 = 0;
} else {
var62 = var59->type->type_table[cltype63] == idtype64;
}
if (unlikely(!var62)) {
var_class_name65 = var59 == NULL ? "null" : var59->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2235);
fatal_exit(1);
}
{
var66 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var59, var_arguments);
}
} else {
}
{
{ /* Inline model$MMethodDef$is_intern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var69 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var_mpropdef:MMethodDef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (var67){
{
var70 = nitc__abstract_compiler___AMethPropdef___compile_intern_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var70){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline model$MMethodDef$is_extern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var73 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var76 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var74) on <var74:MProperty(MMethod)> */
var79 = var74->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var74:MProperty(MMethod)> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var80 = nitc__light___AMethPropdef___compile_externinit_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var80){
goto RET_LABEL;
} else {
}
} else {
{
var81 = nitc__light___AMethPropdef___compile_externmeth_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var81){
goto RET_LABEL;
} else {
}
}
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var84 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_n_block = var82;
if (var_n_block == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var88 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
}
var89 = !var88;
var86 = var89;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var_i90 = 0l;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var93 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2253);
fatal_exit(1);
} else {
var94 = nitc___nitc__MSignature___arity(var91);
}
var_95 = var94;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i90,var_95) on <var_i90:Int> */
/* Covariant cast for argument 0 (i) <var_95:Int> isa OTHER */
/* <var_95:Int> isa OTHER */
var98 = 1; /* easy <var_95:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var102 = var_i90 < var_95;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
} else {
goto BREAK_label103;
}
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var106 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (var104 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2254);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var104) on <var104:nullable ASignature> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1689);
fatal_exit(1);
}
var109 = var104->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var104:nullable ASignature> */
if (unlikely(var109 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1689);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var107, var_i90);
}
{
{ /* Inline scope$AParam$variable (var110) on <var110:ANode(AParam)> */
var113 = var110->attrs[COLOR_nitc__scope__AParam___variable].val; /* _variable on <var110:ANode(AParam)> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2254);
fatal_exit(1);
}
var_variable = var111;
{
var114 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
{ /* Inline kernel$Int$+ (var_i90,1l) on <var_i90:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var117 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var121 = var_i90 + 1l;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
var122 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var115);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var114, var122); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
{
var123 = core___core__Int___Discrete__successor(var_i90, 1l);
}
var_i90 = var123;
}
BREAK_label103: (void)0;
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_n_block); /* Direct call abstract_compiler$AbstractCompilerVisitor$stmt on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var124 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var125 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var124); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_cn = var125;
if (unlikely(varonce==NULL)) {
var126 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "PRINT_ERROR(\"Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED\", \"";
var130 = core__flat___NativeString___to_s_full(var129, 90l, 90l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var126)->values[0]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "\", ";
var134 = core__flat___NativeString___to_s_full(var133, 3l, 3l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var126)->values[2]=var132;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ");";
var138 = core__flat___NativeString___to_s_full(var137, 2l, 2l);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var126)->values[4]=var136;
} else {
var126 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var141 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var141 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var139) on <var139:MProperty(MMethod)> */
var144 = var139->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var139:MProperty(MMethod)> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = ((val*(*)(val* self))(var142->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var142); /* escape_to_c on <var142:String>*/
}
((struct instance_core__NativeArray*)var126)->values[1]=var145;
((struct instance_core__NativeArray*)var126)->values[3]=var_cn;
{
var146 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce = var126;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var146); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AMethPropdef$can_inline for (self: AMethPropdef): Bool */
short int nitc__abstract_compiler___AMethPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Array[CallSite] */;
val* var3 /* : nullable Array[CallSite] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
val* var11 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable MPropDef */;
val* var23 /* : nullable MPropDef */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
val* var27 /* : String */;
val* var29 /* : String */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
val* var34 /* : nullable MPropDef */;
val* var36 /* : nullable MPropDef */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
val* var49 /* : nullable MPropDef */;
val* var51 /* : nullable MPropDef */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClass */;
val* var57 /* : MClass */;
val* var58 /* : String */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : String */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
int cltype;
int idtype;
short int var_68 /* var : Bool */;
val* var69 /* : ANodes[AExpr] */;
val* var71 /* : ANodes[AExpr] */;
int64_t var72 /* : Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_inits (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable Array[CallSite]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable Array[CallSite](Array[CallSite])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_nblock = var9;
if (var_nblock == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nblock,var_other15) on <var_nblock:nullable AExpr(AExpr)> */
var18 = var_nblock == var_other15;
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
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var23 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2272);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var21) on <var21:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var21:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var24) on <var24:MProperty(MMethod)> */
var29 = var24->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var24:MProperty(MMethod)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "==";
var32 = core__flat___NativeString___to_s_full(var31, 2l, 2l);
var30 = var32;
varonce = var30;
}
{
var33 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_core__kernel__Object___61d_61d]))(var27, var30); /* == on <var27:String>*/
}
var_ = var33;
if (var33){
var20 = var_;
} else {
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var36 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2272);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var34) on <var34:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var34:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var37) on <var37:MProperty(MMethod)> */
var42 = var37->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var37:MProperty(MMethod)> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "!=";
var46 = core__flat___NativeString___to_s_full(var45, 2l, 2l);
var44 = var46;
varonce43 = var44;
}
{
var47 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_core__kernel__Object___61d_61d]))(var40, var44); /* == on <var40:String>*/
}
var20 = var47;
}
var_48 = var20;
if (var20){
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var51 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2272);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mclassdef (var49) on <var49:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var54 = var49->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var49:nullable MPropDef(nullable MMethodDef)> */
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
{ /* Inline model$MClassDef$mclass (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model$MClass$name (var55) on <var55:MClass> */
var60 = var55->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var55:MClass> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Object";
var64 = core__flat___NativeString___to_s_full(var63, 6l, 6l);
var62 = var64;
varonce61 = var62;
}
{
var65 = ((short int(*)(val* self, val* p0))(var58->class->vft[COLOR_core__kernel__Object___61d_61d]))(var58, var62); /* == on <var58:String>*/
}
var19 = var65;
} else {
var19 = var_48;
}
if (var19){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_nitc__ABlockExpr.color;
idtype = type_nitc__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var67 = 0;
} else {
var67 = var_nblock->type->type_table[cltype] == idtype;
}
var_68 = var67;
if (var67){
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (var_nblock) on <var_nblock:nullable AExpr(ABlockExpr)> */
var71 = var_nblock->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nblock:nullable AExpr(ABlockExpr)> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1754);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var69);
}
{
{ /* Inline kernel$Int$== (var72,0l) on <var72:Int> */
var75 = var72 == 0l;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var66 = var73;
} else {
var66 = var_68;
}
if (var66){
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}

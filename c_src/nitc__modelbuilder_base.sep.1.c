#include "nitc__modelbuilder_base.sep.0.h"
/* method modelbuilder_base$ToolContext$modelbuilder for (self: ToolContext): ModelBuilder */
val* nitc__modelbuilder_base___ToolContext___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
val* var3 /* : nullable ModelBuilder */;
{
{ /* Inline modelbuilder_base$ToolContext$modelbuilder_real (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 36);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ToolContext$modelbuilder_real for (self: ToolContext): nullable ModelBuilder */
val* nitc__modelbuilder_base___ToolContext___modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ToolContext$modelbuilder_real= for (self: ToolContext, nullable ModelBuilder) */
void nitc__modelbuilder_base___ToolContext___modelbuilder_real_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val = p0; /* _modelbuilder_real on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$model for (self: ModelBuilder): Model */
val* nitc___nitc__ModelBuilder___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$model= for (self: ModelBuilder, Model) */
void nitc___nitc__ModelBuilder___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val = p0; /* _model on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$toolcontext for (self: ModelBuilder): ToolContext */
val* nitc___nitc__ModelBuilder___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$toolcontext= for (self: ModelBuilder, ToolContext) */
void nitc___nitc__ModelBuilder___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val = p0; /* _toolcontext on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$init for (self: ModelBuilder) */
void nitc___nitc__ModelBuilder___core__kernel__Object__init(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : nullable ModelBuilder */;
val* var5 /* : nullable ModelBuilder */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ModelBuilder___core__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ToolContext$modelbuilder_real (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <var:ToolContext> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var3 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var3,((val*)NULL)) on <var3:nullable ModelBuilder> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var3,var_other) on <var3:nullable ModelBuilder(ModelBuilder)> */
var11 = var3 == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (unlikely(!var6)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 54);
fatal_exit(1);
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
{ /* Inline modelbuilder_base$ToolContext$modelbuilder_real= (var12,self) on <var12:ToolContext> */
var12->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val = self; /* _modelbuilder_real on <var12:ToolContext> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$try_get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nitc___nitc__ModelBuilder___try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_res /* var res: nullable MClass */;
val* var_ /* var : Array[MClass] */;
val* var7 /* : IndexedIterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var11 /* : POSetElement[MModule] */;
val* var13 /* : POSetElement[MModule] */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
val* var23 /* : MVisibility */;
val* var25 /* : MVisibility */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce;
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
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__model___Model___get_mclasses_by_name(var1, var_name);
}
var_classes = var4;
if (var_classes == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = core___core__Array___core__kernel__Object___61d_61d(var_classes, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ = var_classes;
{
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((int64_t)var_8&3)?class_info[((int64_t)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:IndexedIterator[MClass]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((int64_t)var_8&3)?class_info[((int64_t)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:IndexedIterator[MClass]>*/
}
var_mclass = var10;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var13 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var16 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset___poset__POSetElement____60d_61d(var11, var14);
}
var18 = !var17;
if (var18){
goto BREAK_label19;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var22 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:MClass> */
var25 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MModule___is_visible(var_mmodule, var20, var23);
}
var27 = !var26;
if (var27){
goto BREAK_label19;
} else {
}
if (var_res == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var33 = var_res == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
var_res = var_mclass;
} else {
if (unlikely(varonce==NULL)) {
var34 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Error: ambiguous class name `";
var38 = core__flat___NativeString___to_s_full(var37, 29l, 29l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "`; conflict between `";
var42 = core__flat___NativeString___to_s_full(var41, 21l, 21l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "` and `";
var46 = core__flat___NativeString___to_s_full(var45, 7l, 7l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[4]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "`.";
var50 = core__flat___NativeString___to_s_full(var49, 2l, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var34)->values[6]=var48;
} else {
var34 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var34)->values[1]=var_name;
{
var51 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var34)->values[3]=var51;
{
var52 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_res);
}
((struct instance_core__NativeArray*)var34)->values[5]=var52;
{
var53 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce = var34;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var53); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((int64_t)var_8&3)?class_info[((int64_t)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_8&3)?class_info[((int64_t)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:IndexedIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mclass_by_qid for (self: ModelBuilder, AQclassid, MModule): nullable MClass */
val* nitc___nitc__ModelBuilder___try_get_mclass_by_qid(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_qid /* var qid: AQclassid */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : Model */;
val* var7 /* : Model */;
val* var8 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_res /* var res: nullable MClass */;
val* var_ /* var : Array[MClass] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[MClass] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var15 /* : POSetElement[MModule] */;
val* var17 /* : POSetElement[MModule] */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var27 /* : MVisibility */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
var_qid = p0;
var_mmodule = p1;
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:AQclassid> */
var3 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:AQclassid> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1678);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var_name = var4;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc__model___Model___get_mclasses_by_name(var5, var_name);
}
var_classes = var8;
if (var_classes == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = core___core__Array___core__kernel__Object___61d_61d(var_classes, ((val*)NULL));
var9 = var10;
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ = var_classes;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[MClass]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[MClass]>*/
}
var_mclass = var14;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var17 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var20 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = poset___poset__POSetElement____60d_61d(var15, var18);
}
var22 = !var21;
if (var22){
goto BREAK_label23;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var26 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:MClass> */
var29 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MModule___is_visible(var_mmodule, var24, var27);
}
var31 = !var30;
if (var31){
goto BREAK_label23;
} else {
}
{
var32 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_mclass);
}
var33 = !var32;
if (var33){
goto BREAK_label23;
} else {
}
if (var_res == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var39 = var_res == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var_res = var_mclass;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_12&3)?class_info[((int64_t)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nitc___nitc__ModelBuilder___get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
var_node = p0;
var_mmodule = p1;
var_name = p2;
{
var1 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_node, var_mmodule, var_name);
}
var_mclass = var1;
if (var_mclass == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var7 = var_mclass == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (unlikely(varonce==NULL)) {
var8 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Type Error: missing primitive class `";
var12 = core__flat___NativeString___to_s_full(var11, 37l, 37l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\'.";
var16 = core__flat___NativeString___to_s_full(var15, 2l, 2l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var8)->values[1]=var_name;
{
var17 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
nitc___nitc__ModelBuilder___error(self, var_node, var17); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2 for (self: ModelBuilder, ANode, MModule, MType, String): nullable MProperty */
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var9 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var10 /* : nullable Object */;
val* var_cache /* var cache: nullable MProperty */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_res /* var res: nullable MProperty */;
val* var_ress /* var ress: nullable Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var16 /* : IndexedIterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[MProperty] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : MClassDef */;
val* var25 /* : MClassDef */;
val* var26 /* : MModule */;
val* var28 /* : MModule */;
val* var29 /* : MVisibility */;
val* var31 /* : MVisibility */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype;
int idtype;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var48 /* : MClassDef */;
val* var50 /* : MClassDef */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other64 /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
short int var_74 /* var : Bool */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
short int var_78 /* var : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : MClassDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MClassType */;
val* var91 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var92 /* : MClassDef */;
val* var94 /* : MClassDef */;
val* var95 /* : MClassType */;
val* var97 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : Array[MProperty] */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var_109 /* var : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
short int var_113 /* var : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : MClassDef */;
val* var119 /* : MClassDef */;
val* var120 /* : MClassType */;
val* var122 /* : MClassType */;
val* var_restype123 /* var restype: MClassType */;
val* var124 /* : Array[MProperty] */;
val* var_ress2 /* var ress2: Array[MProperty] */;
val* var_125 /* var : Array[MProperty] */;
val* var126 /* : IndexedIterator[nullable Object] */;
val* var_127 /* var : IndexedIterator[MProperty] */;
short int var128 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_mprop131 /* var mprop: MProperty */;
val* var132 /* : MClassDef */;
val* var134 /* : MClassDef */;
val* var135 /* : MClassType */;
val* var137 /* : MClassType */;
val* var_mproptype138 /* var mproptype: MClassType */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
short int var145 /* : Bool */;
short int var_146 /* var : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
int64_t var157 /* : Int */;
int64_t var159 /* : Int */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name;
short int var165 /* : Bool */;
val* var166 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var_167 /* var : Array[MProperty] */;
val* var168 /* : IndexedIterator[nullable Object] */;
val* var_169 /* var : IndexedIterator[MProperty] */;
short int var170 /* : Bool */;
val* var172 /* : nullable Object */;
val* var_mprop173 /* var mprop: MProperty */;
val* var174 /* : String */;
val* var175 /* : NativeArray[String] */;
static val* varonce;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : String */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : String */;
val* var198 /* : String */;
val* var199 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var201 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
if (var_props == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = core___core__Array___core__kernel__Object___61d_61d(var_props, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 208);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = more_collections___more_collections__HashMap3____91d_93d(var7, var_mmodule, var_mtype, var_name);
}
var_cache = var10;
if (var_cache == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cache,((val*)NULL)) on <var_cache:nullable MProperty> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cache, var_other); /* == on <var_cache:nullable MProperty(MProperty)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = var_cache;
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ress = ((val*)NULL);
var_ = var_props;
{
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[MProperty]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[MProperty]>*/
}
var_mprop = var19;
{
var20 = nitc___nitc__MType___has_mproperty(var_mtype, var_mmodule, var_mprop);
}
var21 = !var20;
if (var21){
goto BREAK_label22;
} else {
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var25 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
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
{ /* Inline model$MClassDef$mmodule (var23) on <var23:MClassDef> */
var28 = var23->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var23:MClassDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var_mprop) on <var_mprop:MProperty> */
var31 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nitc___nitc__MModule___is_visible(var_mmodule, var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label22;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var36 = 0;
} else {
var36 = var_mprop->type->type_table[cltype] == idtype;
}
var_37 = var36;
if (var36){
{
{ /* Inline model$MMethod$is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var40 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var35 = var38;
} else {
var35 = var_37;
}
var_41 = var35;
if (var35){
/* <var_mtype:MType> isa MClassType */
cltype44 = type_nitc__MClassType.color;
idtype45 = type_nitc__MClassType.id;
if(cltype44 >= var_mtype->type->table_size) {
var43 = 0;
} else {
var43 = var_mtype->type->type_table[cltype44] == idtype45;
}
var46 = !var43;
var_47 = var46;
if (var46){
var42 = var_47;
} else {
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var50 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var48) on <var48:MClassDef> */
var53 = var48->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var48:MClassDef> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var56 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var51,var54) on <var51:MClass> */
var_other = var54;
{
var59 = ((short int(*)(val* self, val* p0))(var51->class->vft[COLOR_core__kernel__Object___61d_61d]))(var51, var_other); /* == on <var51:MClass>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var42 = var57;
}
var34 = var42;
} else {
var34 = var_41;
}
if (var34){
goto BREAK_label22;
} else {
}
if (var_res == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MProperty> */
var_other64 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other64) on <var_res:nullable MProperty(MProperty)> */
var67 = var_res == var_other64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
var_res = var_mprop;
goto BREAK_label22;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype72 = type_nitc__MMethod.color;
idtype73 = type_nitc__MMethod.id;
if(cltype72 >= var_res->type->table_size) {
var71 = 0;
} else {
var71 = var_res->type->type_table[cltype72] == idtype73;
}
var_74 = var71;
if (var71){
/* <var_mprop:MProperty> isa MMethod */
cltype76 = type_nitc__MMethod.color;
idtype77 = type_nitc__MMethod.id;
if(cltype76 >= var_mprop->type->table_size) {
var75 = 0;
} else {
var75 = var_mprop->type->type_table[cltype76] == idtype77;
}
var70 = var75;
} else {
var70 = var_74;
}
var_78 = var70;
if (var70){
{
{ /* Inline model$MMethod$is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var81 = var_res->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var69 = var79;
} else {
var69 = var_78;
}
var_82 = var69;
if (var69){
{
{ /* Inline model$MMethod$is_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var85 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mprop:MProperty(MMethod)> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var68 = var83;
} else {
var68 = var_82;
}
if (var68){
{
{ /* Inline model$MProperty$intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var88 = var_res->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var86) on <var86:MClassDef> */
var91 = var86->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var86:MClassDef> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_restype = var89;
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var94 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
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
{ /* Inline model$MClassDef$bound_mtype (var92) on <var92:MClassDef> */
var97 = var92->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var92:MClassDef> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_mproptype = var95;
{
var98 = nitc___nitc__MType___is_subtype(var_mproptype, var_mmodule, ((val*)NULL), var_restype);
}
if (var98){
var_res = var_mprop;
goto BREAK_label22;
} else {
}
} else {
}
if (var_ress == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (0) {
var100 = core___core__Array___core__kernel__Object___61d_61d(var_ress, ((val*)NULL));
var99 = var100;
}
if (var99){
var101 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var101); /* Direct call array$Array$init on <var101:Array[MProperty]>*/
}
var_ress = var101;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array$Array$add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress, var_mprop); /* Direct call array$Array$add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[MProperty]>*/
}
if (var_ress == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ress,((val*)NULL)) on <var_ress:nullable Array[MProperty]> */
var_other = ((val*)NULL);
{
var107 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ress, var_other); /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
var108 = !var107;
var105 = var108;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
var_109 = var104;
if (var104){
/* <var_res:nullable MProperty> isa MMethod */
cltype111 = type_nitc__MMethod.color;
idtype112 = type_nitc__MMethod.id;
if(var_res == NULL) {
var110 = 0;
} else {
if(cltype111 >= var_res->type->table_size) {
var110 = 0;
} else {
var110 = var_res->type->type_table[cltype111] == idtype112;
}
}
var103 = var110;
} else {
var103 = var_109;
}
var_113 = var103;
if (var103){
{
{ /* Inline model$MMethod$is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var116 = var_res->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var102 = var114;
} else {
var102 = var_113;
}
if (var102){
{
{ /* Inline model$MProperty$intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var119 = var_res->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var117) on <var117:MClassDef> */
var122 = var117->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var117:MClassDef> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
var_restype123 = var120;
var124 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var124); /* Direct call array$Array$init on <var124:Array[MProperty]>*/
}
var_ress2 = var124;
var_125 = var_ress;
{
var126 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_125);
}
var_127 = var126;
for(;;) {
{
var128 = ((short int(*)(val* self))((((int64_t)var_127&3)?class_info[((int64_t)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_127); /* is_ok on <var_127:IndexedIterator[MProperty]>*/
}
if (var128){
} else {
goto BREAK_label129;
}
{
var130 = ((val*(*)(val* self))((((int64_t)var_127&3)?class_info[((int64_t)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_127); /* item on <var_127:IndexedIterator[MProperty]>*/
}
var_mprop131 = var130;
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop131) on <var_mprop131:MProperty> */
var134 = var_mprop131->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop131:MProperty> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var132) on <var132:MClassDef> */
var137 = var132->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var132:MClassDef> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_mproptype138 = var135;
{
var139 = nitc___nitc__MType___is_subtype(var_restype123, var_mmodule, ((val*)NULL), var_mproptype138);
}
var140 = !var139;
if (var140){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress2, var_mprop131); /* Direct call array$Array$add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop131:MProperty> isa MMethod */
cltype143 = type_nitc__MMethod.color;
idtype144 = type_nitc__MMethod.id;
if(cltype143 >= var_mprop131->type->table_size) {
var142 = 0;
} else {
var142 = var_mprop131->type->type_table[cltype143] == idtype144;
}
var145 = !var142;
var_146 = var145;
if (var145){
var141 = var_146;
} else {
{
{ /* Inline model$MMethod$is_init (var_mprop131) on <var_mprop131:MProperty(MMethod)> */
var149 = var_mprop131->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mprop131:MProperty(MMethod)> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
var150 = !var147;
var141 = var150;
}
if (var141){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress2, var_mprop131); /* Direct call array$Array$add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
{
((void(*)(val* self))((((int64_t)var_127&3)?class_info[((int64_t)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_127); /* next on <var_127:IndexedIterator[MProperty]>*/
}
}
BREAK_label129: (void)0;
{
((void(*)(val* self))((((int64_t)var_127&3)?class_info[((int64_t)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_127); /* finish on <var_127:IndexedIterator[MProperty]>*/
}
{
var151 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_ress2);
}
if (var151){
var_ress = ((val*)NULL);
} else {
var_ress = var_ress2;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array$Array$add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
}
} else {
}
if (var_ress == NULL) {
var152 = 0; /* is null */
} else {
var152 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ress,((val*)NULL)) on <var_ress:nullable Array[MProperty]> */
var_other = ((val*)NULL);
{
var155 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ress, var_other); /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
var156 = !var155;
var153 = var156;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
{
{ /* Inline array$AbstractArrayRead$length (var_ress) on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var159 = var_ress->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var157,1l) on <var157:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var162 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var165 = var157 > 1l;
var160 = var165;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (unlikely(!var160)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 198);
fatal_exit(1);
}
var166 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var166); /* Direct call array$Array$init on <var166:Array[String]>*/
}
var_s = var166;
var_167 = var_ress;
{
var168 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_167);
}
var_169 = var168;
for(;;) {
{
var170 = ((short int(*)(val* self))((((int64_t)var_169&3)?class_info[((int64_t)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_169); /* is_ok on <var_169:IndexedIterator[MProperty]>*/
}
if (var170){
} else {
goto BREAK_label171;
}
{
var172 = ((val*(*)(val* self))((((int64_t)var_169&3)?class_info[((int64_t)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_169); /* item on <var_169:IndexedIterator[MProperty]>*/
}
var_mprop173 = var172;
{
var174 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop173);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_s, var174); /* Direct call array$Array$add on <var_s:Array[String]>*/
}
{
((void(*)(val* self))((((int64_t)var_169&3)?class_info[((int64_t)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_169); /* next on <var_169:IndexedIterator[MProperty]>*/
}
}
BREAK_label171: (void)0;
{
((void(*)(val* self))((((int64_t)var_169&3)?class_info[((int64_t)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_169); /* finish on <var_169:IndexedIterator[MProperty]>*/
}
if (unlikely(varonce==NULL)) {
var175 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Error: ambiguous property name `";
var179 = core__flat___NativeString___to_s_full(var178, 32l, 32l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var175)->values[0]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "` for `";
var183 = core__flat___NativeString___to_s_full(var182, 7l, 7l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var175)->values[2]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "`; conflict between ";
var187 = core__flat___NativeString___to_s_full(var186, 20l, 20l);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var175)->values[4]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ".";
var191 = core__flat___NativeString___to_s_full(var190, 1l, 1l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var175)->values[6]=var189;
} else {
var175 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var175)->values[1]=var_name;
{
var192 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var175)->values[3]=var192;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = " and ";
var196 = core__flat___NativeString___to_s_full(var195, 5l, 5l);
var194 = var196;
varonce193 = var194;
}
{
var197 = core__abstract_text___Collection___join(var_s, var194, ((val*)NULL));
}
((struct instance_core__NativeArray*)var175)->values[5]=var197;
{
var198 = ((val*(*)(val* self))(var175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce = var175;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var198); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var201 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var201 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 208);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
more_collections___more_collections__HashMap3____91d_93d_61d(var199, var_mmodule, var_mtype, var_name, var_res); /* Direct call more_collections$HashMap3$[]= on <var199:HashMap3[MModule, MType, String, nullable MProperty]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache for (self: ModelBuilder): HashMap3[MModule, MType, String, nullable MProperty] */
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name2_cache(val* self) {
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 208);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mproperty_by_name for (self: ModelBuilder, ANode, MClassDef, String): nullable MProperty */
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : nullable MProperty */;
var_anode = p0;
var_mclassdef = p1;
var_name = p2;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var6 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(self, var_anode, var1, var4, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$error for (self: ModelBuilder, nullable ANode, String) */
void nitc___nitc__ModelBuilder___error(val* self, val* p0, val* p1) {
val* var_n /* var n: nullable ANode */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : Message */;
var_n = p0;
var_text = p1;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_n,1) on <var_n:nullable ANode(ANode)> */
var_n->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_n:nullable ANode(ANode)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
var10 = nitc___nitc__ToolContext___error(var7, var_l, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$warning for (self: ModelBuilder, nullable ANode, String, String) */
void nitc___nitc__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : nullable Message */;
var_n = p0;
var_tag = p1;
var_text = p2;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
var9 = nitc___nitc__ToolContext___warning(var6, var_l, var_tag, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$advice for (self: ModelBuilder, nullable ANode, String, String) */
void nitc___nitc__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : nullable Message */;
var_n = p0;
var_tag = p1;
var_text = p2;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
var9 = nitc___nitc__ToolContext___advice(var6, var_l, var_tag, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$force_get_primitive_method for (self: ModelBuilder, nullable ANode, String, MClass, MModule): MMethod */
val* nitc___nitc__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : MMethod */;
val* var_n /* var n: nullable ANode */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable MMethod */;
val* var_res /* var res: nullable MMethod */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var_l /* var l: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other11 /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Location */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
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
val* var31 /* : String */;
val* var32 /* : String */;
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = nitc__model___MModule___try_get_primitive_method(var_mmodule, var_name, var_recv);
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var7 = var_res == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var_l = ((val*)NULL);
if (var_n == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other11 = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other11); /* == on <var_n:nullable ANode(ANode)>*/
}
var13 = !var12;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var14 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var14;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Fatal Error: `";
var22 = core__flat___NativeString___to_s_full(var21, 14l, 14l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "` must have a property named `";
var26 = core__flat___NativeString___to_s_full(var25, 30l, 30l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "`.";
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
var31 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:MClass>*/
}
((struct instance_core__NativeArray*)var18)->values[1]=var31;
((struct instance_core__NativeArray*)var18)->values[3]=var_name;
{
var32 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__ToolContext___fatal_error(var15, var_l, var32); /* Direct call toolcontext$ToolContext$fatal_error on <var15:ToolContext>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 257);
fatal_exit(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* nitc___nitc__ModelBuilder___resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : AQclassid */;
val* var3 /* : AQclassid */;
val* var_qid /* var qid: AQclassid */;
val* var4 /* : TClassid */;
val* var6 /* : TClassid */;
val* var7 /* : String */;
val* var_name /* var name: String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : nullable MProperty */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ANodes[AType] */;
val* var23 /* : ANodes[AType] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
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
val* var35 /* : String */;
val* var36 /* : MVirtualType */;
val* var38 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var39 /* : nullable TKwnullable */;
val* var41 /* : nullable TKwnullable */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : MType */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : Array[MParameterType] */;
val* var59 /* : Array[MParameterType] */;
val* var_60 /* var : Array[MParameterType] */;
val* var61 /* : IndexedIterator[nullable Object] */;
val* var_62 /* var : IndexedIterator[MParameterType] */;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var65 /* : String */;
val* var67 /* : String */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var73 /* : ANodes[AType] */;
val* var75 /* : ANodes[AType] */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var79 /* : NativeArray[String] */;
static val* varonce78;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : nullable TKwnullable */;
val* var91 /* : nullable TKwnullable */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : MType */;
val* var99 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : ANodes[AType] */;
val* var107 /* : ANodes[AType] */;
int64_t var108 /* : Int */;
int64_t var_arity /* var arity: Int */;
int64_t var109 /* : Int */;
int64_t var111 /* : Int */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
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
val* var130 /* : String */;
int64_t var131 /* : Int */;
int64_t var133 /* : Int */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var149 /* : NativeArray[String] */;
static val* varonce148;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : String */;
int64_t var166 /* : Int */;
int64_t var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
val* var176 /* : MClassType */;
val* var178 /* : MClassType */;
val* var179 /* : nullable TKwnullable */;
val* var181 /* : nullable TKwnullable */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : MType */;
val* var189 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var190 /* : ANodes[AType] */;
val* var192 /* : ANodes[AType] */;
val* var_193 /* var : ANodes[AType] */;
val* var194 /* : Iterator[ANode] */;
val* var_195 /* var : Iterator[AType] */;
short int var196 /* : Bool */;
val* var198 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var199 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
val* var_other203 /* var other: nullable Object */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
val* var207 /* : MClassType */;
val* var208 /* : nullable TKwnullable */;
val* var210 /* : nullable TKwnullable */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : MType */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
{ /* Inline parser_nodes$AType$n_qid (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val; /* _n_qid on <var_ntype:AType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1719);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_qid = var1;
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:AQclassid> */
var6 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:AQclassid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1678);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
var_name = var7;
if (var_mclassdef == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_with_virtual;
} else {
var8 = var_;
}
if (var8){
{
var14 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_ntype, var_mclassdef, var_name);
}
/* <var14:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable__nitc__MVirtualTypeProp.color;
idtype = type_nullable__nitc__MVirtualTypeProp.id;
if(var14 == NULL) {
var15 = 1;
} else {
if(cltype >= var14->type->table_size) {
var15 = 0;
} else {
var15 = var14->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
var_class_name = var14 == NULL ? "null" : var14->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 274);
fatal_exit(1);
}
var_prop = var14;
if (var_prop == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_prop,((val*)NULL)) on <var_prop:nullable MVirtualTypeProp> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_prop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prop, var_other); /* == on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/
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
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var23 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1725);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var21);
}
var25 = !var24;
if (var25){
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Type Error: formal type `";
var30 = core__flat___NativeString___to_s_full(var29, 25l, 25l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "` cannot have formal parameters.";
var34 = core__flat___NativeString___to_s_full(var33, 32l, 32l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_name;
{
var35 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var35); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model$MVirtualTypeProp$mvirtualtype (var_prop) on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
var38 = var_prop->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2333);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_res = var36;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var41 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var39,((val*)NULL)) on <var39:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_core__kernel__Object___61d_61d]))(var39, var_other); /* == on <var39:nullable TKwnullable(TKwnullable)>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
{
var47 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var47;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL48:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
if (var_mclassdef == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var56 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model$MClass$mparameters (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_nitc__model__MClass___mparameters].val; /* _mparameters on <var54:MClass> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 418);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_60 = var57;
{
var61 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_60);
}
var_62 = var61;
for(;;) {
{
var63 = ((short int(*)(val* self))((((int64_t)var_62&3)?class_info[((int64_t)var_62&3)]:var_62->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_62); /* is_ok on <var_62:IndexedIterator[MParameterType]>*/
}
if (var63){
} else {
goto BREAK_label;
}
{
var64 = ((val*(*)(val* self))((((int64_t)var_62&3)?class_info[((int64_t)var_62&3)]:var_62->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_62); /* item on <var_62:IndexedIterator[MParameterType]>*/
}
var_p = var64;
{
{ /* Inline model$MParameterType$name (var_p) on <var_p:MParameterType> */
var67 = var_p->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <var_p:MParameterType> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var65,var_name) on <var65:String> */
var_other = var_name;
{
var70 = ((short int(*)(val* self, val* p0))(var65->class->vft[COLOR_core__kernel__Object___61d_61d]))(var65, var_other); /* == on <var65:String>*/
}
var71 = !var70;
var68 = var71;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
goto BREAK_label72;
} else {
}
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var75 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1725);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var73);
}
var77 = !var76;
if (var77){
if (unlikely(varonce78==NULL)) {
var79 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "Type Error: formal type `";
var83 = core__flat___NativeString___to_s_full(var82, 25l, 25l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var79)->values[0]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "` cannot have formal parameters.";
var87 = core__flat___NativeString___to_s_full(var86, 32l, 32l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var79)->values[2]=var85;
} else {
var79 = varonce78;
varonce78 = NULL;
}
((struct instance_core__NativeArray*)var79)->values[1]=var_name;
{
var88 = ((val*(*)(val* self))(var79->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var79); /* native_to_s on <var79:NativeArray[String]>*/
}
varonce78 = var79;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var88); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
var_res = var_p;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var91 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89 == NULL) {
var92 = 0; /* is null */
} else {
var92 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var89,((val*)NULL)) on <var89:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var95 = ((short int(*)(val* self, val* p0))(var89->class->vft[COLOR_core__kernel__Object___61d_61d]))(var89, var_other); /* == on <var89:nullable TKwnullable(TKwnullable)>*/
}
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
{
var97 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var97;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL98:(void)0;
}
}
var = var_res;
goto RET_LABEL;
BREAK_label72: (void)0;
{
((void(*)(val* self))((((int64_t)var_62&3)?class_info[((int64_t)var_62&3)]:var_62->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_62); /* next on <var_62:IndexedIterator[MParameterType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_62&3)?class_info[((int64_t)var_62&3)]:var_62->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_62); /* finish on <var_62:IndexedIterator[MParameterType]>*/
}
} else {
}
{
var99 = nitc___nitc__ModelBuilder___try_get_mclass_by_qid(self, var_qid, var_mmodule);
}
var_mclass = var99;
if (var_mclass == NULL) {
var100 = 0; /* is null */
} else {
var100 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
var103 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclass, var_other); /* == on <var_mclass:nullable MClass(MClass)>*/
}
var104 = !var103;
var101 = var104;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var100 = var101;
}
if (var100){
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var107 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1725);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var105);
}
var_arity = var108;
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var111 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_arity,var109) on <var_arity:Int> */
var114 = var_arity == var109;
var115 = !var114;
var112 = var115;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
if (var112){
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var118 = var_arity == 0l;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
if (var116){
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "Type Error: `";
var124 = core__flat___NativeString___to_s_full(var123, 13l, 13l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[0]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "` is a generic class.";
var128 = core__flat___NativeString___to_s_full(var127, 21l, 21l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var120)->values[2]=var126;
} else {
var120 = varonce119;
varonce119 = NULL;
}
{
var129 = nitc___nitc__MClass___signature_to_s(var_mclass);
}
((struct instance_core__NativeArray*)var120)->values[1]=var129;
{
var130 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var130); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var133 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var131,0l) on <var131:Int> */
var136 = var131 == 0l;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
if (var134){
if (unlikely(varonce137==NULL)) {
var138 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "Type Error: `";
var142 = core__flat___NativeString___to_s_full(var141, 13l, 13l);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var138)->values[0]=var140;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "` is not a generic class.";
var146 = core__flat___NativeString___to_s_full(var145, 25l, 25l);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var138)->values[2]=var144;
} else {
var138 = varonce137;
varonce137 = NULL;
}
((struct instance_core__NativeArray*)var138)->values[1]=var_name;
{
var147 = ((val*(*)(val* self))(var138->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var147); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce148==NULL)) {
var149 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "Type Error: expected ";
var153 = core__flat___NativeString___to_s_full(var152, 21l, 21l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var149)->values[0]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = " formal argument(s) for `";
var157 = core__flat___NativeString___to_s_full(var156, 25l, 25l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var149)->values[2]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "`; got ";
var161 = core__flat___NativeString___to_s_full(var160, 7l, 7l);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var149)->values[4]=var159;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = ".";
var165 = core__flat___NativeString___to_s_full(var164, 1l, 1l);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var149)->values[6]=var163;
} else {
var149 = varonce148;
varonce148 = NULL;
}
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var168 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
var169 = core__flat___Int___core__abstract_text__Object__to_s(var166);
((struct instance_core__NativeArray*)var149)->values[1]=var169;
{
var170 = nitc___nitc__MClass___signature_to_s(var_mclass);
}
((struct instance_core__NativeArray*)var149)->values[3]=var170;
var171 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var149)->values[5]=var171;
{
var172 = ((val*(*)(val* self))(var149->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var149); /* native_to_s on <var149:NativeArray[String]>*/
}
varonce148 = var149;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var172); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var175 = var_arity == 0l;
var173 = var175;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
}
if (var173){
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var178 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var178 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
var_res = var176;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var181 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (var179 == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var179,((val*)NULL)) on <var179:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var185 = ((short int(*)(val* self, val* p0))(var179->class->vft[COLOR_core__kernel__Object___61d_61d]))(var179, var_other); /* == on <var179:nullable TKwnullable(TKwnullable)>*/
}
var186 = !var185;
var183 = var186;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
{
var187 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var187;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL188:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
var189 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var189); /* Direct call array$Array$init on <var189:Array[MType]>*/
}
var_mtypes = var189;
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var192 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var192 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1725);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
var_193 = var190;
{
var194 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_193);
}
var_195 = var194;
for(;;) {
{
var196 = ((short int(*)(val* self))((((int64_t)var_195&3)?class_info[((int64_t)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_195); /* is_ok on <var_195:Iterator[AType]>*/
}
if (var196){
} else {
goto BREAK_label197;
}
{
var198 = ((val*(*)(val* self))((((int64_t)var_195&3)?class_info[((int64_t)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_195); /* item on <var_195:Iterator[AType]>*/
}
var_nt = var198;
{
var199 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual);
}
var_mt = var199;
if (var_mt == NULL) {
var200 = 1; /* is null */
} else {
var200 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mt,((val*)NULL)) on <var_mt:nullable MType> */
var_other203 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mt,var_other203) on <var_mt:nullable MType(MType)> */
var206 = var_mt == var_other203;
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
var201 = var204;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mtypes, var_mt); /* Direct call array$Array$add on <var_mtypes:Array[MType]>*/
}
{
((void(*)(val* self))((((int64_t)var_195&3)?class_info[((int64_t)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_195); /* next on <var_195:Iterator[AType]>*/
}
}
BREAK_label197: (void)0;
{
((void(*)(val* self))((((int64_t)var_195&3)?class_info[((int64_t)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_195); /* finish on <var_195:Iterator[AType]>*/
}
{
var207 = nitc___nitc__MClass___get_mtype(var_mclass, var_mtypes);
}
var_res = var207;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var210 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (var208 == NULL) {
var211 = 0; /* is null */
} else {
var211 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var208,((val*)NULL)) on <var208:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var214 = ((short int(*)(val* self, val* p0))(var208->class->vft[COLOR_core__kernel__Object___61d_61d]))(var208, var_other); /* == on <var208:nullable TKwnullable(TKwnullable)>*/
}
var215 = !var214;
var212 = var215;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var211 = var212;
}
if (var211){
{
var216 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var216;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL217:(void)0;
}
}
var = var_res;
goto RET_LABEL;
}
} else {
}
{
nitc___nitc__ModelBuilder___class_not_found(self, var_qid, var_mmodule); /* Direct call modelbuilder_base$ModelBuilder$class_not_found on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_ntype,1) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_ntype:AType> */
RET_LABEL218:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$class_not_found for (self: ModelBuilder, AQclassid, MModule) */
void nitc___nitc__ModelBuilder___class_not_found(val* self, val* p0, val* p1) {
val* var_qid /* var qid: AQclassid */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : TClassid */;
val* var2 /* : TClassid */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : String */;
val* var_qname /* var qname: String */;
val* var5 /* : MultiHashMap[MModule, String] */;
val* var7 /* : MultiHashMap[MModule, String] */;
val* var8 /* : nullable Object */;
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
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : MultiHashMap[MModule, String] */;
val* var27 /* : MultiHashMap[MModule, String] */;
val* var28 /* : nullable Object */;
val* var29 /* : Model */;
val* var31 /* : Model */;
val* var32 /* : nullable Array[MClass] */;
val* var_all_classes /* var all_classes: nullable Array[MClass] */;
val* var33 /* : Array[String] */;
val* var_hints /* var hints: Array[String] */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_ /* var : Array[MClass] */;
val* var39 /* : IndexedIterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[MClass] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : MVisibility */;
val* var48 /* : MVisibility */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
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
val* var64 /* : String */;
val* var65 /* : String */;
int64_t var66 /* : Int */;
int64_t var68 /* : Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var72 /* : Bool */;
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
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : String */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_107 /* var : Array[MClass] */;
val* var108 /* : IndexedIterator[nullable Object] */;
val* var_109 /* var : IndexedIterator[MClass] */;
short int var110 /* : Bool */;
val* var112 /* : nullable Object */;
val* var_c113 /* var c: MClass */;
val* var114 /* : POSetElement[MModule] */;
val* var116 /* : POSetElement[MModule] */;
val* var117 /* : MModule */;
val* var119 /* : MModule */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var123 /* : MModule */;
val* var125 /* : MModule */;
val* var126 /* : MVisibility */;
val* var128 /* : MVisibility */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
val* var_154 /* var : Array[MClass] */;
val* var155 /* : IndexedIterator[nullable Object] */;
val* var_156 /* var : IndexedIterator[MClass] */;
short int var157 /* : Bool */;
val* var159 /* : nullable Object */;
val* var_c160 /* var c: MClass */;
val* var161 /* : POSetElement[MModule] */;
val* var163 /* : POSetElement[MModule] */;
val* var164 /* : MModule */;
val* var166 /* : MModule */;
short int var167 /* : Bool */;
val* var169 /* : MModule */;
val* var171 /* : MModule */;
val* var172 /* : POSetElement[MModule] */;
val* var174 /* : POSetElement[MModule] */;
short int var175 /* : Bool */;
val* var176 /* : MVisibility */;
val* var178 /* : MVisibility */;
val* var179 /* : Sys */;
val* var180 /* : MVisibility */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
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
val* var194 /* : MModule */;
val* var196 /* : MModule */;
val* var197 /* : String */;
val* var198 /* : String */;
short int var199 /* : Bool */;
val* var201 /* : NativeArray[String] */;
static val* varonce200;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : String */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
val* var217 /* : String */;
val* var218 /* : String */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : String */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
val* var226 /* : String */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : BestDistance[MClass] */;
int64_t var230 /* : Int */;
int64_t var231 /* : Int */;
int64_t var232 /* : Int */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
const char* var_class_name237;
int64_t var238 /* : Int */;
int64_t var239 /* : Int */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const char* var_class_name244;
int64_t var245 /* : Int */;
val* var_bests /* var bests: BestDistance[MClass] */;
val* var246 /* : Model */;
val* var248 /* : Model */;
val* var249 /* : Array[MClass] */;
val* var251 /* : Array[MClass] */;
val* var_252 /* var : Array[MClass] */;
val* var253 /* : IndexedIterator[nullable Object] */;
val* var_254 /* var : IndexedIterator[MClass] */;
short int var255 /* : Bool */;
val* var257 /* : nullable Object */;
val* var_c258 /* var c: MClass */;
val* var259 /* : POSetElement[MModule] */;
val* var261 /* : POSetElement[MModule] */;
val* var262 /* : MModule */;
val* var264 /* : MModule */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
val* var268 /* : MModule */;
val* var270 /* : MModule */;
val* var271 /* : MVisibility */;
val* var273 /* : MVisibility */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
val* var276 /* : String */;
val* var278 /* : String */;
int64_t var279 /* : Int */;
int64_t var_d /* var d: Int */;
short int var280 /* : Bool */;
val* var281 /* : String */;
int64_t var282 /* : Int */;
short int var283 /* : Bool */;
val* var284 /* : Set[nullable Object] */;
val* var286 /* : Set[nullable Object] */;
short int var287 /* : Bool */;
val* var288 /* : Set[nullable Object] */;
val* var290 /* : Set[nullable Object] */;
val* var_291 /* var : Set[MClass] */;
val* var292 /* : Iterator[nullable Object] */;
val* var_293 /* var : Iterator[MClass] */;
short int var294 /* : Bool */;
val* var296 /* : nullable Object */;
val* var_c297 /* var c: MClass */;
val* var299 /* : NativeArray[String] */;
static val* varonce298;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
val* var307 /* : String */;
val* var308 /* : String */;
val* var309 /* : String */;
val* var311 /* : NativeArray[String] */;
static val* varonce310;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : String */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
val* var327 /* : String */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
val* var336 /* : String */;
val* var337 /* : String */;
val* var338 /* : String */;
val* var340 /* : NativeArray[String] */;
static val* varonce339;
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
val* var353 /* : String */;
val* var354 /* : String */;
var_qid = p0;
var_mmodule = p1;
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:AQclassid> */
var2 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:AQclassid> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1678);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
var_name = var3;
{
var4 = nitc__modelbuilder_base___AQclassid___full_name(var_qid);
}
var_qname = var4;
{
{ /* Inline modelbuilder_base$ModelBuilder$bad_class_names (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val; /* _bad_class_names on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bad_class_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 413);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_mmodule);
}
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var8, var_qname);
}
if (var9){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: class `";
var14 = core__flat___NativeString___to_s_full(var13, 14l, 14l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` not found in module `";
var18 = core__flat___NativeString___to_s_full(var17, 23l, 23l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`.";
var22 = core__flat___NativeString___to_s_full(var21, 2l, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_qname;
{
var23 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var10)->values[3]=var23;
{
var24 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var24); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$bad_class_names (self) on <self:ModelBuilder> */
var27 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val; /* _bad_class_names on <self:ModelBuilder> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bad_class_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 413);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var25, var_mmodule);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var28, var_qname); /* Direct call array$Array$add on <var28:nullable Object(Array[String])>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var31 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nitc__model___Model___get_mclasses_by_name(var29, var_name);
}
var_all_classes = var32;
var33 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var33); /* Direct call array$Array$init on <var33:Array[String]>*/
}
var_hints = var33;
if (var_all_classes == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_all_classes,((val*)NULL)) on <var_all_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_all_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_all_classes, var_other); /* == on <var_all_classes:nullable Array[MClass](Array[MClass])>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var_ = var_all_classes;
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((int64_t)var_40&3)?class_info[((int64_t)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[MClass]>*/
}
if (var41){
} else {
goto BREAK_label;
}
{
var42 = ((val*(*)(val* self))((((int64_t)var_40&3)?class_info[((int64_t)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[MClass]>*/
}
var_c = var42;
{
{ /* Inline model$MClass$intro_mmodule (var_c) on <var_c:MClass> */
var45 = var_c->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c:MClass> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_c) on <var_c:MClass> */
var48 = var_c->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c:MClass> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = nitc___nitc__MModule___is_visible(var_mmodule, var43, var46);
}
var50 = !var49;
if (var50){
goto BREAK_label51;
} else {
}
{
var52 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_c);
}
var53 = !var52;
if (var53){
goto BREAK_label51;
} else {
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`";
var59 = core__flat___NativeString___to_s_full(var58, 1l, 1l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "`";
var63 = core__flat___NativeString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[2]=var61;
} else {
var55 = varonce54;
varonce54 = NULL;
}
{
var64 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c);
}
((struct instance_core__NativeArray*)var55)->values[1]=var64;
{
var65 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_hints, var65); /* Direct call array$Array$add on <var_hints:Array[String]>*/
}
BREAK_label51: (void)0;
{
((void(*)(val* self))((((int64_t)var_40&3)?class_info[((int64_t)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_40&3)?class_info[((int64_t)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[MClass]>*/
}
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_hints) on <var_hints:Array[String]> */
var68 = var_hints->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_hints:Array[String]> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var66,1l) on <var66:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var72 = var66 > 1l;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Error: ambiguous class name `";
var78 = core__flat___NativeString___to_s_full(var77, 29l, 29l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "` in module `";
var82 = core__flat___NativeString___to_s_full(var81, 13l, 13l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "`. Conflicts are between ";
var86 = core__flat___NativeString___to_s_full(var85, 25l, 25l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var74)->values[4]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = ".";
var90 = core__flat___NativeString___to_s_full(var89, 1l, 1l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var74)->values[6]=var88;
} else {
var74 = varonce73;
varonce73 = NULL;
}
((struct instance_core__NativeArray*)var74)->values[1]=var_qname;
{
var91 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var74)->values[3]=var91;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = ",";
var95 = core__flat___NativeString___to_s_full(var94, 1l, 1l);
var93 = var95;
varonce92 = var93;
}
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = " and ";
var99 = core__flat___NativeString___to_s_full(var98, 5l, 5l);
var97 = var99;
varonce96 = var97;
}
{
var100 = core__abstract_text___Collection___join(var_hints, var93, var97);
}
((struct instance_core__NativeArray*)var74)->values[5]=var100;
{
var101 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var101); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_hints); /* Direct call array$AbstractArray$clear on <var_hints:Array[String]>*/
}
if (var_all_classes == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_all_classes,((val*)NULL)) on <var_all_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_all_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_all_classes, var_other); /* == on <var_all_classes:nullable Array[MClass](Array[MClass])>*/
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
var_107 = var_all_classes;
{
var108 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_107);
}
var_109 = var108;
for(;;) {
{
var110 = ((short int(*)(val* self))((((int64_t)var_109&3)?class_info[((int64_t)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_109); /* is_ok on <var_109:IndexedIterator[MClass]>*/
}
if (var110){
} else {
goto BREAK_label111;
}
{
var112 = ((val*(*)(val* self))((((int64_t)var_109&3)?class_info[((int64_t)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_109); /* item on <var_109:IndexedIterator[MClass]>*/
}
var_c113 = var112;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var116 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c113) on <var_c113:MClass> */
var119 = var_c113->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c113:MClass> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = poset___poset__POSetElement____60d_61d(var114, var117);
}
var121 = !var120;
if (var121){
goto BREAK_label122;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_c113) on <var_c113:MClass> */
var125 = var_c113->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c113:MClass> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_c113) on <var_c113:MClass> */
var128 = var_c113->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c113:MClass> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nitc___nitc__MModule___is_visible(var_mmodule, var123, var126);
}
if (var129){
goto BREAK_label122;
} else {
}
{
var130 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_c113);
}
var131 = !var130;
if (var131){
goto BREAK_label122;
} else {
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "Error: class `";
var137 = core__flat___NativeString___to_s_full(var136, 14l, 14l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "` not visible in module `";
var141 = core__flat___NativeString___to_s_full(var140, 25l, 25l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var133)->values[2]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "`.";
var145 = core__flat___NativeString___to_s_full(var144, 2l, 2l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var133)->values[4]=var143;
} else {
var133 = varonce132;
varonce132 = NULL;
}
{
var146 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c113);
}
((struct instance_core__NativeArray*)var133)->values[1]=var146;
{
var147 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var133)->values[3]=var147;
{
var148 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var148); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
BREAK_label122: (void)0;
{
((void(*)(val* self))((((int64_t)var_109&3)?class_info[((int64_t)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_109); /* next on <var_109:IndexedIterator[MClass]>*/
}
}
BREAK_label111: (void)0;
{
((void(*)(val* self))((((int64_t)var_109&3)?class_info[((int64_t)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_109); /* finish on <var_109:IndexedIterator[MClass]>*/
}
} else {
}
if (var_all_classes == NULL) {
var149 = 0; /* is null */
} else {
var149 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_all_classes,((val*)NULL)) on <var_all_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var152 = ((short int(*)(val* self, val* p0))(var_all_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_all_classes, var_other); /* == on <var_all_classes:nullable Array[MClass](Array[MClass])>*/
}
var153 = !var152;
var150 = var153;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (var149){
var_154 = var_all_classes;
{
var155 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_154);
}
var_156 = var155;
for(;;) {
{
var157 = ((short int(*)(val* self))((((int64_t)var_156&3)?class_info[((int64_t)var_156&3)]:var_156->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_156); /* is_ok on <var_156:IndexedIterator[MClass]>*/
}
if (var157){
} else {
goto BREAK_label158;
}
{
var159 = ((val*(*)(val* self))((((int64_t)var_156&3)?class_info[((int64_t)var_156&3)]:var_156->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_156); /* item on <var_156:IndexedIterator[MClass]>*/
}
var_c160 = var159;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var163 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c160) on <var_c160:MClass> */
var166 = var_c160->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c160:MClass> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
var167 = poset___poset__POSetElement____60d_61d(var161, var164);
}
if (var167){
goto BREAK_label168;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_c160) on <var_c160:MClass> */
var171 = var_c160->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c160:MClass> */
if (unlikely(var171 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline mmodule$MModule$in_importation (var169) on <var169:MModule> */
var174 = var169->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var169:MModule> */
if (unlikely(var174 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = poset___poset__POSetElement____60d_61d(var172, var_mmodule);
}
if (var175){
goto BREAK_label168;
} else {
}
{
{ /* Inline model$MClass$visibility (var_c160) on <var_c160:MClass> */
var178 = var_c160->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c160:MClass> */
if (unlikely(var178 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = glob_sys;
{
var180 = nitc__model_base___core__Sys___private_visibility(var179);
}
{
var181 = core___core__Comparable____60d_61d(var176, var180);
}
if (var181){
goto BREAK_label168;
} else {
}
{
var182 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_c160);
}
var183 = !var182;
if (var183){
goto BREAK_label168;
} else {
}
if (unlikely(varonce184==NULL)) {
var185 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "`";
var189 = core__flat___NativeString___to_s_full(var188, 1l, 1l);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var185)->values[0]=var187;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "`";
var193 = core__flat___NativeString___to_s_full(var192, 1l, 1l);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var185)->values[2]=var191;
} else {
var185 = varonce184;
varonce184 = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (var_c160) on <var_c160:MClass> */
var196 = var_c160->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c160:MClass> */
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var194);
}
((struct instance_core__NativeArray*)var185)->values[1]=var197;
{
var198 = ((val*(*)(val* self))(var185->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var185); /* native_to_s on <var185:NativeArray[String]>*/
}
varonce184 = var185;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_hints, var198); /* Direct call array$Array$add on <var_hints:Array[String]>*/
}
BREAK_label168: (void)0;
{
((void(*)(val* self))((((int64_t)var_156&3)?class_info[((int64_t)var_156&3)]:var_156->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_156); /* next on <var_156:IndexedIterator[MClass]>*/
}
}
BREAK_label158: (void)0;
{
((void(*)(val* self))((((int64_t)var_156&3)?class_info[((int64_t)var_156&3)]:var_156->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_156); /* finish on <var_156:IndexedIterator[MClass]>*/
}
} else {
}
{
var199 = core___core__Collection___not_empty(var_hints);
}
if (var199){
if (unlikely(varonce200==NULL)) {
var201 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "Error: class `";
var205 = core__flat___NativeString___to_s_full(var204, 14l, 14l);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var201)->values[0]=var203;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "` not found in module `";
var209 = core__flat___NativeString___to_s_full(var208, 23l, 23l);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var201)->values[2]=var207;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "`. Maybe import ";
var213 = core__flat___NativeString___to_s_full(var212, 16l, 16l);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var201)->values[4]=var211;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "?";
var217 = core__flat___NativeString___to_s_full(var216, 1l, 1l);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var201)->values[6]=var215;
} else {
var201 = varonce200;
varonce200 = NULL;
}
((struct instance_core__NativeArray*)var201)->values[1]=var_qname;
{
var218 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var201)->values[3]=var218;
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = ",";
var222 = core__flat___NativeString___to_s_full(var221, 1l, 1l);
var220 = var222;
varonce219 = var220;
}
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = " or ";
var226 = core__flat___NativeString___to_s_full(var225, 4l, 4l);
var224 = var226;
varonce223 = var224;
}
{
var227 = core__abstract_text___Collection___join(var_hints, var220, var224);
}
((struct instance_core__NativeArray*)var201)->values[5]=var227;
{
var228 = ((val*(*)(val* self))(var201->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var201); /* native_to_s on <var201:NativeArray[String]>*/
}
varonce200 = var201;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var228); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var229 = NEW_more_collections__BestDistance(&type_more_collections__BestDistance__nitc__MClass);
{
var230 = ((int64_t(*)(val* self))(var_qname->class->vft[COLOR_core__abstract_text__Text__length]))(var_qname); /* length on <var_qname:String>*/
}
{
var231 = ((int64_t(*)(val* self))(var_name->class->vft[COLOR_core__abstract_text__Text__length]))(var_name); /* length on <var_name:String>*/
}
{
{ /* Inline kernel$Int$/ (var231,2l) on <var231:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var234 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var234)) {
var_class_name237 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name237);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var238 = var231 / 2l;
var232 = var238;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var230,var232) on <var230:Int> */
/* Covariant cast for argument 0 (i) <var232:Int> isa OTHER */
/* <var232:Int> isa OTHER */
var241 = 1; /* easy <var232:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name244 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var245 = var230 - var232;
var239 = var245;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
{
((void(*)(val* self, int64_t p0))(var229->class->vft[COLOR_more_collections__BestDistance__best_distance_61d]))(var229, var239); /* best_distance= on <var229:BestDistance[MClass]>*/
}
{
((void(*)(val* self))(var229->class->vft[COLOR_core__kernel__Object__init]))(var229); /* init on <var229:BestDistance[MClass]>*/
}
var_bests = var229;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var248 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var248 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline model$Model$mclasses (var246) on <var246:Model> */
var251 = var246->attrs[COLOR_nitc__model__Model___mclasses].val; /* _mclasses on <var246:Model> */
if (unlikely(var251 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 43);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
var_252 = var249;
{
var253 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_252);
}
var_254 = var253;
for(;;) {
{
var255 = ((short int(*)(val* self))((((int64_t)var_254&3)?class_info[((int64_t)var_254&3)]:var_254->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_254); /* is_ok on <var_254:IndexedIterator[MClass]>*/
}
if (var255){
} else {
goto BREAK_label256;
}
{
var257 = ((val*(*)(val* self))((((int64_t)var_254&3)?class_info[((int64_t)var_254&3)]:var_254->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_254); /* item on <var_254:IndexedIterator[MClass]>*/
}
var_c258 = var257;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var261 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var261 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c258) on <var_c258:MClass> */
var264 = var_c258->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c258:MClass> */
if (unlikely(var264 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
var265 = poset___poset__POSetElement____60d_61d(var259, var262);
}
var266 = !var265;
if (var266){
goto BREAK_label267;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_c258) on <var_c258:MClass> */
var270 = var_c258->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c258:MClass> */
if (unlikely(var270 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_c258) on <var_c258:MClass> */
var273 = var_c258->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c258:MClass> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
var274 = nitc___nitc__MModule___is_visible(var_mmodule, var268, var271);
}
var275 = !var274;
if (var275){
goto BREAK_label267;
} else {
}
{
{ /* Inline model$MClass$name (var_c258) on <var_c258:MClass> */
var278 = var_c258->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_c258:MClass> */
if (unlikely(var278 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
{
var279 = core___core__Text___levenshtein_distance(var_qname, var276);
}
var_d = var279;
{
var280 = more_collections___more_collections__BestDistance___update(var_bests, var_d, var_c258);
}
{
var281 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c258);
}
{
var282 = core___core__Text___levenshtein_distance(var_qname, var281);
}
var_d = var282;
{
var283 = more_collections___more_collections__BestDistance___update(var_bests, var_d, var_c258);
}
BREAK_label267: (void)0;
{
((void(*)(val* self))((((int64_t)var_254&3)?class_info[((int64_t)var_254&3)]:var_254->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_254); /* next on <var_254:IndexedIterator[MClass]>*/
}
}
BREAK_label256: (void)0;
{
((void(*)(val* self))((((int64_t)var_254&3)?class_info[((int64_t)var_254&3)]:var_254->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_254); /* finish on <var_254:IndexedIterator[MClass]>*/
}
{
{ /* Inline more_collections$BestDistance$best_items (var_bests) on <var_bests:BestDistance[MClass]> */
var286 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[MClass]> */
if (unlikely(var286 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
var287 = core___core__Collection___not_empty(var284);
}
if (var287){
{
{ /* Inline more_collections$BestDistance$best_items (var_bests) on <var_bests:BestDistance[MClass]> */
var290 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[MClass]> */
if (unlikely(var290 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
var_291 = var288;
{
var292 = ((val*(*)(val* self))((((int64_t)var_291&3)?class_info[((int64_t)var_291&3)]:var_291->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_291); /* iterator on <var_291:Set[MClass]>*/
}
var_293 = var292;
for(;;) {
{
var294 = ((short int(*)(val* self))((((int64_t)var_293&3)?class_info[((int64_t)var_293&3)]:var_293->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_293); /* is_ok on <var_293:Iterator[MClass]>*/
}
if (var294){
} else {
goto BREAK_label295;
}
{
var296 = ((val*(*)(val* self))((((int64_t)var_293&3)?class_info[((int64_t)var_293&3)]:var_293->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_293); /* item on <var_293:Iterator[MClass]>*/
}
var_c297 = var296;
if (unlikely(varonce298==NULL)) {
var299 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "`";
var303 = core__flat___NativeString___to_s_full(var302, 1l, 1l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var299)->values[0]=var301;
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "`";
var307 = core__flat___NativeString___to_s_full(var306, 1l, 1l);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var299)->values[2]=var305;
} else {
var299 = varonce298;
varonce298 = NULL;
}
{
var308 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c297);
}
((struct instance_core__NativeArray*)var299)->values[1]=var308;
{
var309 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var299); /* native_to_s on <var299:NativeArray[String]>*/
}
varonce298 = var299;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_hints, var309); /* Direct call array$Array$add on <var_hints:Array[String]>*/
}
{
((void(*)(val* self))((((int64_t)var_293&3)?class_info[((int64_t)var_293&3)]:var_293->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_293); /* next on <var_293:Iterator[MClass]>*/
}
}
BREAK_label295: (void)0;
{
((void(*)(val* self))((((int64_t)var_293&3)?class_info[((int64_t)var_293&3)]:var_293->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_293); /* finish on <var_293:Iterator[MClass]>*/
}
if (unlikely(varonce310==NULL)) {
var311 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "Error: class `";
var315 = core__flat___NativeString___to_s_full(var314, 14l, 14l);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var311)->values[0]=var313;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "` not found in module `";
var319 = core__flat___NativeString___to_s_full(var318, 23l, 23l);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var311)->values[2]=var317;
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "`. Did you mean ";
var323 = core__flat___NativeString___to_s_full(var322, 16l, 16l);
var321 = var323;
varonce320 = var321;
}
((struct instance_core__NativeArray*)var311)->values[4]=var321;
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "?";
var327 = core__flat___NativeString___to_s_full(var326, 1l, 1l);
var325 = var327;
varonce324 = var325;
}
((struct instance_core__NativeArray*)var311)->values[6]=var325;
} else {
var311 = varonce310;
varonce310 = NULL;
}
((struct instance_core__NativeArray*)var311)->values[1]=var_qname;
{
var328 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var311)->values[3]=var328;
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = ",";
var332 = core__flat___NativeString___to_s_full(var331, 1l, 1l);
var330 = var332;
varonce329 = var330;
}
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = " or ";
var336 = core__flat___NativeString___to_s_full(var335, 4l, 4l);
var334 = var336;
varonce333 = var334;
}
{
var337 = core__abstract_text___Collection___join(var_hints, var330, var334);
}
((struct instance_core__NativeArray*)var311)->values[5]=var337;
{
var338 = ((val*(*)(val* self))(var311->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var311); /* native_to_s on <var311:NativeArray[String]>*/
}
varonce310 = var311;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var338); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (unlikely(varonce339==NULL)) {
var340 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "Error: class `";
var344 = core__flat___NativeString___to_s_full(var343, 14l, 14l);
var342 = var344;
varonce341 = var342;
}
((struct instance_core__NativeArray*)var340)->values[0]=var342;
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "` not found in module `";
var348 = core__flat___NativeString___to_s_full(var347, 23l, 23l);
var346 = var348;
varonce345 = var346;
}
((struct instance_core__NativeArray*)var340)->values[2]=var346;
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "`.";
var352 = core__flat___NativeString___to_s_full(var351, 2l, 2l);
var350 = var352;
varonce349 = var350;
}
((struct instance_core__NativeArray*)var340)->values[4]=var350;
} else {
var340 = varonce339;
varonce339 = NULL;
}
((struct instance_core__NativeArray*)var340)->values[1]=var_qname;
{
var353 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var340)->values[3]=var353;
{
var354 = ((val*(*)(val* self))(var340->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var340); /* native_to_s on <var340:NativeArray[String]>*/
}
varonce339 = var340;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var354); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$bad_class_names for (self: ModelBuilder): MultiHashMap[MModule, String] */
val* nitc___nitc__ModelBuilder___bad_class_names(val* self) {
val* var /* : MultiHashMap[MModule, String] */;
val* var1 /* : MultiHashMap[MModule, String] */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val; /* _bad_class_names on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bad_class_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 413);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* nitc___nitc__ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
int64_t var_i /* var i: Int */;
int64_t var24 /* : Int */;
int64_t var26 /* : Int */;
int64_t var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : nullable MClassDef */;
val* var_intro /* var intro: nullable MClassDef */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : Array[MType] */;
val* var44 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var45 /* : ANodes[AType] */;
val* var47 /* : ANodes[AType] */;
val* var48 /* : ANode */;
val* var_nt /* var nt: AType */;
val* var49 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other59 /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var_anchor /* var anchor: nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : NativeArray[String] */;
static val* varonce;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
int64_t var83 /* : Int */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
{ /* Inline modelbuilder_base$AType$mtype (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
{
var10 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var10;
} else {
}
if (var_mtype == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var16 = var_mtype == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$AType$checked_mtype (var_ntype) on <var_ntype:AType> */
var19 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <var_ntype:AType> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
var = var_mtype;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var20 = 0;
} else {
var20 = var_mtype->type->type_table[cltype] == idtype;
}
if (var20){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MType(MGenericType)> */
var23 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclass = var21;
var_i = 0l;
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:MClass> */
var26 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:MClass> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var32 = var_i < var_;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
} else {
goto BREAK_label;
}
{
var33 = nitc___nitc__MClass___try_intro(var_mclass);
}
var_intro = var33;
if (var_intro == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_intro,((val*)NULL)) on <var_intro:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_intro,var_other) on <var_intro:nullable MClassDef(MClassDef)> */
var39 = var_intro == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassDef$bound_mtype (var_intro) on <var_intro:nullable MClassDef(MClassDef)> */
var42 = var_intro->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intro:nullable MClassDef(MClassDef)> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self))(var40->class->vft[COLOR_nitc__model__MClassType__arguments]))(var40); /* arguments on <var40:MClassType>*/
}
{
var44 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var43, var_i);
}
var_bound = var44;
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var47 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1725);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var45, var_i);
}
var_nt = var48;
{
var49 = nitc___nitc__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef, var_nt);
}
var_mt = var49;
if (var_mt == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mt,((val*)NULL)) on <var_mt:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mt,var_other) on <var_mt:nullable MType(MType)> */
var55 = var_mt == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_mclassdef == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other59 = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other59); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var61 = !var60;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var64 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_anchor = var62;
} else {
var_anchor = ((val*)NULL);
}
{
var65 = nitc___nitc__ModelBuilder___check_subtype(self, var_nt, var_mmodule, var_anchor, var_mt, var_bound);
}
var66 = !var65;
if (var66){
if (unlikely(varonce==NULL)) {
var67 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Type Error: expected `";
var71 = core__flat___NativeString___to_s_full(var70, 22l, 22l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var67)->values[0]=var69;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "`, got `";
var75 = core__flat___NativeString___to_s_full(var74, 8l, 8l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var67)->values[2]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "`.";
var79 = core__flat___NativeString___to_s_full(var78, 2l, 2l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var67)->values[4]=var77;
} else {
var67 = varonce;
varonce = NULL;
}
{
var80 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bound); /* to_s on <var_bound:MType>*/
}
((struct instance_core__NativeArray*)var67)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var_mt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mt); /* to_s on <var_mt:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var67)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce = var67;
{
nitc___nitc__ModelBuilder___error(self, var_nt, var82); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var83 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var83;
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline modelbuilder_base$AType$checked_mtype= (var_ntype,1) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s = 1; /* _checked_mtype on <var_ntype:AType> */
RET_LABEL84:(void)0;
}
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$check_subtype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nitc___nitc__ModelBuilder___check_subtype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
var_node = p0;
var_mmodule = p1;
var_anchor = p2;
var_sub = p3;
var_sup = p4;
{
var1 = nitc___nitc__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$check_sametype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nitc___nitc__ModelBuilder___check_sametype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var_node = p0;
var_mmodule = p1;
var_anchor = p2;
var_sub = p3;
var_sup = p4;
{
var2 = nitc___nitc__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var_ = var2;
if (var2){
{
var3 = nitc___nitc__MType___is_subtype(var_sup, var_mmodule, var_anchor, var_sub);
}
var1 = var3;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ANode$is_broken for (self: ANode): Bool */
short int nitc__modelbuilder_base___ANode___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <self:ANode> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ANode$is_broken= for (self: ANode, Bool) */
void nitc__modelbuilder_base___ANode___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = p0; /* _is_broken on <self:ANode> */
RET_LABEL:;
}
/* method modelbuilder_base$AType$mtype for (self: AType): nullable MType */
val* nitc__modelbuilder_base___AType___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AType$mtype= for (self: AType, nullable MType) */
void nitc__modelbuilder_base___AType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base$AType$checked_mtype for (self: AType): Bool */
short int nitc__modelbuilder_base___AType___checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AType$checked_mtype= for (self: AType, Bool) */
void nitc__modelbuilder_base___AType___checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base$AIntrudeVisibility$mvisibility for (self: AIntrudeVisibility): MVisibility */
val* nitc__modelbuilder_base___AIntrudeVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___intrude_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$APublicVisibility$mvisibility for (self: APublicVisibility): MVisibility */
val* nitc__modelbuilder_base___APublicVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___public_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AProtectedVisibility$mvisibility for (self: AProtectedVisibility): MVisibility */
val* nitc__modelbuilder_base___AProtectedVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___protected_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$APrivateVisibility$mvisibility for (self: APrivateVisibility): MVisibility */
val* nitc__modelbuilder_base___APrivateVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___private_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ADoc$mdoc_cache for (self: ADoc): nullable MDoc */
val* nitc__modelbuilder_base___ADoc___mdoc_cache(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ADoc$mdoc_cache= for (self: ADoc, nullable MDoc) */
void nitc__modelbuilder_base___ADoc___mdoc_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val = p0; /* _mdoc_cache on <self:ADoc> */
RET_LABEL:;
}
/* method modelbuilder_base$ADoc$to_mdoc for (self: ADoc): MDoc */
val* nitc__modelbuilder_base___ADoc___to_mdoc(val* self) {
val* var /* : MDoc */;
val* var1 /* : nullable MDoc */;
val* var3 /* : nullable MDoc */;
val* var_res /* var res: nullable MDoc */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MDoc */;
val* var10 /* : Location */;
val* var12 /* : Location */;
val* var13 /* : ANodes[TComment] */;
val* var15 /* : ANodes[TComment] */;
val* var_ /* var : ANodes[TComment] */;
val* var16 /* : Iterator[ANode] */;
val* var_17 /* var : Iterator[TComment] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_c /* var c: TComment */;
val* var20 /* : String */;
val* var_text /* var text: String */;
int64_t var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : Array[String] */;
val* var28 /* : Array[String] */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
val* var33 /* : SequenceRead[Char] */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
uint32_t var38 /* : Char */;
val* var39 /* : SequenceRead[Char] */;
val* var40 /* : nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
uint32_t var44 /* : Char */;
val* var45 /* : Text */;
val* var46 /* : Text */;
val* var47 /* : SequenceRead[Char] */;
val* var48 /* : nullable Object */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
uint32_t var52 /* : Char */;
int64_t var53 /* : Int */;
int64_t var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
int64_t var60 /* : Int */;
val* var61 /* : Text */;
val* var62 /* : Array[String] */;
val* var64 /* : Array[String] */;
{
{ /* Inline modelbuilder_base$ADoc$mdoc_cache (self) on <self:ADoc> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable MDoc> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MDoc(MDoc)>*/
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
var9 = NEW_nitc__MDoc(&type_nitc__MDoc);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:ADoc> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ADoc> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__mdoc__MDoc__location_61d]))(var9, var10); /* location= on <var9:MDoc>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:MDoc>*/
}
var_res = var9;
{
{ /* Inline parser_nodes$ADoc$n_comment (self) on <self:ADoc> */
var15 = self->attrs[COLOR_nitc__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2907);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ = var13;
{
var16 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[TComment]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[TComment]>*/
}
var_c = var19;
{
var20 = nitc__lexer_work___Token___text(var_c);
}
var_text = var20;
{
var21 = ((int64_t(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel$Int$< (var21,2l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var24 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var21 < 2l;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline mdoc$MDoc$content (var_res) on <var_res:nullable MDoc(MDoc)> */
var28 = var_res->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "";
var31 = core__flat___NativeString___to_s_full(var30, 0l, 0l);
var29 = var31;
varonce = var29;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var26, var29); /* Direct call array$Array$add on <var26:Array[String]>*/
}
goto BREAK_label32;
} else {
}
{
var33 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var34 = ((val*(*)(val* self, int64_t p0))((((int64_t)var33&3)?class_info[((int64_t)var33&3)]:var33->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var33, 0l); /* [] on <var33:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var34,'#') on <var34:nullable Object(Char)> */
var38 = (uint32_t)((int64_t)(var34)>>2);
var37 = var38 == '#';
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 526);
fatal_exit(1);
}
{
var39 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var40 = ((val*(*)(val* self, int64_t p0))((((int64_t)var39&3)?class_info[((int64_t)var39&3)]:var39->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var39, 1l); /* [] on <var39:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var40,' ') on <var40:nullable Object(Char)> */
var44 = (uint32_t)((int64_t)(var40)>>2);
var43 = var44 == ' ';
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
var45 = ((val*(*)(val* self, int64_t p0))(var_text->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_text, 2l); /* substring_from on <var_text:String>*/
}
var_text = var45;
} else {
{
var46 = ((val*(*)(val* self, int64_t p0))(var_text->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_text, 1l); /* substring_from on <var_text:String>*/
}
var_text = var46;
}
{
var47 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var48 = ((val*(*)(val* self))((((int64_t)var47&3)?class_info[((int64_t)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var47); /* last on <var47:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var48,'\n') on <var48:nullable Object(Char)> */
var52 = (uint32_t)((int64_t)(var48)>>2);
var51 = var52 == '\n';
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
var53 = ((int64_t(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel$Int$- (var53,1l) on <var53:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var53 - 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = ((val*(*)(val* self, int64_t p0, int64_t p1))(var_text->class->vft[COLOR_core__abstract_text__Text__substring]))(var_text, 0l, var54); /* substring on <var_text:String>*/
}
var_text = var61;
} else {
}
{
{ /* Inline mdoc$MDoc$content (var_res) on <var_res:nullable MDoc(MDoc)> */
var64 = var_res->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var62, var_text); /* Direct call array$Array$add on <var62:Array[String]>*/
}
BREAK_label32: (void)0;
{
((void(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[TComment]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_17&3)?class_info[((int64_t)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[TComment]>*/
}
{
{ /* Inline modelbuilder_base$ADoc$mdoc_cache= (self,var_res) on <self:ADoc> */
self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val = var_res; /* _mdoc_cache on <self:ADoc> */
RET_LABEL65:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$mpackname for (self: AQclassid): nullable String */
val* nitc__modelbuilder_base___AQclassid___mpackname(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable AQualified */;
val* var3 /* : nullable AQualified */;
val* var_nqualified /* var nqualified: nullable AQualified */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[TId] */;
val* var12 /* : ANodes[TId] */;
val* var_nids /* var nids: ANodes[TId] */;
int64_t var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : ANode */;
val* var19 /* : String */;
{
{ /* Inline parser_nodes$AQclassid$n_qualified (self) on <self:AQclassid> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_nqualified = var1;
if (var_nqualified == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nqualified,((val*)NULL)) on <var_nqualified:nullable AQualified> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nqualified,var_other) on <var_nqualified:nullable AQualified(AQualified)> */
var9 = var_nqualified == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_id (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var12 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <var_nqualified:nullable AQualified(AQualified)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2895);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nids = var10;
{
var13 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_nids);
}
{
{ /* Inline kernel$Int$<= (var13,0l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var17 = var13 <= 0l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var18 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var_nids, 0l);
}
{
var19 = nitc__lexer_work___Token___text(var18);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$mmodname for (self: AQclassid): nullable String */
val* nitc__modelbuilder_base___AQclassid___mmodname(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable AQualified */;
val* var3 /* : nullable AQualified */;
val* var_nqualified /* var nqualified: nullable AQualified */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[TId] */;
val* var12 /* : ANodes[TId] */;
val* var_nids /* var nids: ANodes[TId] */;
int64_t var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : ANode */;
val* var19 /* : String */;
{
{ /* Inline parser_nodes$AQclassid$n_qualified (self) on <self:AQclassid> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_nqualified = var1;
if (var_nqualified == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nqualified,((val*)NULL)) on <var_nqualified:nullable AQualified> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nqualified,var_other) on <var_nqualified:nullable AQualified(AQualified)> */
var9 = var_nqualified == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_id (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var12 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <var_nqualified:nullable AQualified(AQualified)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2895);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nids = var10;
{
var13 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_nids);
}
{
{ /* Inline kernel$Int$<= (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var17 = var13 <= 1l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var18 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var_nids, 1l);
}
{
var19 = nitc__lexer_work___Token___text(var18);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$accept for (self: AQclassid, MClass): Bool */
short int nitc__modelbuilder_base___AQclassid___accept(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : TClassid */;
val* var6 /* : TClassid */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable String */;
val* var_mpackname /* var mpackname: nullable String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : nullable MPackage */;
val* var_mpackage /* var mpackage: nullable MPackage */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable String */;
val* var_mmodname /* var mmodname: nullable String */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : String */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
var_mclass = p0;
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:MClass> */
var3 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AQclassid$n_id (self) on <self:AQclassid> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <self:AQclassid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1678);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
{
{ /* Inline kernel$Object$!= (var1,var7) on <var1:String> */
var_other = var7;
{
var10 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:String>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = 0;
goto RET_LABEL;
} else {
}
{
var12 = nitc__modelbuilder_base___AQclassid___mpackname(self);
}
var_mpackname = var12;
if (var_mpackname == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mpackname,((val*)NULL)) on <var_mpackname:nullable String> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_mpackname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpackname, var_other); /* == on <var_mpackname:nullable String(String)>*/
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
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var20 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__MModule___mpackage(var18);
}
var_mpackage = var21;
if (var_mpackage == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpackage,((val*)NULL)) on <var_mpackage:nullable MPackage> */
var_other25 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpackage,var_other25) on <var_mpackage:nullable MPackage(MPackage)> */
var28 = var_mpackage == var_other25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline mpackage$MPackage$name (var_mpackage) on <var_mpackage:nullable MPackage(MPackage)> */
var31 = var_mpackage->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <var_mpackage:nullable MPackage(MPackage)> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var29,var_mpackname) on <var29:String> */
var_other = var_mpackname;
{
var34 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_core__kernel__Object___61d_61d]))(var29, var_other); /* == on <var29:String>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var = 0;
goto RET_LABEL;
} else {
}
{
var36 = nitc__modelbuilder_base___AQclassid___mmodname(self);
}
var_mmodname = var36;
if (var_mmodname == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mmodname,((val*)NULL)) on <var_mmodname:nullable String> */
var_other = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_mmodname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodname, var_other); /* == on <var_mmodname:nullable String(String)>*/
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
var_ = var38;
if (var38){
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var45 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var43) on <var43:MModule> */
var48 = var43->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var43:MModule> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var46,var_mmodname) on <var46:String> */
var_other = var_mmodname;
{
var51 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_core__kernel__Object___61d_61d]))(var46, var_other); /* == on <var46:String>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var37 = var49;
} else {
var37 = var_;
}
if (var37){
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
/* method modelbuilder_base$AQclassid$full_name for (self: AQclassid): String */
val* nitc__modelbuilder_base___AQclassid___full_name(val* self) {
val* var /* : String */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
val* var4 /* : String */;
val* var_res /* var res: String */;
val* var5 /* : nullable AQualified */;
val* var7 /* : nullable AQualified */;
val* var_nqualified /* var nqualified: nullable AQualified */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable TClassid */;
val* var16 /* : nullable TClassid */;
val* var_ncid /* var ncid: nullable TClassid */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : Text */;
val* var28 /* : Text */;
val* var29 /* : ANodes[TId] */;
val* var31 /* : ANodes[TId] */;
val* var_nids /* var nids: ANodes[TId] */;
short int var32 /* : Bool */;
val* var33 /* : IndexedIterator[ANode] */;
val* var_ /* var : IndexedIterator[TId] */;
val* var34 /* : Iterator[nullable Object] */;
val* var_35 /* var : Iterator[TId] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_n /* var n: TId */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : Text */;
val* var44 /* : Text */;
{
{ /* Inline parser_nodes$AQclassid$n_id (self) on <self:AQclassid> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <self:AQclassid> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1678);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$AQclassid$n_qualified (self) on <self:AQclassid> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_nqualified = var5;
if (var_nqualified == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nqualified,((val*)NULL)) on <var_nqualified:nullable AQualified> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nqualified,var_other) on <var_nqualified:nullable AQualified(AQualified)> */
var13 = var_nqualified == var_other;
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
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_classid (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var16 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_classid].val; /* _n_classid on <var_nqualified:nullable AQualified(AQualified)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ncid = var14;
if (var_ncid == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ncid,((val*)NULL)) on <var_ncid:nullable TClassid> */
var_other20 = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var_ncid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ncid, var_other20); /* == on <var_ncid:nullable TClassid(TClassid)>*/
}
var22 = !var21;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
var23 = nitc__lexer_work___Token___text(var_ncid);
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "::";
var26 = core__flat___NativeString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce = var24;
}
{
var27 = ((val*(*)(val* self, val* p0))(var23->class->vft[COLOR_core__abstract_text__Text___43d]))(var23, var24); /* + on <var23:String>*/
}
{
var28 = ((val*(*)(val* self, val* p0))(var27->class->vft[COLOR_core__abstract_text__Text___43d]))(var27, var_res); /* + on <var27:Text(String)>*/
}
var_res = var28;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_id (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var31 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <var_nqualified:nullable AQualified(AQualified)> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2895);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_nids = var29;
{
var32 = core___core__Collection___not_empty(var_nids);
}
if (var32){
{
var33 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead__reverse_iterator(var_nids);
}
var_ = var33;
{
var34 = core___core__Iterator___iterator(var_);
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((int64_t)var_35&3)?class_info[((int64_t)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:Iterator[TId]>*/
}
if (var36){
} else {
goto BREAK_label;
}
{
var37 = ((val*(*)(val* self))((((int64_t)var_35&3)?class_info[((int64_t)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:Iterator[TId]>*/
}
var_n = var37;
{
var38 = nitc__lexer_work___Token___text(var_n);
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "::";
var42 = core__flat___NativeString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce39 = var40;
}
{
var43 = ((val*(*)(val* self, val* p0))(var38->class->vft[COLOR_core__abstract_text__Text___43d]))(var38, var40); /* + on <var38:String>*/
}
{
var44 = ((val*(*)(val* self, val* p0))(var43->class->vft[COLOR_core__abstract_text__Text___43d]))(var43, var_res); /* + on <var43:Text(String)>*/
}
var_res = var44;
{
((void(*)(val* self))((((int64_t)var_35&3)?class_info[((int64_t)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:Iterator[TId]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((int64_t)var_35&3)?class_info[((int64_t)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:Iterator[TId]>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}

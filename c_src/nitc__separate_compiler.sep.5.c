#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompilerVisitor$equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var13 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var_t1 /* var t1: MType */;
val* var20 /* : MType */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MType */;
val* var30 /* : MType */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : NativeArray[String] */;
static val* varonce;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : Array[String] */;
val* var_tests /* var tests: Array[String] */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var57 /* : Bool */;
int cltype;
int idtype;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : MType */;
val* var72 /* : MType */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : String */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : String */;
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
short int var118 /* : Bool */;
short int var120 /* : Bool */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : String */;
int64_t var136 /* : Int */;
int64_t var138 /* : Int */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var142 /* : NativeArray[String] */;
static val* varonce141;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var150 /* : NativeArray[String] */;
static val* varonce149;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var165 /* : String */;
short int var166 /* : Bool */;
val* var168 /* : NativeArray[String] */;
static val* varonce167;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
val* var180 /* : String */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var184 /* : NativeArray[String] */;
static val* varonce183;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : String */;
val* var198 /* : RuntimeVariable */;
val* var199 /* : String */;
val* var200 /* : String */;
val* var201 /* : String */;
short int var202 /* : Bool */;
val* var204 /* : NativeArray[String] */;
static val* varonce203;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var214 /* : String */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var215 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var216 /* : MType */;
val* var218 /* : MType */;
val* var_t1219 /* var t1: MType */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : String */;
val* var231 /* : MType */;
val* var233 /* : MType */;
val* var234 /* : MType */;
val* var236 /* : MType */;
val* var_t2237 /* var t2: MType */;
short int var238 /* : Bool */;
int cltype239;
int idtype240;
val* var242 /* : NativeArray[String] */;
static val* varonce241;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
val* var246 /* : String */;
val* var247 /* : String */;
val* var248 /* : String */;
val* var249 /* : MType */;
val* var251 /* : MType */;
short int var_incompatible /* var incompatible: Bool */;
short int var252 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
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
val* var277 /* : String */;
val* var278 /* : String */;
val* var279 /* : String */;
val* var280 /* : String */;
val* var281 /* : AbstractCompiler */;
val* var283 /* : AbstractCompiler */;
val* var284 /* : ModelBuilder */;
val* var286 /* : ModelBuilder */;
val* var287 /* : ToolContext */;
val* var289 /* : ToolContext */;
val* var290 /* : OptionBool */;
val* var292 /* : OptionBool */;
val* var293 /* : nullable Object */;
val* var295 /* : nullable Object */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
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
val* var320 /* : String */;
val* var321 /* : String */;
val* var322 /* : String */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
val* var329 /* : NativeArray[String] */;
static val* varonce328;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
val* var333 /* : String */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
val* var337 /* : String */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
val* var341 /* : String */;
val* var342 /* : String */;
val* var343 /* : String */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var346 /* : AbstractCompiler */;
val* var348 /* : AbstractCompiler */;
val* var349 /* : ModelBuilder */;
val* var351 /* : ModelBuilder */;
val* var352 /* : ToolContext */;
val* var354 /* : ToolContext */;
val* var355 /* : OptionBool */;
val* var357 /* : OptionBool */;
val* var358 /* : nullable Object */;
val* var360 /* : nullable Object */;
short int var361 /* : Bool */;
short int var362 /* : Bool */;
val* var364 /* : NativeArray[String] */;
static val* varonce363;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
val* var368 /* : String */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
val* var372 /* : String */;
val* var373 /* : String */;
val* var374 /* : String */;
val* var376 /* : NativeArray[String] */;
static val* varonce375;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
val* var384 /* : String */;
val* var385 /* : String */;
val* var386 /* : String */;
val* var387 /* : String */;
val* var389 /* : NativeArray[String] */;
static val* varonce388;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
val* var393 /* : String */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
val* var397 /* : String */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
val* var401 /* : String */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
val* var405 /* : String */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var411 /* : String */;
val* var412 /* : String */;
val* var413 /* : String */;
val* var414 /* : String */;
val* var415 /* : String */;
val* var417 /* : NativeArray[String] */;
static val* varonce416;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
val* var421 /* : String */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
val* var425 /* : String */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
val* var429 /* : String */;
val* var430 /* : String */;
val* var431 /* : String */;
val* var432 /* : String */;
val* var433 /* : String */;
short int var434 /* : Bool */;
short int var435 /* : Bool */;
val* var_other437 /* var other: nullable Object */;
short int var438 /* : Bool */;
short int var439 /* : Bool */;
short int var440 /* : Bool */;
short int var442 /* : Bool */;
val* var444 /* : NativeArray[String] */;
static val* varonce443;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : String */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
val* var452 /* : String */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
val* var456 /* : String */;
val* var457 /* : String */;
val* var458 /* : String */;
val* var459 /* : String */;
val* var460 /* : String */;
val* var462 /* : NativeArray[String] */;
static val* varonce461;
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
val* var483 /* : String */;
val* var484 /* : String */;
val* var485 /* : String */;
val* var486 /* : String */;
val* var487 /* : String */;
short int var488 /* : Bool */;
short int var489 /* : Bool */;
short int var_490 /* var : Bool */;
short int var491 /* : Bool */;
val* var492 /* : AbstractCompiler */;
val* var494 /* : AbstractCompiler */;
val* var495 /* : ModelBuilder */;
val* var497 /* : ModelBuilder */;
val* var498 /* : ToolContext */;
val* var500 /* : ToolContext */;
val* var501 /* : OptionBool */;
val* var503 /* : OptionBool */;
val* var504 /* : nullable Object */;
val* var506 /* : nullable Object */;
short int var507 /* : Bool */;
short int var508 /* : Bool */;
val* var510 /* : NativeArray[String] */;
static val* varonce509;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
val* var514 /* : String */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
val* var518 /* : String */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : NativeString */;
val* var522 /* : String */;
val* var523 /* : String */;
val* var524 /* : String */;
val* var525 /* : String */;
val* var527 /* : NativeArray[String] */;
static val* varonce526;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
val* var531 /* : String */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
val* var535 /* : String */;
val* var536 /* : String */;
val* var537 /* : String */;
val* var538 /* : String */;
val* var539 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var540 /* : AbstractCompiler */;
val* var542 /* : AbstractCompiler */;
val* var543 /* : HashMap[MClass, Int] */;
val* var545 /* : HashMap[MClass, Int] */;
val* var_546 /* var : HashMap[MClass, Int] */;
val* var547 /* : MapIterator[nullable Object, nullable Object] */;
val* var_548 /* var : MapIterator[MClass, Int] */;
short int var549 /* : Bool */;
val* var550 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var551 /* : nullable Object */;
int64_t var552 /* : Int */;
int64_t var_v /* var v: Int */;
val* var553 /* : MClassType */;
val* var555 /* : MClassType */;
short int var556 /* : Bool */;
short int var558 /* : Bool */;
val* var561 /* : NativeArray[String] */;
static val* varonce560;
static val* varonce562;
val* var563 /* : String */;
char* var564 /* : NativeString */;
val* var565 /* : String */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
val* var569 /* : String */;
static val* varonce570;
val* var571 /* : String */;
char* var572 /* : NativeString */;
val* var573 /* : String */;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : NativeString */;
val* var577 /* : String */;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : NativeString */;
val* var581 /* : String */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
val* var585 /* : String */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
val* var589 /* : String */;
val* var590 /* : String */;
val* var591 /* : String */;
val* var592 /* : String */;
val* var593 /* : String */;
val* var594 /* : String */;
val* var595 /* : String */;
val* var596 /* : String */;
short int var598 /* : Bool */;
val* var600 /* : NativeArray[String] */;
static val* varonce599;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : NativeString */;
val* var604 /* : String */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
val* var608 /* : String */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
val* var612 /* : String */;
val* var613 /* : String */;
val* var614 /* : String */;
val* var615 /* : String */;
val* var616 /* : String */;
val* var618 /* : NativeArray[String] */;
static val* varonce617;
static val* varonce619;
val* var620 /* : String */;
char* var621 /* : NativeString */;
val* var622 /* : String */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
val* var626 /* : String */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
val* var630 /* : String */;
val* var631 /* : String */;
val* var632 /* : String */;
val* var634 /* : NativeArray[String] */;
static val* varonce633;
static val* varonce635;
val* var636 /* : String */;
char* var637 /* : NativeString */;
val* var638 /* : String */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : NativeString */;
val* var642 /* : String */;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
val* var646 /* : String */;
val* var647 /* : String */;
val* var648 /* : String */;
val* var649 /* : String */;
val* var650 /* : String */;
val* var652 /* : NativeArray[String] */;
static val* varonce651;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : NativeString */;
val* var656 /* : String */;
static val* varonce657;
val* var658 /* : String */;
char* var659 /* : NativeString */;
val* var660 /* : String */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : NativeString */;
val* var664 /* : String */;
static val* varonce665;
val* var666 /* : String */;
char* var667 /* : NativeString */;
val* var668 /* : String */;
val* var669 /* : String */;
val* var670 /* : String */;
val* var671 /* : String */;
static val* varonce672;
val* var673 /* : String */;
char* var674 /* : NativeString */;
val* var675 /* : String */;
val* var676 /* : String */;
val* var677 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self))(var4->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var4); /* is_c_primitive on <var4:MType>*/
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
var3 = var12;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var15 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self))(var13->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var13); /* is_c_primitive on <var13:MType>*/
}
if (var16){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value1) on <var_value1:RuntimeVariable> */
var19 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
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
var_t1 = var17;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var22 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_t1,var20) on <var_t1:MType> */
var_other = var20;
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:MType> */
var27 = var_t1 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (unlikely(!var23)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1910);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value2) on <var_value2:RuntimeVariable> */
var30 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var28,var_t1) on <var28:MType> */
var_other = var_t1;
{
{ /* Inline kernel$Object$is_same_instance (var28,var_other) on <var28:MType> */
var35 = var28 == var_other;
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
if (var31){
if (unlikely(varonce==NULL)) {
var36 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " = ";
var40 = core__flat___NativeString___to_s_full(var39, 3l, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[1]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = " == ";
var44 = core__flat___NativeString___to_s_full(var43, 4l, 4l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var36)->values[3]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ";";
var48 = core__flat___NativeString___to_s_full(var47, 1l, 1l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var36)->values[5]=var46;
} else {
var36 = varonce;
varonce = NULL;
}
{
var49 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[0]=var49;
{
var50 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[2]=var50;
{
var51 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[4]=var51;
{
var52 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce = var36;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var52); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var53 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var53); /* Direct call array$Array$init on <var53:Array[String]>*/
}
var_tests = var53;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var56 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_t2 = var54;
/* <var_t2:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var57 = 0;
} else {
var57 = var_t2->type->type_table[cltype] == idtype;
}
if (var57){
if (unlikely(varonce58==NULL)) {
var59 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "(";
var63 = core__flat___NativeString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var59)->values[0]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " != NULL)";
var67 = core__flat___NativeString___to_s_full(var66, 9l, 9l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var59)->values[2]=var65;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var59)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tests, var69); /* Direct call array$Array$add on <var_tests:Array[String]>*/
}
{
{ /* Inline model$MProxyType$mtype (var_t2) on <var_t2:MType(MNullableType)> */
var72 = var_t2->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t2:MType(MNullableType)> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_t2 = var70;
} else {
/* <var_t2:MType> isa MNullType */
cltype74 = type_nitc__MNullType.color;
idtype75 = type_nitc__MNullType.id;
if(cltype74 >= var_t2->type->table_size) {
var73 = 0;
} else {
var73 = var_t2->type->type_table[cltype74] == idtype75;
}
if (var73){
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " = 0; /* incompatible types ";
var81 = core__flat___NativeString___to_s_full(var80, 28l, 28l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[1]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = " vs. ";
var85 = core__flat___NativeString___to_s_full(var84, 5l, 5l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[3]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "*/";
var89 = core__flat___NativeString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[5]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var77)->values[0]=var90;
{
var91 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var77)->values[2]=var91;
{
var92 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:MType(MNullType)>*/
}
((struct instance_core__NativeArray*)var77)->values[4]=var92;
{
var93 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var93); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel$Object$== (var_t2,var_t1) on <var_t2:MType> */
var_other = var_t1;
{
{ /* Inline kernel$Object$is_same_instance (var_t2,var_other) on <var_t2:MType> */
var98 = var_t2 == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
} else {
{
var99 = ((short int(*)(val* self))(var_t2->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t2); /* is_c_primitive on <var_t2:MType>*/
}
if (var99){
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " = 0; /* incompatible types ";
var105 = core__flat___NativeString___to_s_full(var104, 28l, 28l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[1]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " vs. ";
var109 = core__flat___NativeString___to_s_full(var108, 5l, 5l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var101)->values[3]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "*/";
var113 = core__flat___NativeString___to_s_full(var112, 2l, 2l);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var101)->values[5]=var111;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var114 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var101)->values[0]=var114;
{
var115 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var101)->values[2]=var115;
{
var116 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:MType>*/
}
((struct instance_core__NativeArray*)var101)->values[4]=var116;
{
var117 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var117); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline separate_compiler$MType$is_tagged (var_t1) on <var_t1:MType> */
var120 = var_t1->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t1:MType> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (var118){
if (unlikely(varonce121==NULL)) {
var122 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "(";
var126 = core__flat___NativeString___to_s_full(var125, 1l, 1l);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var122)->values[0]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = " == ";
var130 = core__flat___NativeString___to_s_full(var129, 4l, 4l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var122)->values[2]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ")";
var134 = core__flat___NativeString___to_s_full(var133, 1l, 1l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var122)->values[4]=var132;
} else {
var122 = varonce121;
varonce121 = NULL;
}
{
var135 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_core__NativeArray*)var122)->values[1]=var135;
{
{ /* Inline separate_compiler$MType$tag_value (var_t1) on <var_t1:MType> */
var138 = var_t1->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l; /* _tag_value on <var_t1:MType> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
var139 = core__flat___Int___core__abstract_text__Object__to_s(var136);
((struct instance_core__NativeArray*)var122)->values[3]=var139;
{
var140 = ((val*(*)(val* self))(var122->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tests, var140); /* Direct call array$Array$add on <var_tests:Array[String]>*/
}
} else {
if (unlikely(varonce141==NULL)) {
var142 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "class_";
var146 = core__flat___NativeString___to_s_full(var145, 6l, 6l);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var142)->values[0]=var144;
} else {
var142 = varonce141;
varonce141 = NULL;
}
{
var147 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t1); /* c_name on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var142)->values[1]=var147;
{
var148 = ((val*(*)(val* self))(var142->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var142); /* native_to_s on <var142:NativeArray[String]>*/
}
varonce141 = var142;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var148); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce149==NULL)) {
var150 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "(";
var154 = core__flat___NativeString___to_s_full(var153, 1l, 1l);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var150)->values[0]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = " == &class_";
var158 = core__flat___NativeString___to_s_full(var157, 11l, 11l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var150)->values[2]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ")";
var162 = core__flat___NativeString___to_s_full(var161, 1l, 1l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var150)->values[4]=var160;
} else {
var150 = varonce149;
varonce149 = NULL;
}
{
var163 = nitc___nitc__SeparateCompilerVisitor___class_info(self, var_value2);
}
((struct instance_core__NativeArray*)var150)->values[1]=var163;
{
var164 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t1); /* c_name on <var_t1:MType>*/
}
((struct instance_core__NativeArray*)var150)->values[3]=var164;
{
var165 = ((val*(*)(val* self))(var150->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tests, var165); /* Direct call array$Array$add on <var_tests:Array[String]>*/
}
}
}
}
{
var166 = core___core__Collection___not_empty(var_tests);
}
if (var166){
if (unlikely(varonce167==NULL)) {
var168 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "if (";
var172 = core__flat___NativeString___to_s_full(var171, 4l, 4l);
var170 = var172;
varonce169 = var170;
}
((struct instance_core__NativeArray*)var168)->values[0]=var170;
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = ") {";
var176 = core__flat___NativeString___to_s_full(var175, 3l, 3l);
var174 = var176;
varonce173 = var174;
}
((struct instance_core__NativeArray*)var168)->values[2]=var174;
} else {
var168 = varonce167;
varonce167 = NULL;
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = " && ";
var180 = core__flat___NativeString___to_s_full(var179, 4l, 4l);
var178 = var180;
varonce177 = var178;
}
{
var181 = core__abstract_text___Collection___join(var_tests, var178, ((val*)NULL));
}
((struct instance_core__NativeArray*)var168)->values[1]=var181;
{
var182 = ((val*(*)(val* self))(var168->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var168); /* native_to_s on <var168:NativeArray[String]>*/
}
varonce167 = var168;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var182); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce183==NULL)) {
var184 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = " = ";
var188 = core__flat___NativeString___to_s_full(var187, 3l, 3l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var184)->values[1]=var186;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = " == ";
var192 = core__flat___NativeString___to_s_full(var191, 4l, 4l);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var184)->values[3]=var190;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = ";";
var196 = core__flat___NativeString___to_s_full(var195, 1l, 1l);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var184)->values[5]=var194;
} else {
var184 = varonce183;
varonce183 = NULL;
}
{
var197 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var184)->values[0]=var197;
{
var198 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value2, var_t1);
}
{
var199 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__Object__to_s]))(var198); /* to_s on <var198:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var184)->values[2]=var199;
{
var200 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var184)->values[4]=var200;
{
var201 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var184); /* native_to_s on <var184:NativeArray[String]>*/
}
varonce183 = var184;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var201); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var202 = core___core__Collection___not_empty(var_tests);
}
if (var202){
if (unlikely(varonce203==NULL)) {
var204 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "} else ";
var208 = core__flat___NativeString___to_s_full(var207, 7l, 7l);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var204)->values[0]=var206;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = " = 0;";
var212 = core__flat___NativeString___to_s_full(var211, 5l, 5l);
var210 = var212;
varonce209 = var210;
}
((struct instance_core__NativeArray*)var204)->values[2]=var210;
} else {
var204 = varonce203;
varonce203 = NULL;
}
{
var213 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var204)->values[1]=var213;
{
var214 = ((val*(*)(val* self))(var204->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var204); /* native_to_s on <var204:NativeArray[String]>*/
}
varonce203 = var204;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var214); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
var_maybe_null = 1;
var215 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var215); /* Direct call array$Array$init on <var215:Array[String]>*/
}
var_test = var215;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var218 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var218 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
var_t1219 = var216;
/* <var_t1219:MType> isa MNullableType */
cltype221 = type_nitc__MNullableType.color;
idtype222 = type_nitc__MNullableType.id;
if(cltype221 >= var_t1219->type->table_size) {
var220 = 0;
} else {
var220 = var_t1219->type->type_table[cltype221] == idtype222;
}
if (var220){
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = " != NULL";
var228 = core__flat___NativeString___to_s_full(var227, 8l, 8l);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[1]=var226;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
var229 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var224)->values[0]=var229;
{
var230 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var230); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
{
{ /* Inline model$MProxyType$mtype (var_t1219) on <var_t1219:MType(MNullableType)> */
var233 = var_t1219->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t1219:MType(MNullableType)> */
if (unlikely(var233 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
var_t1219 = var231;
} else {
var_maybe_null = 0;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var236 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var236 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
var_t2237 = var234;
/* <var_t2237:MType> isa MNullableType */
cltype239 = type_nitc__MNullableType.color;
idtype240 = type_nitc__MNullableType.id;
if(cltype239 >= var_t2237->type->table_size) {
var238 = 0;
} else {
var238 = var_t2237->type->type_table[cltype239] == idtype240;
}
if (var238){
if (unlikely(varonce241==NULL)) {
var242 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = " != NULL";
var246 = core__flat___NativeString___to_s_full(var245, 8l, 8l);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var242)->values[1]=var244;
} else {
var242 = varonce241;
varonce241 = NULL;
}
{
var247 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var242)->values[0]=var247;
{
var248 = ((val*(*)(val* self))(var242->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var242); /* native_to_s on <var242:NativeArray[String]>*/
}
varonce241 = var242;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var248); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
{
{ /* Inline model$MProxyType$mtype (var_t2237) on <var_t2237:MType(MNullableType)> */
var251 = var_t2237->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t2237:MType(MNullableType)> */
if (unlikely(var251 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
var_t2237 = var249;
} else {
var_maybe_null = 0;
}
var_incompatible = 0;
{
var252 = ((short int(*)(val* self))(var_t1219->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t1219); /* is_c_primitive on <var_t1219:MType>*/
}
if (var252){
var_primitive = var_t1219;
{
{ /* Inline kernel$Object$== (var_t1219,var_t2237) on <var_t1219:MType> */
var_other = var_t2237;
{
{ /* Inline kernel$Object$is_same_instance (var_t1219,var_other) on <var_t1219:MType> */
var257 = var_t1219 == var_other;
var255 = var257;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
var253 = var255;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
if (var253){
} else {
{
var258 = ((short int(*)(val* self))(var_t2237->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t2237); /* is_c_primitive on <var_t2237:MType>*/
}
if (var258){
var_incompatible = 1;
} else {
{
var259 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
if (var259){
{
{ /* Inline separate_compiler$MType$is_tagged (var_t1219) on <var_t1219:MType> */
var262 = var_t1219->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t1219:MType> */
var260 = var262;
RET_LABEL261:(void)0;
}
}
if (var260){
if (unlikely(varonce263==NULL)) {
var264 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = " = ";
var268 = core__flat___NativeString___to_s_full(var267, 3l, 3l);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var264)->values[1]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " == ";
var272 = core__flat___NativeString___to_s_full(var271, 4l, 4l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var264)->values[3]=var270;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = ";";
var276 = core__flat___NativeString___to_s_full(var275, 1l, 1l);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var264)->values[5]=var274;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
var277 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var264)->values[0]=var277;
{
var278 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var264)->values[2]=var278;
{
var279 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var264)->values[4]=var279;
{
var280 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var280); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var283 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var283 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var281) on <var281:AbstractCompiler(SeparateCompiler)> */
var286 = var281->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var281:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var286 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var284) on <var284:ModelBuilder> */
var289 = var284->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var284:ModelBuilder> */
if (unlikely(var289 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var287) on <var287:ToolContext> */
var292 = var287->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var287:ToolContext> */
if (unlikely(var292 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline opts$Option$value (var290) on <var290:OptionBool> */
var295 = var290->attrs[COLOR_opts__Option___value].val; /* _value on <var290:OptionBool> */
var293 = var295;
RET_LABEL294:(void)0;
}
}
var296 = (short int)((int64_t)(var293)>>2);
var297 = !var296;
if (var297){
if (unlikely(varonce298==NULL)) {
var299 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "(!";
var303 = core__flat___NativeString___to_s_full(var302, 2l, 2l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var299)->values[0]=var301;
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = ")";
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
var308 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_core__NativeArray*)var299)->values[1]=var308;
{
var309 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var299); /* native_to_s on <var299:NativeArray[String]>*/
}
varonce298 = var299;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var309); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce310==NULL)) {
var311 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "->class == ";
var315 = core__flat___NativeString___to_s_full(var314, 11l, 11l);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var311)->values[1]=var313;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "->class";
var319 = core__flat___NativeString___to_s_full(var318, 7l, 7l);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var311)->values[3]=var317;
} else {
var311 = varonce310;
varonce310 = NULL;
}
{
var320 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var311)->values[0]=var320;
{
var321 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var311)->values[2]=var321;
{
var322 = ((val*(*)(val* self))(var311->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var311); /* native_to_s on <var311:NativeArray[String]>*/
}
varonce310 = var311;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var322); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
var_incompatible = 1;
}
}
}
} else {
{
var323 = ((short int(*)(val* self))(var_t2237->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_t2237); /* is_c_primitive on <var_t2237:MType>*/
}
if (var323){
var_primitive = var_t2237;
{
var324 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
if (var324){
{
{ /* Inline separate_compiler$MType$is_tagged (var_t2237) on <var_t2237:MType> */
var327 = var_t2237->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t2237:MType> */
var325 = var327;
RET_LABEL326:(void)0;
}
}
if (var325){
if (unlikely(varonce328==NULL)) {
var329 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = " = ";
var333 = core__flat___NativeString___to_s_full(var332, 3l, 3l);
var331 = var333;
varonce330 = var331;
}
((struct instance_core__NativeArray*)var329)->values[1]=var331;
if (likely(varonce334!=NULL)) {
var335 = varonce334;
} else {
var336 = " == ";
var337 = core__flat___NativeString___to_s_full(var336, 4l, 4l);
var335 = var337;
varonce334 = var335;
}
((struct instance_core__NativeArray*)var329)->values[3]=var335;
if (likely(varonce338!=NULL)) {
var339 = varonce338;
} else {
var340 = ";";
var341 = core__flat___NativeString___to_s_full(var340, 1l, 1l);
var339 = var341;
varonce338 = var339;
}
((struct instance_core__NativeArray*)var329)->values[5]=var339;
} else {
var329 = varonce328;
varonce328 = NULL;
}
{
var342 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var329)->values[0]=var342;
{
var343 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var329)->values[2]=var343;
{
var344 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var329)->values[4]=var344;
{
var345 = ((val*(*)(val* self))(var329->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var329); /* native_to_s on <var329:NativeArray[String]>*/
}
varonce328 = var329;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var345); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var348 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var348 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var346) on <var346:AbstractCompiler(SeparateCompiler)> */
var351 = var346->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var346:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var351 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var349) on <var349:ModelBuilder> */
var354 = var349->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var349:ModelBuilder> */
if (unlikely(var354 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var352) on <var352:ToolContext> */
var357 = var352->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var352:ToolContext> */
if (unlikely(var357 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
{ /* Inline opts$Option$value (var355) on <var355:OptionBool> */
var360 = var355->attrs[COLOR_opts__Option___value].val; /* _value on <var355:OptionBool> */
var358 = var360;
RET_LABEL359:(void)0;
}
}
var361 = (short int)((int64_t)(var358)>>2);
var362 = !var361;
if (var362){
if (unlikely(varonce363==NULL)) {
var364 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "(!";
var368 = core__flat___NativeString___to_s_full(var367, 2l, 2l);
var366 = var368;
varonce365 = var366;
}
((struct instance_core__NativeArray*)var364)->values[0]=var366;
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = ")";
var372 = core__flat___NativeString___to_s_full(var371, 1l, 1l);
var370 = var372;
varonce369 = var370;
}
((struct instance_core__NativeArray*)var364)->values[2]=var370;
} else {
var364 = varonce363;
varonce363 = NULL;
}
{
var373 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value1);
}
((struct instance_core__NativeArray*)var364)->values[1]=var373;
{
var374 = ((val*(*)(val* self))(var364->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var364); /* native_to_s on <var364:NativeArray[String]>*/
}
varonce363 = var364;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var374); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce375==NULL)) {
var376 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "->class == ";
var380 = core__flat___NativeString___to_s_full(var379, 11l, 11l);
var378 = var380;
varonce377 = var378;
}
((struct instance_core__NativeArray*)var376)->values[1]=var378;
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "->class";
var384 = core__flat___NativeString___to_s_full(var383, 7l, 7l);
var382 = var384;
varonce381 = var382;
}
((struct instance_core__NativeArray*)var376)->values[3]=var382;
} else {
var376 = varonce375;
varonce375 = NULL;
}
{
var385 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var376)->values[0]=var385;
{
var386 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var376)->values[2]=var386;
{
var387 = ((val*(*)(val* self))(var376->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var376); /* native_to_s on <var376:NativeArray[String]>*/
}
varonce375 = var376;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var387); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
var_incompatible = 1;
}
} else {
var_primitive = ((val*)NULL);
}
}
if (var_incompatible){
if (var_maybe_null){
if (unlikely(varonce388==NULL)) {
var389 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = " = ";
var393 = core__flat___NativeString___to_s_full(var392, 3l, 3l);
var391 = var393;
varonce390 = var391;
}
((struct instance_core__NativeArray*)var389)->values[1]=var391;
if (likely(varonce394!=NULL)) {
var395 = varonce394;
} else {
var396 = " == ";
var397 = core__flat___NativeString___to_s_full(var396, 4l, 4l);
var395 = var397;
varonce394 = var395;
}
((struct instance_core__NativeArray*)var389)->values[3]=var395;
if (likely(varonce398!=NULL)) {
var399 = varonce398;
} else {
var400 = "; /* incompatible types ";
var401 = core__flat___NativeString___to_s_full(var400, 24l, 24l);
var399 = var401;
varonce398 = var399;
}
((struct instance_core__NativeArray*)var389)->values[5]=var399;
if (likely(varonce402!=NULL)) {
var403 = varonce402;
} else {
var404 = " vs. ";
var405 = core__flat___NativeString___to_s_full(var404, 5l, 5l);
var403 = var405;
varonce402 = var403;
}
((struct instance_core__NativeArray*)var389)->values[7]=var403;
if (likely(varonce406!=NULL)) {
var407 = varonce406;
} else {
var408 = "; but may be NULL*/";
var409 = core__flat___NativeString___to_s_full(var408, 19l, 19l);
var407 = var409;
varonce406 = var407;
}
((struct instance_core__NativeArray*)var389)->values[9]=var407;
} else {
var389 = varonce388;
varonce388 = NULL;
}
{
var410 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var389)->values[0]=var410;
{
var411 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var389)->values[2]=var411;
{
var412 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var389)->values[4]=var412;
{
var413 = ((val*(*)(val* self))(var_t1219->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1219); /* to_s on <var_t1219:MType>*/
}
((struct instance_core__NativeArray*)var389)->values[6]=var413;
{
var414 = ((val*(*)(val* self))(var_t2237->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2237); /* to_s on <var_t2237:MType>*/
}
((struct instance_core__NativeArray*)var389)->values[8]=var414;
{
var415 = ((val*(*)(val* self))(var389->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var389); /* native_to_s on <var389:NativeArray[String]>*/
}
varonce388 = var389;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var415); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
if (unlikely(varonce416==NULL)) {
var417 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce418!=NULL)) {
var419 = varonce418;
} else {
var420 = " = 0; /* incompatible types ";
var421 = core__flat___NativeString___to_s_full(var420, 28l, 28l);
var419 = var421;
varonce418 = var419;
}
((struct instance_core__NativeArray*)var417)->values[1]=var419;
if (likely(varonce422!=NULL)) {
var423 = varonce422;
} else {
var424 = " vs. ";
var425 = core__flat___NativeString___to_s_full(var424, 5l, 5l);
var423 = var425;
varonce422 = var423;
}
((struct instance_core__NativeArray*)var417)->values[3]=var423;
if (likely(varonce426!=NULL)) {
var427 = varonce426;
} else {
var428 = "; cannot be NULL */";
var429 = core__flat___NativeString___to_s_full(var428, 19l, 19l);
var427 = var429;
varonce426 = var427;
}
((struct instance_core__NativeArray*)var417)->values[5]=var427;
} else {
var417 = varonce416;
varonce416 = NULL;
}
{
var430 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var417)->values[0]=var430;
{
var431 = ((val*(*)(val* self))(var_t1219->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1219); /* to_s on <var_t1219:MType>*/
}
((struct instance_core__NativeArray*)var417)->values[2]=var431;
{
var432 = ((val*(*)(val* self))(var_t2237->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2237); /* to_s on <var_t2237:MType>*/
}
((struct instance_core__NativeArray*)var417)->values[4]=var432;
{
var433 = ((val*(*)(val* self))(var417->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var417); /* native_to_s on <var417:NativeArray[String]>*/
}
varonce416 = var417;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var433); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (var_primitive == NULL) {
var434 = 0; /* is null */
} else {
var434 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_primitive,((val*)NULL)) on <var_primitive:nullable Object(nullable MType)> */
var_other437 = ((val*)NULL);
{
var438 = ((short int(*)(val* self, val* p0))(var_primitive->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_primitive, var_other437); /* == on <var_primitive:nullable Object(MType)>*/
}
var439 = !var438;
var435 = var439;
goto RET_LABEL436;
RET_LABEL436:(void)0;
}
var434 = var435;
}
if (var434){
{
{ /* Inline separate_compiler$MType$is_tagged (var_primitive) on <var_primitive:nullable Object(MType)> */
var442 = var_primitive->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_primitive:nullable Object(MType)> */
var440 = var442;
RET_LABEL441:(void)0;
}
}
if (var440){
if (unlikely(varonce443==NULL)) {
var444 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = " = ";
var448 = core__flat___NativeString___to_s_full(var447, 3l, 3l);
var446 = var448;
varonce445 = var446;
}
((struct instance_core__NativeArray*)var444)->values[1]=var446;
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = " == ";
var452 = core__flat___NativeString___to_s_full(var451, 4l, 4l);
var450 = var452;
varonce449 = var450;
}
((struct instance_core__NativeArray*)var444)->values[3]=var450;
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = ";";
var456 = core__flat___NativeString___to_s_full(var455, 1l, 1l);
var454 = var456;
varonce453 = var454;
}
((struct instance_core__NativeArray*)var444)->values[5]=var454;
} else {
var444 = varonce443;
varonce443 = NULL;
}
{
var457 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var444)->values[0]=var457;
{
var458 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var444)->values[2]=var458;
{
var459 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var444)->values[4]=var459;
{
var460 = ((val*(*)(val* self))(var444->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var444); /* native_to_s on <var444:NativeArray[String]>*/
}
varonce443 = var444;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var460); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce461==NULL)) {
var462 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce463!=NULL)) {
var464 = varonce463;
} else {
var465 = "((struct instance_";
var466 = core__flat___NativeString___to_s_full(var465, 18l, 18l);
var464 = var466;
varonce463 = var464;
}
((struct instance_core__NativeArray*)var462)->values[0]=var464;
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "*)";
var470 = core__flat___NativeString___to_s_full(var469, 2l, 2l);
var468 = var470;
varonce467 = var468;
}
((struct instance_core__NativeArray*)var462)->values[2]=var468;
if (likely(varonce471!=NULL)) {
var472 = varonce471;
} else {
var473 = ")->value == ((struct instance_";
var474 = core__flat___NativeString___to_s_full(var473, 30l, 30l);
var472 = var474;
varonce471 = var472;
}
((struct instance_core__NativeArray*)var462)->values[4]=var472;
if (likely(varonce475!=NULL)) {
var476 = varonce475;
} else {
var477 = "*)";
var478 = core__flat___NativeString___to_s_full(var477, 2l, 2l);
var476 = var478;
varonce475 = var476;
}
((struct instance_core__NativeArray*)var462)->values[6]=var476;
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = ")->value";
var482 = core__flat___NativeString___to_s_full(var481, 8l, 8l);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var462)->values[8]=var480;
} else {
var462 = varonce461;
varonce461 = NULL;
}
{
var483 = ((val*(*)(val* self))(var_primitive->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_primitive); /* c_name on <var_primitive:nullable Object(MType)>*/
}
((struct instance_core__NativeArray*)var462)->values[1]=var483;
{
var484 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var462)->values[3]=var484;
{
var485 = ((val*(*)(val* self))(var_primitive->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_primitive); /* c_name on <var_primitive:nullable Object(MType)>*/
}
((struct instance_core__NativeArray*)var462)->values[5]=var485;
{
var486 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var462)->values[7]=var486;
{
var487 = ((val*(*)(val* self))(var462->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var462); /* native_to_s on <var462:NativeArray[String]>*/
}
varonce461 = var462;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var487); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
{
var489 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
var_490 = var489;
if (var489){
{
var491 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
var488 = var491;
} else {
var488 = var_490;
}
if (var488){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var494 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var494 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var492 = var494;
RET_LABEL493:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var492) on <var492:AbstractCompiler(SeparateCompiler)> */
var497 = var492->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var492:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var497 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 544);
fatal_exit(1);
}
var495 = var497;
RET_LABEL496:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var495) on <var495:ModelBuilder> */
var500 = var495->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var495:ModelBuilder> */
if (unlikely(var500 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var498 = var500;
RET_LABEL499:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var498) on <var498:ToolContext> */
var503 = var498->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var498:ToolContext> */
if (unlikely(var503 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var501 = var503;
RET_LABEL502:(void)0;
}
}
{
{ /* Inline opts$Option$value (var501) on <var501:OptionBool> */
var506 = var501->attrs[COLOR_opts__Option___value].val; /* _value on <var501:OptionBool> */
var504 = var506;
RET_LABEL505:(void)0;
}
}
var507 = (short int)((int64_t)(var504)>>2);
var508 = !var507;
if (var508){
if (unlikely(varonce509==NULL)) {
var510 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce511!=NULL)) {
var512 = varonce511;
} else {
var513 = "(!";
var514 = core__flat___NativeString___to_s_full(var513, 2l, 2l);
var512 = var514;
varonce511 = var512;
}
((struct instance_core__NativeArray*)var510)->values[0]=var512;
if (likely(varonce515!=NULL)) {
var516 = varonce515;
} else {
var517 = ") && (!";
var518 = core__flat___NativeString___to_s_full(var517, 7l, 7l);
var516 = var518;
varonce515 = var516;
}
((struct instance_core__NativeArray*)var510)->values[2]=var516;
if (likely(varonce519!=NULL)) {
var520 = varonce519;
} else {
var521 = ")";
var522 = core__flat___NativeString___to_s_full(var521, 1l, 1l);
var520 = var522;
varonce519 = var520;
}
((struct instance_core__NativeArray*)var510)->values[4]=var520;
} else {
var510 = varonce509;
varonce509 = NULL;
}
{
var523 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value1);
}
((struct instance_core__NativeArray*)var510)->values[1]=var523;
{
var524 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_core__NativeArray*)var510)->values[3]=var524;
{
var525 = ((val*(*)(val* self))(var510->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var510); /* native_to_s on <var510:NativeArray[String]>*/
}
varonce509 = var510;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var525); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce526==NULL)) {
var527 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce528!=NULL)) {
var529 = varonce528;
} else {
var530 = "->class == ";
var531 = core__flat___NativeString___to_s_full(var530, 11l, 11l);
var529 = var531;
varonce528 = var529;
}
((struct instance_core__NativeArray*)var527)->values[1]=var529;
if (likely(varonce532!=NULL)) {
var533 = varonce532;
} else {
var534 = "->class";
var535 = core__flat___NativeString___to_s_full(var534, 7l, 7l);
var533 = var535;
varonce532 = var533;
}
((struct instance_core__NativeArray*)var527)->values[3]=var533;
} else {
var527 = varonce526;
varonce526 = NULL;
}
{
var536 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var527)->values[0]=var536;
{
var537 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var527)->values[2]=var537;
{
var538 = ((val*(*)(val* self))(var527->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var527); /* native_to_s on <var527:NativeArray[String]>*/
}
varonce526 = var527;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var538); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
var539 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var539); /* Direct call array$Array$init on <var539:Array[String]>*/
}
var_s = var539;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var542 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var542 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var540 = var542;
RET_LABEL541:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$box_kinds (var540) on <var540:AbstractCompiler(SeparateCompiler)> */
var545 = var540->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <var540:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var545 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 264);
fatal_exit(1);
}
var543 = var545;
RET_LABEL544:(void)0;
}
}
var_546 = var543;
{
var547 = core___core__HashMap___core__abstract_collection__MapRead__iterator(var_546);
}
var_548 = var547;
for(;;) {
{
var549 = ((short int(*)(val* self))((((int64_t)var_548&3)?class_info[((int64_t)var_548&3)]:var_548->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_548); /* is_ok on <var_548:MapIterator[MClass, Int]>*/
}
if (var549){
} else {
goto BREAK_label;
}
{
var550 = ((val*(*)(val* self))((((int64_t)var_548&3)?class_info[((int64_t)var_548&3)]:var_548->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_548); /* key on <var_548:MapIterator[MClass, Int]>*/
}
var_t = var550;
{
var551 = ((val*(*)(val* self))((((int64_t)var_548&3)?class_info[((int64_t)var_548&3)]:var_548->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_548); /* item on <var_548:MapIterator[MClass, Int]>*/
}
var552 = (int64_t)(var551)>>2;
var_v = var552;
{
{ /* Inline model$MClass$mclass_type (var_t) on <var_t:MClass> */
var555 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var555 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var553 = var555;
RET_LABEL554:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$is_tagged (var553) on <var553:MClassType> */
var558 = var553->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var553:MClassType> */
var556 = var558;
RET_LABEL557:(void)0;
}
}
if (var556){
goto BREAK_label559;
} else {
}
if (unlikely(varonce560==NULL)) {
var561 = NEW_core__NativeArray(13l, &type_core__NativeArray__core__String);
if (likely(varonce562!=NULL)) {
var563 = varonce562;
} else {
var564 = "(";
var565 = core__flat___NativeString___to_s_full(var564, 1l, 1l);
var563 = var565;
varonce562 = var563;
}
((struct instance_core__NativeArray*)var561)->values[0]=var563;
if (likely(varonce566!=NULL)) {
var567 = varonce566;
} else {
var568 = "->class->box_kind == ";
var569 = core__flat___NativeString___to_s_full(var568, 21l, 21l);
var567 = var569;
varonce566 = var567;
}
((struct instance_core__NativeArray*)var561)->values[2]=var567;
if (likely(varonce570!=NULL)) {
var571 = varonce570;
} else {
var572 = " && ((struct instance_";
var573 = core__flat___NativeString___to_s_full(var572, 22l, 22l);
var571 = var573;
varonce570 = var571;
}
((struct instance_core__NativeArray*)var561)->values[4]=var571;
if (likely(varonce574!=NULL)) {
var575 = varonce574;
} else {
var576 = "*)";
var577 = core__flat___NativeString___to_s_full(var576, 2l, 2l);
var575 = var577;
varonce574 = var575;
}
((struct instance_core__NativeArray*)var561)->values[6]=var575;
if (likely(varonce578!=NULL)) {
var579 = varonce578;
} else {
var580 = ")->value == ((struct instance_";
var581 = core__flat___NativeString___to_s_full(var580, 30l, 30l);
var579 = var581;
varonce578 = var579;
}
((struct instance_core__NativeArray*)var561)->values[8]=var579;
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = "*)";
var585 = core__flat___NativeString___to_s_full(var584, 2l, 2l);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var561)->values[10]=var583;
if (likely(varonce586!=NULL)) {
var587 = varonce586;
} else {
var588 = ")->value)";
var589 = core__flat___NativeString___to_s_full(var588, 9l, 9l);
var587 = var589;
varonce586 = var587;
}
((struct instance_core__NativeArray*)var561)->values[12]=var587;
} else {
var561 = varonce560;
varonce560 = NULL;
}
{
var590 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var561)->values[1]=var590;
var591 = core__flat___Int___core__abstract_text__Object__to_s(var_v);
((struct instance_core__NativeArray*)var561)->values[3]=var591;
{
var592 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t);
}
((struct instance_core__NativeArray*)var561)->values[5]=var592;
{
var593 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var561)->values[7]=var593;
{
var594 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t);
}
((struct instance_core__NativeArray*)var561)->values[9]=var594;
{
var595 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var561)->values[11]=var595;
{
var596 = ((val*(*)(val* self))(var561->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var561); /* native_to_s on <var561:NativeArray[String]>*/
}
varonce560 = var561;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_s, var596); /* Direct call array$Array$add on <var_s:Array[String]>*/
}
BREAK_label559: (void)0;
{
((void(*)(val* self))((((int64_t)var_548&3)?class_info[((int64_t)var_548&3)]:var_548->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_548); /* next on <var_548:MapIterator[MClass, Int]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_548) on <var_548:MapIterator[MClass, Int]> */
RET_LABEL597:(void)0;
}
}
{
var598 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_s);
}
if (var598){
if (unlikely(varonce599==NULL)) {
var600 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce601!=NULL)) {
var602 = varonce601;
} else {
var603 = " = ";
var604 = core__flat___NativeString___to_s_full(var603, 3l, 3l);
var602 = var604;
varonce601 = var602;
}
((struct instance_core__NativeArray*)var600)->values[1]=var602;
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = " == ";
var608 = core__flat___NativeString___to_s_full(var607, 4l, 4l);
var606 = var608;
varonce605 = var606;
}
((struct instance_core__NativeArray*)var600)->values[3]=var606;
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = ";";
var612 = core__flat___NativeString___to_s_full(var611, 1l, 1l);
var610 = var612;
varonce609 = var610;
}
((struct instance_core__NativeArray*)var600)->values[5]=var610;
} else {
var600 = varonce599;
varonce599 = NULL;
}
{
var613 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var600)->values[0]=var613;
{
var614 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var600)->values[2]=var614;
{
var615 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var600)->values[4]=var615;
{
var616 = ((val*(*)(val* self))(var600->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var600); /* native_to_s on <var600:NativeArray[String]>*/
}
varonce599 = var600;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var616); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce617==NULL)) {
var618 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce619!=NULL)) {
var620 = varonce619;
} else {
var621 = "(";
var622 = core__flat___NativeString___to_s_full(var621, 1l, 1l);
var620 = var622;
varonce619 = var620;
}
((struct instance_core__NativeArray*)var618)->values[0]=var620;
if (likely(varonce623!=NULL)) {
var624 = varonce623;
} else {
var625 = ")";
var626 = core__flat___NativeString___to_s_full(var625, 1l, 1l);
var624 = var626;
varonce623 = var624;
}
((struct instance_core__NativeArray*)var618)->values[2]=var624;
} else {
var618 = varonce617;
varonce617 = NULL;
}
if (likely(varonce627!=NULL)) {
var628 = varonce627;
} else {
var629 = " || ";
var630 = core__flat___NativeString___to_s_full(var629, 4l, 4l);
var628 = var630;
varonce627 = var628;
}
{
var631 = core__abstract_text___Collection___join(var_s, var628, ((val*)NULL));
}
((struct instance_core__NativeArray*)var618)->values[1]=var631;
{
var632 = ((val*(*)(val* self))(var618->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var618); /* native_to_s on <var618:NativeArray[String]>*/
}
varonce617 = var618;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_test, var632); /* Direct call array$Array$add on <var_test:Array[String]>*/
}
} else {
if (unlikely(varonce633==NULL)) {
var634 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce635!=NULL)) {
var636 = varonce635;
} else {
var637 = " = ";
var638 = core__flat___NativeString___to_s_full(var637, 3l, 3l);
var636 = var638;
varonce635 = var636;
}
((struct instance_core__NativeArray*)var634)->values[1]=var636;
if (likely(varonce639!=NULL)) {
var640 = varonce639;
} else {
var641 = " == ";
var642 = core__flat___NativeString___to_s_full(var641, 4l, 4l);
var640 = var642;
varonce639 = var640;
}
((struct instance_core__NativeArray*)var634)->values[3]=var640;
if (likely(varonce643!=NULL)) {
var644 = varonce643;
} else {
var645 = ";";
var646 = core__flat___NativeString___to_s_full(var645, 1l, 1l);
var644 = var646;
varonce643 = var644;
}
((struct instance_core__NativeArray*)var634)->values[5]=var644;
} else {
var634 = varonce633;
varonce633 = NULL;
}
{
var647 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var634)->values[0]=var647;
{
var648 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var634)->values[2]=var648;
{
var649 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var634)->values[4]=var649;
{
var650 = ((val*(*)(val* self))(var634->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var634); /* native_to_s on <var634:NativeArray[String]>*/
}
varonce633 = var634;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var650); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
}
if (unlikely(varonce651==NULL)) {
var652 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce653!=NULL)) {
var654 = varonce653;
} else {
var655 = " = ";
var656 = core__flat___NativeString___to_s_full(var655, 3l, 3l);
var654 = var656;
varonce653 = var654;
}
((struct instance_core__NativeArray*)var652)->values[1]=var654;
if (likely(varonce657!=NULL)) {
var658 = varonce657;
} else {
var659 = " == ";
var660 = core__flat___NativeString___to_s_full(var659, 4l, 4l);
var658 = var660;
varonce657 = var658;
}
((struct instance_core__NativeArray*)var652)->values[3]=var658;
if (likely(varonce661!=NULL)) {
var662 = varonce661;
} else {
var663 = " || (";
var664 = core__flat___NativeString___to_s_full(var663, 5l, 5l);
var662 = var664;
varonce661 = var662;
}
((struct instance_core__NativeArray*)var652)->values[5]=var662;
if (likely(varonce665!=NULL)) {
var666 = varonce665;
} else {
var667 = ");";
var668 = core__flat___NativeString___to_s_full(var667, 2l, 2l);
var666 = var668;
varonce665 = var666;
}
((struct instance_core__NativeArray*)var652)->values[7]=var666;
} else {
var652 = varonce651;
varonce651 = NULL;
}
{
var669 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var652)->values[0]=var669;
{
var670 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var652)->values[2]=var670;
{
var671 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var652)->values[4]=var671;
if (likely(varonce672!=NULL)) {
var673 = varonce672;
} else {
var674 = " && ";
var675 = core__flat___NativeString___to_s_full(var674, 4l, 4l);
var673 = var675;
varonce672 = var673;
}
{
var676 = core__abstract_text___Collection___join(var_test, var673, ((val*)NULL));
}
((struct instance_core__NativeArray*)var652)->values[6]=var676;
{
var677 = ((val*(*)(val* self))(var652->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var652); /* native_to_s on <var652:NativeArray[String]>*/
}
varonce651 = var652;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var677); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__SeparateCompilerVisitor___can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_t /* var t: MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
val* var10 /* : MClassKind */;
val* var12 /* : MClassKind */;
val* var_k /* var k: MClassKind */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
short int var21 /* : Bool */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__undecorate]))(var1); /* undecorate on <var1:MType>*/
}
var_t = var4;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (var_t) on <var_t:MType(MClassType)> */
var9 = var_t->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_t:MType(MClassType)> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var7) on <var7:MClass> */
var12 = var7->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var7:MClass> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_k = var10;
var14 = glob_sys;
{
var15 = nitc__model___core__Sys___interface_kind(var14);
}
{
{ /* Inline kernel$Object$== (var_k,var15) on <var_k:MClassKind> */
var_other = var15;
{
{ /* Inline kernel$Object$is_same_instance (var_k,var_other) on <var_k:MClassKind> */
var20 = var_k == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ = var16;
if (var16){
var13 = var_;
} else {
{
var21 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_t);
}
var13 = var21;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__SeparateCompilerVisitor___maybe_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_t /* var t: MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1962);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
/* <var_t:MType> isa MNullType */
cltype7 = type_nitc__MNullType.color;
idtype8 = type_nitc__MNullType.id;
if(cltype7 >= var_t->type->table_size) {
var6 = 0;
} else {
var6 = var_t->type->type_table[cltype7] == idtype8;
}
var4 = var6;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MModule */;
val* var2 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var3 /* : MModule */;
val* var4 /* : MClass */;
val* var_arrayclass /* var arrayclass: MClass */;
val* var5 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var6 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
int64_t var24 /* : Int */;
int64_t var26 /* : Int */;
val* var27 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var28 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
int64_t var_i /* var i: Int */;
int64_t var29 /* : Int */;
int64_t var31 /* : Int */;
int64_t var_32 /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var38 /* : MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
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
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
int64_t var67 /* : Int */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : String */;
val* var72 /* : MClassDef */;
val* var74 /* : MClassDef */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
val* var78 /* : MMethod */;
val* var79 /* : Array[RuntimeVariable] */;
val* var_80 /* var : Array[RuntimeVariable] */;
val* var81 /* : nullable RuntimeVariable */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
var_array = p0;
var_elttype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_array_class(var1);
}
var_nclass = var2;
{
var3 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var4 = nitc__model___MModule___array_class(var3);
}
var_arrayclass = var4;
var5 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var5, 1l); /* Direct call array$Array$with_capacity on <var5:Array[MType]>*/
}
var_ = var5;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
}
{
var6 = nitc___nitc__MClass___get_mtype(var_arrayclass, var_);
}
var_arraytype = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype); /* init_instance on <self:SeparateCompilerVisitor>*/
}
var_res = var7;
if (unlikely(varonce==NULL)) {
var8 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "{ /* ";
var12 = core__flat___NativeString___to_s_full(var11, 5l, 5l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " = array_instance Array[";
var16 = core__flat___NativeString___to_s_full(var15, 24l, 24l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "] */";
var20 = core__flat___NativeString___to_s_full(var19, 4l, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[4]=var18;
} else {
var8 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var8)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_elttype); /* to_s on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[3]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[RuntimeVariable]> */
var26 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var24);
}
var_length = var27;
{
var28 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_elttype, var_length); /* native_array_instance on <self:SeparateCompilerVisitor>*/
}
var_nat = var28;
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[RuntimeVariable]> */
var31 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_32 = var29;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_32) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_32:Int> isa OTHER */
/* <var_32:Int> isa OTHER */
var35 = 1; /* easy <var_32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var36 = var_i < var_32;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label;
}
{
var37 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
var38 = nitc___nitc__AbstractCompilerVisitor___object_type(self);
}
{
var39 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var37, var38);
}
var_r = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "((struct instance_";
var45 = core__flat___NativeString___to_s_full(var44, 18l, 18l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = core__flat___NativeString___to_s_full(var48, 2l, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var41)->values[2]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")->values[";
var53 = core__flat___NativeString___to_s_full(var52, 10l, 10l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[4]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "] = (val*) ";
var57 = core__flat___NativeString___to_s_full(var56, 11l, 11l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var41)->values[6]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ";";
var61 = core__flat___NativeString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var41)->values[8]=var59;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var62 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var41)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var41)->values[3]=var63;
var64 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var41)->values[5]=var64;
{
var65 = ((val*(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_r); /* to_s on <var_r:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var41)->values[7]=var65;
{
var66 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var66); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
var67 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var67;
}
BREAK_label: (void)0;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "with_native";
var71 = core__flat___NativeString___to_s_full(var70, 11l, 11l);
var69 = var71;
varonce68 = var69;
}
{
{ /* Inline model$MClass$intro (var_arrayclass) on <var_arrayclass:MClass> */
var74 = var_arrayclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_arrayclass:MClass> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var72) on <var72:MClassDef> */
var77 = var72->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var72:MClassDef> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = nitc___nitc__AbstractCompilerVisitor___get_property(self, var69, var75);
}
var79 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var79, 3l); /* Direct call array$Array$with_capacity on <var79:Array[RuntimeVariable]>*/
}
var_80 = var79;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_80, var_res); /* Direct call array$AbstractArray$push on <var_80:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_80, var_nat); /* Direct call array$AbstractArray$push on <var_80:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_80, var_length); /* Direct call array$AbstractArray$push on <var_80:Array[RuntimeVariable]>*/
}
{
var81 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var78, var_80);
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "}";
var85 = core__flat___NativeString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var83); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
val* var11 /* : String */;
val* var12 /* : String */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : MClassType */;
val* var21 /* : RuntimeVariable */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable StaticFrame */;
val* var27 /* : nullable StaticFrame */;
val* var28 /* : MPropDef */;
val* var30 /* : MPropDef */;
val* var31 /* : MClassDef */;
val* var33 /* : MClassDef */;
val* var34 /* : nullable StaticFrame */;
val* var36 /* : nullable StaticFrame */;
val* var37 /* : Array[RuntimeVariable] */;
val* var39 /* : Array[RuntimeVariable] */;
val* var40 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var41 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var42 /* : String */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : String */;
val* var65 /* : MClass */;
val* var67 /* : MClass */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : RuntimeVariable */;
val* var73 /* : Set[MType] */;
val* var75 /* : Set[MType] */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : MClass */;
val* var104 /* : MClass */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : RuntimeVariable */;
var_elttype = p0;
var_length = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_array_type(var1, var_elttype);
}
var_mtype = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "NEW_";
var7 = core__flat___NativeString___to_s_full(var6, 4l, 4l);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[0]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var10 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var8);
}
((struct instance_core__NativeArray*)var3)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var12); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var13)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2092);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
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
var_compiler = var14;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var_compiler) on <var_compiler:SeparateCompiler> */
var19 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:SeparateCompiler> */
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
var20 = nitc__model___MModule___int_type(var17);
}
{
var21 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_length, var20);
}
var_length = var21;
{
{ /* Inline model$MGenericType$need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var24 = var_mtype->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22){
{
nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var27 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2097);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var25) on <var25:nullable StaticFrame> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var25:nullable StaticFrame> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var28) on <var28:MPropDef> */
var33 = var28->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var28:MPropDef> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(self, var31, var_mtype); /* Direct call separate_compiler$SeparateCompilerVisitor$link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2098);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$arguments (var34) on <var34:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2010);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var34:nullable StaticFrame> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2010);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = core___core__SequenceRead___Collection__first(var37);
}
var_recv = var40;
{
var41 = nitc___nitc__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var41;
{
var42 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var42); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "NEW_";
var48 = core__flat___NativeString___to_s_full(var47, 4l, 4l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "(";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = ", ";
var56 = core__flat___NativeString___to_s_full(var55, 2l, 2l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var44)->values[4]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "->resolution_table->types[";
var60 = core__flat___NativeString___to_s_full(var59, 26l, 26l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var44)->values[6]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "])";
var64 = core__flat___NativeString___to_s_full(var63, 2l, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var44)->values[8]=var62;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var67 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var65);
}
((struct instance_core__NativeArray*)var44)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var_length->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var44)->values[3]=var69;
((struct instance_core__NativeArray*)var44)->values[5]=var_recv_type_info;
{
var70 = nitc__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_core__NativeArray*)var44)->values[7]=var70;
{
var71 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
var72 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var71, var_mtype);
}
var = var72;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var75 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((int64_t)var73&3)?class_info[((int64_t)var73&3)]:var73->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var73, var_mtype); /* add on <var73:Set[MType]>*/
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "type_";
var81 = core__flat___NativeString___to_s_full(var80, 5l, 5l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var82 = nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name(var_mtype);
}
((struct instance_core__NativeArray*)var77)->values[1]=var82;
{
var83 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var83); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "NEW_";
var89 = core__flat___NativeString___to_s_full(var88, 4l, 4l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "(";
var93 = core__flat___NativeString___to_s_full(var92, 1l, 1l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var85)->values[2]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ", &type_";
var97 = core__flat___NativeString___to_s_full(var96, 8l, 8l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var85)->values[4]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ")";
var101 = core__flat___NativeString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var85)->values[6]=var99;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var104 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var102);
}
((struct instance_core__NativeArray*)var85)->values[1]=var105;
{
var106 = ((val*(*)(val* self))(var_length->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var85)->values[3]=var106;
{
var107 = nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name(var_mtype);
}
((struct instance_core__NativeArray*)var85)->values[5]=var107;
{
var108 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
var109 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var108, var_mtype);
}
var = var109;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$native_array_def for (self: SeparateCompilerVisitor, String, nullable MType, Array[RuntimeVariable]): Bool */
short int nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var5 /* : MModule */;
val* var6 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : nullable Object */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
short int var28 /* : Bool */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
val* var39 /* : nullable Object */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : AbstractCompiler */;
val* var44 /* : AbstractCompiler */;
val* var45 /* : MModule */;
val* var47 /* : MModule */;
val* var48 /* : MClassType */;
val* var49 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
short int var55 /* : Bool */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : nullable Object */;
val* var71 /* : String */;
val* var72 /* : nullable Object */;
val* var73 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
short int var79 /* : Bool */;
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
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : nullable Object */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : RuntimeVariable */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : String */;
short int var103 /* : Bool */;
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
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var119 /* : nullable Object */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var_recv1 /* var recv1: String */;
val* var123 /* : NativeArray[String] */;
static val* varonce122;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : String */;
val* var144 /* : nullable Object */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : String */;
short int var152 /* : Bool */;
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
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
val* var167 /* : String */;
val* var168 /* : nullable Object */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var_recv1171 /* var recv1: String */;
val* var173 /* : NativeArray[String] */;
static val* varonce172;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
val* var193 /* : String */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : String */;
val* var202 /* : nullable Object */;
val* var203 /* : String */;
val* var204 /* : nullable Object */;
val* var205 /* : String */;
val* var206 /* : nullable Object */;
val* var207 /* : String */;
val* var208 /* : String */;
val* var209 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_elttype = var2;
{
var5 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var6 = nitc__model___MModule___native_array_class(var5);
}
var_nclass = var6;
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "((struct instance_";
var11 = core__flat___NativeString___to_s_full(var10, 18l, 18l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "*)";
var15 = core__flat___NativeString___to_s_full(var14, 2l, 2l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var7)->values[2]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = ")->values";
var19 = core__flat___NativeString___to_s_full(var18, 9l, 9l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var7)->values[4]=var17;
} else {
var7 = varonce;
varonce = NULL;
}
{
var20 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var7)->values[1]=var20;
{
var21 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__Object__to_s]))(var21); /* to_s on <var21:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var7)->values[3]=var22;
{
var23 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
var_recv = var23;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "[]";
var27 = core__flat___NativeString___to_s_full(var26, 2l, 2l);
var25 = var27;
varonce24 = var25;
}
{
var28 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var25); /* == on <var_pname:String>*/
}
if (var28){
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "[";
var34 = core__flat___NativeString___to_s_full(var33, 1l, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[1]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "]";
var38 = core__flat___NativeString___to_s_full(var37, 1l, 1l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var30)->values[3]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
((struct instance_core__NativeArray*)var30)->values[0]=var_recv;
{
var39 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var40 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__Object__to_s]))(var39); /* to_s on <var39:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var30)->values[2]=var40;
{
var41 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var44 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1190);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var42) on <var42:AbstractCompiler(SeparateCompiler)> */
var47 = var42->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var42:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 537);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nitc__model___MModule___object_type(var45);
}
{
var49 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var41, var48);
}
var_res = var49;
if (unlikely(var_ret_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2116);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res,var_ret_type) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var_ret_type; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL50:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___ret(self, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "[]=";
var54 = core__flat___NativeString___to_s_full(var53, 3l, 3l);
var52 = var54;
varonce51 = var52;
}
{
var55 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var52); /* == on <var_pname:String>*/
}
if (var55){
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "[";
var61 = core__flat___NativeString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[1]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "]=";
var65 = core__flat___NativeString___to_s_full(var64, 2l, 2l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[3]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ";";
var69 = core__flat___NativeString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var57)->values[5]=var67;
} else {
var57 = varonce56;
varonce56 = NULL;
}
((struct instance_core__NativeArray*)var57)->values[0]=var_recv;
{
var70 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var71 = ((val*(*)(val* self))(var70->class->vft[COLOR_core__abstract_text__Object__to_s]))(var70); /* to_s on <var70:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var57)->values[2]=var71;
{
var72 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var73 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__Object__to_s]))(var72); /* to_s on <var72:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var57)->values[4]=var73;
{
var74 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var74); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "length";
var78 = core__flat___NativeString___to_s_full(var77, 6l, 6l);
var76 = var78;
varonce75 = var76;
}
{
var79 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var76); /* == on <var_pname:String>*/
}
if (var79){
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "((struct instance_";
var85 = core__flat___NativeString___to_s_full(var84, 18l, 18l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "*)";
var89 = core__flat___NativeString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var81)->values[2]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = ")->length";
var93 = core__flat___NativeString___to_s_full(var92, 9l, 9l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var81)->values[4]=var91;
} else {
var81 = varonce80;
varonce80 = NULL;
}
{
var94 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var81)->values[1]=var94;
{
var95 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var96 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__Object__to_s]))(var95); /* to_s on <var95:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var81)->values[3]=var96;
{
var97 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
if (unlikely(var_ret_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2123);
fatal_exit(1);
}
{
var98 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var97, var_ret_type);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(self, var98); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "copy_to";
var102 = core__flat___NativeString___to_s_full(var101, 7l, 7l);
var100 = var102;
varonce99 = var100;
}
{
var103 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var100); /* == on <var_pname:String>*/
}
if (var103){
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "((struct instance_";
var109 = core__flat___NativeString___to_s_full(var108, 18l, 18l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "*)";
var113 = core__flat___NativeString___to_s_full(var112, 2l, 2l);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var105)->values[2]=var111;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = ")->values";
var117 = core__flat___NativeString___to_s_full(var116, 9l, 9l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var105)->values[4]=var115;
} else {
var105 = varonce104;
varonce104 = NULL;
}
{
var118 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var105)->values[1]=var118;
{
var119 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var120 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__Object__to_s]))(var119); /* to_s on <var119:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var105)->values[3]=var120;
{
var121 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
var_recv1 = var121;
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "memmove(";
var127 = core__flat___NativeString___to_s_full(var126, 8l, 8l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = ", ";
var131 = core__flat___NativeString___to_s_full(var130, 2l, 2l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var123)->values[2]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = ", ";
var135 = core__flat___NativeString___to_s_full(var134, 2l, 2l);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var123)->values[4]=var133;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "*sizeof(";
var139 = core__flat___NativeString___to_s_full(var138, 8l, 8l);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var123)->values[6]=var137;
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "));";
var143 = core__flat___NativeString___to_s_full(var142, 3l, 3l);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var123)->values[8]=var141;
} else {
var123 = varonce122;
varonce122 = NULL;
}
((struct instance_core__NativeArray*)var123)->values[1]=var_recv1;
((struct instance_core__NativeArray*)var123)->values[3]=var_recv;
{
var144 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var145 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__Object__to_s]))(var144); /* to_s on <var144:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var123)->values[5]=var145;
{
var146 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var123)->values[7]=var146;
{
var147 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var147); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "memmove";
var151 = core__flat___NativeString___to_s_full(var150, 7l, 7l);
var149 = var151;
varonce148 = var149;
}
{
var152 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var149); /* == on <var_pname:String>*/
}
if (var152){
if (unlikely(varonce153==NULL)) {
var154 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "((struct instance_";
var158 = core__flat___NativeString___to_s_full(var157, 18l, 18l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var154)->values[0]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "*)";
var162 = core__flat___NativeString___to_s_full(var161, 2l, 2l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var154)->values[2]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = ")->values";
var166 = core__flat___NativeString___to_s_full(var165, 9l, 9l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var154)->values[4]=var164;
} else {
var154 = varonce153;
varonce153 = NULL;
}
{
var167 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var154)->values[1]=var167;
{
var168 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var169 = ((val*(*)(val* self))(var168->class->vft[COLOR_core__abstract_text__Object__to_s]))(var168); /* to_s on <var168:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var154)->values[3]=var169;
{
var170 = ((val*(*)(val* self))(var154->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var154); /* native_to_s on <var154:NativeArray[String]>*/
}
varonce153 = var154;
var_recv1171 = var170;
if (unlikely(varonce172==NULL)) {
var173 = NEW_core__NativeArray(13l, &type_core__NativeArray__core__String);
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "memmove(";
var177 = core__flat___NativeString___to_s_full(var176, 8l, 8l);
var175 = var177;
varonce174 = var175;
}
((struct instance_core__NativeArray*)var173)->values[0]=var175;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "+";
var181 = core__flat___NativeString___to_s_full(var180, 1l, 1l);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var173)->values[2]=var179;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = ", ";
var185 = core__flat___NativeString___to_s_full(var184, 2l, 2l);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var173)->values[4]=var183;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "+";
var189 = core__flat___NativeString___to_s_full(var188, 1l, 1l);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var173)->values[6]=var187;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = ", ";
var193 = core__flat___NativeString___to_s_full(var192, 2l, 2l);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var173)->values[8]=var191;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "*sizeof(";
var197 = core__flat___NativeString___to_s_full(var196, 8l, 8l);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var173)->values[10]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "));";
var201 = core__flat___NativeString___to_s_full(var200, 3l, 3l);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var173)->values[12]=var199;
} else {
var173 = varonce172;
varonce172 = NULL;
}
((struct instance_core__NativeArray*)var173)->values[1]=var_recv1171;
{
var202 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var203 = ((val*(*)(val* self))(var202->class->vft[COLOR_core__abstract_text__Object__to_s]))(var202); /* to_s on <var202:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var173)->values[3]=var203;
((struct instance_core__NativeArray*)var173)->values[5]=var_recv;
{
var204 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var205 = ((val*(*)(val* self))(var204->class->vft[COLOR_core__abstract_text__Object__to_s]))(var204); /* to_s on <var204:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var173)->values[7]=var205;
{
var206 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var207 = ((val*(*)(val* self))(var206->class->vft[COLOR_core__abstract_text__Object__to_s]))(var206); /* to_s on <var206:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var173)->values[9]=var207;
{
var208 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var173)->values[11]=var208;
{
var209 = ((val*(*)(val* self))(var173->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var173); /* native_to_s on <var173:NativeArray[String]>*/
}
varonce172 = var173;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var209); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$native_array_set for (self: SeparateCompilerVisitor, RuntimeVariable, Int, RuntimeVariable) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(val* self, val* p0, int64_t p1, val* p2) {
val* var_nat /* var nat: RuntimeVariable */;
int64_t var_i /* var i: Int */;
val* var_val /* var val: RuntimeVariable */;
val* var /* : MModule */;
val* var1 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
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
val* var17 /* : String */;
val* var_recv /* var recv: String */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
var_nat = p0;
var_i = p1;
var_val = p2;
{
var = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var1 = nitc__model___MModule___native_array_class(var);
}
var_nclass = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "((struct instance_";
var6 = core__flat___NativeString___to_s_full(var5, 18l, 18l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "*)";
var10 = core__flat___NativeString___to_s_full(var9, 2l, 2l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var2)->values[2]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ")->values";
var14 = core__flat___NativeString___to_s_full(var13, 9l, 9l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[4]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var15 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var2)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2)->values[3]=var16;
{
var17 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
var_recv = var17;
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "[";
var23 = core__flat___NativeString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[1]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "]=";
var27 = core__flat___NativeString___to_s_full(var26, 2l, 2l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var19)->values[3]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ";";
var31 = core__flat___NativeString___to_s_full(var30, 1l, 1l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[5]=var29;
} else {
var19 = varonce18;
varonce18 = NULL;
}
((struct instance_core__NativeArray*)var19)->values[0]=var_recv;
var32 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var19)->values[2]=var32;
{
var33 = ((val*(*)(val* self))(var_val->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_val); /* to_s on <var_val:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var19)->values[4]=var33;
{
var34 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$link_unresolved_type for (self: SeparateCompilerVisitor, MClassDef, MType) */
void nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(val* self, val* p0, val* p1) {
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var4 /* : Map[MClassDef, Set[MType]] */;
val* var6 /* : Map[MClassDef, Set[MType]] */;
val* var7 /* : nullable StaticFrame */;
val* var9 /* : nullable StaticFrame */;
val* var10 /* : MPropDef */;
val* var12 /* : MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClassDef, Set[MType]] */;
val* var20 /* : Map[MClassDef, Set[MType]] */;
val* var21 /* : nullable StaticFrame */;
val* var23 /* : nullable StaticFrame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : HashSet[MType] */;
val* var31 /* : Map[MClassDef, Set[MType]] */;
val* var33 /* : Map[MClassDef, Set[MType]] */;
val* var34 /* : nullable StaticFrame */;
val* var36 /* : nullable StaticFrame */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : nullable Object */;
var_mclassdef = p0;
var_mtype = p1;
{
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2155);
fatal_exit(1);
}
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
var_compiler = var1;
{
{ /* Inline separate_compiler$SeparateCompiler$live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var6 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 147);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var9 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2157);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var7) on <var7:nullable StaticFrame> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var12 = var7->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var7:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var10) on <var10:MPropDef> */
var15 = var10->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var10:MPropDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self, val* p0))((((int64_t)var4&3)?class_info[((int64_t)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var4, var13); /* has_key on <var4:Map[MClassDef, Set[MType]]>*/
}
var17 = !var16;
if (var17){
{
{ /* Inline separate_compiler$SeparateCompiler$live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var20 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 147);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2158);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var21) on <var21:nullable StaticFrame> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var21:nullable StaticFrame> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
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
var30 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var30); /* Direct call hash_collection$HashSet$init on <var30:HashSet[MType]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((int64_t)var18&3)?class_info[((int64_t)var18&3)]:var18->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var18, var27, var30); /* []= on <var18:Map[MClassDef, Set[MType]]>*/
}
} else {
}
{
{ /* Inline separate_compiler$SeparateCompiler$live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var33 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 147);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2160);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var34) on <var34:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var34:nullable StaticFrame> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2003);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var37) on <var37:MPropDef> */
var42 = var37->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0))((((int64_t)var31&3)?class_info[((int64_t)var31&3)]:var31->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var31, var40); /* [] on <var31:Map[MClassDef, Set[MType]]>*/
}
{
((void(*)(val* self, val* p0))((((int64_t)var43&3)?class_info[((int64_t)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var43, var_mtype); /* add on <var43:nullable Object(Set[MType])>*/
}
RET_LABEL:;
}
/* method separate_compiler$MMethodDef$separate_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___separate_runtime_function(val* self) {
val* var /* : SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var16 /* : nullable MSignature */;
val* var18 /* : nullable MSignature */;
val* var19 /* : MClassDef */;
val* var21 /* : MClassDef */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var26 /* : SeparateRuntimeFunction */;
val* var27 /* : String */;
{
{ /* Inline separate_compiler$MMethodDef$separate_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable SeparateRuntimeFunction> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var9 = var_res == var_other;
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
{ /* Inline model$MPropDef$mclassdef (self) on <self:MMethodDef> */
var12 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_recv = var13;
{
{ /* Inline model$MMethodDef$msignature (self) on <self:MMethodDef> */
var18 = self->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MMethodDef> */
var21 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2171);
fatal_exit(1);
} else {
var25 = nitc___nitc__MSignature___MType__resolve_for(var16, var_recv, var_recv, var22, 1);
}
var_msignature = var25;
var26 = NEW_nitc__SeparateRuntimeFunction(&type_nitc__SeparateRuntimeFunction);
{
var27 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(self);
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var26, self); /* mmethoddef= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var26, var_recv); /* called_recv= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var26, var_msignature); /* called_signature= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var26, var27); /* build_c_name= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:SeparateRuntimeFunction>*/
}
var_res = var26;
{
{ /* Inline separate_compiler$MMethodDef$separate_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val = var_res; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL28:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$separate_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$separate_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nitc__separate_compiler___MMethodDef___separate_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler$MMethodDef$virtual_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___virtual_runtime_function(val* self) {
val* var /* : SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MProperty */;
val* var12 /* : MProperty */;
val* var13 /* : MPropDef */;
val* var15 /* : MPropDef */;
val* var16 /* : MClassDef */;
val* var18 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var22 /* : SeparateRuntimeFunction */;
val* var23 /* : MType */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
val* var32 /* : MProperty */;
val* var34 /* : MProperty */;
val* var35 /* : MPropDef */;
val* var37 /* : MPropDef */;
val* var38 /* : nullable MSignature */;
val* var40 /* : nullable MSignature */;
val* var41 /* : MModule */;
val* var43 /* : MModule */;
val* var44 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var45 /* : Bool */;
val* var46 /* : String */;
val* var47 /* : MType */;
val* var49 /* : MType */;
val* var50 /* : String */;
short int var51 /* : Bool */;
short int var_ /* var : Bool */;
val* var52 /* : MSignature */;
val* var54 /* : MSignature */;
short int var55 /* : Bool */;
val* var57 /* : SeparateRuntimeFunction */;
val* var58 /* : NativeArray[String] */;
static val* varonce;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
{
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable SeparateRuntimeFunction> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var9 = var_res == var_other;
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
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var12 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var10) on <var10:MProperty(MMethod)> */
var15 = var10->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var10:MProperty(MMethod)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var13) on <var13:MPropDef(MMethodDef)> */
var18 = var13->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var13:MPropDef(MMethodDef)> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_intromclassdef = var16;
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var21 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_recv = var19;
{
var22 = nitc__separate_compiler___MMethodDef___separate_runtime_function(self);
}
var_res = var22;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var25 = var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var23,var_recv) on <var23:MType> */
var_other = var_recv;
{
{ /* Inline kernel$Object$is_same_instance (var23,var_other) on <var23:MType> */
var30 = var23 == var_other;
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
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL31:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var34 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var32) on <var32:MProperty(MMethod)> */
var37 = var32->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var32:MProperty(MMethod)> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var35) on <var35:MPropDef(MMethodDef)> */
var40 = var35->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var35:MPropDef(MMethodDef)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var43 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2196);
fatal_exit(1);
} else {
var44 = nitc___nitc__MSignature___MType__resolve_for(var38, var_recv, var_recv, var41, 1);
}
var_msignature = var44;
{
var46 = nitc__abstract_compiler___MClassType___MType__ctype(var_recv);
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var49 = var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self))(var47->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var47); /* ctype on <var47:MType>*/
}
{
var51 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_core__kernel__Object___61d_61d]))(var46, var50); /* == on <var46:String>*/
}
var_ = var51;
if (var51){
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var54 = var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nitc__separate_compiler___MSignature___c_equiv(var_msignature, var52);
}
var45 = var55;
} else {
var45 = var_;
}
if (var45){
{
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL56:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var57 = NEW_nitc__SeparateRuntimeFunction(&type_nitc__SeparateRuntimeFunction);
if (unlikely(varonce==NULL)) {
var58 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "VIRTUAL_";
var62 = core__flat___NativeString___to_s_full(var61, 8l, 8l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var58)->values[0]=var60;
} else {
var58 = varonce;
varonce = NULL;
}
{
var63 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(self);
}
((struct instance_core__NativeArray*)var58)->values[1]=var63;
{
var64 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce = var58;
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var57, self); /* mmethoddef= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var57, var_recv); /* called_recv= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var57, var_msignature); /* called_signature= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var57, var64); /* build_c_name= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_core__kernel__Object__init]))(var57); /* init on <var57:SeparateRuntimeFunction>*/
}
var_res = var57;
{
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL65:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$is_thunk= (var_res,1) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s = 1; /* _is_thunk on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
RET_LABEL66:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$virtual_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___virtual_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$virtual_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nitc__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler$MSignature$c_equiv for (self: MSignature, MSignature): Bool */
short int nitc__separate_compiler___MSignature___c_equiv(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MSignature */;
short int var1 /* : Bool */;
val* var_other3 /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int64_t var7 /* : Int */;
int64_t var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int64_t var_i /* var i: Int */;
int64_t var13 /* : Int */;
int64_t var_ /* var : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : Array[MParameter] */;
val* var20 /* : Array[MParameter] */;
val* var21 /* : nullable Object */;
val* var22 /* : MType */;
val* var24 /* : MType */;
val* var25 /* : String */;
val* var26 /* : Array[MParameter] */;
val* var28 /* : Array[MParameter] */;
val* var29 /* : nullable Object */;
val* var30 /* : MType */;
val* var32 /* : MType */;
val* var33 /* : String */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
int64_t var39 /* : Int */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
val* var43 /* : nullable MType */;
val* var45 /* : nullable MType */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : nullable MType */;
val* var54 /* : nullable MType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : nullable MType */;
val* var73 /* : nullable MType */;
val* var74 /* : String */;
val* var75 /* : nullable MType */;
val* var77 /* : nullable MType */;
val* var78 /* : String */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel$Object$== (self,var_other) on <self:MSignature> */
var_other3 = var_other;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other3) on <self:MSignature> */
var6 = self == var_other3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var7 = nitc___nitc__MSignature___arity(self);
}
{
var8 = nitc___nitc__MSignature___arity(var_other);
}
{
{ /* Inline kernel$Int$!= (var7,var8) on <var7:Int> */
var11 = var7 == var8;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var13 = nitc___nitc__MSignature___arity(self);
}
var_ = var13;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var16 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var_i < var_;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var20 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var18, var_i);
}
{
{ /* Inline model$MParameter$mtype (var21) on <var21:nullable Object(MParameter)> */
var24 = var21->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var21:nullable Object(MParameter)> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val*(*)(val* self))(var22->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var22); /* ctype on <var22:MType>*/
}
{
{ /* Inline model$MSignature$mparameters (var_other) on <var_other:MSignature> */
var28 = var_other->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_other:MSignature> */
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
{
var29 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var26, var_i);
}
{
{ /* Inline model$MParameter$mtype (var29) on <var29:nullable Object(MParameter)> */
var32 = var29->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var29:nullable Object(MParameter)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((val*(*)(val* self))(var30->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var30); /* ctype on <var30:MType>*/
}
{
{ /* Inline kernel$Object$!= (var25,var33) on <var25:String> */
var_other36 = var33;
{
var37 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_core__kernel__Object___61d_61d]))(var25, var_other36); /* == on <var25:String>*/
}
var38 = !var37;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var = 0;
goto RET_LABEL;
} else {
}
{
var39 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var39;
}
BREAK_label: (void)0;
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var42 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var_other) on <var_other:MSignature> */
var45 = var_other->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var40 == NULL) {
var46 = (var43 != NULL);
} else {
{ /* Inline kernel$Object$!= (var40,var43) on <var40:nullable MType> */
var_other36 = var43;
{
var49 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_core__kernel__Object___61d_61d]))(var40, var_other36); /* == on <var40:nullable MType(MType)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var54 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (var52 == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var52,((val*)NULL)) on <var52:nullable MType> */
var_other3 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var52,var_other3) on <var52:nullable MType(MType)> */
var60 = var52 == var_other3;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
var_61 = var55;
if (var55){
var51 = var_61;
} else {
{
{ /* Inline model$MSignature$return_mtype (var_other) on <var_other:MSignature> */
var64 = var_other->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (var62 == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var62,((val*)NULL)) on <var62:nullable MType> */
var_other3 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var62,var_other3) on <var62:nullable MType(MType)> */
var70 = var62 == var_other3;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var51 = var65;
}
if (var51){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var73 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2223);
fatal_exit(1);
} else {
var74 = ((val*(*)(val* self))(var71->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var71); /* ctype on <var71:nullable MType>*/
}
{
{ /* Inline model$MSignature$return_mtype (var_other) on <var_other:MSignature> */
var77 = var_other->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2223);
fatal_exit(1);
} else {
var78 = ((val*(*)(val* self))(var75->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var75); /* ctype on <var75:nullable MType>*/
}
{
{ /* Inline kernel$Object$!= (var74,var78) on <var74:String> */
var_other36 = var78;
{
var81 = ((short int(*)(val* self, val* p0))(var74->class->vft[COLOR_core__kernel__Object___61d_61d]))(var74, var_other36); /* == on <var74:String>*/
}
var82 = !var81;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
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
/* method separate_compiler$SeparateRuntimeFunction$called_recv for (self: SeparateRuntimeFunction): MType */
val* nitc___nitc__SeparateRuntimeFunction___called_recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$called_recv= for (self: SeparateRuntimeFunction, MType) */
void nitc___nitc__SeparateRuntimeFunction___called_recv_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val = p0; /* _called_recv on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$called_signature for (self: SeparateRuntimeFunction): MSignature */
val* nitc___nitc__SeparateRuntimeFunction___called_signature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$called_signature= for (self: SeparateRuntimeFunction, MSignature) */
void nitc___nitc__SeparateRuntimeFunction___called_signature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val = p0; /* _called_signature on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$build_c_name for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2239);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$build_c_name= for (self: SeparateRuntimeFunction, String) */
void nitc___nitc__SeparateRuntimeFunction___build_c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name].val = p0; /* _build_c_name on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$is_thunk for (self: SeparateRuntimeFunction): Bool */
short int nitc___nitc__SeparateRuntimeFunction___is_thunk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$is_thunk= for (self: SeparateRuntimeFunction, Bool) */
void nitc___nitc__SeparateRuntimeFunction___is_thunk_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s = p0; /* _is_thunk on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$to_s for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MPropDef$to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$c_ret for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___c_ret(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MSignature */;
val* var7 /* : MSignature */;
val* var8 /* : nullable MType */;
val* var10 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret].val != NULL; /* _c_ret on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret].val; /* _c_ret on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_ret");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2247);
fatal_exit(1);
}
} else {
{
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var7 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var5) on <var5:MSignature> */
var10 = var5->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var5:MSignature> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ret = var8;
if (var_ret == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
var16 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_ret); /* ctype on <var_ret:nullable MType(MType)>*/
}
var3 = var16;
goto RET_LABEL4;
} else {
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "void";
var19 = core__flat___NativeString___to_s_full(var18, 4l, 4l);
var17 = var19;
varonce = var17;
}
var3 = var17;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret].val = var3; /* _c_ret on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$c_sig for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___c_sig(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var19 /* : String */;
val* var20 /* : String */;
int64_t var_i /* var i: Int */;
val* var21 /* : MSignature */;
val* var23 /* : MSignature */;
int64_t var24 /* : Int */;
int64_t var_ /* var : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
val* var29 /* : MSignature */;
val* var31 /* : MSignature */;
val* var32 /* : Array[MParameter] */;
val* var34 /* : Array[MParameter] */;
val* var35 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var36 /* : MType */;
val* var38 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MMethodDef */;
val* var44 /* : MMethodDef */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
val* var51 /* : MClassType */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
int64_t var65 /* : Int */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig].val != NULL; /* _c_sig on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig].val; /* _c_sig on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_sig");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2257);
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
var_sig = var5;
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "(";
var11 = core__flat___NativeString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " self";
var15 = core__flat___NativeString___to_s_full(var14, 5l, 5l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var7)->values[2]=var13;
} else {
var7 = varonce;
varonce = NULL;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (self) on <self:SeparateRuntimeFunction> */
var18 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((val*(*)(val* self))(var16->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var16); /* ctype on <var16:MType>*/
}
((struct instance_core__NativeArray*)var7)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var20); /* Direct call flat$FlatBuffer$append on <var_sig:FlatBuffer>*/
}
var_i = 0l;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var23 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__MSignature___arity(var21);
}
var_ = var24;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var27 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_i < var_;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
} else {
goto BREAK_label;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var31 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MSignature$mparameters (var29) on <var29:MSignature> */
var34 = var29->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var29:MSignature> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var32, var_i);
}
var_mp = var35;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var38 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_mtype = var36;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var41 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var44 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var42) on <var42:MMethodDef> */
var47 = var42->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var42:MMethodDef> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
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
var51 = nitc__model___MModule___array_type(var48, var_mtype);
}
var_mtype = var51;
} else {
}
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = ", ";
var57 = core__flat___NativeString___to_s_full(var56, 2l, 2l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " p";
var61 = core__flat___NativeString___to_s_full(var60, 2l, 2l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var53)->values[2]=var59;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var53)->values[1]=var62;
var63 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var53)->values[3]=var63;
{
var64 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var64); /* Direct call flat$FlatBuffer$append on <var_sig:FlatBuffer>*/
}
{
var65 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var65;
}
BREAK_label: (void)0;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ")";
var69 = core__flat___NativeString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var67); /* Direct call flat$FlatBuffer$append on <var_sig:FlatBuffer>*/
}
{
var70 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_sig);
}
var3 = var70;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig].val = var3; /* _c_sig on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$c_funptrtype for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___c_funptrtype(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val != NULL; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_funptrtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2273);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "(*)";
var9 = core__flat___NativeString___to_s_full(var8, 3l, 3l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var5)->values[0]=var10;
{
var11 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val = var3; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_sig /* var sig: String */;
val* var13 /* : String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
val* var25 /* : nullable RapidTypeAnalysis */;
val* var27 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
val* var28 /* : MMethodDef */;
val* var30 /* : MMethodDef */;
val* var31 /* : MClassDef */;
val* var33 /* : MClassDef */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var37 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var38 /* : RuntimeVariable */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : MType */;
val* var45 /* : MType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var46 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var47 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
val* var49 /* : MSignature */;
val* var51 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var52 /* : MSignature */;
val* var54 /* : MSignature */;
val* var55 /* : nullable MType */;
val* var57 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var58 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : MType */;
val* var73 /* : MType */;
val* var74 /* : String */;
val* var75 /* : String */;
int64_t var_i /* var i: Int */;
int64_t var76 /* : Int */;
int64_t var_ /* var : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
short int var83 /* : Bool */;
val* var84 /* : Array[MParameter] */;
val* var86 /* : Array[MParameter] */;
val* var87 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : MModule */;
val* var95 /* : MClassType */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : RuntimeVariable */;
val* var106 /* : NativeArray[String] */;
static val* varonce105;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
int64_t var113 /* : Int */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : String */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : String */;
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
val* var149 /* : NativeArray[String] */;
static val* varonce148;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : String */;
val* var154 /* : String */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
val* var160 /* : RuntimeVariable */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : String */;
val* var166 /* : String */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
val* var171 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
val* var182 /* : nullable RuntimeVariable */;
val* var184 /* : nullable RuntimeVariable */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var_191 /* var : Bool */;
val* var192 /* : HashSet[MModule] */;
val* var194 /* : HashSet[MModule] */;
val* var195 /* : MClassDef */;
val* var197 /* : MClassDef */;
val* var198 /* : MModule */;
val* var200 /* : MModule */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : String */;
val* var207 /* : nullable RuntimeVariable */;
val* var209 /* : NativeArray[String] */;
static val* varonce208;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
val* var213 /* : String */;
val* var214 /* : nullable String */;
val* var216 /* : nullable String */;
val* var217 /* : String */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : String */;
val* var233 /* : nullable RuntimeVariable */;
val* var235 /* : nullable RuntimeVariable */;
val* var236 /* : String */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : String */;
val* var242 /* : HashMap[String, String] */;
val* var244 /* : HashMap[String, String] */;
val* var245 /* : String */;
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
val* var260 /* : String */;
val* var261 /* : Location */;
val* var263 /* : Location */;
val* var264 /* : nullable SourceFile */;
val* var266 /* : nullable SourceFile */;
val* var267 /* : String */;
val* var269 /* : String */;
val* var270 /* : Location */;
val* var272 /* : Location */;
int64_t var273 /* : Int */;
int64_t var275 /* : Int */;
val* var276 /* : String */;
val* var277 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__COMPILER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2276);
fatal_exit(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var4)->values[0]=var9;
{
var10 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
{
var11 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var4)->values[3]=var11;
{
var12 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_sig = var12;
{
var13 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = ";";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[1]=var17;
} else {
var15 = varonce14;
varonce14 = NULL;
}
((struct instance_core__NativeArray*)var15)->values[0]=var_sig;
{
var20 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nitc___nitc__AbstractCompiler___provide_declaration(var_compiler, var13, var20); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var_compiler:AbstractCompiler>*/
}
/* <var_compiler:AbstractCompiler> isa SeparateCompiler */
cltype22 = type_nitc__SeparateCompiler.color;
idtype23 = type_nitc__SeparateCompiler.id;
if(cltype22 >= var_compiler->type->table_size) {
var21 = 0;
} else {
var21 = var_compiler->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name24 = var_compiler == NULL ? "null" : var_compiler->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateCompiler", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2283);
fatal_exit(1);
}
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (var_compiler) on <var_compiler:AbstractCompiler(SeparateCompiler)> */
var27 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var_compiler:AbstractCompiler(SeparateCompiler)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_rta = var25;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var30 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var28) on <var28:MMethodDef> */
var33 = var28->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var28:MMethodDef> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var31) on <var31:MClassDef> */
var36 = var31->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var31:MClassDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_recv = var34;
{
var37 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:AbstractCompiler>*/
}
var_v = var37;
var38 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "self";
var42 = core__flat___NativeString___to_s_full(var41, 4l, 4l);
var40 = var42;
varonce39 = var40;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (self) on <self:SeparateRuntimeFunction> */
var45 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var38, var40); /* name= on <var38:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var38, var43); /* mtype= on <var38:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var38, var_recv); /* mcasttype= on <var38:RuntimeVariable>*/
}
{
((void(*)(val* self))(var38->class->vft[COLOR_core__kernel__Object__init]))(var38); /* init on <var38:RuntimeVariable>*/
}
var_selfvar = var38;
var46 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var46); /* Direct call array$Array$init on <var46:Array[RuntimeVariable]>*/
}
var_arguments = var46;
var47 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var47, var_v); /* visitor= on <var47:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var47, var_mmethoddef); /* mpropdef= on <var47:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var47, var_recv); /* receiver= on <var47:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var47, var_arguments); /* arguments= on <var47:StaticFrame>*/
}
{
((void(*)(val* self))(var47->class->vft[COLOR_core__kernel__Object__init]))(var47); /* init on <var47:StaticFrame>*/
}
var_frame = var47;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var51 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_msignature = var49;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var54 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var52) on <var52:MSignature> */
var57 = var52->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var52:MSignature> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_ret = var55;
var58 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var58) on <var58:FlatBuffer> */
{
((void(*)(val* self))(var58->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var58); /* init on <var58:FlatBuffer>*/
}
RET_LABEL59:(void)0;
}
}
var_comment = var58;
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "(";
var65 = core__flat___NativeString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[0]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ": ";
var69 = core__flat___NativeString___to_s_full(var68, 2l, 2l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[2]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_selfvar->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_selfvar); /* to_s on <var_selfvar:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var61)->values[1]=var70;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var73 = var_selfvar->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1959);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__Object__to_s]))(var71); /* to_s on <var71:MType>*/
}
((struct instance_core__NativeArray*)var61)->values[3]=var74;
{
var75 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var75); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var_selfvar); /* Direct call array$Array$add on <var_arguments:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
var76 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var76;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var79 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var83 = var_i < var_;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var86 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var84, var_i);
}
var_mp = var87;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var90 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_mtype = var88;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var93 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91){
{
var94 = nitc___nitc__AbstractCompilerVisitor___mmodule(var_v);
}
{
var95 = nitc__model___MModule___array_type(var94, var_mtype);
}
var_mtype = var95;
} else {
}
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ", ";
var101 = core__flat___NativeString___to_s_full(var100, 2l, 2l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var97)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var103); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
var104 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce105==NULL)) {
var106 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "p";
var110 = core__flat___NativeString___to_s_full(var109, 1l, 1l);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var106)->values[0]=var108;
} else {
var106 = varonce105;
varonce105 = NULL;
}
var111 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var106)->values[1]=var111;
{
var112 = ((val*(*)(val* self))(var106->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var106); /* native_to_s on <var106:NativeArray[String]>*/
}
varonce105 = var106;
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var104, var112); /* name= on <var104:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var104, var_mtype); /* mtype= on <var104:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var104, var_mtype); /* mcasttype= on <var104:RuntimeVariable>*/
}
{
((void(*)(val* self))(var104->class->vft[COLOR_core__kernel__Object__init]))(var104); /* init on <var104:RuntimeVariable>*/
}
var_argvar = var104;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var_argvar); /* Direct call array$Array$add on <var_arguments:Array[RuntimeVariable]>*/
}
{
var113 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var113;
}
BREAK_label: (void)0;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = ")";
var117 = core__flat___NativeString___to_s_full(var116, 1l, 1l);
var115 = var117;
varonce114 = var115;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var115); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
if (var_ret == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var121 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var122 = !var121;
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ": ";
var128 = core__flat___NativeString___to_s_full(var127, 2l, 2l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[0]=var126;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var129 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var124)->values[1]=var129;
{
var130 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var130); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
} else {
}
if (unlikely(varonce131==NULL)) {
var132 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "/* method ";
var136 = core__flat___NativeString___to_s_full(var135, 10l, 10l);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var132)->values[0]=var134;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = " for ";
var140 = core__flat___NativeString___to_s_full(var139, 5l, 5l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var132)->values[2]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = " */";
var144 = core__flat___NativeString___to_s_full(var143, 3l, 3l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var132)->values[4]=var142;
} else {
var132 = varonce131;
varonce131 = NULL;
}
{
var145 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:SeparateRuntimeFunction>*/
}
((struct instance_core__NativeArray*)var132)->values[1]=var145;
{
var146 = ((val*(*)(val* self))(var_comment->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_comment); /* to_s on <var_comment:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var132)->values[3]=var146;
{
var147 = ((val*(*)(val* self))(var132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var147); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce148==NULL)) {
var149 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " {";
var153 = core__flat___NativeString___to_s_full(var152, 2l, 2l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var149)->values[1]=var151;
} else {
var149 = varonce148;
varonce148 = NULL;
}
((struct instance_core__NativeArray*)var149)->values[0]=var_sig;
{
var154 = ((val*(*)(val* self))(var149->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var149); /* native_to_s on <var149:NativeArray[String]>*/
}
varonce148 = var149;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var154); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_ret == NULL) {
var155 = 0; /* is null */
} else {
var155 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var158 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var159 = !var158;
var156 = var159;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
if (var155){
{
var160 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar= (var_frame,var160) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var160; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL161:(void)0;
}
}
} else {
}
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "RET_LABEL";
var165 = core__flat___NativeString___to_s_full(var164, 9l, 9l);
var163 = var165;
varonce162 = var163;
}
{
var166 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var163);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel= (var_frame,var166) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var166; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL167:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$is_thunk (self) on <self:SeparateRuntimeFunction> */
var170 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (var168){
{
var171 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(var_v, var_mmethoddef, var_recv, var_arguments);
}
var_subret = var171;
if (var_ret == NULL) {
var172 = 0; /* is null */
} else {
var172 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var175 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var176 = !var175;
var173 = var176;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
var172 = var173;
}
if (var172){
if (var_subret == NULL) {
var177 = 0; /* is null */
} else {
var177 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_subret,((val*)NULL)) on <var_subret:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var180 = ((short int(*)(val* self, val* p0))(var_subret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_subret, var_other); /* == on <var_subret:nullable RuntimeVariable(RuntimeVariable)>*/
}
var181 = !var180;
var178 = var181;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
var177 = var178;
}
if (unlikely(!var177)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2323);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar (var_frame) on <var_frame:StaticFrame> */
var184 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var182 = var184;
RET_LABEL183:(void)0;
}
}
if (unlikely(var182 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2324);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var182, var_subret); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
if (var_rta == NULL) {
var186 = 0; /* is null */
} else {
var186 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var189 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var190 = !var189;
var187 = var190;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
var_191 = var186;
if (var186){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_mmodules (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var194 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val; /* _live_mmodules on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var194 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 85);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var197 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var197 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var195) on <var195:MClassDef> */
var200 = var195->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var195:MClassDef> */
if (unlikely(var200 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
var201 = core___core__HashSet___core__abstract_collection__Collection__has(var192, var198);
}
var202 = !var201;
var185 = var202;
} else {
var185 = var_191;
}
if (var185){
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "FATAL: Dead method executed.";
var206 = core__flat___NativeString___to_s_full(var205, 28l, 28l);
var204 = var206;
varonce203 = var204;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var204); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
var207 = nitc__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
}
}
if (unlikely(varonce208==NULL)) {
var209 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = ":;";
var213 = core__flat___NativeString___to_s_full(var212, 2l, 2l);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var209)->values[1]=var211;
} else {
var209 = varonce208;
varonce208 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var_frame) on <var_frame:StaticFrame> */
var216 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
if (unlikely(var214 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2332);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var209)->values[0]=var214;
{
var217 = ((val*(*)(val* self))(var209->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var209); /* native_to_s on <var209:NativeArray[String]>*/
}
varonce208 = var209;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var217); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (var_ret == NULL) {
var218 = 0; /* is null */
} else {
var218 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var221 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var222 = !var221;
var219 = var222;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var218 = var219;
}
if (var218){
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "return ";
var228 = core__flat___NativeString___to_s_full(var227, 7l, 7l);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[0]=var226;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = ";";
var232 = core__flat___NativeString___to_s_full(var231, 1l, 1l);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var224)->values[2]=var230;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar (var_frame) on <var_frame:StaticFrame> */
var235 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (unlikely(var233 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2334);
fatal_exit(1);
}
{
var236 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__Object__to_s]))(var233); /* to_s on <var233:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var224)->values[1]=var236;
{
var237 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var237); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "}";
var241 = core__flat___NativeString___to_s_full(var240, 1l, 1l);
var239 = var241;
varonce238 = var239;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var239); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$names (var_compiler) on <var_compiler:AbstractCompiler> */
var244 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var244 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 534);
fatal_exit(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
{
var245 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = " (";
var251 = core__flat___NativeString___to_s_full(var250, 2l, 2l);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[1]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = ":";
var255 = core__flat___NativeString___to_s_full(var254, 1l, 1l);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var247)->values[3]=var253;
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = ")";
var259 = core__flat___NativeString___to_s_full(var258, 1l, 1l);
var257 = var259;
varonce256 = var257;
}
((struct instance_core__NativeArray*)var247)->values[5]=var257;
} else {
var247 = varonce246;
varonce246 = NULL;
}
{
var260 = nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(var_mmethoddef);
}
((struct instance_core__NativeArray*)var247)->values[0]=var260;
{
{ /* Inline model$MPropDef$location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var263 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var263 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline location$Location$file (var261) on <var261:Location> */
var266 = var261->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var261:Location> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (var264 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2337);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var264) on <var264:nullable SourceFile> */
if (unlikely(var264 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var269 = var264->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var264:nullable SourceFile> */
if (unlikely(var269 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
((struct instance_core__NativeArray*)var247)->values[2]=var267;
{
{ /* Inline model$MPropDef$location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var272 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var272 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var270) on <var270:Location> */
var275 = var270->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var270:Location> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
var276 = core__flat___Int___core__abstract_text__Object__to_s(var273);
((struct instance_core__NativeArray*)var247)->values[4]=var276;
{
var277 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var242, var245, var277); /* Direct call hash_collection$HashMap$[]= on <var242:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$compile_trampolines for (self: SeparateRuntimeFunction, SeparateCompiler) */
void nitc___nitc__SeparateRuntimeFunction___compile_trampolines(val* self, val* p0) {
val* var_compiler /* var compiler: SeparateCompiler */;
val* var /* : MMethodDef */;
val* var2 /* : MMethodDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var9 /* : RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : MType */;
val* var15 /* : MType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var16 /* : MSignature */;
val* var18 /* : MSignature */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var22 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var_arguments /* var arguments: Array[String] */;
int64_t var_i /* var i: Int */;
val* var27 /* : MSignature */;
val* var29 /* : MSignature */;
int64_t var30 /* : Int */;
int64_t var_31 /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
int64_t var44 /* : Int */;
short int var45 /* : Bool */;
val* var46 /* : MMethodDef */;
val* var48 /* : MMethodDef */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : MMethodDef */;
val* var55 /* : MMethodDef */;
val* var56 /* : MProperty */;
val* var58 /* : MProperty */;
val* var_m /* var m: MMethod */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : Text */;
val* var_n2 /* var n2: String */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : AbstractCompilerVisitor */;
val* var_v2 /* var v2: SeparateCompilerVisitor */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var_call /* var call: String */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : String */;
short int var140 /* : Bool */;
val* var141 /* : MMethodDef */;
val* var143 /* : MMethodDef */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
short int var_147 /* var : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : MMethodDef */;
val* var152 /* : MMethodDef */;
val* var_m153 /* var m: MMethodDef */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : String */;
val* var158 /* : String */;
val* var159 /* : Text */;
val* var_n2160 /* var n2: String */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : AbstractCompilerVisitor */;
val* var_v2175 /* var v2: SeparateCompilerVisitor */;
val* var177 /* : NativeArray[String] */;
static val* varonce176;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
val* var185 /* : String */;
val* var186 /* : String */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
val* var207 /* : String */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var214 /* : String */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var_call221 /* var call: String */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
val* var228 /* : NativeArray[String] */;
static val* varonce227;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : String */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
val* var237 /* : String */;
var_compiler = p0;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var) on <var:MMethodDef> */
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:MMethodDef> */
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
var_recv = var6;
var9 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "self";
var12 = core__flat___NativeString___to_s_full(var11, 4l, 4l);
var10 = var12;
varonce = var10;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (self) on <self:SeparateRuntimeFunction> */
var15 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var9, var10); /* name= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var9, var13); /* mtype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var9, var_recv); /* mcasttype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:RuntimeVariable>*/
}
var_selfvar = var9;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var18 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var16) on <var16:MSignature> */
var21 = var16->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var16:MSignature> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_ret = var19;
var22 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var22, 1l); /* Direct call array$Array$with_capacity on <var22:Array[String]>*/
}
var_ = var22;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "self";
var26 = core__flat___NativeString___to_s_full(var25, 4l, 4l);
var24 = var26;
varonce23 = var24;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var24); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
var_arguments = var_;
var_i = 0l;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var29 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MSignature___arity(var27);
}
var_31 = var30;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_31) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_31:Int> isa OTHER */
/* <var_31:Int> isa OTHER */
var34 = 1; /* easy <var_31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_i < var_31;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
} else {
goto BREAK_label;
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "p";
var41 = core__flat___NativeString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
} else {
var37 = varonce36;
varonce36 = NULL;
}
var42 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var37)->values[1]=var42;
{
var43 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var43); /* Direct call array$Array$add on <var_arguments:Array[String]>*/
}
{
var44 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var44;
}
BREAK_label: (void)0;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var48 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = nitc___nitc__MPropDef___is_intro(var46);
}
var_50 = var49;
if (var49){
{
var51 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_recv);
}
var52 = !var51;
var45 = var52;
} else {
var45 = var_50;
}
if (var45){
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var55 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var53) on <var53:MMethodDef> */
var58 = var53->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var53:MMethodDef> */
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
var_m = var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "CALL_";
var62 = core__flat___NativeString___to_s_full(var61, 5l, 5l);
var60 = var62;
varonce59 = var60;
}
{
var63 = nitc__separate_compiler___MEntity___const_color(var_m);
}
{
var64 = ((val*(*)(val* self, val* p0))(var60->class->vft[COLOR_core__abstract_text__Text___43d]))(var60, var63); /* + on <var60:String>*/
}
var_n2 = var64;
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = " ";
var70 = core__flat___NativeString___to_s_full(var69, 1l, 1l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[1]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ";";
var74 = core__flat___NativeString___to_s_full(var73, 1l, 1l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var66)->values[4]=var72;
} else {
var66 = varonce65;
varonce65 = NULL;
}
{
var75 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var66)->values[0]=var75;
((struct instance_core__NativeArray*)var66)->values[2]=var_n2;
{
var76 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var66)->values[3]=var76;
{
var77 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
nitc___nitc__AbstractCompiler___provide_declaration(var_compiler, var_n2, var77); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var_compiler:SeparateCompiler>*/
}
{
var78 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:SeparateCompiler>*/
}
var_v2 = var78;
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " ";
var84 = core__flat___NativeString___to_s_full(var83, 1l, 1l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " {";
var88 = core__flat___NativeString___to_s_full(var87, 2l, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var80)->values[4]=var86;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var89 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var80)->values[0]=var89;
((struct instance_core__NativeArray*)var80)->values[2]=var_n2;
{
var90 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var80)->values[3]=var90;
{
var91 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var91); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
{
var92 = nitc__separate_compiler___MEntity___const_color(var_m);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v2, var92); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v2:SeparateCompilerVisitor>*/
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "((";
var98 = core__flat___NativeString___to_s_full(var97, 2l, 2l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = ")(";
var102 = core__flat___NativeString___to_s_full(var101, 2l, 2l);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var94)->values[2]=var100;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "->vft[";
var106 = core__flat___NativeString___to_s_full(var105, 6l, 6l);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var94)->values[4]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "]))(";
var110 = core__flat___NativeString___to_s_full(var109, 4l, 4l);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var94)->values[6]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ");";
var114 = core__flat___NativeString___to_s_full(var113, 2l, 2l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var94)->values[8]=var112;
} else {
var94 = varonce93;
varonce93 = NULL;
}
{
var115 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(self);
}
((struct instance_core__NativeArray*)var94)->values[1]=var115;
{
var116 = nitc___nitc__SeparateCompilerVisitor___class_info(var_v2, var_selfvar);
}
((struct instance_core__NativeArray*)var94)->values[3]=var116;
{
var117 = nitc__separate_compiler___MEntity___const_color(var_m);
}
((struct instance_core__NativeArray*)var94)->values[5]=var117;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = ", ";
var121 = core__flat___NativeString___to_s_full(var120, 2l, 2l);
var119 = var121;
varonce118 = var119;
}
{
var122 = core__abstract_text___Collection___join(var_arguments, var119, ((val*)NULL));
}
((struct instance_core__NativeArray*)var94)->values[7]=var122;
{
var123 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
var_call = var123;
if (var_ret == NULL) {
var124 = 0; /* is null */
} else {
var124 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var127 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var128 = !var127;
var125 = var128;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var124 = var125;
}
if (var124){
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "return ";
var134 = core__flat___NativeString___to_s_full(var133, 7l, 7l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[0]=var132;
} else {
var130 = varonce129;
varonce129 = NULL;
}
((struct instance_core__NativeArray*)var130)->values[1]=var_call;
{
var135 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var135); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var_call); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
}
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "}";
var139 = core__flat___NativeString___to_s_full(var138, 1l, 1l);
var137 = var139;
varonce136 = var137;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var137); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var143 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var143 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline modelize_property$MPropDef$has_supercall (var141) on <var141:MMethodDef> */
var146 = var141->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var141:MMethodDef> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_147 = var144;
if (var144){
{
var148 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_recv);
}
var149 = !var148;
var140 = var149;
} else {
var140 = var_147;
}
if (var140){
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var152 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var152 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1923);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
var_m153 = var150;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "CALL_";
var157 = core__flat___NativeString___to_s_full(var156, 5l, 5l);
var155 = var157;
varonce154 = var155;
}
{
var158 = nitc__separate_compiler___MEntity___const_color(var_m153);
}
{
var159 = ((val*(*)(val* self, val* p0))(var155->class->vft[COLOR_core__abstract_text__Text___43d]))(var155, var158); /* + on <var155:String>*/
}
var_n2160 = var159;
if (unlikely(varonce161==NULL)) {
var162 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = " ";
var166 = core__flat___NativeString___to_s_full(var165, 1l, 1l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var162)->values[1]=var164;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = ";";
var170 = core__flat___NativeString___to_s_full(var169, 1l, 1l);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var162)->values[4]=var168;
} else {
var162 = varonce161;
varonce161 = NULL;
}
{
var171 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var162)->values[0]=var171;
((struct instance_core__NativeArray*)var162)->values[2]=var_n2160;
{
var172 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var162)->values[3]=var172;
{
var173 = ((val*(*)(val* self))(var162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
nitc___nitc__AbstractCompiler___provide_declaration(var_compiler, var_n2160, var173); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var_compiler:SeparateCompiler>*/
}
{
var174 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:SeparateCompiler>*/
}
var_v2175 = var174;
if (unlikely(varonce176==NULL)) {
var177 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = " ";
var181 = core__flat___NativeString___to_s_full(var180, 1l, 1l);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var177)->values[1]=var179;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = " {";
var185 = core__flat___NativeString___to_s_full(var184, 2l, 2l);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var177)->values[4]=var183;
} else {
var177 = varonce176;
varonce176 = NULL;
}
{
var186 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var177)->values[0]=var186;
((struct instance_core__NativeArray*)var177)->values[2]=var_n2160;
{
var187 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var177)->values[3]=var187;
{
var188 = ((val*(*)(val* self))(var177->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var177); /* native_to_s on <var177:NativeArray[String]>*/
}
varonce176 = var177;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2175, var188); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2175:SeparateCompilerVisitor>*/
}
{
var189 = nitc__separate_compiler___MEntity___const_color(var_m153);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v2175, var189); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v2175:SeparateCompilerVisitor>*/
}
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "((";
var195 = core__flat___NativeString___to_s_full(var194, 2l, 2l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[0]=var193;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = ")(";
var199 = core__flat___NativeString___to_s_full(var198, 2l, 2l);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var191)->values[2]=var197;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "->vft[";
var203 = core__flat___NativeString___to_s_full(var202, 6l, 6l);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var191)->values[4]=var201;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "]))(";
var207 = core__flat___NativeString___to_s_full(var206, 4l, 4l);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var191)->values[6]=var205;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = ");";
var211 = core__flat___NativeString___to_s_full(var210, 2l, 2l);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var191)->values[8]=var209;
} else {
var191 = varonce190;
varonce190 = NULL;
}
{
var212 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(self);
}
((struct instance_core__NativeArray*)var191)->values[1]=var212;
{
var213 = nitc___nitc__SeparateCompilerVisitor___class_info(var_v2175, var_selfvar);
}
((struct instance_core__NativeArray*)var191)->values[3]=var213;
{
var214 = nitc__separate_compiler___MEntity___const_color(var_m153);
}
((struct instance_core__NativeArray*)var191)->values[5]=var214;
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = ", ";
var218 = core__flat___NativeString___to_s_full(var217, 2l, 2l);
var216 = var218;
varonce215 = var216;
}
{
var219 = core__abstract_text___Collection___join(var_arguments, var216, ((val*)NULL));
}
((struct instance_core__NativeArray*)var191)->values[7]=var219;
{
var220 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
var_call221 = var220;
if (var_ret == NULL) {
var222 = 0; /* is null */
} else {
var222 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var225 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var226 = !var225;
var223 = var226;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
var222 = var223;
}
if (var222){
if (unlikely(varonce227==NULL)) {
var228 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "return ";
var232 = core__flat___NativeString___to_s_full(var231, 7l, 7l);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var228)->values[0]=var230;
} else {
var228 = varonce227;
varonce227 = NULL;
}
((struct instance_core__NativeArray*)var228)->values[1]=var_call221;
{
var233 = ((val*(*)(val* self))(var228->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var228); /* native_to_s on <var228:NativeArray[String]>*/
}
varonce227 = var228;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2175, var233); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2175:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2175, var_call221); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2175:SeparateCompilerVisitor>*/
}
}
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = "}";
var237 = core__flat___NativeString___to_s_full(var236, 1l, 1l);
var235 = var237;
varonce234 = var235;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2175, var235); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2175:SeparateCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$init for (self: SeparateRuntimeFunction) */
void nitc___nitc__SeparateRuntimeFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateRuntimeFunction___core__kernel__Object__init]))(self); /* init on <self:SeparateRuntimeFunction>*/
}
RET_LABEL:;
}
/* method separate_compiler$MType$is_tagged for (self: MType): Bool */
short int nitc__separate_compiler___MType___is_tagged(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MType$is_tagged= for (self: MType, Bool) */
void nitc__separate_compiler___MType___is_tagged_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = p0; /* _is_tagged on <self:MType> */
RET_LABEL:;
}
/* method separate_compiler$MType$tag_value for (self: MType): Int */
int64_t nitc__separate_compiler___MType___tag_value(val* self) {
int64_t var /* : Int */;
int64_t var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l; /* _tag_value on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MType$tag_value= for (self: MType, Int) */
void nitc__separate_compiler___MType___tag_value_61d(val* self, int64_t p0) {
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = p0; /* _tag_value on <self:MType> */
RET_LABEL:;
}
/* method separate_compiler$MEntity$const_color for (self: MEntity): String */
val* nitc__separate_compiler___MEntity___const_color(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MEntity___const_color].val != NULL; /* _const_color on <self:MEntity> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__MEntity___const_color].val; /* _const_color on <self:MEntity> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _const_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2400);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "COLOR_";
var9 = core__flat___NativeString___to_s_full(var8, 6l, 6l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(self); /* c_name on <self:MEntity>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var11;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__MEntity___const_color].val = var3; /* _const_color on <self:MEntity> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$AMethPropdef$can_inline for (self: AMethPropdef): Bool */
short int nitc__separate_compiler___AMethPropdef___nitc__abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
val* var_m /* var m: nullable MMethodDef */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : MProperty */;
val* var13 /* : MProperty */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_m = var1;
if (var_m == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_m,((val*)NULL)) on <var_m:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_m->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_m, var_other); /* == on <var_m:nullable MMethodDef(MMethodDef)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
var_ = var6;
if (var6){
{
{ /* Inline model$MPropDef$mproperty (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var13 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:nullable MMethodDef(MMethodDef)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var11) on <var11:MProperty(MMethod)> */
var16 = var11->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var11:MProperty(MMethod)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var5 = var14;
} else {
var5 = var_;
}
var_17 = var5;
if (var5){
{
{ /* Inline model$MMethodDef$is_extern (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var20 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:nullable MMethodDef(MMethodDef)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var4 = var18;
} else {
var4 = var_17;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
var21 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__separate_compiler___AMethPropdef___nitc__abstract_compiler__APropdef__can_inline]))(self); /* can_inline on <self:AMethPropdef>*/
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$AAttrPropdef$init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nitc__separate_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
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
val* var20 /* : nullable MAttributeDef */;
val* var22 /* : nullable MAttributeDef */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var26 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__separate_compiler___AAttrPropdef___init_expr]))(self, p0, p1); /* init_expr on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
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
{ /* Inline separate_compiler$ToolContext$opt_no_union_attribute (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 28);
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
var = var19;
} else {
var = var_;
}
if (var){
{
{ /* Inline modelize_property$AAttrPropdef$mlazypropdef (self) on <self:AAttrPropdef> */
var22 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2428);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var20) on <var20:nullable MAttributeDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var20:nullable MAttributeDef> */
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
var_guard = var23;
{
var26 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var_recv, var26); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}

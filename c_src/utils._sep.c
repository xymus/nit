/* This C file is generated by NIT to compile module utils. */
#include "utils._sep.h"
static const char LOCATE_utils___Object___cmangle[] = "utils::Object::cmangle";
val_t utils___Object___cmangle(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[6];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t REGB2;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_utils;
  fra.me.line = 23;
  fra.me.meth = LOCATE_utils___Object___cmangle;
  fra.me.has_broke = 0;
  fra.me.REG_size = 7;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[5] = NIT_NULL;
  fra.me.REG[6] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* utils.nit:23 */
  fra.me.REG[2] = fra.me.REG[0];
  REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[1], COLOR_standard___collection___array___Array, ID_standard___collection___array___Array)) /*cast Array[Symbol]*/;
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Cast failed", NULL, LOCATE_utils, 23);
  }
  /* utils.nit:26 */
  if (!once_value_1) {
    fra.me.REG[2] = CALL_utils___Object___cmangle_table(fra.me.REG[2])(fra.me.REG[2]);
    once_value_1 = fra.me.REG[2];
    register_static_object(&once_value_1);
  } else fra.me.REG[2] = once_value_1;
  fra.me.REG[2] = fra.me.REG[2];
  /* utils.nit:27 */
  fra.me.REG[0] = NEW_Buffer_standard___string___Buffer___init();
  /* ../lib/standard/collection/array.nit:269 */
  REGB0 = TAG_Int(0);
  /* ../lib/standard/collection/array.nit:270 */
  REGB1 = TAG_Bool(ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1])!=NIT_NULL);
  if (UNTAG_Bool(REGB1)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_length", LOCATE_standard___collection___array, 270);
  }
  REGB1 = ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1]);
  /* ../lib/standard/collection/array.nit:271 */
  fra.me.REG[3] = ATTR_standard___collection___array___Array____items(fra.me.REG[1]);
  /* ../lib/standard/collection/array.nit:272 */
  while(1) {
    /* ../lib/standard/collection/array.nit:24 */
    REGB1 = TAG_Bool(ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1])!=NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_length", LOCATE_standard___collection___array, 24);
    }
    REGB1 = ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1]);
    REGB2 = TAG_Bool(VAL_ISA(REGB1, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
    if (UNTAG_Bool(REGB2)) {
    } else {
      nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
    }
    /* ../lib/standard/kernel.nit:235 */
    REGB1 = TAG_Bool(UNTAG_Int(REGB0)<UNTAG_Int(REGB1));
    /* ../lib/standard/collection/array.nit:272 */
    if (UNTAG_Bool(REGB1)) {
      /* ../lib/standard/collection/array.nit:273 */
      REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        nit_abort("Reciever is null", NULL, LOCATE_standard___collection___array, 273);
      }
      /* ../lib/standard/collection/array.nit:724 */
      fra.me.REG[4] = ((Nit_NativeArray)fra.me.REG[3])->val[UNTAG_Int(REGB0)];
      /* utils.nit:29 */
      REGB1 = CALL_standard___collection___abstract_collection___Collection___is_empty(fra.me.REG[0])(fra.me.REG[0]);
      REGB1 = TAG_Bool(!UNTAG_Bool(REGB1));
      if (UNTAG_Bool(REGB1)) {
        /* utils.nit:30 */
        REGB1 = TAG_Char('_');
        CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[0])(fra.me.REG[0], REGB1);
        /* utils.nit:31 */
        REGB1 = TAG_Char('_');
        CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[0])(fra.me.REG[0], REGB1);
        /* utils.nit:32 */
        REGB1 = TAG_Char('_');
        CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[0])(fra.me.REG[0], REGB1);
      }
      /* utils.nit:34 */
      REGB1 = TAG_Bool(0);
      fra.me.REG[5] = REGB1;
      /* utils.nit:35 */
      REGB1 = TAG_Bool(1);
      fra.me.REG[6] = REGB1;
      /* utils.nit:36 */
      fra.me.REG[4] = CALL_standard___string___Object___to_s(fra.me.REG[4])(fra.me.REG[4]);
      CALL_standard___collection___abstract_collection___Collection___iterate(fra.me.REG[4])(fra.me.REG[4], (&(fra.me)), ((fun_t)OC_utils___Object___cmangle_2));
      /* ../lib/standard/collection/array.nit:274 */
      REGB1 = TAG_Int(1);
      /* ../lib/standard/kernel.nit:238 */
      REGB1 = TAG_Int(UNTAG_Int(REGB0)+UNTAG_Int(REGB1));
      /* ../lib/standard/collection/array.nit:274 */
      REGB0 = REGB1;
    } else {
      /* ../lib/standard/collection/array.nit:272 */
      goto label3;
    }
  }
  label3: while(0);
  /* utils.nit:57 */
  fra.me.REG[0] = CALL_standard___string___Object___to_s(fra.me.REG[0])(fra.me.REG[0]);
  goto label4;
  label4: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
      void OC_utils___Object___cmangle_2(struct stack_frame_t *closctx, val_t p0){
        struct {struct stack_frame_t me;} fra;
        val_t REGB0;
        val_t REGB1;
        val_t REGB2;
        val_t REGB3;
        val_t tmp;
        /* utils.nit:37 */
        fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
        fra.me.file = LOCATE_utils;
        fra.me.line = 0;
        fra.me.meth = LOCATE_utils___Object___cmangle;
        fra.me.has_broke = 0;
        fra.me.REG_size = 1;
        fra.me.nitni_local_ref_head = NULL;
        fra.me.REG[0] = NIT_NULL;
        fra.me.REG[0] = p0;
        REGB0 = fra.me.REG[0];
        /* utils.nit:38 */
        REGB1 = TAG_Char('a');
        REGB2 = TAG_Bool(VAL_ISA(REGB1, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
        if (UNTAG_Bool(REGB2)) {
        } else {
          nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
        }
        /* ../lib/standard/kernel.nit:387 */
        REGB1 = TAG_Bool(UNTAG_Char(REGB0)>=UNTAG_Char(REGB1));
        /* utils.nit:38 */
        if (UNTAG_Bool(REGB1)) {
          REGB1 = TAG_Char('z');
          REGB2 = TAG_Bool(VAL_ISA(REGB1, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
          if (UNTAG_Bool(REGB2)) {
          } else {
            nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
          }
          /* ../lib/standard/kernel.nit:385 */
          REGB1 = TAG_Bool(UNTAG_Char(REGB0)<=UNTAG_Char(REGB1));
        } else {
          /* utils.nit:38 */
          REGB2 = TAG_Bool(0);
          REGB1 = REGB2;
        }
        if (UNTAG_Bool(REGB1)) {
          REGB1 = TAG_Bool(1);
        } else {
          REGB2 = TAG_Char('A');
          REGB3 = TAG_Bool(VAL_ISA(REGB2, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
          if (UNTAG_Bool(REGB3)) {
          } else {
            nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
          }
          /* ../lib/standard/kernel.nit:387 */
          REGB2 = TAG_Bool(UNTAG_Char(REGB0)>=UNTAG_Char(REGB2));
          /* utils.nit:38 */
          if (UNTAG_Bool(REGB2)) {
            REGB2 = TAG_Char('Z');
            REGB3 = TAG_Bool(VAL_ISA(REGB2, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
            if (UNTAG_Bool(REGB3)) {
            } else {
              nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
            }
            /* ../lib/standard/kernel.nit:385 */
            REGB2 = TAG_Bool(UNTAG_Char(REGB0)<=UNTAG_Char(REGB2));
          } else {
            /* utils.nit:38 */
            REGB3 = TAG_Bool(0);
            REGB2 = REGB3;
          }
          REGB1 = REGB2;
        }
        if (UNTAG_Bool(REGB1)) {
          REGB1 = TAG_Bool(1);
        } else {
          REGB2 = TAG_Char('0');
          REGB3 = TAG_Bool(VAL_ISA(REGB2, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
          if (UNTAG_Bool(REGB3)) {
          } else {
            nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
          }
          /* ../lib/standard/kernel.nit:387 */
          REGB2 = TAG_Bool(UNTAG_Char(REGB0)>=UNTAG_Char(REGB2));
          /* utils.nit:38 */
          if (UNTAG_Bool(REGB2)) {
            REGB2 = TAG_Char('9');
            REGB3 = TAG_Bool(VAL_ISA(REGB2, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
            if (UNTAG_Bool(REGB3)) {
            } else {
              nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
            }
            /* ../lib/standard/kernel.nit:385 */
            REGB2 = TAG_Bool(UNTAG_Char(REGB0)<=UNTAG_Char(REGB2));
          } else {
            /* utils.nit:38 */
            REGB3 = TAG_Bool(0);
            REGB2 = REGB3;
          }
          REGB1 = REGB2;
        }
        if (UNTAG_Bool(REGB1)) {
          /* utils.nit:39 */
          CALL_standard___collection___abstract_collection___SimpleCollection___add(closctx->REG[0])(closctx->REG[0], REGB0);
          /* utils.nit:40 */
          REGB1 = TAG_Bool(0);
          closctx->REG[5] = REGB1;
          /* utils.nit:41 */
          REGB1 = TAG_Bool(1);
          closctx->REG[6] = REGB1;
        } else {
          /* utils.nit:42 */
          REGB1 = TAG_Char('_');
          REGB2 = TAG_Bool(IS_EQUAL_OO(REGB0,REGB1));
          if (UNTAG_Bool(REGB2)) {
          } else {
            /* ../lib/standard/kernel.nit:381 */
            REGB1 = TAG_Bool((REGB0)==(REGB1));
            /* utils.nit:42 */
            REGB2 = REGB1;
          }
          if (UNTAG_Bool(REGB2)) {
            REGB2 = TAG_Bool(!UNTAG_Bool(closctx->REG[5]));
          } else {
            REGB1 = TAG_Bool(0);
            REGB2 = REGB1;
          }
          if (UNTAG_Bool(REGB2)) {
            /* utils.nit:43 */
            CALL_standard___collection___abstract_collection___SimpleCollection___add(closctx->REG[0])(closctx->REG[0], REGB0);
            /* utils.nit:44 */
            REGB2 = TAG_Bool(1);
            closctx->REG[5] = REGB2;
            /* utils.nit:45 */
            REGB2 = TAG_Bool(1);
            closctx->REG[6] = REGB2;
          } else {
            /* utils.nit:46 */
            REGB2 = CALL_standard___collection___abstract_collection___MapRead___has_key(closctx->REG[2])(closctx->REG[2], REGB0);
            if (UNTAG_Bool(REGB2)) {
              /* utils.nit:47 */
              if (UNTAG_Bool(closctx->REG[6])) {
		/* utils.nit:48 */
		REGB2 = TAG_Char('_');
		CALL_standard___collection___abstract_collection___SimpleCollection___add(closctx->REG[0])(closctx->REG[0], REGB2);
		/* utils.nit:49 */
		REGB2 = TAG_Char('_');
		CALL_standard___collection___abstract_collection___SimpleCollection___add(closctx->REG[0])(closctx->REG[0], REGB2);
              }
              /* utils.nit:51 */
              fra.me.REG[0] = CALL_standard___collection___abstract_collection___MapRead_____bra(closctx->REG[2])(closctx->REG[2], REGB0);
              CALL_standard___collection___abstract_collection___Sequence___append(closctx->REG[0])(closctx->REG[0], fra.me.REG[0]);
              /* utils.nit:52 */
              REGB0 = TAG_Bool(0);
              closctx->REG[6] = REGB0;
              /* utils.nit:53 */
              REGB0 = TAG_Bool(0);
              closctx->REG[5] = REGB0;
            }
          }
        }
        stack_frame_head = fra.me.prev;
        return;
      }
static const char LOCATE_utils___Object___cmangle_table[] = "utils::Object::cmangle_table";
val_t utils___Object___cmangle_table(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  static val_t once_value_4; /* Once value */
  static val_t once_value_5; /* Once value */
  static val_t once_value_6; /* Once value */
  static val_t once_value_7; /* Once value */
  static val_t once_value_8; /* Once value */
  static val_t once_value_9; /* Once value */
  static val_t once_value_10; /* Once value */
  static val_t once_value_11; /* Once value */
  static val_t once_value_12; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_utils;
  fra.me.line = 60;
  fra.me.meth = LOCATE_utils___Object___cmangle_table;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* utils.nit:63 */
  fra.me.REG[0] = NEW_HashMap_standard___collection___hash_collection___HashMap___init();
  /* utils.nit:64 */
  REGB0 = TAG_Char('+');
  if (!once_value_1) {
    fra.me.REG[1] = BOX_NativeString("plus");
    REGB1 = TAG_Int(4);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_1 = fra.me.REG[1];
    register_static_object(&once_value_1);
  } else fra.me.REG[1] = once_value_1;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:65 */
  REGB0 = TAG_Char('-');
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("minus");
    REGB1 = TAG_Int(5);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:66 */
  REGB0 = TAG_Char('*');
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString("star");
    REGB1 = TAG_Int(4);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:67 */
  REGB0 = TAG_Char('/');
  if (!once_value_4) {
    fra.me.REG[1] = BOX_NativeString("slash");
    REGB1 = TAG_Int(5);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_4 = fra.me.REG[1];
    register_static_object(&once_value_4);
  } else fra.me.REG[1] = once_value_4;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:68 */
  REGB0 = TAG_Char('%');
  if (!once_value_5) {
    fra.me.REG[1] = BOX_NativeString("percent");
    REGB1 = TAG_Int(7);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_5 = fra.me.REG[1];
    register_static_object(&once_value_5);
  } else fra.me.REG[1] = once_value_5;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:69 */
  REGB0 = TAG_Char('[');
  if (!once_value_6) {
    fra.me.REG[1] = BOX_NativeString("bra");
    REGB1 = TAG_Int(3);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_6 = fra.me.REG[1];
    register_static_object(&once_value_6);
  } else fra.me.REG[1] = once_value_6;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:70 */
  REGB0 = TAG_Char('=');
  if (!once_value_7) {
    fra.me.REG[1] = BOX_NativeString("eq");
    REGB1 = TAG_Int(2);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_7 = fra.me.REG[1];
    register_static_object(&once_value_7);
  } else fra.me.REG[1] = once_value_7;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:71 */
  REGB0 = TAG_Char('<');
  if (!once_value_8) {
    fra.me.REG[1] = BOX_NativeString("l");
    REGB1 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_8 = fra.me.REG[1];
    register_static_object(&once_value_8);
  } else fra.me.REG[1] = once_value_8;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:72 */
  REGB0 = TAG_Char('>');
  if (!once_value_9) {
    fra.me.REG[1] = BOX_NativeString("g");
    REGB1 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_9 = fra.me.REG[1];
    register_static_object(&once_value_9);
  } else fra.me.REG[1] = once_value_9;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:73 */
  REGB0 = TAG_Char('!');
  if (!once_value_10) {
    fra.me.REG[1] = BOX_NativeString("n");
    REGB1 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_10 = fra.me.REG[1];
    register_static_object(&once_value_10);
  } else fra.me.REG[1] = once_value_10;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:74 */
  REGB0 = TAG_Char('_');
  if (!once_value_11) {
    fra.me.REG[1] = BOX_NativeString("u");
    REGB1 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_11 = fra.me.REG[1];
    register_static_object(&once_value_11);
  } else fra.me.REG[1] = once_value_11;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:75 */
  REGB0 = TAG_Char('@');
  if (!once_value_12) {
    fra.me.REG[1] = BOX_NativeString("at");
    REGB1 = TAG_Int(2);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB1);
    once_value_12 = fra.me.REG[1];
    register_static_object(&once_value_12);
  } else fra.me.REG[1] = once_value_12;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[0])(fra.me.REG[0], REGB0, fra.me.REG[1]);
  /* utils.nit:76 */
  goto label13;
  label13: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}

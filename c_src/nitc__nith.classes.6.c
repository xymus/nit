#include "nitc__nith.classes.0.h"
/* runtime class nitc__typing__PostTypingVisitor: nitc::typing::PostTypingVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__typing__PostTypingVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc__typing___nitc__typing__PostTypingVisitor___core__kernel__Object__init, /* pointer to typing:PostTypingVisitor:typing$PostTypingVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to typing:PostTypingVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to typing:PostTypingVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to typing:PostTypingVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to typing:PostTypingVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to typing:PostTypingVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to typing:PostTypingVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to typing:PostTypingVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to typing:PostTypingVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to typing:PostTypingVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to typing:PostTypingVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to typing:PostTypingVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to typing:PostTypingVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc__typing___nitc__typing__PostTypingVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to typing:PostTypingVisitor:typing$PostTypingVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to typing:PostTypingVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc__typing___nitc__typing__PostTypingVisitor___type_visitor_61d, /* pointer to typing:PostTypingVisitor:typing$PostTypingVisitor$type_visitor= */
(nitmethod_t)nitc__typing___nitc__typing__PostTypingVisitor___type_visitor, /* pointer to typing:PostTypingVisitor:typing$PostTypingVisitor$type_visitor */
(nitmethod_t)core___core__Object___init, /* pointer to typing:PostTypingVisitor:kernel$Object$init */
}
};
/* allocate PostTypingVisitor */
val* NEW_nitc__typing__PostTypingVisitor(const struct type* type) {
val* self /* : PostTypingVisitor */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__typing__PostTypingVisitor;
return self;
}
/* runtime class nitc__local_var_init__LocalVarInitPhase: nitc::local_var_init::LocalVarInitPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to local_var_init:LocalVarInitPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to local_var_init:LocalVarInitPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to local_var_init:LocalVarInitPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to local_var_init:LocalVarInitPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitPhase___nitc__phase__Phase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init$LocalVarInitPhase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to local_var_init:LocalVarInitPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to local_var_init:LocalVarInitPhase:kernel$Object$init */
}
};
/* allocate LocalVarInitPhase */
val* NEW_nitc__local_var_init__LocalVarInitPhase(const struct type* type) {
val* self /* : LocalVarInitPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__local_var_init__LocalVarInitPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:LocalVarInitPhase exact> */
return self;
}
/* runtime class nitc__local_var_init__LocalVarInitVisitor: nitc::local_var_init::LocalVarInitVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___core__kernel__Object__init, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to local_var_init:LocalVarInitVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to local_var_init:LocalVarInitVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to local_var_init:LocalVarInitVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___toolcontext_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$toolcontext= */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___mark_is_unset, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$mark_is_unset */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$maybe_unset_vars */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___mark_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$mark_is_set */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___check_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$check_is_set */
(nitmethod_t)nitc__local_var_init___nitc__local_var_init__LocalVarInitVisitor___toolcontext, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init$LocalVarInitVisitor$toolcontext */
(nitmethod_t)core___core__Object___init, /* pointer to local_var_init:LocalVarInitVisitor:kernel$Object$init */
}
};
/* allocate LocalVarInitVisitor */
val* NEW_nitc__local_var_init__LocalVarInitVisitor(const struct type* type) {
val* self /* : LocalVarInitVisitor */;
val* var /* : HashSet[Variable] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__local_var_init__LocalVarInitVisitor;
var = NEW_core__HashSet(&type_core__HashSet__nitc__Variable);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[Variable]>*/
}
self->attrs[COLOR_nitc__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val = var; /* _maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* runtime class nitc__flow__FlowPhase: nitc::flow::FlowPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to flow:FlowPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flow:FlowPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flow:FlowPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to flow:FlowPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flow:FlowPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flow:FlowPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flow:FlowPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flow:FlowPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flow:FlowPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flow:FlowPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flow:FlowPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flow:FlowPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to flow:FlowPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to flow:FlowPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to flow:FlowPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to flow:FlowPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to flow:FlowPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to flow:FlowPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to flow:FlowPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to flow:FlowPhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to flow:FlowPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to flow:FlowPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc__flow___nitc__flow__FlowPhase___nitc__phase__Phase__process_npropdef, /* pointer to flow:FlowPhase:flow$FlowPhase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to flow:FlowPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to flow:FlowPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to flow:FlowPhase:kernel$Object$init */
}
};
/* allocate FlowPhase */
val* NEW_nitc__flow__FlowPhase(const struct type* type) {
val* self /* : FlowPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__flow__FlowPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:FlowPhase exact> */
return self;
}
/* runtime class nitc__flow__FlowVisitor: nitc::flow::FlowVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___core__kernel__Object__init, /* pointer to flow:FlowVisitor:flow$FlowVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flow:FlowVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flow:FlowVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flow:FlowVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flow:FlowVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flow:FlowVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flow:FlowVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flow:FlowVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flow:FlowVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flow:FlowVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flow:FlowVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flow:FlowVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to flow:FlowVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to flow:FlowVisitor:flow$FlowVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to flow:FlowVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___toolcontext_61d, /* pointer to flow:FlowVisitor:flow$FlowVisitor$toolcontext= */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___flows, /* pointer to flow:FlowVisitor:flow$FlowVisitor$flows */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___current_flow_context, /* pointer to flow:FlowVisitor:flow$FlowVisitor$current_flow_context */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___first, /* pointer to flow:FlowVisitor:flow$FlowVisitor$first */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___first_61d, /* pointer to flow:FlowVisitor:flow$FlowVisitor$first= */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___make_sub_flow, /* pointer to flow:FlowVisitor:flow$FlowVisitor$make_sub_flow */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___current_flow_context_61d, /* pointer to flow:FlowVisitor:flow$FlowVisitor$current_flow_context= */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___toolcontext, /* pointer to flow:FlowVisitor:flow$FlowVisitor$toolcontext */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow, /* pointer to flow:FlowVisitor:flow$FlowVisitor$make_unreachable_flow */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___merge_breaks, /* pointer to flow:FlowVisitor:flow$FlowVisitor$merge_breaks */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___make_merge_flow, /* pointer to flow:FlowVisitor:flow$FlowVisitor$make_merge_flow */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___visit_expr, /* pointer to flow:FlowVisitor:flow$FlowVisitor$visit_expr */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___merge_continues_to, /* pointer to flow:FlowVisitor:flow$FlowVisitor$merge_continues_to */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow, /* pointer to flow:FlowVisitor:flow$FlowVisitor$make_true_false_flow */
(nitmethod_t)nitc__flow___nitc__flow__FlowVisitor___make_sub_true_false_flow, /* pointer to flow:FlowVisitor:flow$FlowVisitor$make_sub_true_false_flow */
(nitmethod_t)core___core__Object___init, /* pointer to flow:FlowVisitor:kernel$Object$init */
}
};
/* allocate FlowVisitor */
val* NEW_nitc__flow__FlowVisitor(const struct type* type) {
val* self /* : FlowVisitor */;
val* var /* : FlowContext */;
val* var1 /* : Array[FlowContext] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__flow__FlowVisitor;
var = NEW_nitc__FlowContext(&type_nitc__FlowContext);
{
{ /* Inline kernel$Object$init (var) on <var:FlowContext> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__flow__FlowVisitor___current_flow_context].val = var; /* _current_flow_context on <self:FlowVisitor exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__FlowContext);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[FlowContext]>*/
}
self->attrs[COLOR_nitc__flow__FlowVisitor___flows].val = var1; /* _flows on <self:FlowVisitor exact> */
return self;
}
/* runtime class nitc__FlowContext: nitc::FlowContext (dead=false; need_corpse=false)*/
const struct class class_nitc__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to flow:FlowContext:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flow:FlowContext:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flow:FlowContext:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flow:FlowContext:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flow:FlowContext:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flow:FlowContext:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flow:FlowContext:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flow:FlowContext:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flow:FlowContext:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flow:FlowContext:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flow:FlowContext:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flow:FlowContext:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__FlowContext___is_start_61d, /* pointer to flow:FlowContext:flow$FlowContext$is_start= */
(nitmethod_t)nitc___nitc__FlowContext___node, /* pointer to flow:FlowContext:flow$FlowContext$node */
(nitmethod_t)nitc___nitc__FlowContext___node_61d, /* pointer to flow:FlowContext:flow$FlowContext$node= */
(nitmethod_t)nitc___nitc__FlowContext___when_true, /* pointer to flow:FlowContext:flow$FlowContext$when_true */
(nitmethod_t)nitc___nitc__FlowContext___when_false, /* pointer to flow:FlowContext:flow$FlowContext$when_false */
(nitmethod_t)nitc___nitc__FlowContext___name_61d, /* pointer to flow:FlowContext:flow$FlowContext$name= */
(nitmethod_t)nitc___nitc__FlowContext___add_previous, /* pointer to flow:FlowContext:flow$FlowContext$add_previous */
(nitmethod_t)nitc___nitc__FlowContext___is_unreachable, /* pointer to flow:FlowContext:flow$FlowContext$is_unreachable */
(nitmethod_t)nitc___nitc__FlowContext___previous, /* pointer to flow:FlowContext:flow$FlowContext$previous */
(nitmethod_t)nitc___nitc__FlowContext___is_already_unreachable, /* pointer to flow:FlowContext:flow$FlowContext$is_already_unreachable */
(nitmethod_t)nitc___nitc__FlowContext___is_already_unreachable_61d, /* pointer to flow:FlowContext:flow$FlowContext$is_already_unreachable= */
(nitmethod_t)nitc___nitc__FlowContext___add_loop, /* pointer to flow:FlowContext:flow$FlowContext$add_loop */
(nitmethod_t)nitc___nitc__FlowContext___is_marked_unreachable, /* pointer to flow:FlowContext:flow$FlowContext$is_marked_unreachable */
(nitmethod_t)nitc___nitc__FlowContext___is_start, /* pointer to flow:FlowContext:flow$FlowContext$is_start */
(nitmethod_t)nitc___nitc__FlowContext___is_marked_unreachable_61d, /* pointer to flow:FlowContext:flow$FlowContext$is_marked_unreachable= */
(nitmethod_t)nitc___nitc__FlowContext___loops, /* pointer to flow:FlowContext:flow$FlowContext$loops */
(nitmethod_t)nitc___nitc__FlowContext___when_true_61d, /* pointer to flow:FlowContext:flow$FlowContext$when_true= */
(nitmethod_t)nitc___nitc__FlowContext___when_false_61d, /* pointer to flow:FlowContext:flow$FlowContext$when_false= */
(nitmethod_t)nitc__typing___FlowContext___set_var, /* pointer to flow:FlowContext:typing$FlowContext$set_var */
(nitmethod_t)nitc__typing___FlowContext___vars, /* pointer to flow:FlowContext:typing$FlowContext$vars */
(nitmethod_t)nitc__typing___FlowContext___collect_types, /* pointer to flow:FlowContext:typing$FlowContext$collect_types */
(nitmethod_t)nitc__local_var_init___FlowContext___set_vars, /* pointer to flow:FlowContext:local_var_init$FlowContext$set_vars */
(nitmethod_t)nitc__local_var_init___FlowContext___is_variable_set, /* pointer to flow:FlowContext:local_var_init$FlowContext$is_variable_set */
}
};
/* allocate FlowContext */
val* NEW_nitc__FlowContext(const struct type* type) {
val* self /* : FlowContext */;
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : HashSet[Variable] */;
val* var6 /* : HashMap[Variable, nullable MType] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__FlowContext;
var = NEW_core__Array(&type_core__Array__nitc__FlowContext);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[FlowContext]>*/
}
self->attrs[COLOR_nitc__flow__FlowContext___previous].val = var; /* _previous on <self:FlowContext exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__FlowContext);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[FlowContext]>*/
}
self->attrs[COLOR_nitc__flow__FlowContext___loops].val = var1; /* _loops on <self:FlowContext exact> */
self->attrs[COLOR_nitc__flow__FlowContext___is_marked_unreachable].s = 0; /* _is_marked_unreachable on <self:FlowContext exact> */
self->attrs[COLOR_nitc__flow__FlowContext___is_already_unreachable].s = 0; /* _is_already_unreachable on <self:FlowContext exact> */
self->attrs[COLOR_nitc__flow__FlowContext___is_start].s = 0; /* _is_start on <self:FlowContext exact> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__flat___NativeString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
self->attrs[COLOR_nitc__flow__FlowContext___name].val = var2; /* _name on <self:FlowContext exact> */
self->attrs[COLOR_nitc__flow__FlowContext___when_true].val = self; /* _when_true on <self:FlowContext exact> */
self->attrs[COLOR_nitc__flow__FlowContext___when_false].val = self; /* _when_false on <self:FlowContext exact> */
var5 = NEW_core__HashSet(&type_core__HashSet__nitc__Variable);
{
core___core__HashSet___core__kernel__Object__init(var5); /* Direct call hash_collection$HashSet$init on <var5:HashSet[Variable]>*/
}
self->attrs[COLOR_nitc__local_var_init__FlowContext___set_vars].val = var5; /* _set_vars on <self:FlowContext exact> */
var6 = NEW_core__HashMap(&type_core__HashMap__nitc__Variable__nullable__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var6); /* Direct call hash_collection$HashMap$init on <var6:HashMap[Variable, nullable MType]>*/
}
self->attrs[COLOR_nitc__typing__FlowContext___vars].val = var6; /* _vars on <self:FlowContext exact> */
return self;
}
/* runtime class nitc__scope__ScopePhase: nitc::scope::ScopePhase (dead=false; need_corpse=false)*/
const struct class class_nitc__scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to scope:ScopePhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to scope:ScopePhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to scope:ScopePhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to scope:ScopePhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to scope:ScopePhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to scope:ScopePhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to scope:ScopePhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to scope:ScopePhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to scope:ScopePhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to scope:ScopePhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to scope:ScopePhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to scope:ScopePhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to scope:ScopePhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to scope:ScopePhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to scope:ScopePhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to scope:ScopePhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to scope:ScopePhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to scope:ScopePhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to scope:ScopePhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to scope:ScopePhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to scope:ScopePhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to scope:ScopePhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc__scope___nitc__scope__ScopePhase___nitc__phase__Phase__process_npropdef, /* pointer to scope:ScopePhase:scope$ScopePhase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to scope:ScopePhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to scope:ScopePhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to scope:ScopePhase:kernel$Object$init */
}
};
/* allocate ScopePhase */
val* NEW_nitc__scope__ScopePhase(const struct type* type) {
val* self /* : ScopePhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__scope__ScopePhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ScopePhase exact> */
return self;
}
/* runtime class nitc__Variable: nitc::Variable (dead=false; need_corpse=false)*/
const struct class class_nitc__Variable = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Variable___core__kernel__Object__init, /* pointer to scope:Variable:scope$Variable$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to scope:Variable:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to scope:Variable:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Variable___core__abstract_text__Object__to_s, /* pointer to scope:Variable:scope$Variable$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to scope:Variable:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to scope:Variable:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to scope:Variable:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to scope:Variable:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to scope:Variable:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to scope:Variable:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to scope:Variable:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to scope:Variable:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Variable___name_61d, /* pointer to scope:Variable:scope$Variable$name= */
(nitmethod_t)nitc___nitc__Variable___name, /* pointer to scope:Variable:scope$Variable$name */
(nitmethod_t)nitc___nitc__Variable___warn_unread, /* pointer to scope:Variable:scope$Variable$warn_unread */
(nitmethod_t)nitc___nitc__Variable___location, /* pointer to scope:Variable:scope$Variable$location */
(nitmethod_t)nitc__typing___Variable___declared_type_61d, /* pointer to scope:Variable:typing$Variable$declared_type= */
(nitmethod_t)nitc___nitc__Variable___warn_unread_61d, /* pointer to scope:Variable:scope$Variable$warn_unread= */
(nitmethod_t)nitc___nitc__Variable___location_61d, /* pointer to scope:Variable:scope$Variable$location= */
(nitmethod_t)nitc__typing___Variable___declared_type, /* pointer to scope:Variable:typing$Variable$declared_type */
(nitmethod_t)nitc__typing___Variable___is_adapted, /* pointer to scope:Variable:typing$Variable$is_adapted */
(nitmethod_t)nitc__typing___Variable___is_adapted_61d, /* pointer to scope:Variable:typing$Variable$is_adapted= */
(nitmethod_t)core___core__Object___init, /* pointer to scope:Variable:kernel$Object$init */
}
};
/* allocate Variable */
val* NEW_nitc__Variable(const struct type* type) {
val* self /* : Variable */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__Variable;
self->attrs[COLOR_nitc__scope__Variable___warn_unread].s = 0; /* _warn_unread on <self:Variable exact> */
self->attrs[COLOR_nitc__typing__Variable___is_adapted].s = 0; /* _is_adapted on <self:Variable exact> */
return self;
}
/* runtime class nitc__EscapeMark: nitc::EscapeMark (dead=false; need_corpse=false)*/
const struct class class_nitc__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__EscapeMark___core__kernel__Object__init, /* pointer to scope:EscapeMark:scope$EscapeMark$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to scope:EscapeMark:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to scope:EscapeMark:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to scope:EscapeMark:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to scope:EscapeMark:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to scope:EscapeMark:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to scope:EscapeMark:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to scope:EscapeMark:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to scope:EscapeMark:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to scope:EscapeMark:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to scope:EscapeMark:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to scope:EscapeMark:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__EscapeMark___name_61d, /* pointer to scope:EscapeMark:scope$EscapeMark$name= */
(nitmethod_t)nitc___nitc__EscapeMark___escapes, /* pointer to scope:EscapeMark:scope$EscapeMark$escapes */
(nitmethod_t)nitc___nitc__EscapeMark___continue_mark, /* pointer to scope:EscapeMark:scope$EscapeMark$continue_mark */
(nitmethod_t)nitc___nitc__EscapeMark___continue_mark_61d, /* pointer to scope:EscapeMark:scope$EscapeMark$continue_mark= */
(nitmethod_t)nitc___nitc__EscapeMark___name, /* pointer to scope:EscapeMark:scope$EscapeMark$name */
(nitmethod_t)core___core__Object___init, /* pointer to scope:EscapeMark:kernel$Object$init */
}
};
/* allocate EscapeMark */
val* NEW_nitc__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : Array[AEscapeExpr] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__EscapeMark;
var = NEW_core__Array(&type_core__Array__nitc__AEscapeExpr);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[AEscapeExpr]>*/
}
self->attrs[COLOR_nitc__scope__EscapeMark___escapes].val = var; /* _escapes on <self:EscapeMark exact> */
return self;
}
/* runtime class nitc__scope__ScopeVisitor: nitc::scope::ScopeVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___core__kernel__Object__init, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to scope:ScopeVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to scope:ScopeVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to scope:ScopeVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to scope:ScopeVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to scope:ScopeVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to scope:ScopeVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to scope:ScopeVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to scope:ScopeVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to scope:ScopeVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to scope:ScopeVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to scope:ScopeVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to scope:ScopeVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___toolcontext_61d, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$toolcontext= */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___propdef_61d, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$propdef= */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___shift_scope, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$shift_scope */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___scopes, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$scopes */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___toolcontext, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$toolcontext */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___register_variable, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$register_variable */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___propdef, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$propdef */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___get_escapemark, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$get_escapemark */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___error, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$error */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___search_variable, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$search_variable */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___selfvariable, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$selfvariable */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$make_escape_mark */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$enter_visit_block */
(nitmethod_t)nitc__scope___nitc__scope__ScopeVisitor___search_label, /* pointer to scope:ScopeVisitor:scope$ScopeVisitor$search_label */
(nitmethod_t)core___core__Object___init, /* pointer to scope:ScopeVisitor:kernel$Object$init */
}
};
/* allocate ScopeVisitor */
val* NEW_nitc__scope__ScopeVisitor(const struct type* type) {
val* self /* : ScopeVisitor */;
val* var /* : Variable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : List[Scope] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__scope__ScopeVisitor;
var = NEW_nitc__Variable(&type_nitc__Variable);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "self";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__scope__Variable__name_61d]))(var, var1); /* name= on <var:Variable>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Variable>*/
}
self->attrs[COLOR_nitc__scope__ScopeVisitor___selfvariable].val = var; /* _selfvariable on <self:ScopeVisitor exact> */
var4 = NEW_core__List(&type_core__List__nitc__scope__Scope);
{
{ /* Inline list$List$init (var4) on <var4:List[Scope]> */
{
((void(*)(val* self))(var4->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var4); /* init on <var4:List[Scope]>*/
}
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val = var4; /* _scopes on <self:ScopeVisitor exact> */
return self;
}
/* runtime class nitc__scope__Scope: nitc::scope::Scope (dead=false; need_corpse=false)*/
const struct class class_nitc__scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to scope:Scope:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to scope:Scope:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to scope:Scope:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to scope:Scope:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to scope:Scope:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to scope:Scope:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to scope:Scope:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to scope:Scope:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to scope:Scope:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to scope:Scope:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to scope:Scope:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to scope:Scope:abstract_text$Object$native_class_name */
(nitmethod_t)nitc__scope___nitc__scope__Scope___variables, /* pointer to scope:Scope:scope$Scope$variables */
(nitmethod_t)nitc__scope___nitc__scope__Scope___escapemark, /* pointer to scope:Scope:scope$Scope$escapemark */
(nitmethod_t)nitc__scope___nitc__scope__Scope___get_variable, /* pointer to scope:Scope:scope$Scope$get_variable */
(nitmethod_t)nitc__scope___nitc__scope__Scope___escapemark_61d, /* pointer to scope:Scope:scope$Scope$escapemark= */
}
};
/* allocate Scope */
val* NEW_nitc__scope__Scope(const struct type* type) {
val* self /* : Scope */;
val* var /* : HashMap[String, Variable] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__scope__Scope;
var = NEW_core__HashMap(&type_core__HashMap__core__String__nitc__Variable);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[String, Variable]>*/
}
self->attrs[COLOR_nitc__scope__Scope___variables].val = var; /* _variables on <self:Scope exact> */
return self;
}
/* runtime class nitc__ASTValidationVisitor: nitc::ASTValidationVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to astvalidation:ASTValidationVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to astvalidation:ASTValidationVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to astvalidation:ASTValidationVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to astvalidation:ASTValidationVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to astvalidation:ASTValidationVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to astvalidation:ASTValidationVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc___nitc__ASTValidationVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to astvalidation:ASTValidationVisitor:astvalidation$ASTValidationVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc___nitc__ASTValidationVisitor___path, /* pointer to astvalidation:ASTValidationVisitor:astvalidation$ASTValidationVisitor$path */
(nitmethod_t)nitc___nitc__ASTValidationVisitor___seen, /* pointer to astvalidation:ASTValidationVisitor:astvalidation$ASTValidationVisitor$seen */
}
};
/* allocate ASTValidationVisitor */
val* NEW_nitc__ASTValidationVisitor(const struct type* type) {
val* self /* : ASTValidationVisitor */;
val* var /* : CircularArray[ANode] */;
val* var1 /* : HashSet[ANode] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ASTValidationVisitor;
var = NEW_core__CircularArray(&type_core__CircularArray__nitc__ANode);
{
{ /* Inline kernel$Object$init (var) on <var:CircularArray[ANode]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___path].val = var; /* _path on <self:ASTValidationVisitor exact> */
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__ANode);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[ANode]>*/
}
self->attrs[COLOR_nitc__astvalidation__ASTValidationVisitor___seen].val = var1; /* _seen on <self:ASTValidationVisitor exact> */
return self;
}
/* runtime class nitc__auto_super_init__AutoSuperInitPhase: nitc::auto_super_init::AutoSuperInitPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to auto_super_init:AutoSuperInitPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to auto_super_init:AutoSuperInitPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitPhase___nitc__phase__Phase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init$AutoSuperInitPhase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to auto_super_init:AutoSuperInitPhase:kernel$Object$init */
}
};
/* allocate AutoSuperInitPhase */
val* NEW_nitc__auto_super_init__AutoSuperInitPhase(const struct type* type) {
val* self /* : AutoSuperInitPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__auto_super_init__AutoSuperInitPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:AutoSuperInitPhase exact> */
return self;
}
/* runtime class nitc__auto_super_init__AutoSuperInitVisitor: nitc::auto_super_init::AutoSuperInitVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init$AutoSuperInitVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init$AutoSuperInitVisitor$has_explicit_super_init */
(nitmethod_t)nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___is_broken, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init$AutoSuperInitVisitor$is_broken */
(nitmethod_t)nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___is_broken_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init$AutoSuperInitVisitor$is_broken= */
(nitmethod_t)nitc__auto_super_init___nitc__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init$AutoSuperInitVisitor$has_explicit_super_init= */
}
};
/* allocate AutoSuperInitVisitor */
val* NEW_nitc__auto_super_init__AutoSuperInitVisitor(const struct type* type) {
val* self /* : AutoSuperInitVisitor */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__auto_super_init__AutoSuperInitVisitor;
self->attrs[COLOR_nitc__auto_super_init__AutoSuperInitVisitor___is_broken].s = 0; /* _is_broken on <self:AutoSuperInitVisitor exact> */
return self;
}
/* runtime class nitc__RapidTypeAnalysis: nitc::RapidTypeAnalysis (dead=false; need_corpse=false)*/
const struct class class_nitc__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___core__kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___modelbuilder_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$modelbuilder= */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___mainmodule_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$mainmodule= */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___run_analysis, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$run_analysis */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_methods_to_tree, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_methods_to_tree */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_types_to_csv, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_types_to_csv */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___mainmodule, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$mainmodule */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___add_new, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$add_new */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___add_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$add_send */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___force_alive, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$force_alive */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$todo */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___modelbuilder, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$modelbuilder */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___add_cast, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$add_cast */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___add_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$add_super_send */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_types */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_open_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_open_types */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___check_depth, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$check_depth */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_open_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_open_cast_types */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_cast_types */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_methods */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_methoddefs, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_methoddefs */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_super_sends, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_super_sends */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_classes, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_classes */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$totry_methods */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___try_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$try_send */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___try_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$try_super_send */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___totry_methods_to_remove, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$totry_methods_to_remove */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___try_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$try_methods */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___add_call, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$add_call */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_callsites, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_callsites */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_mmodules, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_mmodules */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_targets, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_targets */
(nitmethod_t)nitc___nitc__RapidTypeAnalysis___live_targets_cache, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis$RapidTypeAnalysis$live_targets_cache */
(nitmethod_t)core___core__Object___init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel$Object$init */
}
};
/* allocate RapidTypeAnalysis */
val* NEW_nitc__RapidTypeAnalysis(const struct type* type) {
val* self /* : RapidTypeAnalysis */;
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var5 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[MModule] */;
val* var8 /* : HashSet[CallSite] */;
val* var9 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var10 /* : HashSet[MMethodDef] */;
val* var11 /* : HashSet[MMethod] */;
val* var12 /* : Array[MMethod] */;
val* var13 /* : HashSet[MMethod] */;
val* var14 /* : List[MMethodDef] */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__RapidTypeAnalysis;
var = NEW_core__HashSet(&type_core__HashSet__nitc__MClassType);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[MClassType]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val = var; /* _live_types on <self:RapidTypeAnalysis exact> */
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassType);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassType]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val = var1; /* _live_open_types on <self:RapidTypeAnalysis exact> */
var2 = NEW_core__HashSet(&type_core__HashSet__nitc__MClass);
{
core___core__HashSet___core__kernel__Object__init(var2); /* Direct call hash_collection$HashSet$init on <var2:HashSet[MClass]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val = var2; /* _live_classes on <self:RapidTypeAnalysis exact> */
var3 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var3); /* Direct call hash_collection$HashSet$init on <var3:HashSet[MType]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val = var3; /* _live_cast_types on <self:RapidTypeAnalysis exact> */
var4 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var4); /* Direct call hash_collection$HashSet$init on <var4:HashSet[MType]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val = var4; /* _live_open_cast_types on <self:RapidTypeAnalysis exact> */
var5 = NEW_core__HashSet(&type_core__HashSet__nitc__MMethodDef);
{
core___core__HashSet___core__kernel__Object__init(var5); /* Direct call hash_collection$HashSet$init on <var5:HashSet[MMethodDef]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val = var5; /* _live_methoddefs on <self:RapidTypeAnalysis exact> */
var6 = NEW_core__HashSet(&type_core__HashSet__nitc__MMethod);
{
core___core__HashSet___core__kernel__Object__init(var6); /* Direct call hash_collection$HashSet$init on <var6:HashSet[MMethod]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val = var6; /* _live_methods on <self:RapidTypeAnalysis exact> */
var7 = NEW_core__HashSet(&type_core__HashSet__nitc__MModule);
{
core___core__HashSet___core__kernel__Object__init(var7); /* Direct call hash_collection$HashSet$init on <var7:HashSet[MModule]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val = var7; /* _live_mmodules on <self:RapidTypeAnalysis exact> */
var8 = NEW_core__HashSet(&type_core__HashSet__nitc__CallSite);
{
core___core__HashSet___core__kernel__Object__init(var8); /* Direct call hash_collection$HashSet$init on <var8:HashSet[CallSite]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val = var8; /* _live_callsites on <self:RapidTypeAnalysis exact> */
var9 = NEW_more_collections__HashMap2(&type_more_collections__HashMap2__nitc__MType__nitc__MProperty__core__Set__nitc__MMethodDef);
{
{ /* Inline kernel$Object$init (var9) on <var9:HashMap2[MType, MProperty, Set[MMethodDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val = var9; /* _live_targets_cache on <self:RapidTypeAnalysis exact> */
var10 = NEW_core__HashSet(&type_core__HashSet__nitc__MMethodDef);
{
core___core__HashSet___core__kernel__Object__init(var10); /* Direct call hash_collection$HashSet$init on <var10:HashSet[MMethodDef]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val = var10; /* _live_super_sends on <self:RapidTypeAnalysis exact> */
var11 = NEW_core__HashSet(&type_core__HashSet__nitc__MMethod);
{
core___core__HashSet___core__kernel__Object__init(var11); /* Direct call hash_collection$HashSet$init on <var11:HashSet[MMethod]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val = var11; /* _totry_methods on <self:RapidTypeAnalysis exact> */
var12 = NEW_core__Array(&type_core__Array__nitc__MMethod);
{
core___core__Array___core__kernel__Object__init(var12); /* Direct call array$Array$init on <var12:Array[MMethod]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val = var12; /* _totry_methods_to_remove on <self:RapidTypeAnalysis exact> */
var13 = NEW_core__HashSet(&type_core__HashSet__nitc__MMethod);
{
core___core__HashSet___core__kernel__Object__init(var13); /* Direct call hash_collection$HashSet$init on <var13:HashSet[MMethod]>*/
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val = var13; /* _try_methods on <self:RapidTypeAnalysis exact> */
var14 = NEW_core__List(&type_core__List__nitc__MMethodDef);
{
{ /* Inline list$List$init (var14) on <var14:List[MMethodDef]> */
{
((void(*)(val* self))(var14->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var14); /* init on <var14:List[MMethodDef]>*/
}
RET_LABEL15:(void)0;
}
}
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val = var14; /* _todo on <self:RapidTypeAnalysis exact> */
return self;
}
/* runtime class nitc__RapidTypeVisitor: nitc::RapidTypeVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__RapidTypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__RapidTypeVisitor___core__kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes$Visitor$enter_visit */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes$Visitor$current_node */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___analysis_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$analysis= */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___receiver_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$receiver= */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___mpropdef_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$mpropdef= */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___add_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$add_type */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___add_monomorphic_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___receiver, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$receiver */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___add_callsite, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$add_callsite */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___add_cast_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$add_cast_type */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___analysis, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$analysis */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___get_method, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$get_method */
(nitmethod_t)nitc___nitc__RapidTypeVisitor___cleanup_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis$RapidTypeVisitor$cleanup_type */
(nitmethod_t)core___core__Object___init, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel$Object$init */
}
};
/* allocate RapidTypeVisitor */
val* NEW_nitc__RapidTypeVisitor(const struct type* type) {
val* self /* : RapidTypeVisitor */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__RapidTypeVisitor;
return self;
}
/* runtime class csv__CsvStream: csv::CsvStream (dead=true; need_corpse=false)*/
/* allocate CsvStream */
val* NEW_csv__CsvStream(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "CsvStream is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class csv__CsvDocument: csv::CsvDocument (dead=false; need_corpse=false)*/
const struct class class_csv__CsvDocument = {
0, /* box_kind */
{
(nitmethod_t)csv___csv__CsvDocument___core__kernel__Object__init, /* pointer to csv:CsvDocument:csv$CsvDocument$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to csv:CsvDocument:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to csv:CsvDocument:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to csv:CsvDocument:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to csv:CsvDocument:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to csv:CsvDocument:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to csv:CsvDocument:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to csv:CsvDocument:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to csv:CsvDocument:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to csv:CsvDocument:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to csv:CsvDocument:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to csv:CsvDocument:abstract_text$Object$native_class_name */
(nitmethod_t)csv___csv__CsvStream___separator_61d, /* pointer to csv:CsvDocument:csv$CsvStream$separator= */
(nitmethod_t)csv___csv__CsvStream___separator, /* pointer to csv:CsvDocument:csv$CsvStream$separator */
(nitmethod_t)csv___csv__CsvStream___eol_61d, /* pointer to csv:CsvDocument:csv$CsvStream$eol= */
(nitmethod_t)csv___csv__CsvStream___eol, /* pointer to csv:CsvDocument:csv$CsvStream$eol */
(nitmethod_t)csv___csv__CsvStream___delimiter_61d, /* pointer to csv:CsvDocument:csv$CsvStream$delimiter= */
(nitmethod_t)csv___csv__CsvStream___delimiter, /* pointer to csv:CsvDocument:csv$CsvStream$delimiter */
(nitmethod_t)csv___csv__CsvDocument___header_61d, /* pointer to csv:CsvDocument:csv$CsvDocument$header= */
(nitmethod_t)csv___csv__CsvDocument___records_61d, /* pointer to csv:CsvDocument:csv$CsvDocument$records= */
(nitmethod_t)csv___csv__CsvDocument___add_record, /* pointer to csv:CsvDocument:csv$CsvDocument$add_record */
(nitmethod_t)csv___csv__CsvDocument___header, /* pointer to csv:CsvDocument:csv$CsvDocument$header */
(nitmethod_t)csv___csv__CsvDocument___records, /* pointer to csv:CsvDocument:csv$CsvDocument$records */
(nitmethod_t)core___core__Object___init, /* pointer to csv:CsvDocument:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to csv:CsvDocument:file$Writable$write_to_file */
(nitmethod_t)csv___csv__CsvDocument___core__stream__Writable__write_to, /* pointer to csv:CsvDocument:csv$CsvDocument$write_to */
}
};
/* allocate CsvDocument */
val* NEW_csv__CsvDocument(const struct type* type) {
val* self /* : CsvDocument */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_csv__CsvDocument;
self->attrs[COLOR_csv__CsvStream___delimiter].c = '\"'; /* _delimiter on <self:CsvDocument exact> */
self->attrs[COLOR_csv__CsvStream___separator].c = ','; /* _separator on <self:CsvDocument exact> */
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "\n";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
self->attrs[COLOR_csv__CsvStream___eol].val = var; /* _eol on <self:CsvDocument exact> */
return self;
}
/* runtime class csv__CsvWriter: csv::CsvWriter (dead=false; need_corpse=false)*/
const struct class class_csv__CsvWriter = {
0, /* box_kind */
{
(nitmethod_t)csv___csv__CsvWriter___core__kernel__Object__init, /* pointer to csv:CsvWriter:csv$CsvWriter$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to csv:CsvWriter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to csv:CsvWriter:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to csv:CsvWriter:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to csv:CsvWriter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to csv:CsvWriter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to csv:CsvWriter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to csv:CsvWriter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to csv:CsvWriter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to csv:CsvWriter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to csv:CsvWriter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to csv:CsvWriter:abstract_text$Object$native_class_name */
(nitmethod_t)csv___csv__CsvStream___separator_61d, /* pointer to csv:CsvWriter:csv$CsvStream$separator= */
(nitmethod_t)csv___csv__CsvStream___separator, /* pointer to csv:CsvWriter:csv$CsvStream$separator */
(nitmethod_t)csv___csv__CsvStream___eol_61d, /* pointer to csv:CsvWriter:csv$CsvStream$eol= */
(nitmethod_t)csv___csv__CsvStream___eol, /* pointer to csv:CsvWriter:csv$CsvStream$eol */
(nitmethod_t)csv___csv__CsvStream___delimiter_61d, /* pointer to csv:CsvWriter:csv$CsvStream$delimiter= */
(nitmethod_t)csv___csv__CsvStream___delimiter, /* pointer to csv:CsvWriter:csv$CsvStream$delimiter */
(nitmethod_t)csv___csv__CsvWriter___ostream_61d, /* pointer to csv:CsvWriter:csv$CsvWriter$ostream= */
(nitmethod_t)csv___csv__CsvWriter___write_line, /* pointer to csv:CsvWriter:csv$CsvWriter$write_line */
(nitmethod_t)csv___csv__CsvWriter___write_lines, /* pointer to csv:CsvWriter:csv$CsvWriter$write_lines */
(nitmethod_t)csv___csv__CsvWriter___ostream, /* pointer to csv:CsvWriter:csv$CsvWriter$ostream */
(nitmethod_t)core___core__Object___init, /* pointer to csv:CsvWriter:kernel$Object$init */
}
};
/* allocate CsvWriter */
val* NEW_csv__CsvWriter(const struct type* type) {
val* self /* : CsvWriter */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_csv__CsvWriter;
self->attrs[COLOR_csv__CsvStream___delimiter].c = '\"'; /* _delimiter on <self:CsvWriter exact> */
self->attrs[COLOR_csv__CsvStream___separator].c = ','; /* _separator on <self:CsvWriter exact> */
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "\n";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
self->attrs[COLOR_csv__CsvStream___eol].val = var; /* _eol on <self:CsvWriter exact> */
return self;
}
/* runtime class csv__CsvReader: csv::CsvReader (dead=true; need_corpse=false)*/
/* allocate CsvReader */
val* NEW_csv__CsvReader(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "CsvReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__ErasureCompilerPhase: nitc::ErasureCompilerPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__ErasureCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$disabled */
(nitmethod_t)nitc___nitc__ErasureCompilerPhase___nitc__modelbuilder__Phase__process_mainmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:separate_erasure_compiler$ErasureCompilerPhase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel$Object$init */
}
};
/* allocate ErasureCompilerPhase */
val* NEW_nitc__ErasureCompilerPhase(const struct type* type) {
val* self /* : ErasureCompilerPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ErasureCompilerPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ErasureCompilerPhase exact> */
return self;
}
/* runtime class nitc__SeparateErasureCompiler: nitc::SeparateErasureCompiler (dead=false; need_corpse=false)*/
const struct class class_nitc__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___core__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__AbstractCompiler___init_count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$init_count_type_test_tags */
(nitmethod_t)nitc___nitc__AbstractCompiler___mainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$mainmodule= */
(nitmethod_t)nitc___nitc__AbstractCompiler___modelbuilder_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$modelbuilder= */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$do_compilation */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$display_stats */
(nitmethod_t)nitc___nitc__AbstractCompiler___new_file, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$new_file */
(nitmethod_t)nitc___nitc__AbstractCompiler___header_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$header= */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$count_type_test_tags */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_header */
(nitmethod_t)nitc___nitc__AbstractCompiler___mainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$mainmodule */
(nitmethod_t)nitc___nitc__AbstractCompiler___modelbuilder, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$modelbuilder */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_nitni_global_ref_functions */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_main_function */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_finalizer_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_finalizer_function */
(nitmethod_t)nitc___nitc__AbstractCompiler___target_platform, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$target_platform */
(nitmethod_t)nitc___nitc__AbstractCompiler___toolchain_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$toolchain= */
(nitmethod_t)nitc___nitc__AbstractCompiler___realmainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$realmainmodule= */
(nitmethod_t)nitc___nitc__AbstractCompiler___target_platform_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$target_platform= */
(nitmethod_t)nitc___nitc__AbstractCompiler___files, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$files */
(nitmethod_t)nitc___nitc__AbstractCompiler___header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$header */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$compile_header_structs */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_nitni_structs */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_catch_stack, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_catch_stack */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$new_visitor */
(nitmethod_t)nitc___nitc__AbstractCompiler___provide_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$provide_declaration */
(nitmethod_t)nitc___nitc__AbstractCompiler___generate_init_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$generate_init_attr */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_before_main, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_before_main */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_begin_main, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_begin_main */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_resolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$count_type_test_resolved */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_unresolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$count_type_test_unresolved */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_skipped, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$count_type_test_skipped */
(nitmethod_t)nitc___nitc__AbstractCompiler___linker_script, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$linker_script */
(nitmethod_t)nitc___nitc__AbstractCompiler___requirers_of_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$requirers_of_declarations */
(nitmethod_t)nitc___nitc__AbstractCompiler___provided_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$provided_declarations */
(nitmethod_t)nitc___nitc__AbstractCompiler___realmainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$realmainmodule */
(nitmethod_t)nitc___nitc__AbstractCompiler___names, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$names */
(nitmethod_t)nitc___nitc__AbstractCompiler___build_c_to_nit_bindings, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$build_c_to_nit_bindings */
(nitmethod_t)nitc___nitc__AbstractCompiler___extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$extern_bodies */
(nitmethod_t)nitc___nitc__AbstractCompiler___files_to_copy, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$files_to_copy */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$finalize_ffi_for_module */
(nitmethod_t)nitc___nitc__AbstractCompiler___toolchain, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$toolchain */
(nitmethod_t)nitc___nitc__AbstractCompiler___seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$seen_extern */
(nitmethod_t)core___core__Object___init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel$Object$init */
(nitmethod_t)nitc___nitc__SeparateCompiler___runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$runtime_type_analysis= */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_box_kinds */
(nitmethod_t)nitc___nitc__SeparateCompiler___do_property_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$do_property_coloring */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_class_infos, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_class_infos */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__compile_class_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$compile_class_to_c */
(nitmethod_t)nitc___nitc__SeparateCompiler___link_mmethods, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$link_mmethods */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_module_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_module_to_c */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__compile_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$compile_types */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___nitc__separate_compiler__SeparateCompiler__display_sizes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$display_sizes */
(nitmethod_t)nitc___nitc__SeparateCompiler___display_isset_checks, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$display_isset_checks */
(nitmethod_t)nitc___nitc__SeparateCompiler___box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$box_kinds */
(nitmethod_t)nitc___nitc__SeparateCompiler___runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$runtime_type_analysis */
(nitmethod_t)nitc___nitc__SeparateCompiler___class_conflict_graph_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$class_conflict_graph= */
(nitmethod_t)nitc___nitc__SeparateCompiler___class_conflict_graph, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$class_conflict_graph */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_color_consts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_color_consts */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_color_const, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_color_const */
(nitmethod_t)nitc___nitc__SeparateCompiler___method_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$method_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$attr_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$method_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$attr_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$undead_types */
(nitmethod_t)nitc___nitc__SeparateCompiler___box_kind_of, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$box_kind_of */
(nitmethod_t)nitc___nitc__SeparateCompiler___hardening_live_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$hardening_live_type */
(nitmethod_t)nitc___nitc__SeparateCompiler___link_mmethod, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$link_mmethod */
(nitmethod_t)nitc___nitc__SeparateCompiler___do_type_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$do_type_coloring */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_type_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_type_to_c */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$type_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$resolution_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_read_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$attr_read_count */
(nitmethod_t)nitc___nitc__SeparateCompiler___isset_checks_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$isset_checks_count */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_header_attribute_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_header_attribute_structs */
(nitmethod_t)nitc___nitc__SeparateCompiler___color_consts_done, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$color_consts_done */
(nitmethod_t)nitc___nitc__SeparateCompiler___is_monomorphic, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$is_monomorphic */
(nitmethod_t)nitc___nitc__SeparateCompiler___poset_from_mtypes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$poset_from_mtypes */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$type_ids= */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$type_colors= */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$type_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___build_type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$build_type_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___compute_type_test_layouts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compute_type_test_layouts */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$type_ids */
(nitmethod_t)nitc___nitc__SeparateCompiler___compute_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compute_resolution_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$type_colors */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_type_resolution_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$compile_type_resolution_table */
(nitmethod_t)nitc___nitc__SeparateCompiler___live_unresolved_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$live_unresolved_types */
(nitmethod_t)nitc___nitc__SeparateCompiler___opentype_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$opentype_colors= */
(nitmethod_t)nitc___nitc__SeparateCompiler___resolution_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$resolution_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___build_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$build_resolution_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___opentype_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$opentype_colors */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_read_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$attr_read_count= */
(nitmethod_t)nitc___nitc__SeparateCompiler___isset_checks_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$isset_checks_count= */
(nitmethod_t)nitc___nitc__AbstractCompiler___core__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$init */
(nitmethod_t)nitc___nitc__AbstractCompiler___display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$display_stats */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$compile_nitni_structs */
(nitmethod_t)nitc___nitc__AbstractCompiler___finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler$AbstractCompiler$finalize_ffi_for_module */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___class_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$class_ids= */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___class_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$class_colors= */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___class_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$class_tables= */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___build_class_typing_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$build_class_typing_tables */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___vt_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$vt_colors= */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___vt_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$vt_tables= */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___build_vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$build_vt_tables */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___class_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$class_tables */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___class_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$class_ids */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___class_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$class_colors */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___build_class_vts_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$build_class_vts_table */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___vt_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$vt_colors */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$vt_tables */
(nitmethod_t)nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler$SeparateErasureCompiler$retrieve_vt_bound */
(nitmethod_t)nitc___nitc__SeparateCompiler___core__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler$SeparateCompiler$init */
}
};
/* allocate SeparateErasureCompiler */
val* NEW_nitc__SeparateErasureCompiler(const struct type* type) {
val* self /* : SeparateErasureCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : Array[CodeFile] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, String] */;
val* var4 /* : HashMap[String, ANode] */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : Array[String] */;
val* var7 /* : ArraySet[String] */;
val* var8 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
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
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : HashMap[String, Int] */;
val* var29 /* : HashMap[String, Int] */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : Array[MNullableType] */;
val* var32 /* : HashSet[MType] */;
val* var33 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var34 /* : HashMap[MClass, Int] */;
val* var35 /* : HashSet[Object] */;
val* var36 /* : HashMap[MType, Array[nullable MType]] */;
val* var37 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var38 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var39 /* : HashMap[MClass, Array[nullable MProperty]] */;
self = nit_alloc(sizeof(struct instance) + 39*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SeparateErasureCompiler;
var = NEW_core__HashMap(&type_core__HashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[String, String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val = var; /* _names on <self:SeparateErasureCompiler exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__CodeFile);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[CodeFile]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val = var1; /* _files on <self:SeparateErasureCompiler exact> */
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val = var2; /* _linker_script on <self:SeparateErasureCompiler exact> */
var3 = NEW_core__HashMap(&type_core__HashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[String, String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val = var3; /* _provided_declarations on <self:SeparateErasureCompiler exact> */
var4 = NEW_core__HashMap(&type_core__HashMap__core__String__nitc__ANode);
{
core___core__HashMap___core__kernel__Object__init(var4); /* Direct call hash_collection$HashMap$init on <var4:HashMap[String, ANode]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val = var4; /* _requirers_of_declarations on <self:SeparateErasureCompiler exact> */
var5 = NEW_core__Array(&type_core__Array__nitc__ExternFile);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[ExternFile]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val = var5; /* _extern_bodies on <self:SeparateErasureCompiler exact> */
var6 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val = var6; /* _files_to_copy on <self:SeparateErasureCompiler exact> */
var7 = NEW_core__ArraySet(&type_core__ArraySet__core__String);
{
core___core__ArraySet___core__kernel__Object__init(var7); /* Direct call array$ArraySet$init on <var7:ArraySet[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val = var7; /* _seen_extern on <self:SeparateErasureCompiler exact> */
var8 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var8, 5l); /* Direct call array$Array$with_capacity on <var8:Array[String]>*/
}
var_ = var8;
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "isa";
var11 = core__flat___NativeString___to_s_full(var10, 3l, 3l);
var9 = var11;
varonce = var9;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var9); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "as";
var15 = core__flat___NativeString___to_s_full(var14, 2l, 2l);
var13 = var15;
varonce12 = var13;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var13); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "auto";
var19 = core__flat___NativeString___to_s_full(var18, 4l, 4l);
var17 = var19;
varonce16 = var17;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var17); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = core__flat___NativeString___to_s_full(var22, 10l, 10l);
var21 = var23;
varonce20 = var21;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var21); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "erasure";
var27 = core__flat___NativeString___to_s_full(var26, 7l, 7l);
var25 = var27;
varonce24 = var25;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var25); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateErasureCompiler exact> */
{
var28 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var28; /* _count_type_test_resolved on <self:SeparateErasureCompiler exact> */
{
var29 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var29; /* _count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
{
var30 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var30; /* _count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var31 = NEW_core__Array(&type_core__Array__nitc__MNullableType);
{
core___core__Array___core__kernel__Object__init(var31); /* Direct call array$Array$init on <var31:Array[MNullableType]>*/
}
self->attrs[COLOR_nitc__light__AbstractCompiler___compiled_null_types].val = var31; /* _compiled_null_types on <self:SeparateErasureCompiler exact> */
var32 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var32); /* Direct call hash_collection$HashSet$init on <var32:HashSet[MType]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val = var32; /* _undead_types on <self:SeparateErasureCompiler exact> */
var33 = NEW_core__HashMap(&type_core__HashMap__nitc__MClassDef__core__HashSet__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var33); /* Direct call hash_collection$HashMap$init on <var33:HashMap[MClassDef, HashSet[MType]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val = var33; /* _live_unresolved_types on <self:SeparateErasureCompiler exact> */
var34 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var34); /* Direct call hash_collection$HashMap$init on <var34:HashMap[MClass, Int]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val = var34; /* _box_kinds on <self:SeparateErasureCompiler exact> */
var35 = NEW_core__HashSet(&type_core__HashSet__core__Object);
{
core___core__HashSet___core__kernel__Object__init(var35); /* Direct call hash_collection$HashSet$init on <var35:HashSet[Object]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___color_consts_done].val = var35; /* _color_consts_done on <self:SeparateErasureCompiler exact> */
var36 = NEW_core__HashMap(&type_core__HashMap__nitc__MType__core__Array__nullable__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var36); /* Direct call hash_collection$HashMap$init on <var36:HashMap[MType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val = var36; /* _type_tables on <self:SeparateErasureCompiler exact> */
var37 = NEW_core__HashMap(&type_core__HashMap__nitc__MClassType__core__Array__nullable__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var37); /* Direct call hash_collection$HashMap$init on <var37:HashMap[MClassType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val = var37; /* _resolution_tables on <self:SeparateErasureCompiler exact> */
var38 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MPropDef);
{
core___core__HashMap___core__kernel__Object__init(var38); /* Direct call hash_collection$HashMap$init on <var38:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val = var38; /* _method_tables on <self:SeparateErasureCompiler exact> */
var39 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MProperty);
{
core___core__HashMap___core__kernel__Object__init(var39); /* Direct call hash_collection$HashMap$init on <var39:HashMap[MClass, Array[nullable MProperty]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val = var39; /* _attr_tables on <self:SeparateErasureCompiler exact> */
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = 0l; /* _isset_checks_count on <self:SeparateErasureCompiler exact> */
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l = 0l; /* _attr_read_count on <self:SeparateErasureCompiler exact> */
return self;
}
/* runtime class nitc__SeparateErasureCompilerVisitor: nitc::SeparateErasureCompilerVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_decl, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_decl */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___require_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$require_declaration */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___nit_alloc, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$nit_alloc */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___compiler, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$compiler */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_abort */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_named_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_named_var */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___get_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$get_name */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___set_finalizer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$set_finalizer */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$init_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$send */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_expr */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___compiler_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$compiler= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___writer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$writer */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___current_node, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$current_node */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_raw_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_raw_abort */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___anchor, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$anchor */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$names */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___last, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$last */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___last_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$last= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_var */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___writer_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$writer= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___frame, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$frame */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___monomorphic_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$monomorphic_send */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___frame_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$frame= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___mmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$mmodule */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$call */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___assign, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$assign */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___debug, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$debug */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$adapt_signature */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$autobox */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$class_name_string */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___current_node_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$current_node= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___ret, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$ret */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___value_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$value_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$write_attribute */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___bool_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$bool_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___maybenull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$maybenull */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___bool_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$bool_type */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_cast, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_cast */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$compile_callsite */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$supercall */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___variable, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$variable */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___stmt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$stmt */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$isset_attribute */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$read_attribute */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$string_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___check_recv_notnull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$check_recv_notnull */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___object_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$object_type */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$type_test */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$monomorphic_super_send */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___resolve_for, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$resolve_for */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$unbox_signature_extern */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$equal_test */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$native_array_def */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$is_same_type_test */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__box_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$box_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___variables, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$variables */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$expr */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___get_property, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$get_property */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$unbox_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_var_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_var_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___declare_once, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$declare_once */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___autoadapt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$autoadapt */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___escapemark_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$escapemark_name */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___varargize, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$varargize */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_escape_label, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_escape_label */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___expr_bool, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$expr_bool */
(nitmethod_t)nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler$SeparateErasureCompilerVisitor$native_array_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$init_instance_or_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___null_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$null_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___byte_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$byte_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int8_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int8_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int16_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int16_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___uint16_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$uint16_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int32_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int32_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___uint32_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$uint32_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___float_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$float_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___char_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$char_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___native_string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$native_string_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$array_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$native_array_set */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$vararg_instance */
(nitmethod_t)core___core__Object___init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel$Object$init */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___class_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$class_info */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$hardening_live_open_type */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___link_unresolved_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$link_unresolved_type */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$type_info */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$table_send */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___can_be_primitive, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$can_be_primitive */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___extract_tag, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$extract_tag */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___before_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$before_send */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___direct_call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$direct_call */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___maybe_null, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$maybe_null */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___hardening_cast_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$hardening_cast_type */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$compile_callsite */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler$SeparateCompilerVisitor$compile_callsite */
}
};
/* allocate SeparateErasureCompilerVisitor */
val* NEW_nitc__SeparateErasureCompilerVisitor(const struct type* type) {
val* self /* : SeparateErasureCompilerVisitor */;
val* var /* : HashSet[String] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SeparateErasureCompilerVisitor;
var = NEW_core__HashSet(&type_core__HashSet__core__String);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val = var; /* _names on <self:SeparateErasureCompilerVisitor exact> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = 0l; /* _last on <self:SeparateErasureCompilerVisitor exact> */
var1 = NEW_core__HashMap(&type_core__HashMap__nitc__Variable__nitc__RuntimeVariable);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[Variable, RuntimeVariable]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val = var1; /* _variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* runtime class nitc__SeparateCompilerPhase: nitc::SeparateCompilerPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__SeparateCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_compiler:SeparateCompilerPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_compiler:SeparateCompilerPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_compiler:SeparateCompilerPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_compiler:SeparateCompilerPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$disabled */
(nitmethod_t)nitc___nitc__SeparateCompilerPhase___nitc__modelbuilder__Phase__process_mainmodule, /* pointer to separate_compiler:SeparateCompilerPhase:separate_compiler$SeparateCompilerPhase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to separate_compiler:SeparateCompilerPhase:kernel$Object$init */
}
};
/* allocate SeparateCompilerPhase */
val* NEW_nitc__SeparateCompilerPhase(const struct type* type) {
val* self /* : SeparateCompilerPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SeparateCompilerPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:SeparateCompilerPhase exact> */
return self;
}
/* runtime class nitc__SeparateCompiler: nitc::SeparateCompiler (dead=false; need_corpse=false)*/
const struct class class_nitc__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__SeparateCompiler___core__kernel__Object__init, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to separate_compiler:SeparateCompiler:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_compiler:SeparateCompiler:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_compiler:SeparateCompiler:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_compiler:SeparateCompiler:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_compiler:SeparateCompiler:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__AbstractCompiler___init_count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$init_count_type_test_tags */
(nitmethod_t)nitc___nitc__AbstractCompiler___mainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$mainmodule= */
(nitmethod_t)nitc___nitc__AbstractCompiler___modelbuilder_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$modelbuilder= */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$do_compilation */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$display_stats */
(nitmethod_t)nitc___nitc__AbstractCompiler___new_file, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$new_file */
(nitmethod_t)nitc___nitc__AbstractCompiler___header_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$header= */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$count_type_test_tags */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_header */
(nitmethod_t)nitc___nitc__AbstractCompiler___mainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$mainmodule */
(nitmethod_t)nitc___nitc__AbstractCompiler___modelbuilder, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$modelbuilder */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_nitni_global_ref_functions */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_main_function */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_finalizer_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_finalizer_function */
(nitmethod_t)nitc___nitc__AbstractCompiler___target_platform, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$target_platform */
(nitmethod_t)nitc___nitc__AbstractCompiler___toolchain_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$toolchain= */
(nitmethod_t)nitc___nitc__AbstractCompiler___realmainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$realmainmodule= */
(nitmethod_t)nitc___nitc__AbstractCompiler___target_platform_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$target_platform= */
(nitmethod_t)nitc___nitc__AbstractCompiler___files, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$files */
(nitmethod_t)nitc___nitc__AbstractCompiler___header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$header */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_header_structs */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_nitni_structs */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_catch_stack, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_catch_stack */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$new_visitor */
(nitmethod_t)nitc___nitc__AbstractCompiler___provide_declaration, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$provide_declaration */
(nitmethod_t)nitc___nitc__AbstractCompiler___generate_init_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$generate_init_attr */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_before_main, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_before_main */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_begin_main, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_begin_main */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_resolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$count_type_test_resolved */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_unresolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$count_type_test_unresolved */
(nitmethod_t)nitc___nitc__AbstractCompiler___count_type_test_skipped, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$count_type_test_skipped */
(nitmethod_t)nitc___nitc__AbstractCompiler___linker_script, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$linker_script */
(nitmethod_t)nitc___nitc__AbstractCompiler___requirers_of_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$requirers_of_declarations */
(nitmethod_t)nitc___nitc__AbstractCompiler___provided_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$provided_declarations */
(nitmethod_t)nitc___nitc__AbstractCompiler___realmainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$realmainmodule */
(nitmethod_t)nitc___nitc__AbstractCompiler___names, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$names */
(nitmethod_t)nitc___nitc__AbstractCompiler___build_c_to_nit_bindings, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$build_c_to_nit_bindings */
(nitmethod_t)nitc___nitc__AbstractCompiler___extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$extern_bodies */
(nitmethod_t)nitc___nitc__AbstractCompiler___files_to_copy, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$files_to_copy */
(nitmethod_t)nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$finalize_ffi_for_module */
(nitmethod_t)nitc___nitc__AbstractCompiler___toolchain, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$toolchain */
(nitmethod_t)nitc___nitc__AbstractCompiler___seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$seen_extern */
(nitmethod_t)core___core__Object___init, /* pointer to separate_compiler:SeparateCompiler:kernel$Object$init */
(nitmethod_t)nitc___nitc__SeparateCompiler___runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$runtime_type_analysis= */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_box_kinds */
(nitmethod_t)nitc___nitc__SeparateCompiler___do_property_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$do_property_coloring */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_class_infos, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_class_infos */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_class_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_class_to_c */
(nitmethod_t)nitc___nitc__SeparateCompiler___link_mmethods, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$link_mmethods */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_module_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_module_to_c */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_types */
(nitmethod_t)nitc___nitc__SeparateCompiler___display_sizes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$display_sizes */
(nitmethod_t)nitc___nitc__SeparateCompiler___display_isset_checks, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$display_isset_checks */
(nitmethod_t)nitc___nitc__SeparateCompiler___box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$box_kinds */
(nitmethod_t)nitc___nitc__SeparateCompiler___runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$runtime_type_analysis */
(nitmethod_t)nitc___nitc__SeparateCompiler___class_conflict_graph_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$class_conflict_graph= */
(nitmethod_t)nitc___nitc__SeparateCompiler___class_conflict_graph, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$class_conflict_graph */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_color_consts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_color_consts */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_color_const, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_color_const */
(nitmethod_t)nitc___nitc__SeparateCompiler___method_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$method_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$attr_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$method_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$attr_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$undead_types */
(nitmethod_t)nitc___nitc__SeparateCompiler___box_kind_of, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$box_kind_of */
(nitmethod_t)nitc___nitc__SeparateCompiler___hardening_live_type, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$hardening_live_type */
(nitmethod_t)nitc___nitc__SeparateCompiler___link_mmethod, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$link_mmethod */
(nitmethod_t)nitc___nitc__SeparateCompiler___do_type_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$do_type_coloring */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_type_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_type_to_c */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$type_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$resolution_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_read_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$attr_read_count */
(nitmethod_t)nitc___nitc__SeparateCompiler___isset_checks_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$isset_checks_count */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_header_attribute_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_header_attribute_structs */
(nitmethod_t)nitc___nitc__SeparateCompiler___color_consts_done, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$color_consts_done */
(nitmethod_t)nitc___nitc__SeparateCompiler___is_monomorphic, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$is_monomorphic */
(nitmethod_t)nitc___nitc__SeparateCompiler___poset_from_mtypes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$poset_from_mtypes */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_ids_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$type_ids= */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$type_colors= */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$type_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___build_type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$build_type_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___compute_type_test_layouts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compute_type_test_layouts */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_ids, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$type_ids */
(nitmethod_t)nitc___nitc__SeparateCompiler___compute_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compute_resolution_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___type_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$type_colors */
(nitmethod_t)nitc___nitc__SeparateCompiler___compile_type_resolution_table, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$compile_type_resolution_table */
(nitmethod_t)nitc___nitc__SeparateCompiler___live_unresolved_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$live_unresolved_types */
(nitmethod_t)nitc___nitc__SeparateCompiler___opentype_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$opentype_colors= */
(nitmethod_t)nitc___nitc__SeparateCompiler___resolution_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$resolution_tables= */
(nitmethod_t)nitc___nitc__SeparateCompiler___build_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$build_resolution_tables */
(nitmethod_t)nitc___nitc__SeparateCompiler___opentype_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$opentype_colors */
(nitmethod_t)nitc___nitc__SeparateCompiler___attr_read_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$attr_read_count= */
(nitmethod_t)nitc___nitc__SeparateCompiler___isset_checks_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler$SeparateCompiler$isset_checks_count= */
(nitmethod_t)nitc___nitc__AbstractCompiler___core__kernel__Object__init, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$init */
(nitmethod_t)nitc___nitc__AbstractCompiler___display_stats, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$display_stats */
(nitmethod_t)nitc___nitc__AbstractCompiler___compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$compile_nitni_structs */
(nitmethod_t)nitc___nitc__AbstractCompiler___finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler$AbstractCompiler$finalize_ffi_for_module */
}
};
/* allocate SeparateCompiler */
val* NEW_nitc__SeparateCompiler(const struct type* type) {
val* self /* : SeparateCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : Array[CodeFile] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, String] */;
val* var4 /* : HashMap[String, ANode] */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : Array[String] */;
val* var7 /* : ArraySet[String] */;
val* var8 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
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
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : HashMap[String, Int] */;
val* var29 /* : HashMap[String, Int] */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : Array[MNullableType] */;
val* var32 /* : HashSet[MType] */;
val* var33 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var34 /* : HashMap[MClass, Int] */;
val* var35 /* : HashSet[Object] */;
val* var36 /* : HashMap[MType, Array[nullable MType]] */;
val* var37 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var38 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var39 /* : HashMap[MClass, Array[nullable MProperty]] */;
self = nit_alloc(sizeof(struct instance) + 34*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SeparateCompiler;
var = NEW_core__HashMap(&type_core__HashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[String, String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val = var; /* _names on <self:SeparateCompiler exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__CodeFile);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[CodeFile]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val = var1; /* _files on <self:SeparateCompiler exact> */
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val = var2; /* _linker_script on <self:SeparateCompiler exact> */
var3 = NEW_core__HashMap(&type_core__HashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[String, String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val = var3; /* _provided_declarations on <self:SeparateCompiler exact> */
var4 = NEW_core__HashMap(&type_core__HashMap__core__String__nitc__ANode);
{
core___core__HashMap___core__kernel__Object__init(var4); /* Direct call hash_collection$HashMap$init on <var4:HashMap[String, ANode]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val = var4; /* _requirers_of_declarations on <self:SeparateCompiler exact> */
var5 = NEW_core__Array(&type_core__Array__nitc__ExternFile);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[ExternFile]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val = var5; /* _extern_bodies on <self:SeparateCompiler exact> */
var6 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val = var6; /* _files_to_copy on <self:SeparateCompiler exact> */
var7 = NEW_core__ArraySet(&type_core__ArraySet__core__String);
{
core___core__ArraySet___core__kernel__Object__init(var7); /* Direct call array$ArraySet$init on <var7:ArraySet[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val = var7; /* _seen_extern on <self:SeparateCompiler exact> */
var8 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var8, 5l); /* Direct call array$Array$with_capacity on <var8:Array[String]>*/
}
var_ = var8;
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "isa";
var11 = core__flat___NativeString___to_s_full(var10, 3l, 3l);
var9 = var11;
varonce = var9;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var9); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "as";
var15 = core__flat___NativeString___to_s_full(var14, 2l, 2l);
var13 = var15;
varonce12 = var13;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var13); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "auto";
var19 = core__flat___NativeString___to_s_full(var18, 4l, 4l);
var17 = var19;
varonce16 = var17;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var17); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = core__flat___NativeString___to_s_full(var22, 10l, 10l);
var21 = var23;
varonce20 = var21;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var21); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "erasure";
var27 = core__flat___NativeString___to_s_full(var26, 7l, 7l);
var25 = var27;
varonce24 = var25;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var25); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateCompiler exact> */
{
var28 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var28; /* _count_type_test_resolved on <self:SeparateCompiler exact> */
{
var29 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var29; /* _count_type_test_unresolved on <self:SeparateCompiler exact> */
{
var30 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var30; /* _count_type_test_skipped on <self:SeparateCompiler exact> */
var31 = NEW_core__Array(&type_core__Array__nitc__MNullableType);
{
core___core__Array___core__kernel__Object__init(var31); /* Direct call array$Array$init on <var31:Array[MNullableType]>*/
}
self->attrs[COLOR_nitc__light__AbstractCompiler___compiled_null_types].val = var31; /* _compiled_null_types on <self:SeparateCompiler exact> */
var32 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var32); /* Direct call hash_collection$HashSet$init on <var32:HashSet[MType]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val = var32; /* _undead_types on <self:SeparateCompiler exact> */
var33 = NEW_core__HashMap(&type_core__HashMap__nitc__MClassDef__core__HashSet__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var33); /* Direct call hash_collection$HashMap$init on <var33:HashMap[MClassDef, HashSet[MType]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val = var33; /* _live_unresolved_types on <self:SeparateCompiler exact> */
var34 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var34); /* Direct call hash_collection$HashMap$init on <var34:HashMap[MClass, Int]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val = var34; /* _box_kinds on <self:SeparateCompiler exact> */
var35 = NEW_core__HashSet(&type_core__HashSet__core__Object);
{
core___core__HashSet___core__kernel__Object__init(var35); /* Direct call hash_collection$HashSet$init on <var35:HashSet[Object]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___color_consts_done].val = var35; /* _color_consts_done on <self:SeparateCompiler exact> */
var36 = NEW_core__HashMap(&type_core__HashMap__nitc__MType__core__Array__nullable__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var36); /* Direct call hash_collection$HashMap$init on <var36:HashMap[MType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val = var36; /* _type_tables on <self:SeparateCompiler exact> */
var37 = NEW_core__HashMap(&type_core__HashMap__nitc__MClassType__core__Array__nullable__nitc__MType);
{
core___core__HashMap___core__kernel__Object__init(var37); /* Direct call hash_collection$HashMap$init on <var37:HashMap[MClassType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val = var37; /* _resolution_tables on <self:SeparateCompiler exact> */
var38 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MPropDef);
{
core___core__HashMap___core__kernel__Object__init(var38); /* Direct call hash_collection$HashMap$init on <var38:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val = var38; /* _method_tables on <self:SeparateCompiler exact> */
var39 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MProperty);
{
core___core__HashMap___core__kernel__Object__init(var39); /* Direct call hash_collection$HashMap$init on <var39:HashMap[MClass, Array[nullable MProperty]]>*/
}
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val = var39; /* _attr_tables on <self:SeparateCompiler exact> */
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = 0l; /* _isset_checks_count on <self:SeparateCompiler exact> */
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l = 0l; /* _attr_read_count on <self:SeparateCompiler exact> */
return self;
}
/* runtime class nitc__SeparateCompilerVisitor: nitc::SeparateCompilerVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_decl, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_decl */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___require_declaration, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$require_declaration */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___nit_alloc, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$nit_alloc */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___compiler, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$compiler */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_abort */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_named_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_named_var */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___get_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$get_name */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___set_finalizer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$set_finalizer */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$init_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$send */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_expr */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___compiler_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$compiler= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___writer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$writer */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___current_node, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$current_node */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_raw_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_raw_abort */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___anchor, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$anchor */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$names */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___last, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$last */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___last_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$last= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_var */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___writer_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$writer= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___frame, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$frame */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___monomorphic_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$monomorphic_send */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___frame_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$frame= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___mmodule, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$mmodule */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$call */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___assign, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$assign */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___debug, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$debug */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$adapt_signature */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$autobox */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$class_name_string */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___current_node_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$current_node= */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___ret, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$ret */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___value_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$value_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$write_attribute */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___bool_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$bool_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___maybenull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$maybenull */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___bool_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$bool_type */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_cast, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_cast */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$compile_callsite */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$supercall */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___variable, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$variable */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___stmt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$stmt */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$isset_attribute */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$read_attribute */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$string_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___check_recv_notnull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$check_recv_notnull */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___object_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$object_type */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$type_test */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$monomorphic_super_send */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___resolve_for, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$resolve_for */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$unbox_signature_extern */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$equal_test */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$native_array_def */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$is_same_type_test */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__box_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$box_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___variables, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$variables */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$expr */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___get_property, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$get_property */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$unbox_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___new_var_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$new_var_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___declare_once, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$declare_once */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___autoadapt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$autoadapt */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___escapemark_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$escapemark_name */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___varargize, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$varargize */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___add_escape_label, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$add_escape_label */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___expr_bool, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$expr_bool */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$native_array_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$init_instance_or_extern */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___null_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$null_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___byte_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$byte_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int8_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int8_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int16_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int16_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___uint16_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$uint16_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___int32_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$int32_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___uint32_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$uint32_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___float_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$float_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___char_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$char_instance */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___native_string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$native_string_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$array_instance */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$native_array_set */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$vararg_instance */
(nitmethod_t)core___core__Object___init, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel$Object$init */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___class_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$class_info */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$hardening_live_open_type */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___link_unresolved_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$link_unresolved_type */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$type_info */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$table_send */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___can_be_primitive, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$can_be_primitive */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___extract_tag, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$extract_tag */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___before_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$before_send */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___direct_call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$direct_call */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___maybe_null, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$maybe_null */
(nitmethod_t)nitc___nitc__SeparateCompilerVisitor___hardening_cast_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler$SeparateCompilerVisitor$hardening_cast_type */
(nitmethod_t)nitc___nitc__AbstractCompilerVisitor___compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler$AbstractCompilerVisitor$compile_callsite */
}
};
/* allocate SeparateCompilerVisitor */
val* NEW_nitc__SeparateCompilerVisitor(const struct type* type) {
val* self /* : SeparateCompilerVisitor */;
val* var /* : HashSet[String] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SeparateCompilerVisitor;
var = NEW_core__HashSet(&type_core__HashSet__core__String);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val = var; /* _names on <self:SeparateCompilerVisitor exact> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = 0l; /* _last on <self:SeparateCompilerVisitor exact> */
var1 = NEW_core__HashMap(&type_core__HashMap__nitc__Variable__nitc__RuntimeVariable);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[Variable, RuntimeVariable]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val = var1; /* _variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* runtime class nitc__SeparateRuntimeFunction: nitc::SeparateRuntimeFunction (dead=false; need_corpse=false)*/
const struct class class_nitc__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___core__kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$sys */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___core__abstract_text__Object__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__AbstractRuntimeFunction___c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler$AbstractRuntimeFunction$c_name */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$compile_to_c */
(nitmethod_t)nitc___nitc__AbstractRuntimeFunction___mmethoddef, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler$AbstractRuntimeFunction$mmethoddef */
(nitmethod_t)nitc___nitc__AbstractRuntimeFunction___mmethoddef_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler$AbstractRuntimeFunction$mmethoddef= */
(nitmethod_t)nitc___nitc__AbstractRuntimeFunction___c_name_cache, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler$AbstractRuntimeFunction$c_name_cache */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__build_c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$build_c_name */
(nitmethod_t)nitc___nitc__AbstractRuntimeFunction___c_name_cache_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler$AbstractRuntimeFunction$c_name_cache= */
(nitmethod_t)core___core__Object___init, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel$Object$init */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___compile_trampolines, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$compile_trampolines */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___called_recv, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$called_recv */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___called_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$called_signature */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___c_ret, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$c_ret */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___c_sig, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$c_sig */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___called_recv_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$called_recv= */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___called_signature_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$called_signature= */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___build_c_name_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$build_c_name= */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___is_thunk_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$is_thunk= */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___c_funptrtype, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$c_funptrtype */
(nitmethod_t)nitc___nitc__SeparateRuntimeFunction___is_thunk, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler$SeparateRuntimeFunction$is_thunk */
(nitmethod_t)nitc___nitc__AbstractRuntimeFunction___core__kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler$AbstractRuntimeFunction$init */
}
};
/* allocate SeparateRuntimeFunction */
val* NEW_nitc__SeparateRuntimeFunction(const struct type* type) {
val* self /* : SeparateRuntimeFunction */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SeparateRuntimeFunction;
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s = 0; /* _is_thunk on <self:SeparateRuntimeFunction exact> */
return self;
}
/* runtime class nitc__PropertyLayoutElement: nitc::PropertyLayoutElement (dead=true; need_corpse=false)*/
/* allocate PropertyLayoutElement */
val* NEW_nitc__PropertyLayoutElement(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "PropertyLayoutElement is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__Toolchain: nitc::Toolchain (dead=true; need_corpse=false)*/
/* allocate Toolchain */
val* NEW_nitc__Toolchain(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Toolchain is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MakefileToolchain: nitc::MakefileToolchain (dead=false; need_corpse=false)*/
const struct class class_nitc__MakefileToolchain = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Toolchain___core__kernel__Object__init, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_compiler:MakefileToolchain:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_compiler:MakefileToolchain:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_compiler:MakefileToolchain:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_compiler:MakefileToolchain:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_compiler:MakefileToolchain:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MakefileToolchain___Toolchain__write_and_make, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$write_and_make */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$toolcontext= */
(nitmethod_t)nitc___nitc__Toolchain___compiler_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$compiler= */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$toolcontext */
(nitmethod_t)nitc___nitc__Toolchain___compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$compile_dir */
(nitmethod_t)nitc___nitc__Toolchain___root_compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$root_compile_dir */
(nitmethod_t)nitc___nitc__Toolchain___compiler, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$Toolchain$compiler */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_compiler:MakefileToolchain:kernel$Object$init */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_files, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$write_files */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_makefile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$write_makefile */
(nitmethod_t)nitc___nitc__MakefileToolchain___compile_c_code, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$compile_c_code */
(nitmethod_t)nitc___nitc__MakefileToolchain___outfile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$outfile */
(nitmethod_t)nitc___nitc__MakefileToolchain___makefile_name, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$makefile_name */
(nitmethod_t)nitc___nitc__MakefileToolchain___default_outname, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler$MakefileToolchain$default_outname */
}
};
/* allocate MakefileToolchain */
val* NEW_nitc__MakefileToolchain(const struct type* type) {
val* self /* : MakefileToolchain */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MakefileToolchain;
return self;
}
/* runtime class nitc__AbstractCompiler: nitc::AbstractCompiler (dead=true; need_corpse=false)*/
/* allocate AbstractCompiler */
val* NEW_nitc__AbstractCompiler(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "AbstractCompiler is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__CodeFile: nitc::CodeFile (dead=false; need_corpse=false)*/
const struct class class_nitc__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__CodeFile___core__kernel__Object__init, /* pointer to abstract_compiler:CodeFile:abstract_compiler$CodeFile$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_compiler:CodeFile:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_compiler:CodeFile:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_compiler:CodeFile:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_compiler:CodeFile:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_compiler:CodeFile:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_compiler:CodeFile:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_compiler:CodeFile:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_compiler:CodeFile:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_compiler:CodeFile:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_compiler:CodeFile:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_compiler:CodeFile:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__CodeFile___name_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler$CodeFile$name= */
(nitmethod_t)nitc___nitc__CodeFile___writers, /* pointer to abstract_compiler:CodeFile:abstract_compiler$CodeFile$writers */
(nitmethod_t)nitc___nitc__CodeFile___required_declarations, /* pointer to abstract_compiler:CodeFile:abstract_compiler$CodeFile$required_declarations */
(nitmethod_t)nitc___nitc__CodeFile___name, /* pointer to abstract_compiler:CodeFile:abstract_compiler$CodeFile$name */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_compiler:CodeFile:kernel$Object$init */
}
};
/* allocate CodeFile */
val* NEW_nitc__CodeFile(const struct type* type) {
val* self /* : CodeFile */;
val* var /* : Array[CodeWriter] */;
val* var1 /* : HashSet[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CodeFile;
var = NEW_core__Array(&type_core__Array__nitc__CodeWriter);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[CodeWriter]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val = var; /* _writers on <self:CodeFile exact> */
var1 = NEW_core__HashSet(&type_core__HashSet__core__String);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val = var1; /* _required_declarations on <self:CodeFile exact> */
return self;
}
/* runtime class nitc__CodeWriter: nitc::CodeWriter (dead=false; need_corpse=false)*/
const struct class class_nitc__CodeWriter = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__CodeWriter___core__kernel__Object__init, /* pointer to abstract_compiler:CodeWriter:abstract_compiler$CodeWriter$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_compiler:CodeWriter:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_compiler:CodeWriter:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_compiler:CodeWriter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_compiler:CodeWriter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_compiler:CodeWriter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_compiler:CodeWriter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_compiler:CodeWriter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_compiler:CodeWriter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_compiler:CodeWriter:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__CodeWriter___file_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler$CodeWriter$file= */
(nitmethod_t)nitc___nitc__CodeWriter___file, /* pointer to abstract_compiler:CodeWriter:abstract_compiler$CodeWriter$file */
(nitmethod_t)nitc___nitc__CodeWriter___add_decl, /* pointer to abstract_compiler:CodeWriter:abstract_compiler$CodeWriter$add_decl */
(nitmethod_t)nitc___nitc__CodeWriter___decl_lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler$CodeWriter$decl_lines */
(nitmethod_t)nitc___nitc__CodeWriter___lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler$CodeWriter$lines */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_compiler:CodeWriter:kernel$Object$init */
}
};
/* allocate CodeWriter */
val* NEW_nitc__CodeWriter(const struct type* type) {
val* self /* : CodeWriter */;
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CodeWriter;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val = var; /* _lines on <self:CodeWriter exact> */
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val = var1; /* _decl_lines on <self:CodeWriter exact> */
return self;
}
/* runtime class nitc__AbstractCompilerVisitor: nitc::AbstractCompilerVisitor (dead=true; need_corpse=false)*/
/* allocate AbstractCompilerVisitor */
val* NEW_nitc__AbstractCompilerVisitor(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "AbstractCompilerVisitor is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__AbstractRuntimeFunction: nitc::AbstractRuntimeFunction (dead=true; need_corpse=false)*/
/* allocate AbstractRuntimeFunction */
val* NEW_nitc__AbstractRuntimeFunction(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "AbstractRuntimeFunction is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__RuntimeVariable: nitc::RuntimeVariable (dead=false; need_corpse=false)*/
const struct class class_nitc__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__RuntimeVariable___core__kernel__Object__init, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$sys */
(nitmethod_t)nitc___nitc__RuntimeVariable___core__abstract_text__Object__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$is_same_instance */
(nitmethod_t)nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_compiler:RuntimeVariable:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_compiler:RuntimeVariable:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_compiler:RuntimeVariable:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__RuntimeVariable___is_exact_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$is_exact= */
(nitmethod_t)nitc___nitc__RuntimeVariable___name_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$name= */
(nitmethod_t)nitc___nitc__RuntimeVariable___mtype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$mtype= */
(nitmethod_t)nitc___nitc__RuntimeVariable___mcasttype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$mcasttype= */
(nitmethod_t)nitc___nitc__RuntimeVariable___mtype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$mtype */
(nitmethod_t)nitc___nitc__RuntimeVariable___mcasttype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$mcasttype */
(nitmethod_t)nitc___nitc__RuntimeVariable___name, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$name */
(nitmethod_t)nitc___nitc__RuntimeVariable___is_exact, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler$RuntimeVariable$is_exact */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_compiler:RuntimeVariable:kernel$Object$init */
}
};
/* allocate RuntimeVariable */
val* NEW_nitc__RuntimeVariable(const struct type* type) {
val* self /* : RuntimeVariable */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__RuntimeVariable;
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 0; /* _is_exact on <self:RuntimeVariable exact> */
return self;
}
/* runtime class nitc__StaticFrame: nitc::StaticFrame (dead=false; need_corpse=false)*/
const struct class class_nitc__StaticFrame = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__StaticFrame___core__kernel__Object__init, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_compiler:StaticFrame:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_compiler:StaticFrame:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_compiler:StaticFrame:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_compiler:StaticFrame:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_compiler:StaticFrame:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_compiler:StaticFrame:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_compiler:StaticFrame:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_compiler:StaticFrame:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_compiler:StaticFrame:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_compiler:StaticFrame:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_compiler:StaticFrame:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__StaticFrame___mpropdef, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$mpropdef */
(nitmethod_t)nitc___nitc__StaticFrame___arguments, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$arguments */
(nitmethod_t)nitc___nitc__StaticFrame___visitor_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$visitor= */
(nitmethod_t)nitc___nitc__StaticFrame___mpropdef_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$mpropdef= */
(nitmethod_t)nitc___nitc__StaticFrame___receiver_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$receiver= */
(nitmethod_t)nitc___nitc__StaticFrame___arguments_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$arguments= */
(nitmethod_t)nitc___nitc__StaticFrame___returnvar_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$returnvar= */
(nitmethod_t)nitc___nitc__StaticFrame___returnlabel_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$returnlabel= */
(nitmethod_t)nitc___nitc__StaticFrame___returnvar, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$returnvar */
(nitmethod_t)nitc___nitc__StaticFrame___returnlabel, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$returnlabel */
(nitmethod_t)nitc___nitc__StaticFrame___receiver, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$receiver */
(nitmethod_t)nitc___nitc__StaticFrame___comprehension, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$comprehension */
(nitmethod_t)nitc___nitc__StaticFrame___comprehension_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$comprehension= */
(nitmethod_t)nitc___nitc__StaticFrame___escapemark_names, /* pointer to abstract_compiler:StaticFrame:abstract_compiler$StaticFrame$escapemark_names */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_compiler:StaticFrame:kernel$Object$init */
}
};
/* allocate StaticFrame */
val* NEW_nitc__StaticFrame(const struct type* type) {
val* self /* : StaticFrame */;
val* var /* : HashMap[EscapeMark, String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__StaticFrame;
var = NEW_core__HashMap(&type_core__HashMap__nitc__EscapeMark__core__String);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[EscapeMark, String]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val = var; /* _escapemark_names on <self:StaticFrame exact> */
return self;
}
/* runtime class nitc__platform__PlatformPhase: nitc::platform::PlatformPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__platform__PlatformPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to platform:PlatformPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to platform:PlatformPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to platform:PlatformPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to platform:PlatformPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to platform:PlatformPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to platform:PlatformPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to platform:PlatformPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to platform:PlatformPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to platform:PlatformPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to platform:PlatformPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to platform:PlatformPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to platform:PlatformPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to platform:PlatformPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to platform:PlatformPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to platform:PlatformPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to platform:PlatformPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to platform:PlatformPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to platform:PlatformPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to platform:PlatformPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to platform:PlatformPhase:phase$Phase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to platform:PlatformPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc__platform___nitc__platform__PlatformPhase___nitc__phase__Phase__process_annotated_node, /* pointer to platform:PlatformPhase:platform$PlatformPhase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to platform:PlatformPhase:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to platform:PlatformPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to platform:PlatformPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to platform:PlatformPhase:kernel$Object$init */
}
};
/* allocate PlatformPhase */
val* NEW_nitc__platform__PlatformPhase(const struct type* type) {
val* self /* : PlatformPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__platform__PlatformPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:PlatformPhase exact> */
return self;
}
/* runtime class nitc__Platform: nitc::Platform (dead=false; need_corpse=false)*/
const struct class class_nitc__Platform = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to platform:Platform:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to platform:Platform:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to platform:Platform:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to platform:Platform:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to platform:Platform:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to platform:Platform:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to platform:Platform:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to platform:Platform:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to platform:Platform:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to platform:Platform:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to platform:Platform:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to platform:Platform:abstract_text$Object$native_class_name */
(nitmethod_t)nitc__abstract_compiler___Platform___toolchain, /* pointer to platform:Platform:abstract_compiler$Platform$toolchain */
(nitmethod_t)nitc___nitc__Platform___no_main, /* pointer to platform:Platform:platform$Platform$no_main */
(nitmethod_t)nitc___nitc__Platform___supports_libunwind, /* pointer to platform:Platform:platform$Platform$supports_libunwind */
(nitmethod_t)nitc___nitc__Platform___supports_linker_script, /* pointer to platform:Platform:platform$Platform$supports_linker_script */
(nitmethod_t)nitc___nitc__Platform___supports_libgc, /* pointer to platform:Platform:platform$Platform$supports_libgc */
}
};
/* allocate Platform */
val* NEW_nitc__Platform(const struct type* type) {
val* self /* : Platform */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__Platform;
return self;
}
/* runtime class nitc__InjectedLexer: nitc::InjectedLexer (dead=true; need_corpse=false)*/
/* allocate InjectedLexer */
val* NEW_nitc__InjectedLexer(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "InjectedLexer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__CCompilationUnit: nitc::CCompilationUnit (dead=false; need_corpse=false)*/
const struct class class_nitc__CCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to c_tools:CCompilationUnit:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to c_tools:CCompilationUnit:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to c_tools:CCompilationUnit:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to c_tools:CCompilationUnit:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to c_tools:CCompilationUnit:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to c_tools:CCompilationUnit:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to c_tools:CCompilationUnit:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to c_tools:CCompilationUnit:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to c_tools:CCompilationUnit:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to c_tools:CCompilationUnit:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to c_tools:CCompilationUnit:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to c_tools:CCompilationUnit:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_c_types, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$header_c_types */
(nitmethod_t)nitc__light___CCompilationUnit___write_as_nitni, /* pointer to c_tools:CCompilationUnit:light$CCompilationUnit$write_as_nitni */
(nitmethod_t)nitc___nitc__CCompilationUnit___files, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$files */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_c_base, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$header_c_base */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_decl, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$body_decl */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_as_impl, /* pointer to c_tools:CCompilationUnit:light_ffi_base$CCompilationUnit$write_as_impl */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_header_to_file, /* pointer to c_tools:CCompilationUnit:light_ffi_base$CCompilationUnit$write_header_to_file */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_body_to_file, /* pointer to c_tools:CCompilationUnit:light_ffi_base$CCompilationUnit$write_body_to_file */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_custom, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$header_custom */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_impl, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$body_impl */
(nitmethod_t)nitc___nitc__CCompilationUnit___compile_header_core, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$compile_header_core */
(nitmethod_t)nitc___nitc__CCompilationUnit___compile_body_core, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$compile_body_core */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_decl, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$header_decl */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_custom, /* pointer to c_tools:CCompilationUnit:c_tools$CCompilationUnit$body_custom */
}
};
/* allocate CCompilationUnit */
val* NEW_nitc__CCompilationUnit(const struct type* type) {
val* self /* : CCompilationUnit */;
val* var /* : Template */;
val* var1 /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CCompilationUnit;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val = var; /* _header_c_base on <self:CCompilationUnit exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val = var1; /* _header_custom on <self:CCompilationUnit exact> */
var2 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val = var2; /* _header_c_types on <self:CCompilationUnit exact> */
var3 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val = var3; /* _header_decl on <self:CCompilationUnit exact> */
var4 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val = var4; /* _body_decl on <self:CCompilationUnit exact> */
var5 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val = var5; /* _body_custom on <self:CCompilationUnit exact> */
var6 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val = var6; /* _body_impl on <self:CCompilationUnit exact> */
var7 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val = var7; /* _files on <self:CCompilationUnit exact> */
return self;
}
/* runtime class nitc__CFunction: nitc::CFunction (dead=true; need_corpse=false)*/
/* allocate CFunction */
val* NEW_nitc__CFunction(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "CFunction is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__ExternFile: nitc::ExternFile (dead=true; need_corpse=false)*/
/* allocate ExternFile */
val* NEW_nitc__ExternFile(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ExternFile is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__ExternCFile: nitc::ExternCFile (dead=false; need_corpse=false)*/
const struct class class_nitc__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ExternCFile___core__kernel__Object__init, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to c_tools:ExternCFile:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to c_tools:ExternCFile:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to c_tools:ExternCFile:abstract_text$Object$to_s */
(nitmethod_t)nitc___nitc__ExternCFile___core__kernel__Object___61d_61d, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to c_tools:ExternCFile:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to c_tools:ExternCFile:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to c_tools:ExternCFile:kernel$Object$object_id */
(nitmethod_t)nitc___nitc__ExternCFile___core__kernel__Object__hash, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to c_tools:ExternCFile:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to c_tools:ExternCFile:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to c_tools:ExternCFile:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__ExternFile___filename_61d, /* pointer to c_tools:ExternCFile:c_tools$ExternFile$filename= */
(nitmethod_t)nitc___nitc__ExternFile___pkgconfigs, /* pointer to c_tools:ExternCFile:c_tools$ExternFile$pkgconfigs */
(nitmethod_t)nitc___nitc__ExternCFile___ExternFile__makefile_rule_name, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$makefile_rule_name */
(nitmethod_t)nitc___nitc__ExternFile___filename, /* pointer to c_tools:ExternCFile:c_tools$ExternFile$filename */
(nitmethod_t)nitc___nitc__ExternCFile___ExternFile__makefile_rule_content, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$makefile_rule_content */
(nitmethod_t)nitc___nitc__ExternCFile___ExternFile__compiles_to_o_file, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$compiles_to_o_file */
(nitmethod_t)nitc___nitc__ExternFile___add_to_jar, /* pointer to c_tools:ExternCFile:c_tools$ExternFile$add_to_jar */
(nitmethod_t)core___core__Object___init, /* pointer to c_tools:ExternCFile:kernel$Object$init */
(nitmethod_t)nitc___nitc__ExternCFile___cflags_61d, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$cflags= */
(nitmethod_t)nitc___nitc__ExternCFile___cflags, /* pointer to c_tools:ExternCFile:c_tools$ExternCFile$cflags */
(nitmethod_t)nitc___nitc__ExternFile___core__kernel__Object__init, /* pointer to c_tools:ExternCFile:c_tools$ExternFile$init */
}
};
/* allocate ExternCFile */
val* NEW_nitc__ExternCFile(const struct type* type) {
val* self /* : ExternCFile */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ExternCFile;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val = var; /* _pkgconfigs on <self:ExternCFile exact> */
return self;
}
/* runtime class counter__Counter: counter::Counter (dead=true; need_corpse=false)*/
/* allocate Counter[nullable Object] */
val* NEW_counter__Counter(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Counter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class counter__CounterComparator: counter::counter::CounterComparator (dead=true; need_corpse=false)*/
/* allocate CounterComparator[nullable Object] */
val* NEW_counter__CounterComparator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "CounterComparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__POSetConflictGraph: nitc::POSetConflictGraph (dead=false; need_corpse=false)*/
const struct class class_nitc__POSetConflictGraph = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__POSetConflictGraph___core__kernel__Object__init, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to coloring:POSetConflictGraph:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to coloring:POSetConflictGraph:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to coloring:POSetConflictGraph:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to coloring:POSetConflictGraph:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to coloring:POSetConflictGraph:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to coloring:POSetConflictGraph:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to coloring:POSetConflictGraph:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to coloring:POSetConflictGraph:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to coloring:POSetConflictGraph:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to coloring:POSetConflictGraph:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to coloring:POSetConflictGraph:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__POSetConflictGraph___poset, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$poset */
(nitmethod_t)nitc___nitc__POSetConflictGraph___poset_61d, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$poset= */
(nitmethod_t)nitc___nitc__POSetConflictGraph___conflicts, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$conflicts */
(nitmethod_t)nitc___nitc__POSetConflictGraph___border, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$border */
(nitmethod_t)nitc___nitc__POSetConflictGraph___crown, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$crown */
(nitmethod_t)nitc___nitc__POSetConflictGraph___extract_core, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$extract_core */
(nitmethod_t)nitc___nitc__POSetConflictGraph___extract_border, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$extract_border */
(nitmethod_t)nitc___nitc__POSetConflictGraph___extract_crown, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$extract_crown */
(nitmethod_t)nitc___nitc__POSetConflictGraph___compute_conflicts, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$compute_conflicts */
(nitmethod_t)nitc___nitc__POSetConflictGraph___order_61d, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$order= */
(nitmethod_t)nitc___nitc__POSetConflictGraph___order, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$order */
(nitmethod_t)nitc___nitc__POSetConflictGraph___core, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$core */
(nitmethod_t)nitc___nitc__POSetConflictGraph___is_border, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$is_border */
(nitmethod_t)nitc___nitc__POSetConflictGraph___add_conflicts, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$add_conflicts */
(nitmethod_t)nitc___nitc__POSetConflictGraph___add_conflict, /* pointer to coloring:POSetConflictGraph:coloring$POSetConflictGraph$add_conflict */
(nitmethod_t)core___core__Object___init, /* pointer to coloring:POSetConflictGraph:kernel$Object$init */
}
};
/* allocate POSetConflictGraph[nullable Object] */
val* NEW_nitc__POSetConflictGraph(const struct type* type) {
val* self /* : POSetConflictGraph[nullable Object] */;
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : HashMap[nullable Object, Set[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__POSetConflictGraph;
var = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__nitc__POSetConflictGraph___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[nullable Object]>*/
}
self->attrs[COLOR_nitc__coloring__POSetConflictGraph___core].val = var; /* _core on <self:POSetConflictGraph[nullable Object] exact> */
var1 = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__nitc__POSetConflictGraph___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[nullable Object]>*/
}
self->attrs[COLOR_nitc__coloring__POSetConflictGraph___border].val = var1; /* _border on <self:POSetConflictGraph[nullable Object] exact> */
var2 = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__nitc__POSetConflictGraph___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var2); /* Direct call hash_collection$HashSet$init on <var2:HashSet[nullable Object]>*/
}
self->attrs[COLOR_nitc__coloring__POSetConflictGraph___crown].val = var2; /* _crown on <self:POSetConflictGraph[nullable Object] exact> */
var3 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetConflictGraph___35dE__core__Set__nitc__POSetConflictGraph___35dE]);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[nullable Object, Set[nullable Object]]>*/
}
self->attrs[COLOR_nitc__coloring__POSetConflictGraph___conflicts].val = var3; /* _conflicts on <self:POSetConflictGraph[nullable Object] exact> */
return self;
}
/* runtime class nitc__POSetColorer: nitc::POSetColorer (dead=false; need_corpse=false)*/
const struct class class_nitc__POSetColorer = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to coloring:POSetColorer:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to coloring:POSetColorer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to coloring:POSetColorer:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to coloring:POSetColorer:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to coloring:POSetColorer:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to coloring:POSetColorer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to coloring:POSetColorer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to coloring:POSetColorer:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to coloring:POSetColorer:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to coloring:POSetColorer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to coloring:POSetColorer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to coloring:POSetColorer:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__POSetColorer___colorize, /* pointer to coloring:POSetColorer:coloring$POSetColorer$colorize */
(nitmethod_t)nitc___nitc__POSetColorer___ids, /* pointer to coloring:POSetColorer:coloring$POSetColorer$ids */
(nitmethod_t)nitc___nitc__POSetColorer___colors, /* pointer to coloring:POSetColorer:coloring$POSetColorer$colors */
(nitmethod_t)nitc___nitc__POSetColorer___conflicts, /* pointer to coloring:POSetColorer:coloring$POSetColorer$conflicts */
(nitmethod_t)nitc___nitc__POSetColorer___poset_cache_61d, /* pointer to coloring:POSetColorer:coloring$POSetColorer$poset_cache= */
(nitmethod_t)nitc___nitc__POSetColorer___graph_61d, /* pointer to coloring:POSetColorer:coloring$POSetColorer$graph= */
(nitmethod_t)nitc___nitc__POSetColorer___allocate_ids, /* pointer to coloring:POSetColorer:coloring$POSetColorer$allocate_ids */
(nitmethod_t)nitc___nitc__POSetColorer___compute_colors, /* pointer to coloring:POSetColorer:coloring$POSetColorer$compute_colors */
(nitmethod_t)nitc___nitc__POSetColorer___conflicts_cache_61d, /* pointer to coloring:POSetColorer:coloring$POSetColorer$conflicts_cache= */
(nitmethod_t)nitc___nitc__POSetColorer___graph, /* pointer to coloring:POSetColorer:coloring$POSetColorer$graph */
(nitmethod_t)nitc___nitc__POSetColorer___is_colored_61d, /* pointer to coloring:POSetColorer:coloring$POSetColorer$is_colored= */
(nitmethod_t)nitc___nitc__POSetColorer___is_colored, /* pointer to coloring:POSetColorer:coloring$POSetColorer$is_colored */
(nitmethod_t)nitc___nitc__POSetColorer___ids_cache, /* pointer to coloring:POSetColorer:coloring$POSetColorer$ids_cache */
(nitmethod_t)nitc___nitc__POSetColorer___colors_cache, /* pointer to coloring:POSetColorer:coloring$POSetColorer$colors_cache */
(nitmethod_t)nitc___nitc__POSetColorer___conflicts_cache, /* pointer to coloring:POSetColorer:coloring$POSetColorer$conflicts_cache */
(nitmethod_t)nitc___nitc__POSetColorer___poset_cache, /* pointer to coloring:POSetColorer:coloring$POSetColorer$poset_cache */
(nitmethod_t)nitc___nitc__POSetColorer___colorize_core, /* pointer to coloring:POSetColorer:coloring$POSetColorer$colorize_core */
(nitmethod_t)nitc___nitc__POSetColorer___colorize_set, /* pointer to coloring:POSetColorer:coloring$POSetColorer$colorize_set */
(nitmethod_t)nitc___nitc__POSetColorer___min_color, /* pointer to coloring:POSetColorer:coloring$POSetColorer$min_color */
(nitmethod_t)nitc___nitc__POSetColorer___is_color_free, /* pointer to coloring:POSetColorer:coloring$POSetColorer$is_color_free */
}
};
/* allocate POSetColorer[Object] */
val* NEW_nitc__POSetColorer(const struct type* type) {
val* self /* : POSetColorer[Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__POSetColorer;
self->attrs[COLOR_nitc__coloring__POSetColorer___is_colored].s = 0; /* _is_colored on <self:POSetColorer[Object] exact> */
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetColorer___35dE__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nitc__coloring__POSetColorer___ids_cache].val = var; /* _ids_cache on <self:POSetColorer[Object] exact> */
var1 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetColorer___35dE__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nitc__coloring__POSetColorer___colors_cache].val = var1; /* _colors_cache on <self:POSetColorer[Object] exact> */
return self;
}
/* runtime class nitc__POSetGroupColorer: nitc::POSetGroupColorer (dead=false; need_corpse=false)*/
const struct class class_nitc__POSetGroupColorer = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__POSetGroupColorer___core__kernel__Object__init, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to coloring:POSetGroupColorer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to coloring:POSetGroupColorer:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to coloring:POSetGroupColorer:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to coloring:POSetGroupColorer:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to coloring:POSetGroupColorer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to coloring:POSetGroupColorer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to coloring:POSetGroupColorer:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to coloring:POSetGroupColorer:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to coloring:POSetGroupColorer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to coloring:POSetGroupColorer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to coloring:POSetGroupColorer:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__POSetGroupColorer___graph, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$graph */
(nitmethod_t)nitc___nitc__POSetGroupColorer___used_colors, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$used_colors */
(nitmethod_t)nitc___nitc__POSetGroupColorer___compute_colors, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$compute_colors */
(nitmethod_t)nitc___nitc__POSetGroupColorer___colors_cache, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$colors_cache */
(nitmethod_t)nitc___nitc__POSetGroupColorer___graph_61d, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$graph= */
(nitmethod_t)nitc___nitc__POSetGroupColorer___buckets_61d, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$buckets= */
(nitmethod_t)nitc___nitc__POSetGroupColorer___colors, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$colors */
(nitmethod_t)nitc___nitc__POSetGroupColorer___build_layout, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$build_layout */
(nitmethod_t)nitc___nitc__POSetGroupColorer___colorize_core, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$colorize_core */
(nitmethod_t)nitc___nitc__POSetGroupColorer___colorize_set, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$colorize_set */
(nitmethod_t)nitc___nitc__POSetGroupColorer___poset, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$poset */
(nitmethod_t)nitc___nitc__POSetGroupColorer___buckets, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$buckets */
(nitmethod_t)nitc___nitc__POSetGroupColorer___inherit_color, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$inherit_color */
(nitmethod_t)nitc___nitc__POSetGroupColorer___next_free_color, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$next_free_color */
(nitmethod_t)nitc___nitc__POSetGroupColorer___min_colors, /* pointer to coloring:POSetGroupColorer:coloring$POSetGroupColorer$min_colors */
(nitmethod_t)core___core__Object___init, /* pointer to coloring:POSetGroupColorer:kernel$Object$init */
}
};
/* allocate POSetGroupColorer[Object, Object] */
val* NEW_nitc__POSetGroupColorer(const struct type* type) {
val* self /* : POSetGroupColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, HashSet[Int]] */;
val* var2 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__POSetGroupColorer;
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetGroupColorer___35dE__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nitc__coloring__POSetGroupColorer___colors_cache].val = var; /* _colors_cache on <self:POSetGroupColorer[Object, Object] exact> */
var1 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetGroupColorer___35dH__core__HashSet__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[Object, HashSet[Int]]>*/
}
self->attrs[COLOR_nitc__coloring__POSetGroupColorer___used_colors].val = var1; /* _used_colors on <self:POSetGroupColorer[Object, Object] exact> */
var2 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetGroupColorer___35dH__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var2); /* Direct call hash_collection$HashMap$init on <var2:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nitc__coloring__POSetGroupColorer___min_colors].val = var2; /* _min_colors on <self:POSetGroupColorer[Object, Object] exact> */
return self;
}
/* runtime class nitc__BucketsColorer: nitc::BucketsColorer (dead=false; need_corpse=false)*/
const struct class class_nitc__BucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to coloring:BucketsColorer:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to coloring:BucketsColorer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to coloring:BucketsColorer:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to coloring:BucketsColorer:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to coloring:BucketsColorer:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to coloring:BucketsColorer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to coloring:BucketsColorer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to coloring:BucketsColorer:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to coloring:BucketsColorer:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to coloring:BucketsColorer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to coloring:BucketsColorer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to coloring:BucketsColorer:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__BucketsColorer___colorize, /* pointer to coloring:BucketsColorer:coloring$BucketsColorer$colorize */
(nitmethod_t)nitc___nitc__BucketsColorer___compute_conflicts, /* pointer to coloring:BucketsColorer:coloring$BucketsColorer$compute_conflicts */
(nitmethod_t)nitc___nitc__BucketsColorer___colors, /* pointer to coloring:BucketsColorer:coloring$BucketsColorer$colors */
(nitmethod_t)nitc___nitc__BucketsColorer___is_color_free, /* pointer to coloring:BucketsColorer:coloring$BucketsColorer$is_color_free */
(nitmethod_t)nitc___nitc__BucketsColorer___conflicts, /* pointer to coloring:BucketsColorer:coloring$BucketsColorer$conflicts */
}
};
/* allocate BucketsColorer[Object, Object] */
val* NEW_nitc__BucketsColorer(const struct type* type) {
val* self /* : BucketsColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__BucketsColorer;
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__BucketsColorer___35dE__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nitc__coloring__BucketsColorer___colors].val = var; /* _colors on <self:BucketsColorer[Object, Object] exact> */
var1 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__BucketsColorer___35dE__core__Set__nitc__BucketsColorer___35dE]);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[Object, Set[Object]]>*/
}
self->attrs[COLOR_nitc__coloring__BucketsColorer___conflicts].val = var1; /* _conflicts on <self:BucketsColorer[Object, Object] exact> */
return self;
}
/* runtime class nitc__POSetBucketsColorer: nitc::POSetBucketsColorer (dead=false; need_corpse=false)*/
const struct class class_nitc__POSetBucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__POSetBucketsColorer___core__kernel__Object__init, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to coloring:POSetBucketsColorer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to coloring:POSetBucketsColorer:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to coloring:POSetBucketsColorer:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to coloring:POSetBucketsColorer:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to coloring:POSetBucketsColorer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to coloring:POSetBucketsColorer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to coloring:POSetBucketsColorer:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to coloring:POSetBucketsColorer:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to coloring:POSetBucketsColorer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to coloring:POSetBucketsColorer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to coloring:POSetBucketsColorer:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___poset_61d, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$poset= */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___conflicts_61d, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$conflicts= */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___colorize, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$colorize */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___colors, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$colors */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___poset, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$poset */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___min_color, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$min_color */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___is_color_free, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$is_color_free */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___max_color, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$max_color */
(nitmethod_t)nitc___nitc__POSetBucketsColorer___conflicts, /* pointer to coloring:POSetBucketsColorer:coloring$POSetBucketsColorer$conflicts */
(nitmethod_t)core___core__Object___init, /* pointer to coloring:POSetBucketsColorer:kernel$Object$init */
}
};
/* allocate POSetBucketsColorer[Object, Object] */
val* NEW_nitc__POSetBucketsColorer(const struct type* type) {
val* self /* : POSetBucketsColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__POSetBucketsColorer;
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__nitc__POSetBucketsColorer___35dE__core__Int]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nitc__coloring__POSetBucketsColorer___colors].val = var; /* _colors on <self:POSetBucketsColorer[Object, Object] exact> */
return self;
}
/* runtime class nitc__CallContext: nitc::CallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__CallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to nitni_utilities:CallContext:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_utilities:CallContext:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_utilities:CallContext:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_utilities:CallContext:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to nitni_utilities:CallContext:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_utilities:CallContext:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_utilities:CallContext:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_utilities:CallContext:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to nitni_utilities:CallContext:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_utilities:CallContext:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_utilities:CallContext:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_utilities:CallContext:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__CallContext___name_mtype, /* pointer to nitni_utilities:CallContext:nitni_utilities$CallContext$name_mtype */
}
};
/* allocate CallContext */
val* NEW_nitc__CallContext(const struct type* type) {
val* self /* : CallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CallContext;
return self;
}
/* runtime class nitc__SignatureLength: nitc::SignatureLength (dead=false; need_corpse=false)*/
const struct class class_nitc__SignatureLength = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__SignatureLength___core__kernel__Object__init, /* pointer to nitni_utilities:SignatureLength:nitni_utilities$SignatureLength$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_utilities:SignatureLength:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_utilities:SignatureLength:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_utilities:SignatureLength:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to nitni_utilities:SignatureLength:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_utilities:SignatureLength:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_utilities:SignatureLength:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_utilities:SignatureLength:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to nitni_utilities:SignatureLength:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_utilities:SignatureLength:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_utilities:SignatureLength:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_utilities:SignatureLength:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__SignatureLength___long, /* pointer to nitni_utilities:SignatureLength:nitni_utilities$SignatureLength$long */
(nitmethod_t)nitc___nitc__SignatureLength___long_61d, /* pointer to nitni_utilities:SignatureLength:nitni_utilities$SignatureLength$long= */
(nitmethod_t)core___core__Object___init, /* pointer to nitni_utilities:SignatureLength:kernel$Object$init */
}
};
/* allocate SignatureLength */
val* NEW_nitc__SignatureLength(const struct type* type) {
val* self /* : SignatureLength */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SignatureLength;
return self;
}
/* runtime class nitc__FFILanguageAssignationPhase: nitc::FFILanguageAssignationPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__FFILanguageAssignationPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to light_ffi_base:FFILanguageAssignationPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_nmodule, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base$FFILanguageAssignationPhase$process_nmodule */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_nclassdef, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base$FFILanguageAssignationPhase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_npropdef, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base$FFILanguageAssignationPhase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel$Object$init */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___languages, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base$FFILanguageAssignationPhase$languages */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___verify_foreign_code_on_node, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base$FFILanguageAssignationPhase$verify_foreign_code_on_node */
}
};
/* allocate FFILanguageAssignationPhase */
val* NEW_nitc__FFILanguageAssignationPhase(const struct type* type) {
val* self /* : FFILanguageAssignationPhase */;
val* var /* : Array[FFILanguage] */;
val* var1 /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__FFILanguageAssignationPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:FFILanguageAssignationPhase exact> */
var = NEW_core__Array(&type_core__Array__nitc__FFILanguage);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[FFILanguage]>*/
}
self->attrs[COLOR_nitc__light_ffi_base__FFILanguageAssignationPhase___languages].val = var; /* _languages on <self:FFILanguageAssignationPhase exact> */
var1 = NEW_nitc__CLanguage(&type_nitc__CLanguage);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__light_ffi_base__FFILanguage__ffi_language_assignation_phase_61d]))(var1, self); /* ffi_language_assignation_phase= on <var1:CLanguage>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:CLanguage>*/
}
self->attrs[COLOR_nitc__light_c__FFILanguageAssignationPhase___c_language].val = var1; /* _c_language on <self:FFILanguageAssignationPhase exact> */
return self;
}
/* runtime class nitc__FFILanguage: nitc::FFILanguage (dead=true; need_corpse=false)*/
/* allocate FFILanguage */
val* NEW_nitc__FFILanguage(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FFILanguage is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__ForeignType: nitc::ForeignType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignType = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to light_ffi_base:ForeignType:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_ffi_base:ForeignType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_ffi_base:ForeignType:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_ffi_base:ForeignType:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_ffi_base:ForeignType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_ffi_base:ForeignType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_ffi_base:ForeignType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_ffi_base:ForeignType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to light_ffi_base:ForeignType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_ffi_base:ForeignType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_ffi_base:ForeignType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_ffi_base:ForeignType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__ForeignType___ctype, /* pointer to light_ffi_base:ForeignType:light_ffi_base$ForeignType$ctype */
}
};
/* allocate ForeignType */
val* NEW_nitc__ForeignType(const struct type* type) {
val* self /* : ForeignType */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignType;
return self;
}
/* runtime class nitc__extern_classes__ExternClassesTypingPhaseAst: nitc::extern_classes::ExternClassesTypingPhaseAst (dead=false; need_corpse=false)*/
const struct class class_nitc__extern_classes__ExternClassesTypingPhaseAst = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$process_nmodule */
(nitmethod_t)nitc__extern_classes___nitc__extern_classes__ExternClassesTypingPhaseAst___nitc__phase__Phase__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:extern_classes$ExternClassesTypingPhaseAst$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel$Object$init */
}
};
/* allocate ExternClassesTypingPhaseAst */
val* NEW_nitc__extern_classes__ExternClassesTypingPhaseAst(const struct type* type) {
val* self /* : ExternClassesTypingPhaseAst */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__extern_classes__ExternClassesTypingPhaseAst;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ExternClassesTypingPhaseAst exact> */
return self;
}
/* runtime class nitc__extern_classes__ExternClassesTypingPhaseModel: nitc::extern_classes::ExternClassesTypingPhaseModel (dead=false; need_corpse=false)*/
const struct class class_nitc__extern_classes__ExternClassesTypingPhaseModel = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$process_nmodule */
(nitmethod_t)nitc__extern_classes___nitc__extern_classes__ExternClassesTypingPhaseModel___nitc__phase__Phase__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:extern_classes$ExternClassesTypingPhaseModel$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel$Object$init */
}
};
/* allocate ExternClassesTypingPhaseModel */
val* NEW_nitc__extern_classes__ExternClassesTypingPhaseModel(const struct type* type) {
val* self /* : ExternClassesTypingPhaseModel */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__extern_classes__ExternClassesTypingPhaseModel;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ExternClassesTypingPhaseModel exact> */
return self;
}
/* runtime class nitc__CLanguage: nitc::CLanguage (dead=false; need_corpse=false)*/
const struct class class_nitc__CLanguage = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__FFILanguage___core__kernel__Object__init, /* pointer to light_c:CLanguage:light_ffi_base$FFILanguage$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:CLanguage:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:CLanguage:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:CLanguage:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:CLanguage:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:CLanguage:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:CLanguage:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:CLanguage:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:CLanguage:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:CLanguage:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:CLanguage:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:CLanguage:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase_61d, /* pointer to light_c:CLanguage:light_ffi_base$FFILanguage$ffi_language_assignation_phase= */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase, /* pointer to light_c:CLanguage:light_ffi_base$FFILanguage$ffi_language_assignation_phase */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__get_ftype, /* pointer to light_c:CLanguage:light_c$CLanguage$get_ftype */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__identify_language, /* pointer to light_c:CLanguage:light_c$CLanguage$identify_language */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block, /* pointer to light_c:CLanguage:light_c$CLanguage$compile_module_block */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class, /* pointer to light_c:CLanguage:light_c$CLanguage$compile_extern_class */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method, /* pointer to light_c:CLanguage:light_c$CLanguage$compile_extern_method */
(nitmethod_t)core___core__Object___init, /* pointer to light_c:CLanguage:kernel$Object$init */
}
};
/* allocate CLanguage */
val* NEW_nitc__CLanguage(const struct type* type) {
val* self /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CLanguage;
return self;
}
/* runtime class nitc__ForeignCType: nitc::ForeignCType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignCType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ForeignCType___core__kernel__Object__init, /* pointer to light_c:ForeignCType:light_c$ForeignCType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:ForeignCType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:ForeignCType:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:ForeignCType:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:ForeignCType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:ForeignCType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:ForeignCType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:ForeignCType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:ForeignCType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:ForeignCType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:ForeignCType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:ForeignCType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__ForeignCType___nitc__light_ffi_base__ForeignType__ctype, /* pointer to light_c:ForeignCType:light_c$ForeignCType$ctype */
(nitmethod_t)nitc___nitc__ForeignCType___ctype_61d, /* pointer to light_c:ForeignCType:light_c$ForeignCType$ctype= */
(nitmethod_t)core___core__Object___init, /* pointer to light_c:ForeignCType:kernel$Object$init */
}
};
/* allocate ForeignCType */
val* NEW_nitc__ForeignCType(const struct type* type) {
val* self /* : ForeignCType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignCType;
return self;
}
/* runtime class nitc__ToCCallContext: nitc::ToCCallContext (dead=true; need_corpse=false)*/
/* allocate ToCCallContext */
val* NEW_nitc__ToCCallContext(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ToCCallContext is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__FromCCallContext: nitc::FromCCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__FromCCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to light_c:FromCCallContext:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:FromCCallContext:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:FromCCallContext:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:FromCCallContext:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:FromCCallContext:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:FromCCallContext:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:FromCCallContext:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:FromCCallContext:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:FromCCallContext:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:FromCCallContext:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:FromCCallContext:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:FromCCallContext:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__FromCCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to light_c:FromCCallContext:light_c$FromCCallContext$name_mtype */
}
};
/* allocate FromCCallContext */
val* NEW_nitc__FromCCallContext(const struct type* type) {
val* self /* : FromCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__FromCCallContext;
return self;
}
/* runtime class nitc__ExternCFunction: nitc::ExternCFunction (dead=false; need_corpse=false)*/
const struct class class_nitc__ExternCFunction = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__CFunction___core__kernel__Object__init, /* pointer to light_c:ExternCFunction:c_tools$CFunction$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:ExternCFunction:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:ExternCFunction:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:ExternCFunction:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:ExternCFunction:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:ExternCFunction:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:ExternCFunction:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:ExternCFunction:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:ExternCFunction:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:ExternCFunction:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:ExternCFunction:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:ExternCFunction:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__CFunction___decls, /* pointer to light_c:ExternCFunction:c_tools$CFunction$decls */
(nitmethod_t)nitc___nitc__CFunction___exprs, /* pointer to light_c:ExternCFunction:c_tools$CFunction$exprs */
(nitmethod_t)nitc___nitc__CFunction___to_writer, /* pointer to light_c:ExternCFunction:c_tools$CFunction$to_writer */
(nitmethod_t)nitc___nitc__CFunction___signature_61d, /* pointer to light_c:ExternCFunction:c_tools$CFunction$signature= */
(nitmethod_t)nitc___nitc__CFunction___signature, /* pointer to light_c:ExternCFunction:c_tools$CFunction$signature */
(nitmethod_t)core___core__Object___init, /* pointer to light_c:ExternCFunction:kernel$Object$init */
(nitmethod_t)nitc___nitc__ExternCFunction___init, /* pointer to light_c:ExternCFunction:light_c$ExternCFunction$init */
(nitmethod_t)nitc___nitc__ExternCFunction___method_61d, /* pointer to light_c:ExternCFunction:light_c$ExternCFunction$method= */
}
};
/* allocate ExternCFunction */
val* NEW_nitc__ExternCFunction(const struct type* type) {
val* self /* : ExternCFunction */;
val* var /* : Template */;
val* var1 /* : Template */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ExternCFunction;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CFunction___decls].val = var; /* _decls on <self:ExternCFunction exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CFunction___exprs].val = var1; /* _exprs on <self:ExternCFunction exact> */
return self;
}

#ifndef OCALLS_BUILDER_H
#define OCALLS_BUILDER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef OCALLS_READER_H
#include "ocalls_reader.h"
#endif
#ifndef FLATBUFFERS_COMMON_BUILDER_H
#include "flatbuffers_common_builder.h"
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif

static const flatbuffers_voffset_t ____ocall_wrapper_print_pointer_required[] = { 0 };
typedef flatbuffers_ref_t __ocall_wrapper_print_pointer_ref_t;
static __ocall_wrapper_print_pointer_ref_t __ocall_wrapper_print_pointer_clone(flatbuffers_builder_t *B, __ocall_wrapper_print_pointer_table_t t);
__flatbuffers_build_table(flatbuffers_, __ocall_wrapper_print_pointer, 3)

#define ____ocall_wrapper_print_pointer_formal_args , int8_t v0, int64_t v1, int64_t v2
#define ____ocall_wrapper_print_pointer_call_args , v0, v1, v2
static inline __ocall_wrapper_print_pointer_ref_t __ocall_wrapper_print_pointer_create(flatbuffers_builder_t *B ____ocall_wrapper_print_pointer_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, __ocall_wrapper_print_pointer, __ocall_wrapper_print_pointer_identifier, __ocall_wrapper_print_pointer_type_identifier)

__flatbuffers_build_scalar_field(0, flatbuffers_, __ocall_wrapper_print_pointer_name, flatbuffers_int8, int8_t, 1, 1, INT8_C(0), __ocall_wrapper_print_pointer)
__flatbuffers_build_scalar_field(1, flatbuffers_, __ocall_wrapper_print_pointer_value, flatbuffers_int64, int64_t, 8, 8, INT64_C(0), __ocall_wrapper_print_pointer)
__flatbuffers_build_scalar_field(2, flatbuffers_, __ocall_wrapper_print_pointer___return_value, flatbuffers_int64, int64_t, 8, 8, INT64_C(0), __ocall_wrapper_print_pointer)

static inline __ocall_wrapper_print_pointer_ref_t __ocall_wrapper_print_pointer_create(flatbuffers_builder_t *B ____ocall_wrapper_print_pointer_formal_args)
{
    if (__ocall_wrapper_print_pointer_start(B)
        || __ocall_wrapper_print_pointer_value_add(B, v1)
        || __ocall_wrapper_print_pointer___return_value_add(B, v2)
        || __ocall_wrapper_print_pointer_name_add(B, v0)) {
        return 0;
    }
    return __ocall_wrapper_print_pointer_end(B);
}

static __ocall_wrapper_print_pointer_ref_t __ocall_wrapper_print_pointer_clone(flatbuffers_builder_t *B, __ocall_wrapper_print_pointer_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (__ocall_wrapper_print_pointer_start(B)
        || __ocall_wrapper_print_pointer_value_pick(B, t)
        || __ocall_wrapper_print_pointer___return_value_pick(B, t)
        || __ocall_wrapper_print_pointer_name_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, __ocall_wrapper_print_pointer_end(B));
}

#include "flatcc/flatcc_epilogue.h"
#endif /* OCALLS_BUILDER_H */

#ifndef OCALLS_VERIFIER_H
#define OCALLS_VERIFIER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef OCALLS_READER_H
#include "ocalls_reader.h"
#endif
#include "flatcc/flatcc_verifier.h"
#include "flatcc/flatcc_prologue.h"

static int nest3_verify_table(flatcc_table_verifier_descriptor_t *td);
static int nest2_verify_table(flatcc_table_verifier_descriptor_t *td);
static int nest1_verify_table(flatcc_table_verifier_descriptor_t *td);
static int __pointer_flatbuffers_int8_verify_table(flatcc_table_verifier_descriptor_t *td);
static int __pointer_nest3_verify_table(flatcc_table_verifier_descriptor_t *td);
static int __pointer_nest2_verify_table(flatcc_table_verifier_descriptor_t *td);
static int __ocall_wrapper_test_nested_struct_verify_table(flatcc_table_verifier_descriptor_t *td);
static int __ocall_wrapper_test_two_dimensional_array_verify_table(flatcc_table_verifier_descriptor_t *td);

static int nest3_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_vector_field(td, 0, 0, 1, 1, INT64_C(4294967295)) /* str */)) return ret;
    return flatcc_verify_ok;
}

static inline int nest3_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, nest3_identifier, &nest3_verify_table);
}

static inline int nest3_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, nest3_type_identifier, &nest3_verify_table);
}

static inline int nest3_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &nest3_verify_table);
}

static inline int nest3_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &nest3_verify_table);
}

static int nest2_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &__pointer_nest3_verify_table) /* n */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 1, 0, 1, 1, INT64_C(4294967295)) /* str */)) return ret;
    return flatcc_verify_ok;
}

static inline int nest2_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, nest2_identifier, &nest2_verify_table);
}

static inline int nest2_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, nest2_type_identifier, &nest2_verify_table);
}

static inline int nest2_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &nest2_verify_table);
}

static inline int nest2_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &nest2_verify_table);
}

static int nest1_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &__pointer_nest2_verify_table) /* n */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 1, 0, 1, 1, INT64_C(4294967295)) /* str */)) return ret;
    return flatcc_verify_ok;
}

static inline int nest1_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, nest1_identifier, &nest1_verify_table);
}

static inline int nest1_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, nest1_type_identifier, &nest1_verify_table);
}

static inline int nest1_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &nest1_verify_table);
}

static inline int nest1_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &nest1_verify_table);
}

static int __pointer_flatbuffers_int8_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* __is_null */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 1, 1) /* __data */)) return ret;
    return flatcc_verify_ok;
}

static inline int __pointer_flatbuffers_int8_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __pointer_flatbuffers_int8_identifier, &__pointer_flatbuffers_int8_verify_table);
}

static inline int __pointer_flatbuffers_int8_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __pointer_flatbuffers_int8_type_identifier, &__pointer_flatbuffers_int8_verify_table);
}

static inline int __pointer_flatbuffers_int8_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__pointer_flatbuffers_int8_verify_table);
}

static inline int __pointer_flatbuffers_int8_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__pointer_flatbuffers_int8_verify_table);
}

static int __pointer_nest3_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* __is_null */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 0, &nest3_verify_table) /* __data */)) return ret;
    return flatcc_verify_ok;
}

static inline int __pointer_nest3_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __pointer_nest3_identifier, &__pointer_nest3_verify_table);
}

static inline int __pointer_nest3_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __pointer_nest3_type_identifier, &__pointer_nest3_verify_table);
}

static inline int __pointer_nest3_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__pointer_nest3_verify_table);
}

static inline int __pointer_nest3_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__pointer_nest3_verify_table);
}

static int __pointer_nest2_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* __is_null */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 0, &nest2_verify_table) /* __data */)) return ret;
    return flatcc_verify_ok;
}

static inline int __pointer_nest2_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __pointer_nest2_identifier, &__pointer_nest2_verify_table);
}

static inline int __pointer_nest2_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __pointer_nest2_type_identifier, &__pointer_nest2_verify_table);
}

static inline int __pointer_nest2_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__pointer_nest2_verify_table);
}

static inline int __pointer_nest2_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__pointer_nest2_verify_table);
}

static int __ocall_wrapper_test_nested_struct_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_field(td, 0, 0, &nest1_verify_table) /* n */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* __return_value */)) return ret;
    return flatcc_verify_ok;
}

static inline int __ocall_wrapper_test_nested_struct_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __ocall_wrapper_test_nested_struct_identifier, &__ocall_wrapper_test_nested_struct_verify_table);
}

static inline int __ocall_wrapper_test_nested_struct_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __ocall_wrapper_test_nested_struct_type_identifier, &__ocall_wrapper_test_nested_struct_verify_table);
}

static inline int __ocall_wrapper_test_nested_struct_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__ocall_wrapper_test_nested_struct_verify_table);
}

static inline int __ocall_wrapper_test_nested_struct_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__ocall_wrapper_test_nested_struct_verify_table);
}

static int __ocall_wrapper_test_two_dimensional_array_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_vector_field(td, 0, 0, 4, 4, INT64_C(1073741823)) /* arr */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 4, 4) /* __return_value */)) return ret;
    return flatcc_verify_ok;
}

static inline int __ocall_wrapper_test_two_dimensional_array_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __ocall_wrapper_test_two_dimensional_array_identifier, &__ocall_wrapper_test_two_dimensional_array_verify_table);
}

static inline int __ocall_wrapper_test_two_dimensional_array_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, __ocall_wrapper_test_two_dimensional_array_type_identifier, &__ocall_wrapper_test_two_dimensional_array_verify_table);
}

static inline int __ocall_wrapper_test_two_dimensional_array_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &__ocall_wrapper_test_two_dimensional_array_verify_table);
}

static inline int __ocall_wrapper_test_two_dimensional_array_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &__ocall_wrapper_test_two_dimensional_array_verify_table);
}

#include "flatcc/flatcc_epilogue.h"
#endif /* OCALLS_VERIFIER_H */

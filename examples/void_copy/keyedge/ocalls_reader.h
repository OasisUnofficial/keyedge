#ifndef OCALLS_READER_H
#define OCALLS_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct __pointer_flatbuffers_int8_table *__pointer_flatbuffers_int8_table_t;
typedef struct __pointer_flatbuffers_int8_table *__pointer_flatbuffers_int8_mutable_table_t;
typedef const flatbuffers_uoffset_t *__pointer_flatbuffers_int8_vec_t;
typedef flatbuffers_uoffset_t *__pointer_flatbuffers_int8_mutable_vec_t;
typedef const struct __ocall_wrapper_print_return_value_table *__ocall_wrapper_print_return_value_table_t;
typedef struct __ocall_wrapper_print_return_value_table *__ocall_wrapper_print_return_value_mutable_table_t;
typedef const flatbuffers_uoffset_t *__ocall_wrapper_print_return_value_vec_t;
typedef flatbuffers_uoffset_t *__ocall_wrapper_print_return_value_mutable_vec_t;
typedef const struct __ocall_wrapper_print_string_table *__ocall_wrapper_print_string_table_t;
typedef struct __ocall_wrapper_print_string_table *__ocall_wrapper_print_string_mutable_table_t;
typedef const flatbuffers_uoffset_t *__ocall_wrapper_print_string_vec_t;
typedef flatbuffers_uoffset_t *__ocall_wrapper_print_string_mutable_vec_t;
#ifndef __pointer_flatbuffers_int8_identifier
#define __pointer_flatbuffers_int8_identifier flatbuffers_identifier
#endif
#define __pointer_flatbuffers_int8_type_hash ((flatbuffers_thash_t)0x9b4a4145)
#define __pointer_flatbuffers_int8_type_identifier "\x45\x41\x4a\x9b"
#ifndef __ocall_wrapper_print_return_value_identifier
#define __ocall_wrapper_print_return_value_identifier flatbuffers_identifier
#endif
#define __ocall_wrapper_print_return_value_type_hash ((flatbuffers_thash_t)0x500e10a1)
#define __ocall_wrapper_print_return_value_type_identifier "\xa1\x10\x0e\x50"
#ifndef __ocall_wrapper_print_string_identifier
#define __ocall_wrapper_print_string_identifier flatbuffers_identifier
#endif
#define __ocall_wrapper_print_string_type_hash ((flatbuffers_thash_t)0x5f69fd28)
#define __ocall_wrapper_print_string_type_identifier "\x28\xfd\x69\x5f"



struct __pointer_flatbuffers_int8_table { uint8_t unused__; };

static inline size_t __pointer_flatbuffers_int8_vec_len(__pointer_flatbuffers_int8_vec_t vec)
__flatbuffers_vec_len(vec)
static inline __pointer_flatbuffers_int8_table_t __pointer_flatbuffers_int8_vec_at(__pointer_flatbuffers_int8_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(__pointer_flatbuffers_int8_table_t, vec, i, 0)
__flatbuffers_table_as_root(__pointer_flatbuffers_int8)

__flatbuffers_define_scalar_field(0, __pointer_flatbuffers_int8, __is_null, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(1, __pointer_flatbuffers_int8, __data, flatbuffers_int8, int8_t, INT8_C(0))

struct __ocall_wrapper_print_return_value_table { uint8_t unused__; };

static inline size_t __ocall_wrapper_print_return_value_vec_len(__ocall_wrapper_print_return_value_vec_t vec)
__flatbuffers_vec_len(vec)
static inline __ocall_wrapper_print_return_value_table_t __ocall_wrapper_print_return_value_vec_at(__ocall_wrapper_print_return_value_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(__ocall_wrapper_print_return_value_table_t, vec, i, 0)
__flatbuffers_table_as_root(__ocall_wrapper_print_return_value)

__flatbuffers_define_scalar_field(0, __ocall_wrapper_print_return_value, msg, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_scalar_field(1, __ocall_wrapper_print_return_value, __return_value, flatbuffers_int32, int32_t, INT32_C(0))

struct __ocall_wrapper_print_string_table { uint8_t unused__; };

static inline size_t __ocall_wrapper_print_string_vec_len(__ocall_wrapper_print_string_vec_t vec)
__flatbuffers_vec_len(vec)
static inline __ocall_wrapper_print_string_table_t __ocall_wrapper_print_string_vec_at(__ocall_wrapper_print_string_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(__ocall_wrapper_print_string_table_t, vec, i, 0)
__flatbuffers_table_as_root(__ocall_wrapper_print_string)

__flatbuffers_define_vector_field(0, __ocall_wrapper_print_string, msg, flatbuffers_int8_vec_t, 0)
__flatbuffers_define_scalar_field(1, __ocall_wrapper_print_string, size, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_scalar_field(2, __ocall_wrapper_print_string, __return_value, flatbuffers_int32, int32_t, INT32_C(0))


#include "flatcc/flatcc_epilogue.h"
#endif /* OCALLS_READER_H */

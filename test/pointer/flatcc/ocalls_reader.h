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


typedef const struct __pointer_int_table *__pointer_int_table_t;
typedef struct __pointer_int_table *__pointer_int_mutable_table_t;
typedef const flatbuffers_uoffset_t *__pointer_int_vec_t;
typedef flatbuffers_uoffset_t *__pointer_int_mutable_vec_t;
typedef const struct __ocall_wrapper_print_pointer_table *__ocall_wrapper_print_pointer_table_t;
typedef struct __ocall_wrapper_print_pointer_table *__ocall_wrapper_print_pointer_mutable_table_t;
typedef const flatbuffers_uoffset_t *__ocall_wrapper_print_pointer_vec_t;
typedef flatbuffers_uoffset_t *__ocall_wrapper_print_pointer_mutable_vec_t;
#ifndef __pointer_int_identifier
#define __pointer_int_identifier flatbuffers_identifier
#endif
#define __pointer_int_type_hash ((flatbuffers_thash_t)0xf70e7eee)
#define __pointer_int_type_identifier "\xee\x7e\x0e\xf7"
#ifndef __ocall_wrapper_print_pointer_identifier
#define __ocall_wrapper_print_pointer_identifier flatbuffers_identifier
#endif
#define __ocall_wrapper_print_pointer_type_hash ((flatbuffers_thash_t)0xa1fe50fa)
#define __ocall_wrapper_print_pointer_type_identifier "\xfa\x50\xfe\xa1"



struct __pointer_int_table { uint8_t unused__; };

static inline size_t __pointer_int_vec_len(__pointer_int_vec_t vec)
__flatbuffers_vec_len(vec)
static inline __pointer_int_table_t __pointer_int_vec_at(__pointer_int_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(__pointer_int_table_t, vec, i, 0)
__flatbuffers_table_as_root(__pointer_int)

__flatbuffers_define_scalar_field(0, __pointer_int, __is_null, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(1, __pointer_int, __data, flatbuffers_int64, int64_t, INT64_C(0))

struct __ocall_wrapper_print_pointer_table { uint8_t unused__; };

static inline size_t __ocall_wrapper_print_pointer_vec_len(__ocall_wrapper_print_pointer_vec_t vec)
__flatbuffers_vec_len(vec)
static inline __ocall_wrapper_print_pointer_table_t __ocall_wrapper_print_pointer_vec_at(__ocall_wrapper_print_pointer_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(__ocall_wrapper_print_pointer_table_t, vec, i, 0)
__flatbuffers_table_as_root(__ocall_wrapper_print_pointer)

__flatbuffers_define_scalar_field(0, __ocall_wrapper_print_pointer, name, flatbuffers_int8, int8_t, INT8_C(0))
__flatbuffers_define_table_field(1, __ocall_wrapper_print_pointer, value, __pointer_int_table_t, 0)
__flatbuffers_define_scalar_field(2, __ocall_wrapper_print_pointer, __return_value, flatbuffers_int64, int64_t, INT64_C(0))


#include "flatcc/flatcc_epilogue.h"
#endif /* OCALLS_READER_H */

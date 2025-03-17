#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4(vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16mf4(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2(vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16mf2(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1(vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m1(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2(vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m2(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4(vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m4(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8(vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m8(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16mf4(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16mf2(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m1(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2(vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m2(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4(vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m4(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8(vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m8(vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2(vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1(vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2(vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4(vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8(vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2(vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1(vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2(vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4(vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8(vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2(vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1(vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2(vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4(vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_m(vbool64_t vm, vint8mf8_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16mf4_m(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_m(vbool32_t vm, vint8mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16mf2_m(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_m(vbool16_t vm, vint8mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m1_m(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_m(vbool8_t vm, vint8m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m2_m(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_m(vbool4_t vm, vint8m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m4_m(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_m(vbool2_t vm, vint8m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_x_v_bf16m8_m(vm, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_m(vbool64_t vm, vuint8mf8_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16mf4_m(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_m(vbool32_t vm, vuint8mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16mf2_m(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_m(vbool16_t vm, vuint8mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m1_m(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_m(vbool8_t vm, vuint8m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m2_m(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_m(vbool4_t vm, vuint8m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m4_m(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_m(vbool2_t vm, vuint8m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_xu_v_bf16m8_m(vm, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_m(vm, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                     size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_m(vm, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                     size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_m(vm, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                     size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_m(vm, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                     size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_m(vm, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_m(vm, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_m(vm, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_m(vm, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_m(vm, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_m(vm, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_m(vm, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_m(vm, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_m(vm, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_m(vm, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_m(vm, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

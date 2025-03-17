#include <riscv_vector.h>
#include <stdint.h>

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1(vbfloat16mf4_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1(vbfloat16mf2_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1(vbfloat16m1_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1(vbfloat16m2_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1(vbfloat16m4_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1(vbfloat16m8_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_m(vbool64_t vm,
                                                vbfloat16mf4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_m(vbool32_t vm,
                                                vbfloat16mf2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_m(vbool4_t vm, vbfloat16m4_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_m(vbool2_t vm, vbfloat16m8_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_rm(vbfloat16mf4_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_rm(vbfloat16mf2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_rm(vbfloat16m1_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_rm(vbfloat16m2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_rm(vbfloat16m4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_rm(vbfloat16m8_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_rm_m(vbool64_t vm,
                                                   vbfloat16mf4_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_rm_m(vbool32_t vm,
                                                   vbfloat16mf2_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_rm_m(vbool16_t vm,
                                                  vbfloat16m1_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_rm_m(vbool8_t vm,
                                                  vbfloat16m2_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_rm_m(vbool4_t vm,
                                                  vbfloat16m4_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_rm_m(vbool2_t vm,
                                                  vbfloat16m8_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

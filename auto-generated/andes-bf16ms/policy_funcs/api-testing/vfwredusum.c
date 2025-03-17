#include <riscv_vector.h>
#include <stdint.h>

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_tu(vfloat32m1_t vd,
                                                 vbfloat16mf4_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf4_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_tu(vfloat32m1_t vd,
                                                 vbfloat16mf2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf2_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_tu(vfloat32m1_t vd,
                                                vbfloat16m1_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m1_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_tu(vfloat32m1_t vd,
                                                vbfloat16m2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m2_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_tu(vfloat32m1_t vd,
                                                vbfloat16m4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m4_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_tu(vfloat32m1_t vd,
                                                vbfloat16m8_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m8_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_tum(vbool64_t vm, vfloat32m1_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf4_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf2_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_tum(vbool16_t vm, vfloat32m1_t vd,
                                                 vbfloat16m1_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m1_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_tum(vbool8_t vm, vfloat32m1_t vd,
                                                 vbfloat16m2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m2_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_tum(vbool4_t vm, vfloat32m1_t vd,
                                                 vbfloat16m4_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m4_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_tum(vbool2_t vm, vfloat32m1_t vd,
                                                 vbfloat16m8_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredusum_vs_bf16m8_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_rm_tu(vfloat32m1_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    vfloat32m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf4_f32m1_rm_tu(vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_rm_tu(vfloat32m1_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    vfloat32m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf2_f32m1_rm_tu(vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_rm_tu(vfloat32m1_t vd,
                                                   vbfloat16m1_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredusum_vs_bf16m1_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_rm_tu(vfloat32m1_t vd,
                                                   vbfloat16m2_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredusum_vs_bf16m2_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_rm_tu(vfloat32m1_t vd,
                                                   vbfloat16m4_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredusum_vs_bf16m4_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_rm_tu(vfloat32m1_t vd,
                                                   vbfloat16m8_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredusum_vs_bf16m8_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf4_f32m1_rm_tum(vbool64_t vm,
                                                     vfloat32m1_t vd,
                                                     vbfloat16mf4_t vs2,
                                                     vfloat32m1_t vs1,
                                                     size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf4_f32m1_rm_tum(vm, vd, vs2, vs1,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16mf2_f32m1_rm_tum(vbool32_t vm,
                                                     vfloat32m1_t vd,
                                                     vbfloat16mf2_t vs2,
                                                     vfloat32m1_t vs1,
                                                     size_t vl) {
  return __riscv_vfwredusum_vs_bf16mf2_f32m1_rm_tum(vm, vd, vs2, vs1,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m1_f32m1_rm_tum(vbool16_t vm,
                                                    vfloat32m1_t vd,
                                                    vbfloat16m1_t vs2,
                                                    vfloat32m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredusum_vs_bf16m1_f32m1_rm_tum(vm, vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m2_f32m1_rm_tum(vbool8_t vm,
                                                    vfloat32m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    vfloat32m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredusum_vs_bf16m2_f32m1_rm_tum(vm, vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m4_f32m1_rm_tum(vbool4_t vm,
                                                    vfloat32m1_t vd,
                                                    vbfloat16m4_t vs2,
                                                    vfloat32m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredusum_vs_bf16m4_f32m1_rm_tum(vm, vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_bf16m8_f32m1_rm_tum(vbool2_t vm,
                                                    vfloat32m1_t vd,
                                                    vbfloat16m8_t vs2,
                                                    vfloat32m1_t vs1,
                                                    size_t vl) {
  return __riscv_vfwredusum_vs_bf16m8_f32m1_rm_tum(vm, vd, vs2, vs1,
                                                   __RISCV_FRM_RNE, vl);
}

#include <riscv_vector.h>
#include <stdint.h>

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32mf2(vs2, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m1(vs2, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m2(vs2, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m4(vs2, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m8(vs2, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32mf2(vs2, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m1(vs2, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m2(vs2, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m4(vs2, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m8(vs2, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32mf2_m(vm, vs2, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m1_m(vm, vs2, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m2_m(vm, vs2, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m4_m(vm, vs2, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i32m8_m(vm, vs2, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32mf2_m(vm, vs2, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m1_m(vm, vs2, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m2_m(vm, vs2, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m4_m(vm, vs2, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u32m8_m(vm, vs2, vl);
}

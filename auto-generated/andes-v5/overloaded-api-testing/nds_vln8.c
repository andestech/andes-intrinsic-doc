#include <riscv_vector.h>
#include <stdint.h>

vint8mf8_t test_nds_vln8_v_i8mf8_m(vbool64_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

vint8mf4_t test_nds_vln8_v_i8mf4_m(vbool32_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

vint8mf2_t test_nds_vln8_v_i8mf2_m(vbool16_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

vint8m1_t test_nds_vln8_v_i8m1_m(vbool8_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

vint8m2_t test_nds_vln8_v_i8m2_m(vbool4_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

vint8m4_t test_nds_vln8_v_i8m4_m(vbool2_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

vint8m8_t test_nds_vln8_v_i8m8_m(vbool1_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vln8(vm, rs1, vl);
}

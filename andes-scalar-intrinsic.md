# Andes Scalar Intrinsic Document

## The builtin prefix for Andes builtin

```
__builtin_riscv_nds_<name>
```

The following builtin name is available when the header file `riscv_nds.h` is included.

```
__riscv_nds_<name>
```

## Andes Performance Extension (XAndesPerf) builtins

### nds.ffb

#### RV32

##### `int32_t __builtin_riscv_nds_ffb_32(uint32_t a, uint32_t b)`
##### `int32_t __riscv_nds_ffb_32(uint32_t a, uint32_t b)`

#### RV64

##### `int64_t __builtin_riscv_nds_ffb_64(uint64_t a, uint64_t b)`
##### `int64_t __riscv_nds_ffb_64(uint64_t a, uint64_t b)`

_Argument/result mapping:_
- result: `rd`
- a: `rs1`
- b: `rs2`

_Generated assembly:_
```gas
        nds.ffb rd, rs1, rs2
```

### nds.ffzmism

#### RV32

##### `int32_t __builtin_riscv_nds_ffzmism_32(uint32_t a, uint32_t b)`
##### `int32_t __riscv_nds_ffzmism_32(uint32_t a, uint32_t b)`

#### RV64

##### `int64_t __builtin_riscv_nds_ffzmism_64(uint64_t a, uint64_t b)`
##### `int64_t __riscv_nds_ffzmism_64(uint64_t a, uint64_t b)`

_Argument/result mapping:_
- result: `rd`
- a: `rs1`
- b: `rs2`

_Generated assembly:_
```gas
        nds.ffzmism rd, rs1, rs2
```

### nds.ffmism

#### RV32

##### `int32_t __builtin_riscv_nds_ffmism_32(uint32_t a, uint32_t b)`
##### `int64_t __riscv_nds_ffmism_32(uint32_t a, uint32_t b)`

#### RV64

##### `int64_t __builtin_riscv_nds_ffmism_64(uint64_t a, uint64_t b)`
##### `int64_t __riscv_nds_ffmism_64(uint64_t a, uint64_t b)`

_Argument/result mapping:_
- result: `rd`
- a: `rs1`
- b: `rs2`

_Generated assembly:_
```gas
        nds.ffmism rd, rs1, rs2
```

### nds.flmism

#### RV32

##### `int32_t __builtin_riscv_nds_flmism_32(uint32_t a, uint32_t b)`
##### `int32_t __riscv_nds_flmism_32(uint32_t, uint32_t b)`

#### RV64

##### `int64_t __builtin_riscv_nds_flmism_64(uint64_t a, uint64_t b)`
##### `int64_t __riscv_nds_flmism_64(uint64_t, uint64_t b)`

_Argument/result mapping:_
- result: `rd`
- a: `rs1`
- b: `rs2`

_Generated assembly:_
```gas
        nds.flmism rd, rs1, rs2
```

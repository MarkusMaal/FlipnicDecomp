#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0012be8c
// Address: 0x12be8c - 0x12bfdc
void entry_0012be8c_0x12be8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be8c_0x12be8c");
#endif

    ctx->pc = 0x12be8cu;

label_12be8c:
    // 0x12be8c: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x12be8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12be90: 0x475821  addu        $t3, $v0, $a3
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12be94: 0x148001a  div         $zero, $t2, $t0
    ctx->pc = 0x12be94u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12be98: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x12be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x12be9c: 0xc5690000  lwc1        $f9, 0x0($t3)
    ctx->pc = 0x12be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x12bea0: 0xc5680004  lwc1        $f8, 0x4($t3)
    ctx->pc = 0x12bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x12bea4: 0xc5670008  lwc1        $f7, 0x8($t3)
    ctx->pc = 0x12bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x12bea8: 0xc566000c  lwc1        $f6, 0xC($t3)
    ctx->pc = 0x12bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12beac: 0xc5650010  lwc1        $f5, 0x10($t3)
    ctx->pc = 0x12beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12beb0: 0xc5640014  lwc1        $f4, 0x14($t3)
    ctx->pc = 0x12beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12beb4: 0xc5630018  lwc1        $f3, 0x18($t3)
    ctx->pc = 0x12beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12beb8: 0xc562001c  lwc1        $f2, 0x1C($t3)
    ctx->pc = 0x12beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12bebc: 0x8010  mfhi        $s0
    ctx->pc = 0x12bebcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x12bec0: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bec4: 0x6ac823  subu        $t9, $v1, $t2
    ctx->pc = 0x12bec4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bec8: 0x24aa0002  addiu       $t2, $a1, 0x2
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x12becc: 0x328001a  div         $zero, $t9, $t0
    ctx->pc = 0x12beccu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bed0: 0x6ac023  subu        $t8, $v1, $t2
    ctx->pc = 0x12bed0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bed4: 0x24aa0003  addiu       $t2, $a1, 0x3
    ctx->pc = 0x12bed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x12bed8: 0x6a7823  subu        $t7, $v1, $t2
    ctx->pc = 0x12bed8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bedc: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x12bedcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12bee0: 0x6a7023  subu        $t6, $v1, $t2
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bee4: 0x24aa0005  addiu       $t2, $a1, 0x5
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x12bee8: 0x6a6823  subu        $t5, $v1, $t2
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12beec: 0x24aa0006  addiu       $t2, $a1, 0x6
    ctx->pc = 0x12beecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x12bef0: 0x6a6023  subu        $t4, $v1, $t2
    ctx->pc = 0x12bef0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bef4: 0x24aa0007  addiu       $t2, $a1, 0x7
    ctx->pc = 0x12bef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x12bef8: 0x6a5823  subu        $t3, $v1, $t2
    ctx->pc = 0x12bef8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12befc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12befcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12bf00: 0xa6502a  slt         $t2, $a1, $a2
    ctx->pc = 0x12bf00u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12bf04: 0x10c880  sll         $t9, $s0, 2
    ctx->pc = 0x12bf04u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12bf08: 0x139c821  addu        $t9, $t1, $t9
    ctx->pc = 0x12bf08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x12bf0c: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x12bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf10: 0xc810  mfhi        $t9
    ctx->pc = 0x12bf10u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x12bf14: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x12bf14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x12bf18: 0x308001a  div         $zero, $t8, $t0
    ctx->pc = 0x12bf18u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf20: 0x19c080  sll         $t8, $t9, 2
    ctx->pc = 0x12bf20u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x12bf24: 0x138c021  addu        $t8, $t1, $t8
    ctx->pc = 0x12bf24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x12bf28: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x12bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf2c: 0xc010  mfhi        $t8
    ctx->pc = 0x12bf2cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x12bf30: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x12bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x12bf34: 0x1e8001a  div         $zero, $t7, $t0
    ctx->pc = 0x12bf34u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf3c: 0x187880  sll         $t7, $t8, 2
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x12bf40: 0x12f7821  addu        $t7, $t1, $t7
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x12bf44: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x12bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf48: 0x7810  mfhi        $t7
    ctx->pc = 0x12bf48u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x12bf4c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x12bf4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x12bf50: 0x1c8001a  div         $zero, $t6, $t0
    ctx->pc = 0x12bf50u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf58: 0xf7080  sll         $t6, $t7, 2
    ctx->pc = 0x12bf58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12bf5c: 0x12e7021  addu        $t6, $t1, $t6
    ctx->pc = 0x12bf5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x12bf60: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x12bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf64: 0x7010  mfhi        $t6
    ctx->pc = 0x12bf64u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12bf68: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x12bf68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x12bf6c: 0x1a8001a  div         $zero, $t5, $t0
    ctx->pc = 0x12bf6cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf74: 0xe6880  sll         $t5, $t6, 2
    ctx->pc = 0x12bf74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x12bf78: 0x12d6821  addu        $t5, $t1, $t5
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x12bf7c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x12bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf80: 0x6810  mfhi        $t5
    ctx->pc = 0x12bf80u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12bf84: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x12bf84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x12bf88: 0x188001a  div         $zero, $t4, $t0
    ctx->pc = 0x12bf88u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf90: 0xd6080  sll         $t4, $t5, 2
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x12bf94: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x12bf94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x12bf98: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x12bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf9c: 0x6010  mfhi        $t4
    ctx->pc = 0x12bf9cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x12bfa0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x12bfa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x12bfa4: 0x168001a  div         $zero, $t3, $t0
    ctx->pc = 0x12bfa4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bfa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bfac: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x12bfacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x12bfb0: 0x12b5821  addu        $t3, $t1, $t3
    ctx->pc = 0x12bfb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x12bfb4: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x12bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bfb8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x12bfb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12bfbc: 0x5810  mfhi        $t3
    ctx->pc = 0x12bfbcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x12bfc0: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x12bfc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x12bfc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bfc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bfc8: 0x12b5821  addu        $t3, $t1, $t3
    ctx->pc = 0x12bfc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x12bfcc: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x12bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bfd0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12bfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12bfd4: 0x1540ffad  bnez        $t2, . + 4 + (-0x53 << 2)
    ctx->pc = 0x12BFD4u;
    {
        const bool branch_taken_0x12bfd4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFD4u;
        // 0x12bfd8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfd4) {
            ctx->pc = 0x12BE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12be8c;
        }
    }
    ctx->pc = 0x12BFDCu;
}

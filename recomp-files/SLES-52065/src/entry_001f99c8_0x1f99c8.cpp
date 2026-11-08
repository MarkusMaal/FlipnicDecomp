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

// Function: entry_001f99c8
// Address: 0x1f99c8 - 0x1f9acc
void entry_001f99c8_0x1f99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f99c8_0x1f99c8");
#endif

    ctx->pc = 0x1f99c8u;

    // 0x1f99c8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1f99cc: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1f99ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1f99d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f99d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f99d4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1f99d8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1f99d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1f99dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f99dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f99e0: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1f99e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1f99e4: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1f99e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1f99e8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f99e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f99ec: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f99ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f99f0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1f99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1f99f4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1f99f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1f99f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f99f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f99fc: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1f9a00: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1f9a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1f9a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9a08: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a0c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1f9a10: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1f9a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1f9a14: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f9a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f9a18: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f9a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1f9a1c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1f9a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1f9a20: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1f9a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1f9a24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9a28: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1f9a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1f9a2c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1f9a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1f9a30: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f9a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f9a34: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f9a34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f9a38: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1f9a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1f9a3c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1f9a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1f9a40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f9a44: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9a48: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1f9a4c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1f9a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1f9a50: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f9a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f9a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9a58: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f9a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f9a5c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a60: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1f9a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1f9a64: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1f9a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1f9a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9a6c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1f9a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1f9a70: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f9a74: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1f9a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1f9a78: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f9a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f9a7c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1f9a7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1f9a80: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9a84: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a88: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1f9a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1f9a8c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1f9a8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1f9a90: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9a94: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1f9a94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1f9a98: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1f9a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1f9a9c: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x1f9a9cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1f9aa0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9aa4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1f9aa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x1f9aa8: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1f9aa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9aac: 0x0  nop
    ctx->pc = 0x1f9aacu;
    // NOP
    // 0x1f9ab0: 0x0  nop
    ctx->pc = 0x1f9ab0u;
    // NOP
    // 0x1f9ab4: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1f9ab4u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x1f9ab8: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x1f9ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1f9abc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9ac0: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x1f9ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x1f9ac4: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1F9AC4u;
    {
        const bool branch_taken_0x1f9ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC4u;
        // 0x1f9ac8: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ac4) {
            ctx->pc = 0x1F9D30u;
            return;
        }
    }
    ctx->pc = 0x1F9ACCu;
}

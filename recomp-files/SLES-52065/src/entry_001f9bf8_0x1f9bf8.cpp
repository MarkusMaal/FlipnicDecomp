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

// Function: entry_001f9bf8
// Address: 0x1f9bf8 - 0x1f9d30
void entry_001f9bf8_0x1f9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9bf8_0x1f9bf8");
#endif

    switch (ctx->pc) {
        case 0x1f9c18u: goto label_1f9c18;
        default: break;
    }

    ctx->pc = 0x1f9bf8u;

    // 0x1f9bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9bfc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f9bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f9c00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f9c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9c08: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x1f9c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x1f9c0c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1f9c0cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9c10: 0xc07e904  jal         func_1FA410
    ctx->pc = 0x1F9C10u;
    SET_GPR_U32(ctx, 31, 0x1F9C18u);
    ctx->pc = 0x1F9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9C10u;
    // 0x1f9c14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA410u, 0x1F9C10u, 0x1F9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9C18u;
label_1f9c18:
    // 0x1f9c18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f9c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f9c1c: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x1f9c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f9c20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f9c24: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1f9c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1f9c28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f9c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f9c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9c30: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1f9c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f9c34: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1f9c38: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1f9c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1f9c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9c40: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1f9c44: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1f9c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1f9c48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9c4c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9c50: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1f9c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1f9c54: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1f9c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1f9c58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9c5c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1f9c60: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1f9c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1f9c64: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f9c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f9c68: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x1f9c68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x1f9c6c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9c70: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1f9c74: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1f9c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1f9c78: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f9c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f9c7c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f9c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1f9c80: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1f9c84: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1f9c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1f9c88: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f9c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f9c8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1f9c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f9c90: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1f9c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1f9c94: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1f9c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1f9c98: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1f9c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1f9c9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f9ca0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9ca4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1f9ca8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1f9ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1f9cac: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f9cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f9cb0: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x1f9cb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x1f9cb4: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1f9cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1f9cb8: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1f9cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1f9cbc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f9cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f9cc0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9cc4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1f9cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1f9cc8: 0x0  nop
    ctx->pc = 0x1f9cc8u;
    // NOP
    // 0x1f9ccc: 0x0  nop
    ctx->pc = 0x1f9cccu;
    // NOP
    // 0x1f9cd0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1f9cd0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1f9cd4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1f9cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1f9cd8: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1f9cdc: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1f9cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1f9ce0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f9ce4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9ce8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9cec: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1f9cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1f9cf0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f9cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1f9cf4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9cf8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1f9cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f9cfc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1f9cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1f9d00: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x1f9d00u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1f9d04: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1f9d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9d08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9d0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1f9d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1f9d10: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x1f9d10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f9d14: 0x0  nop
    ctx->pc = 0x1f9d14u;
    // NOP
    // 0x1f9d18: 0x0  nop
    ctx->pc = 0x1f9d18u;
    // NOP
    // 0x1f9d1c: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1f9d1cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x1f9d20: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x1f9d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x1f9d24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f9d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f9d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f9d2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f9d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x1f9d30u;
}

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

// Function: entry_0016f2b4
// Address: 0x16f2b4 - 0x16f2f0
void entry_0016f2b4_0x16f2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f2b4_0x16f2b4");
#endif

    ctx->pc = 0x16f2b4u;

    // 0x16f2b4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x16F2B4u;
    {
        const bool branch_taken_0x16f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2b4) {
            ctx->pc = 0x16F3F0u;
            return;
        }
    }
    ctx->pc = 0x16F2BCu;
    // 0x16f2bc: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x16f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f2c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x16f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f2c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f2c8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f2c8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f2cc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f2d0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f2d8: 0x0  nop
    ctx->pc = 0x16f2d8u;
    // NOP
    // 0x16f2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f2e0: 0x0  nop
    ctx->pc = 0x16f2e0u;
    // NOP
    // 0x16f2e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F2E4u;
    {
        const bool branch_taken_0x16f2e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E4u;
        // 0x16f2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2e4) {
            ctx->pc = 0x16F2F0u;
            return;
        }
    }
    ctx->pc = 0x16F2ECu;
    // 0x16f2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f2f0u;
}

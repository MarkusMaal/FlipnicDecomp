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

// Function: FUN_001577b0
// Address: 0x1577b0 - 0x157800
void FUN_001577b0_0x1577b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001577b0_0x1577b0");
#endif

    ctx->pc = 0x1577b0u;

    // 0x1577b0: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1577b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1577b4: 0x7c860260  sq          $a2, 0x260($a0)
    ctx->pc = 0x1577b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 608), GPR_VEC(ctx, 6));
    // 0x1577b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1577b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1577bc: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1577bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1577c0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1577c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1577c4: 0x0  nop
    ctx->pc = 0x1577c4u;
    // NOP
    // 0x1577c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1577C8u;
    {
        const bool branch_taken_0x1577c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1577CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577C8u;
        // 0x1577cc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577c8) {
            ctx->pc = 0x1577DCu;
            goto label_1577dc;
        }
    }
    ctx->pc = 0x1577D0u;
    // 0x1577d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1577d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1577D4u;
    {
        const bool branch_taken_0x1577d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577D4u;
        // 0x1577d8: 0xac82026c  sw          $v0, 0x26C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d4) {
            ctx->pc = 0x1577F8u;
            goto label_1577f8;
        }
    }
    ctx->pc = 0x1577DCu;
label_1577dc:
    // 0x1577dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1577dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1577e0: 0x0  nop
    ctx->pc = 0x1577e0u;
    // NOP
    // 0x1577e4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1577e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1577e8: 0x0  nop
    ctx->pc = 0x1577e8u;
    // NOP
    // 0x1577ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1577ECu;
    {
        const bool branch_taken_0x1577ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1577ec) {
            ctx->pc = 0x1577F8u;
            goto label_1577f8;
        }
    }
    ctx->pc = 0x1577F4u;
    // 0x1577f4: 0xe481026c  swc1        $f1, 0x26C($a0)
    ctx->pc = 0x1577f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 620), bits); }
label_1577f8:
    // 0x1577f8: 0x8055e60  j           func_157980
    ctx->pc = 0x1577F8u;
    ctx->pc = 0x157980u;
    FUN_00157980_0x157980(rdram, ctx, runtime); return;
    ctx->pc = 0x157800u;
}

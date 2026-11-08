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

// Function: entry_0013ce44
// Address: 0x13ce44 - 0x13ce74
void entry_0013ce44_0x13ce44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ce44_0x13ce44");
#endif

    ctx->pc = 0x13ce44u;

    // 0x13ce44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ce48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce50: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ce54: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ce58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce5c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13ce5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ce60: 0x0  nop
    ctx->pc = 0x13ce60u;
    // NOP
    // 0x13ce64: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x13CE64u;
    {
        const bool branch_taken_0x13ce64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE64u;
        // 0x13ce68: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce64) {
            ctx->pc = 0x13CEF4u;
            return;
        }
    }
    ctx->pc = 0x13CE6Cu;
    // 0x13ce6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13CE6Cu;
    {
        const bool branch_taken_0x13ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE6Cu;
        // 0x13ce70: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce6c) {
            ctx->pc = 0x13CED0u;
            return;
        }
    }
    ctx->pc = 0x13CE74u;
}

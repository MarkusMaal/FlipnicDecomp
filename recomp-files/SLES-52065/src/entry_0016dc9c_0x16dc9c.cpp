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

// Function: entry_0016dc9c
// Address: 0x16dc9c - 0x16dccc
void entry_0016dc9c_0x16dc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc9c_0x16dc9c");
#endif

    ctx->pc = 0x16dc9cu;

    // 0x16dc9c: 0x0  nop
    ctx->pc = 0x16dc9cu;
    // NOP
    // 0x16dca0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16dca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16dca4: 0x0  nop
    ctx->pc = 0x16dca4u;
    // NOP
    // 0x16dca8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16dcac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16dcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dcb0: 0x0  nop
    ctx->pc = 0x16dcb0u;
    // NOP
    // 0x16dcb4: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
    ctx->pc = 0x16DCB4u;
    {
        const bool branch_taken_0x16dcb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCB4u;
        // 0x16dcb8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcb4) {
            ctx->pc = 0x16DC64u;
            return;
        }
    }
    ctx->pc = 0x16DCBCu;
    // 0x16dcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dcc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16dcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC4u;
        // 0x16dcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DCCCu;
}

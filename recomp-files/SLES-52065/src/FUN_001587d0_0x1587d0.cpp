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

// Function: FUN_001587d0
// Address: 0x1587d0 - 0x1587f4
void FUN_001587d0_0x1587d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001587d0_0x1587d0");
#endif

    ctx->pc = 0x1587d0u;

    // 0x1587d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1587d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1587d4: 0x0  nop
    ctx->pc = 0x1587d4u;
    // NOP
    // 0x1587d8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1587d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1587dc: 0x0  nop
    ctx->pc = 0x1587dcu;
    // NOP
    // 0x1587e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1587E0u;
    {
        const bool branch_taken_0x1587e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1587E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587E0u;
        // 0x1587e4: 0xa48503c4  sh          $a1, 0x3C4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 964), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587e0) {
            ctx->pc = 0x1587ECu;
            goto label_1587ec;
        }
    }
    ctx->pc = 0x1587E8u;
    // 0x1587e8: 0xe48c03c8  swc1        $f12, 0x3C8($a0)
    ctx->pc = 0x1587e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 968), bits); }
label_1587ec:
    // 0x1587ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1587ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1587F4u;
}

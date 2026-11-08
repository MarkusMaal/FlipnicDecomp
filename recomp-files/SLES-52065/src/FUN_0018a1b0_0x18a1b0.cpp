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

// Function: FUN_0018a1b0
// Address: 0x18a1b0 - 0x18a1c8
void FUN_0018a1b0_0x18a1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a1b0_0x18a1b0");
#endif

    ctx->pc = 0x18a1b0u;

    // 0x18a1b0: 0xe48c0084  swc1        $f12, 0x84($a0)
    ctx->pc = 0x18a1b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x18a1b4: 0xe48d0088  swc1        $f13, 0x88($a0)
    ctx->pc = 0x18a1b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x18a1b8: 0xe48e008c  swc1        $f14, 0x8C($a0)
    ctx->pc = 0x18a1b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x18a1bc: 0xe48f0090  swc1        $f15, 0x90($a0)
    ctx->pc = 0x18a1bcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x18a1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1C0u;
        // 0x18a1c4: 0xa0800081  sb          $zero, 0x81($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 129), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A1C8u;
}

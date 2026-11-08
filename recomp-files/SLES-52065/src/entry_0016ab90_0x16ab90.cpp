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

// Function: entry_0016ab90
// Address: 0x16ab90 - 0x16aba0
void entry_0016ab90_0x16ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab90_0x16ab90");
#endif

    ctx->pc = 0x16ab90u;

    // 0x16ab90: 0xc4800238  lwc1        $f0, 0x238($a0)
    ctx->pc = 0x16ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB94u;
        // 0x16ab98: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB9Cu;
    // 0x16ab9c: 0x0  nop
    ctx->pc = 0x16ab9cu;
    // NOP
    ctx->pc = 0x16aba0u;
}

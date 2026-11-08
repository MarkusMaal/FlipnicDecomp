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

// Function: entry_0017ab20
// Address: 0x17ab20 - 0x17ab30
void entry_0017ab20_0x17ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab20_0x17ab20");
#endif

    ctx->pc = 0x17ab20u;

    // 0x17ab20: 0xc4800238  lwc1        $f0, 0x238($a0)
    ctx->pc = 0x17ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB24u;
        // 0x17ab28: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB2Cu;
    // 0x17ab2c: 0x0  nop
    ctx->pc = 0x17ab2cu;
    // NOP
    ctx->pc = 0x17ab30u;
}

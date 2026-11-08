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

// Function: entry_0011a57c
// Address: 0x11a57c - 0x11a594
void entry_0011a57c_0x11a57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a57c_0x11a57c");
#endif

    ctx->pc = 0x11a57cu;

    // 0x11a57c: 0xf  sync
    ctx->pc = 0x11a57cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11a580: 0x42000038  ei
    ctx->pc = 0x11a580u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x11a584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a58c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A58Cu;
        // 0x11a590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A594u;
}

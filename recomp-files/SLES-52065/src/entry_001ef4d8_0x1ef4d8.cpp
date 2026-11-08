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

// Function: entry_001ef4d8
// Address: 0x1ef4d8 - 0x1ef4ec
void entry_001ef4d8_0x1ef4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef4d8_0x1ef4d8");
#endif

    ctx->pc = 0x1ef4d8u;

    // 0x1ef4d8: 0xf  sync
    ctx->pc = 0x1ef4d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ef4dc: 0x42000038  ei
    ctx->pc = 0x1ef4dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1ef4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4E4u;
        // 0x1ef4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF4ECu;
}

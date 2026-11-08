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

// Function: entry_0011e420
// Address: 0x11e420 - 0x11e428
void entry_0011e420_0x11e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e420_0x11e420");
#endif

    ctx->pc = 0x11e420u;

    // 0x11e420: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E420u;
    SET_GPR_U32(ctx, 31, 0x11E428u);
    ctx->pc = 0x11E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E420u;
    // 0x11e424: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E420u, 0x11E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E428u;
}

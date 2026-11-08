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

// Function: entry_0011e314
// Address: 0x11e314 - 0x11e324
void entry_0011e314_0x11e314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e314_0x11e314");
#endif

    switch (ctx->pc) {
        case 0x11e31cu: goto label_11e31c;
        default: break;
    }

    ctx->pc = 0x11e314u;

    // 0x11e314: 0xc040150  jal         func_100540
    ctx->pc = 0x11E314u;
    SET_GPR_U32(ctx, 31, 0x11E31Cu);
    ctx->pc = 0x11E318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E314u;
    // 0x11e318: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E314u, 0x11E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E31Cu;
label_11e31c:
    // 0x11e31c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E31Cu;
    {
        const bool branch_taken_0x11e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e31c) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E324u;
}

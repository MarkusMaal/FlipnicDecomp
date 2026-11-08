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

// Function: entry_0011b71c
// Address: 0x11b71c - 0x11b734
void entry_0011b71c_0x11b71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b71c_0x11b71c");
#endif

    switch (ctx->pc) {
        case 0x11b72cu: goto label_11b72c;
        default: break;
    }

    ctx->pc = 0x11b71cu;

label_11b71c:
    // 0x11b71c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B71Cu;
    {
        const bool branch_taken_0x11b71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b71c) {
            ctx->pc = 0x11B734u;
            return;
        }
    }
    ctx->pc = 0x11B724u;
    // 0x11b724: 0xc040150  jal         func_100540
    ctx->pc = 0x11B724u;
    SET_GPR_U32(ctx, 31, 0x11B72Cu);
    ctx->pc = 0x11B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B724u;
    // 0x11b728: 0x8c90003c  lw          $s0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11B724u, 0x11B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B72Cu;
label_11b72c:
    // 0x11b72c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x11B72Cu;
    {
        const bool branch_taken_0x11b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B72Cu;
        // 0x11b730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b72c) {
            ctx->pc = 0x11B71Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b71c;
        }
    }
    ctx->pc = 0x11B734u;
}

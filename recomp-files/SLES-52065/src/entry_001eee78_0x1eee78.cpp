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

// Function: entry_001eee78
// Address: 0x1eee78 - 0x1eee98
void entry_001eee78_0x1eee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eee78_0x1eee78");
#endif

    switch (ctx->pc) {
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee90u: goto label_1eee90;
        default: break;
    }

    ctx->pc = 0x1eee78u;

label_1eee78:
    // 0x1eee78: 0xc07bb0e  jal         func_1EEC38
    ctx->pc = 0x1EEE78u;
    SET_GPR_U32(ctx, 31, 0x1EEE80u);
    ctx->pc = 0x1EEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE78u;
    // 0x1eee7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC38u, 0x1EEE78u, 0x1EEE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE80u;
label_1eee80:
    // 0x1eee80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEE80u;
    {
        const bool branch_taken_0x1eee80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE80u;
        // 0x1eee84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee80) {
            ctx->pc = 0x1EEE70u;
            return;
        }
    }
    ctx->pc = 0x1EEE88u;
    // 0x1eee88: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x1EEE88u;
    SET_GPR_U32(ctx, 31, 0x1EEE90u);
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x1EEE88u, 0x1EEE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE90u;
label_1eee90:
    // 0x1eee90: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EEE90u;
    {
        const bool branch_taken_0x1eee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee90) {
            ctx->pc = 0x1EEE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eee78;
        }
    }
    ctx->pc = 0x1EEE98u;
}

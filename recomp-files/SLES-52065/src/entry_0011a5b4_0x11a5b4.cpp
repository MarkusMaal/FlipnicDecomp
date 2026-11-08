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

// Function: entry_0011a5b4
// Address: 0x11a5b4 - 0x11a5d8
void entry_0011a5b4_0x11a5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5b4_0x11a5b4");
#endif

    switch (ctx->pc) {
        case 0x11a5c8u: goto label_11a5c8;
        case 0x11a5d0u: goto label_11a5d0;
        default: break;
    }

    ctx->pc = 0x11a5b4u;

label_11a5b4:
    // 0x11a5b4: 0x0  nop
    ctx->pc = 0x11a5b4u;
    // NOP
    // 0x11a5b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A5B8u;
    {
        const bool branch_taken_0x11a5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a5b8) {
            ctx->pc = 0x11A5D8u;
            return;
        }
    }
    ctx->pc = 0x11A5C0u;
    // 0x11a5c0: 0xc046f50  jal         func_11BD40
    ctx->pc = 0x11A5C0u;
    SET_GPR_U32(ctx, 31, 0x11A5C8u);
    ctx->pc = 0x11A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5C0u;
    // 0x11a5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BD40u, 0x11A5C0u, 0x11A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5C8u;
label_11a5c8:
    // 0x11a5c8: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x11A5C8u;
    SET_GPR_U32(ctx, 31, 0x11A5D0u);
    ctx->pc = 0x11A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5C8u;
    // 0x11a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x11A5C8u, 0x11A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5D0u;
label_11a5d0:
    // 0x11a5d0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11A5D0u;
    {
        const bool branch_taken_0x11a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5D0u;
        // 0x11a5d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5d0) {
            ctx->pc = 0x11A5B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a5b4;
        }
    }
    ctx->pc = 0x11A5D8u;
}

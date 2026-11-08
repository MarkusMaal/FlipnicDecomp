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

// Function: entry_001c3468
// Address: 0x1c3468 - 0x1c3484
void entry_001c3468_0x1c3468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3468_0x1c3468");
#endif

    switch (ctx->pc) {
        case 0x1c3470u: goto label_1c3470;
        case 0x1c347cu: goto label_1c347c;
        default: break;
    }

    ctx->pc = 0x1c3468u;

    // 0x1c3468: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3468u;
    SET_GPR_U32(ctx, 31, 0x1C3470u);
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3468u, 0x1C3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3470u;
label_1c3470:
    // 0x1c3470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3474: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3474u;
    SET_GPR_U32(ctx, 31, 0x1C347Cu);
    ctx->pc = 0x1C3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3474u;
    // 0x1c3478: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3474u, 0x1C347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C347Cu;
label_1c347c:
    // 0x1c347c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C347Cu;
    {
        const bool branch_taken_0x1c347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c347c) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C3484u;
}

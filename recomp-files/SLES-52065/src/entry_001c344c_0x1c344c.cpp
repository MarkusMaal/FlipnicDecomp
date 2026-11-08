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

// Function: entry_001c344c
// Address: 0x1c344c - 0x1c3468
void entry_001c344c_0x1c344c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c344c_0x1c344c");
#endif

    switch (ctx->pc) {
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3460u: goto label_1c3460;
        default: break;
    }

    ctx->pc = 0x1c344cu;

    // 0x1c344c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C344Cu;
    SET_GPR_U32(ctx, 31, 0x1C3454u);
    ctx->pc = 0x1C3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C344Cu;
    // 0x1c3450: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C344Cu, 0x1C3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3454u;
label_1c3454:
    // 0x1c3454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3458: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3458u;
    SET_GPR_U32(ctx, 31, 0x1C3460u);
    ctx->pc = 0x1C345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3458u;
    // 0x1c345c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3458u, 0x1C3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3460u;
label_1c3460:
    // 0x1c3460: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C3460u;
    {
        const bool branch_taken_0x1c3460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3460) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C3468u;
}

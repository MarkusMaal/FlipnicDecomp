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

// Function: entry_001b6560
// Address: 0x1b6560 - 0x1b6580
void entry_001b6560_0x1b6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6560_0x1b6560");
#endif

    switch (ctx->pc) {
        case 0x1b6568u: goto label_1b6568;
        case 0x1b6578u: goto label_1b6578;
        default: break;
    }

    ctx->pc = 0x1b6560u;

    // 0x1b6560: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6560u;
    SET_GPR_U32(ctx, 31, 0x1B6568u);
    ctx->pc = 0x1B6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6560u;
    // 0x1b6564: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6560u, 0x1B6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6568u;
label_1b6568:
    // 0x1b6568: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1B6568u;
    {
        const bool branch_taken_0x1b6568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6568) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6570u;
    // 0x1b6570: 0xc0704e4  jal         func_1C1390
    ctx->pc = 0x1B6570u;
    SET_GPR_U32(ctx, 31, 0x1B6578u);
    ctx->pc = 0x1B6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6570u;
    // 0x1b6574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1390u, 0x1B6570u, 0x1B6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6578u;
label_1b6578:
    // 0x1b6578: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1B6578u;
    {
        const bool branch_taken_0x1b6578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6578) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6580u;
}

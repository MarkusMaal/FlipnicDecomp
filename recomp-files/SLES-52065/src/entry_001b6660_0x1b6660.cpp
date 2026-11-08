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

// Function: entry_001b6660
// Address: 0x1b6660 - 0x1b6680
void entry_001b6660_0x1b6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6660_0x1b6660");
#endif

    switch (ctx->pc) {
        case 0x1b6668u: goto label_1b6668;
        case 0x1b6678u: goto label_1b6678;
        default: break;
    }

    ctx->pc = 0x1b6660u;

    // 0x1b6660: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6660u;
    SET_GPR_U32(ctx, 31, 0x1B6668u);
    ctx->pc = 0x1B6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6660u;
    // 0x1b6664: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6660u, 0x1B6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6668u;
label_1b6668:
    // 0x1b6668: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1B6668u;
    {
        const bool branch_taken_0x1b6668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6668) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6670u;
    // 0x1b6670: 0xc071e7c  jal         func_1C79F0
    ctx->pc = 0x1B6670u;
    SET_GPR_U32(ctx, 31, 0x1B6678u);
    ctx->pc = 0x1B6674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6670u;
    // 0x1b6674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C79F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C79F0u, 0x1B6670u, 0x1B6678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6678u;
label_1b6678:
    // 0x1b6678: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1B6678u;
    {
        const bool branch_taken_0x1b6678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6678) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6680u;
}

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

// Function: entry_001b6680
// Address: 0x1b6680 - 0x1b66a0
void entry_001b6680_0x1b6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6680_0x1b6680");
#endif

    switch (ctx->pc) {
        case 0x1b6688u: goto label_1b6688;
        case 0x1b6698u: goto label_1b6698;
        default: break;
    }

    ctx->pc = 0x1b6680u;

    // 0x1b6680: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6680u;
    SET_GPR_U32(ctx, 31, 0x1B6688u);
    ctx->pc = 0x1B6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6680u;
    // 0x1b6684: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6680u, 0x1B6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6688u;
label_1b6688:
    // 0x1b6688: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1B6688u;
    {
        const bool branch_taken_0x1b6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6688) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6690u;
    // 0x1b6690: 0xc072200  jal         func_1C8800
    ctx->pc = 0x1B6690u;
    SET_GPR_U32(ctx, 31, 0x1B6698u);
    ctx->pc = 0x1B6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6690u;
    // 0x1b6694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8800u, 0x1B6690u, 0x1B6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6698u;
label_1b6698:
    // 0x1b6698: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1B6698u;
    {
        const bool branch_taken_0x1b6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6698) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B66A0u;
}

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

// Function: entry_001b6620
// Address: 0x1b6620 - 0x1b6640
void entry_001b6620_0x1b6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6620_0x1b6620");
#endif

    switch (ctx->pc) {
        case 0x1b6628u: goto label_1b6628;
        case 0x1b6638u: goto label_1b6638;
        default: break;
    }

    ctx->pc = 0x1b6620u;

    // 0x1b6620: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6620u;
    SET_GPR_U32(ctx, 31, 0x1B6628u);
    ctx->pc = 0x1B6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6620u;
    // 0x1b6624: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6620u, 0x1B6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6628u;
label_1b6628:
    // 0x1b6628: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1B6628u;
    {
        const bool branch_taken_0x1b6628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6628) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6630u;
    // 0x1b6630: 0xc072950  jal         func_1CA540
    ctx->pc = 0x1B6630u;
    SET_GPR_U32(ctx, 31, 0x1B6638u);
    ctx->pc = 0x1B6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6630u;
    // 0x1b6634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA540u, 0x1B6630u, 0x1B6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6638u;
label_1b6638:
    // 0x1b6638: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1B6638u;
    {
        const bool branch_taken_0x1b6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6638) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6640u;
}

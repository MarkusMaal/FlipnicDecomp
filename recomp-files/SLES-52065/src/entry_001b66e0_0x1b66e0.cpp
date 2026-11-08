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

// Function: entry_001b66e0
// Address: 0x1b66e0 - 0x1b6700
void entry_001b66e0_0x1b66e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b66e0_0x1b66e0");
#endif

    switch (ctx->pc) {
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66f8u: goto label_1b66f8;
        default: break;
    }

    ctx->pc = 0x1b66e0u;

    // 0x1b66e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B66E0u;
    SET_GPR_U32(ctx, 31, 0x1B66E8u);
    ctx->pc = 0x1B66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66E0u;
    // 0x1b66e4: 0x24040268  addiu       $a0, $zero, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B66E0u, 0x1B66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66E8u;
label_1b66e8:
    // 0x1b66e8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1B66E8u;
    {
        const bool branch_taken_0x1b66e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66e8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B66F0u;
    // 0x1b66f0: 0xc070b68  jal         func_1C2DA0
    ctx->pc = 0x1B66F0u;
    SET_GPR_U32(ctx, 31, 0x1B66F8u);
    ctx->pc = 0x1B66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66F0u;
    // 0x1b66f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2DA0u, 0x1B66F0u, 0x1B66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66F8u;
label_1b66f8:
    // 0x1b66f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1B66F8u;
    {
        const bool branch_taken_0x1b66f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66f8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6700u;
}

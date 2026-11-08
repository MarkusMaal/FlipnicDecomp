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

// Function: entry_001b66c0
// Address: 0x1b66c0 - 0x1b66e0
void entry_001b66c0_0x1b66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b66c0_0x1b66c0");
#endif

    switch (ctx->pc) {
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66d8u: goto label_1b66d8;
        default: break;
    }

    ctx->pc = 0x1b66c0u;

    // 0x1b66c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B66C0u;
    SET_GPR_U32(ctx, 31, 0x1B66C8u);
    ctx->pc = 0x1B66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66C0u;
    // 0x1b66c4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B66C0u, 0x1B66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66C8u;
label_1b66c8:
    // 0x1b66c8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B66C8u;
    {
        const bool branch_taken_0x1b66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66c8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B66D0u;
    // 0x1b66d0: 0xc072de4  jal         func_1CB790
    ctx->pc = 0x1B66D0u;
    SET_GPR_U32(ctx, 31, 0x1B66D8u);
    ctx->pc = 0x1B66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66D0u;
    // 0x1b66d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB790u, 0x1B66D0u, 0x1B66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66D8u;
label_1b66d8:
    // 0x1b66d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B66D8u;
    {
        const bool branch_taken_0x1b66d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66d8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B66E0u;
}

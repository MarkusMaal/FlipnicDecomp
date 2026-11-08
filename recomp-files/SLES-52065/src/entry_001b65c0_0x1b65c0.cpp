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

// Function: entry_001b65c0
// Address: 0x1b65c0 - 0x1b65e0
void entry_001b65c0_0x1b65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b65c0_0x1b65c0");
#endif

    switch (ctx->pc) {
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b65d8u: goto label_1b65d8;
        default: break;
    }

    ctx->pc = 0x1b65c0u;

    // 0x1b65c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B65C0u;
    SET_GPR_U32(ctx, 31, 0x1B65C8u);
    ctx->pc = 0x1B65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65C0u;
    // 0x1b65c4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B65C0u, 0x1B65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65C8u;
label_1b65c8:
    // 0x1b65c8: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1B65C8u;
    {
        const bool branch_taken_0x1b65c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65c8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B65D0u;
    // 0x1b65d0: 0xc071948  jal         func_1C6520
    ctx->pc = 0x1B65D0u;
    SET_GPR_U32(ctx, 31, 0x1B65D8u);
    ctx->pc = 0x1B65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65D0u;
    // 0x1b65d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6520u, 0x1B65D0u, 0x1B65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65D8u;
label_1b65d8:
    // 0x1b65d8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1B65D8u;
    {
        const bool branch_taken_0x1b65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65d8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B65E0u;
}

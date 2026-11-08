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

// Function: entry_001b64c0
// Address: 0x1b64c0 - 0x1b64e0
void entry_001b64c0_0x1b64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b64c0_0x1b64c0");
#endif

    switch (ctx->pc) {
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64d8u: goto label_1b64d8;
        default: break;
    }

    ctx->pc = 0x1b64c0u;

    // 0x1b64c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B64C0u;
    SET_GPR_U32(ctx, 31, 0x1B64C8u);
    ctx->pc = 0x1B64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64C0u;
    // 0x1b64c4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B64C0u, 0x1B64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64C8u;
label_1b64c8:
    // 0x1b64c8: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x1B64C8u;
    {
        const bool branch_taken_0x1b64c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64c8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B64D0u;
    // 0x1b64d0: 0xc06f0c4  jal         func_1BC310
    ctx->pc = 0x1B64D0u;
    SET_GPR_U32(ctx, 31, 0x1B64D8u);
    ctx->pc = 0x1B64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64D0u;
    // 0x1b64d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC310u, 0x1B64D0u, 0x1B64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64D8u;
label_1b64d8:
    // 0x1b64d8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1B64D8u;
    {
        const bool branch_taken_0x1b64d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64d8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B64E0u;
}

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

// Function: entry_001b67c0
// Address: 0x1b67c0 - 0x1b67e0
void entry_001b67c0_0x1b67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67c0_0x1b67c0");
#endif

    switch (ctx->pc) {
        case 0x1b67c8u: goto label_1b67c8;
        case 0x1b67d8u: goto label_1b67d8;
        default: break;
    }

    ctx->pc = 0x1b67c0u;

    // 0x1b67c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B67C0u;
    SET_GPR_U32(ctx, 31, 0x1B67C8u);
    ctx->pc = 0x1B67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67C0u;
    // 0x1b67c4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B67C0u, 0x1B67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67C8u;
label_1b67c8:
    // 0x1b67c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B67C8u;
    {
        const bool branch_taken_0x1b67c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67c8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B67D0u;
    // 0x1b67d0: 0xc073ac8  jal         func_1CEB20
    ctx->pc = 0x1B67D0u;
    SET_GPR_U32(ctx, 31, 0x1B67D8u);
    ctx->pc = 0x1B67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67D0u;
    // 0x1b67d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB20u, 0x1B67D0u, 0x1B67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67D8u;
label_1b67d8:
    // 0x1b67d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B67D8u;
    {
        const bool branch_taken_0x1b67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67d8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B67E0u;
}

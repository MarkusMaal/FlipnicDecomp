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

// Function: entry_001b67a0
// Address: 0x1b67a0 - 0x1b67c0
void entry_001b67a0_0x1b67a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67a0_0x1b67a0");
#endif

    switch (ctx->pc) {
        case 0x1b67a8u: goto label_1b67a8;
        case 0x1b67b8u: goto label_1b67b8;
        default: break;
    }

    ctx->pc = 0x1b67a0u;

    // 0x1b67a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B67A0u;
    SET_GPR_U32(ctx, 31, 0x1B67A8u);
    ctx->pc = 0x1B67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67A0u;
    // 0x1b67a4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B67A0u, 0x1B67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67A8u;
label_1b67a8:
    // 0x1b67a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B67A8u;
    {
        const bool branch_taken_0x1b67a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67a8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B67B0u;
    // 0x1b67b0: 0xc07396c  jal         func_1CE5B0
    ctx->pc = 0x1B67B0u;
    SET_GPR_U32(ctx, 31, 0x1B67B8u);
    ctx->pc = 0x1B67B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67B0u;
    // 0x1b67b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5B0u, 0x1B67B0u, 0x1B67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67B8u;
label_1b67b8:
    // 0x1b67b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B67B8u;
    {
        const bool branch_taken_0x1b67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67b8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B67C0u;
}

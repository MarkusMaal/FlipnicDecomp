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

// Function: entry_001c0870
// Address: 0x1c0870 - 0x1c088c
void entry_001c0870_0x1c0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0870_0x1c0870");
#endif

    switch (ctx->pc) {
        case 0x1c0878u: goto label_1c0878;
        default: break;
    }

    ctx->pc = 0x1c0870u;

    // 0x1c0870: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C0870u;
    SET_GPR_U32(ctx, 31, 0x1C0878u);
    ctx->pc = 0x1C0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0870u;
    // 0x1c0874: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C0870u, 0x1C0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0878u;
label_1c0878:
    // 0x1c0878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0878u;
    {
        const bool branch_taken_0x1c0878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0878) {
            ctx->pc = 0x1C088Cu;
            return;
        }
    }
    ctx->pc = 0x1C0880u;
    // 0x1c0880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0884: 0xc07049c  jal         func_1C1270
    ctx->pc = 0x1C0884u;
    SET_GPR_U32(ctx, 31, 0x1C088Cu);
    ctx->pc = 0x1C0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0884u;
    // 0x1c0888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1270u, 0x1C0884u, 0x1C088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C088Cu;
}

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

// Function: entry_001c4e64
// Address: 0x1c4e64 - 0x1c4e88
void entry_001c4e64_0x1c4e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e64_0x1c4e64");
#endif

    switch (ctx->pc) {
        case 0x1c4e6cu: goto label_1c4e6c;
        case 0x1c4e80u: goto label_1c4e80;
        default: break;
    }

    ctx->pc = 0x1c4e64u;

    // 0x1c4e64: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4E64u;
    SET_GPR_U32(ctx, 31, 0x1C4E6Cu);
    ctx->pc = 0x1C4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E64u;
    // 0x1c4e68: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4E64u, 0x1C4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E6Cu;
label_1c4e6c:
    // 0x1c4e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4E6Cu;
    {
        const bool branch_taken_0x1c4e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E6Cu;
        // 0x1c4e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e6c) {
            ctx->pc = 0x1C4E88u;
            return;
        }
    }
    ctx->pc = 0x1C4E74u;
    // 0x1c4e74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4e78: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E78u;
    SET_GPR_U32(ctx, 31, 0x1C4E80u);
    ctx->pc = 0x1C4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E78u;
    // 0x1c4e7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E78u, 0x1C4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E80u;
label_1c4e80:
    // 0x1c4e80: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C4E80u;
    SET_GPR_U32(ctx, 31, 0x1C4E88u);
    ctx->pc = 0x1C4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E80u;
    // 0x1c4e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C4E80u, 0x1C4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E88u;
}

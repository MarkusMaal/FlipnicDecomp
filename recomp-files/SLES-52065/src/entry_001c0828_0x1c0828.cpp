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

// Function: entry_001c0828
// Address: 0x1c0828 - 0x1c084c
void entry_001c0828_0x1c0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0828_0x1c0828");
#endif

    switch (ctx->pc) {
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0844u: goto label_1c0844;
        default: break;
    }

    ctx->pc = 0x1c0828u;

    // 0x1c0828: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C0828u;
    SET_GPR_U32(ctx, 31, 0x1C0830u);
    ctx->pc = 0x1C082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0828u;
    // 0x1c082c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C0828u, 0x1C0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0830u;
label_1c0830:
    // 0x1c0830: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0830u;
    {
        const bool branch_taken_0x1c0830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0830u;
        // 0x1c0834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0830) {
            ctx->pc = 0x1C084Cu;
            return;
        }
    }
    ctx->pc = 0x1C0838u;
    // 0x1c0838: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c083c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C083Cu;
    SET_GPR_U32(ctx, 31, 0x1C0844u);
    ctx->pc = 0x1C0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C083Cu;
    // 0x1c0840: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C083Cu, 0x1C0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0844u;
label_1c0844:
    // 0x1c0844: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C0844u;
    SET_GPR_U32(ctx, 31, 0x1C084Cu);
    ctx->pc = 0x1C0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0844u;
    // 0x1c0848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C0844u, 0x1C084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C084Cu;
}

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

// Function: entry_001cc86c
// Address: 0x1cc86c - 0x1cc88c
void entry_001cc86c_0x1cc86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc86c_0x1cc86c");
#endif

    switch (ctx->pc) {
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc884u: goto label_1cc884;
        default: break;
    }

    ctx->pc = 0x1cc86cu;

    // 0x1cc86c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CC86Cu;
    SET_GPR_U32(ctx, 31, 0x1CC874u);
    ctx->pc = 0x1CC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC86Cu;
    // 0x1cc870: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CC86Cu, 0x1CC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC874u;
label_1cc874:
    // 0x1cc874: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC874u;
    {
        const bool branch_taken_0x1cc874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC874u;
        // 0x1cc878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc874) {
            ctx->pc = 0x1CC88Cu;
            return;
        }
    }
    ctx->pc = 0x1CC87Cu;
    // 0x1cc87c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CC87Cu;
    SET_GPR_U32(ctx, 31, 0x1CC884u);
    ctx->pc = 0x1CC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC87Cu;
    // 0x1cc880: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CC87Cu, 0x1CC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC884u;
label_1cc884:
    // 0x1cc884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC884u;
    {
        const bool branch_taken_0x1cc884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc884) {
            ctx->pc = 0x1CC8A8u;
            return;
        }
    }
    ctx->pc = 0x1CC88Cu;
}

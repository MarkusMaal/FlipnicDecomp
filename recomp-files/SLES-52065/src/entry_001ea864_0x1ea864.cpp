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

// Function: entry_001ea864
// Address: 0x1ea864 - 0x1ea894
void entry_001ea864_0x1ea864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea864_0x1ea864");
#endif

    switch (ctx->pc) {
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea880u: goto label_1ea880;
        default: break;
    }

    ctx->pc = 0x1ea864u;

    // 0x1ea864: 0x0  nop
    ctx->pc = 0x1ea864u;
    // NOP
    // 0x1ea868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea86c: 0xc07abcc  jal         func_1EAF30
    ctx->pc = 0x1EA86Cu;
    SET_GPR_U32(ctx, 31, 0x1EA874u);
    ctx->pc = 0x1EA870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA86Cu;
    // 0x1ea870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAF30u, 0x1EA86Cu, 0x1EA874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA874u;
label_1ea874:
    // 0x1ea874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea878: 0xc07aad4  jal         func_1EAB50
    ctx->pc = 0x1EA878u;
    SET_GPR_U32(ctx, 31, 0x1EA880u);
    ctx->pc = 0x1EA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA878u;
    // 0x1ea87c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB50u, 0x1EA878u, 0x1EA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA880u;
label_1ea880:
    // 0x1ea880: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ea880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ea884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA884u;
    {
        const bool branch_taken_0x1ea884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea884) {
            ctx->pc = 0x1EA894u;
            return;
        }
    }
    ctx->pc = 0x1EA88Cu;
    // 0x1ea88c: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1EA88Cu;
    SET_GPR_U32(ctx, 31, 0x1EA894u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EA88Cu, 0x1EA894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA894u;
}

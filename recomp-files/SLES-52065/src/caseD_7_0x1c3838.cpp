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

// Function: caseD_7
// Address: 0x1c3838 - 0x1c3870
void caseD_7_0x1c3838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1c3838");
#endif

    switch (ctx->pc) {
        case 0x1c3844u: goto label_1c3844;
        case 0x1c3850u: goto label_1c3850;
        case 0x1c385cu: goto label_1c385c;
        case 0x1c3864u: goto label_1c3864;
        default: break;
    }

    ctx->pc = 0x1c3838u;

    // 0x1c3838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c383c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C383Cu;
    SET_GPR_U32(ctx, 31, 0x1C3844u);
    ctx->pc = 0x1C3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C383Cu;
    // 0x1c3840: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C383Cu, 0x1C3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3844u;
label_1c3844:
    // 0x1c3844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3848: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3848u;
    SET_GPR_U32(ctx, 31, 0x1C3850u);
    ctx->pc = 0x1C384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3848u;
    // 0x1c384c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3848u, 0x1C3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3850u;
label_1c3850:
    // 0x1c3850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3854: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3854u;
    SET_GPR_U32(ctx, 31, 0x1C385Cu);
    ctx->pc = 0x1C3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3854u;
    // 0x1c3858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3854u, 0x1C385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C385Cu;
label_1c385c:
    // 0x1c385c: 0xc07468c  jal         func_1D1A30
    ctx->pc = 0x1C385Cu;
    SET_GPR_U32(ctx, 31, 0x1C3864u);
    ctx->pc = 0x1C3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C385Cu;
    // 0x1c3860: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A30u, 0x1C385Cu, 0x1C3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3864u;
label_1c3864:
    // 0x1c3864: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3868: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x1C3868u;
    {
        const bool branch_taken_0x1c3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3868u;
        // 0x1c386c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3868) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3870u;
}

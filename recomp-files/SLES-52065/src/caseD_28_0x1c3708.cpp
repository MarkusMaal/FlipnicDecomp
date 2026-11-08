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

// Function: caseD_28
// Address: 0x1c3708 - 0x1c3748
void caseD_28_0x1c3708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_28_0x1c3708");
#endif

    switch (ctx->pc) {
        case 0x1c3714u: goto label_1c3714;
        case 0x1c3720u: goto label_1c3720;
        case 0x1c372cu: goto label_1c372c;
        default: break;
    }

    ctx->pc = 0x1c3708u;

    // 0x1c3708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c370c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C370Cu;
    SET_GPR_U32(ctx, 31, 0x1C3714u);
    ctx->pc = 0x1C3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C370Cu;
    // 0x1c3710: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C370Cu, 0x1C3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3714u;
label_1c3714:
    // 0x1c3714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3718: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3718u;
    SET_GPR_U32(ctx, 31, 0x1C3720u);
    ctx->pc = 0x1C371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3718u;
    // 0x1c371c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3718u, 0x1C3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3720u;
label_1c3720:
    // 0x1c3720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3724: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3724u;
    SET_GPR_U32(ctx, 31, 0x1C372Cu);
    ctx->pc = 0x1C3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3724u;
    // 0x1c3728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3724u, 0x1C372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C372Cu;
label_1c372c:
    // 0x1c372c: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c3730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3734: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3734u;
    {
        const bool branch_taken_0x1c3734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3734u;
        // 0x1c3738: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3734) {
            ctx->pc = 0x1C3748u;
            return;
        }
    }
    ctx->pc = 0x1C373Cu;
    // 0x1c373c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3740: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x1C3740u;
    {
        const bool branch_taken_0x1c3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3740u;
        // 0x1c3744: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3740) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3748u;
}

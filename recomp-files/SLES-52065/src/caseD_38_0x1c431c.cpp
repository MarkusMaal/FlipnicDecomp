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

// Function: caseD_38
// Address: 0x1c431c - 0x1c4354
void caseD_38_0x1c431c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_38_0x1c431c");
#endif

    switch (ctx->pc) {
        case 0x1c4328u: goto label_1c4328;
        case 0x1c4334u: goto label_1c4334;
        case 0x1c4340u: goto label_1c4340;
        default: break;
    }

    ctx->pc = 0x1c431cu;

    // 0x1c431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4320: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4320u;
    SET_GPR_U32(ctx, 31, 0x1C4328u);
    ctx->pc = 0x1C4324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4320u;
    // 0x1c4324: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4320u, 0x1C4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4328u;
label_1c4328:
    // 0x1c4328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C432Cu;
    SET_GPR_U32(ctx, 31, 0x1C4334u);
    ctx->pc = 0x1C4330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C432Cu;
    // 0x1c4330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C432Cu, 0x1C4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4334u;
label_1c4334:
    // 0x1c4334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4338: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4338u;
    SET_GPR_U32(ctx, 31, 0x1C4340u);
    ctx->pc = 0x1C433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4338u;
    // 0x1c433c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4338u, 0x1C4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4340u;
label_1c4340:
    // 0x1c4340: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1c4344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4348: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4348u;
    {
        const bool branch_taken_0x1c4348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4348u;
        // 0x1c434c: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4348) {
            ctx->pc = 0x1C4354u;
            return;
        }
    }
    ctx->pc = 0x1C4350u;
    // 0x1c4350: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c4350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1c4354u;
}

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

// Function: caseD_11
// Address: 0x1c3a98 - 0x1c3ad8
void caseD_11_0x1c3a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x1c3a98");
#endif

    switch (ctx->pc) {
        case 0x1c3aa4u: goto label_1c3aa4;
        case 0x1c3ab0u: goto label_1c3ab0;
        case 0x1c3abcu: goto label_1c3abc;
        case 0x1c3accu: goto label_1c3acc;
        default: break;
    }

    ctx->pc = 0x1c3a98u;

    // 0x1c3a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a9c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3AA4u);
    ctx->pc = 0x1C3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A9Cu;
    // 0x1c3aa0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A9Cu, 0x1C3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AA4u;
label_1c3aa4:
    // 0x1c3aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3aa8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AA8u;
    SET_GPR_U32(ctx, 31, 0x1C3AB0u);
    ctx->pc = 0x1C3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AA8u;
    // 0x1c3aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AA8u, 0x1C3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AB0u;
label_1c3ab0:
    // 0x1c3ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ab4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AB4u;
    SET_GPR_U32(ctx, 31, 0x1C3ABCu);
    ctx->pc = 0x1C3AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AB4u;
    // 0x1c3ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AB4u, 0x1C3ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ABCu;
label_1c3abc:
    // 0x1c3abc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3ac0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3ac4: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C3AC4u;
    SET_GPR_U32(ctx, 31, 0x1C3ACCu);
    ctx->pc = 0x1C3AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AC4u;
    // 0x1c3ac8: 0x24a51c40  addiu       $a1, $a1, 0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C3AC4u, 0x1C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ACCu;
label_1c3acc:
    // 0x1c3acc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c3ad0: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x1C3AD0u;
    {
        const bool branch_taken_0x1c3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AD0u;
        // 0x1c3ad4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ad0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3AD8u;
}

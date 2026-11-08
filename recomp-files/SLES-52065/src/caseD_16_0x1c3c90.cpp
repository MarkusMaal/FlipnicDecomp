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

// Function: caseD_16
// Address: 0x1c3c90 - 0x1c3ce0
void caseD_16_0x1c3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1c3c90");
#endif

    switch (ctx->pc) {
        case 0x1c3c9cu: goto label_1c3c9c;
        case 0x1c3ca8u: goto label_1c3ca8;
        case 0x1c3cb4u: goto label_1c3cb4;
        default: break;
    }

    ctx->pc = 0x1c3c90u;

    // 0x1c3c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c94: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3C94u;
    SET_GPR_U32(ctx, 31, 0x1C3C9Cu);
    ctx->pc = 0x1C3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C94u;
    // 0x1c3c98: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3C94u, 0x1C3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C9Cu;
label_1c3c9c:
    // 0x1c3c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ca0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3CA0u;
    SET_GPR_U32(ctx, 31, 0x1C3CA8u);
    ctx->pc = 0x1C3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CA0u;
    // 0x1c3ca4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3CA0u, 0x1C3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CA8u;
label_1c3ca8:
    // 0x1c3ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cac: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3CACu;
    SET_GPR_U32(ctx, 31, 0x1C3CB4u);
    ctx->pc = 0x1C3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CACu;
    // 0x1c3cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3CACu, 0x1C3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CB4u;
label_1c3cb4:
    // 0x1c3cb4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3cb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3cbc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3CBCu;
    {
        const bool branch_taken_0x1c3cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3cbc) {
            ctx->pc = 0x1C3CE4u;
            return;
        }
    }
    ctx->pc = 0x1C3CC4u;
    // 0x1c3cc4: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x1c3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1c3cc8: 0x240235e0  addiu       $v0, $zero, 0x35E0
    ctx->pc = 0x1c3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    // 0x1c3ccc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3CCCu;
    {
        const bool branch_taken_0x1c3ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CCCu;
        // 0x1c3cd0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ccc) {
            ctx->pc = 0x1C3CE0u;
            return;
        }
    }
    ctx->pc = 0x1C3CD4u;
    // 0x1c3cd4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c3cd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3CD8u;
    {
        const bool branch_taken_0x1c3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CD8u;
        // 0x1c3cdc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cd8) {
            ctx->pc = 0x1C3CE4u;
            return;
        }
    }
    ctx->pc = 0x1C3CE0u;
}

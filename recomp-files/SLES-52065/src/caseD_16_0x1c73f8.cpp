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
// Address: 0x1c73f8 - 0x1c7448
void caseD_16_0x1c73f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1c73f8");
#endif

    switch (ctx->pc) {
        case 0x1c7404u: goto label_1c7404;
        case 0x1c7410u: goto label_1c7410;
        case 0x1c741cu: goto label_1c741c;
        default: break;
    }

    ctx->pc = 0x1c73f8u;

    // 0x1c73f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73fc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73FCu;
    SET_GPR_U32(ctx, 31, 0x1C7404u);
    ctx->pc = 0x1C7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73FCu;
    // 0x1c7400: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73FCu, 0x1C7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7404u;
label_1c7404:
    // 0x1c7404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7408: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7408u;
    SET_GPR_U32(ctx, 31, 0x1C7410u);
    ctx->pc = 0x1C740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7408u;
    // 0x1c740c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7408u, 0x1C7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7410u;
label_1c7410:
    // 0x1c7410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7414: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7414u;
    SET_GPR_U32(ctx, 31, 0x1C741Cu);
    ctx->pc = 0x1C7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7414u;
    // 0x1c7418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7414u, 0x1C741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C741Cu;
label_1c741c:
    // 0x1c741c: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7420: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7424: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7424u;
    {
        const bool branch_taken_0x1c7424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7424) {
            ctx->pc = 0x1C744Cu;
            return;
        }
    }
    ctx->pc = 0x1C742Cu;
    // 0x1c742c: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c7430: 0x240235e0  addiu       $v0, $zero, 0x35E0
    ctx->pc = 0x1c7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    // 0x1c7434: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7434u;
    {
        const bool branch_taken_0x1c7434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7434u;
        // 0x1c7438: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7434) {
            ctx->pc = 0x1C7448u;
            return;
        }
    }
    ctx->pc = 0x1C743Cu;
    // 0x1c743c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c7440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7440u;
    {
        const bool branch_taken_0x1c7440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7440u;
        // 0x1c7444: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7440) {
            ctx->pc = 0x1C744Cu;
            return;
        }
    }
    ctx->pc = 0x1C7448u;
}

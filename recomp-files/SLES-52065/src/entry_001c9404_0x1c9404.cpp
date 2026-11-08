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

// Function: entry_001c9404
// Address: 0x1c9404 - 0x1c9458
void entry_001c9404_0x1c9404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9404_0x1c9404");
#endif

    switch (ctx->pc) {
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9420u: goto label_1c9420;
        default: break;
    }

    ctx->pc = 0x1c9404u;

    // 0x1c9404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9408: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9408u;
    SET_GPR_U32(ctx, 31, 0x1C9410u);
    ctx->pc = 0x1C940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9408u;
    // 0x1c940c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9408u, 0x1C9410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9410u;
label_1c9410:
    // 0x1c9410: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9418: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C9418u;
    SET_GPR_U32(ctx, 31, 0x1C9420u);
    ctx->pc = 0x1C941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9418u;
    // 0x1c941c: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C9418u, 0x1C9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9420u;
label_1c9420:
    // 0x1c9420: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9424: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9428: 0x8c24f8b8  lw          $a0, -0x748($at)
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c942c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C942Cu;
    {
        const bool branch_taken_0x1c942c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C942Cu;
        // 0x1c9430: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c942c) {
            ctx->pc = 0x1C9474u;
            return;
        }
    }
    ctx->pc = 0x1C9434u;
    // 0x1c9434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9438: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9438u;
    {
        const bool branch_taken_0x1c9438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9438u;
        // 0x1c943c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9438) {
            ctx->pc = 0x1C9458u;
            return;
        }
    }
    ctx->pc = 0x1C9440u;
    // 0x1c9440: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9440u;
    {
        const bool branch_taken_0x1c9440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9440) {
            ctx->pc = 0x1C9458u;
            return;
        }
    }
    ctx->pc = 0x1C9448u;
    // 0x1c9448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9448u;
    {
        const bool branch_taken_0x1c9448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9448) {
            ctx->pc = 0x1C9458u;
            return;
        }
    }
    ctx->pc = 0x1C9450u;
    // 0x1c9450: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9450u;
    {
        const bool branch_taken_0x1c9450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9450) {
            ctx->pc = 0x1C9470u;
            return;
        }
    }
    ctx->pc = 0x1C9458u;
}

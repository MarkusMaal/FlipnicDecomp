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

// Function: entry_0010a324
// Address: 0x10a324 - 0x10a380
void entry_0010a324_0x10a324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a324_0x10a324");
#endif

    switch (ctx->pc) {
        case 0x10a330u: goto label_10a330;
        case 0x10a344u: goto label_10a344;
        case 0x10a378u: goto label_10a378;
        default: break;
    }

    ctx->pc = 0x10a324u;

    // 0x10a324: 0x0  nop
    ctx->pc = 0x10a324u;
    // NOP
    // 0x10a328: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10A328u;
    SET_GPR_U32(ctx, 31, 0x10A330u);
    ctx->pc = 0x10A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A328u;
    // 0x10a32c: 0x24040320  addiu       $a0, $zero, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10A328u, 0x10A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A330u;
label_10a330:
    // 0x10a330: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10A330u;
    {
        const bool branch_taken_0x10a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A330u;
        // 0x10a334: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a330) {
            ctx->pc = 0x10A380u;
            return;
        }
    }
    ctx->pc = 0x10A338u;
    // 0x10a338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a33c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10A33Cu;
    SET_GPR_U32(ctx, 31, 0x10A344u);
    ctx->pc = 0x10A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A33Cu;
    // 0x10a340: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10A33Cu, 0x10A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A344u;
label_10a344:
    // 0x10a344: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10a344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10a348: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10a34c: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x10a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x10a350: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x10a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x10a354: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x10a354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x10a358: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x10a35c: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x10a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
    // 0x10a360: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x10a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x10a364: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x10a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x10a368: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x10a368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x10a36c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x10a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x10a370: 0xc0621c0  jal         func_188700
    ctx->pc = 0x10A370u;
    SET_GPR_U32(ctx, 31, 0x10A378u);
    ctx->pc = 0x10A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A370u;
    // 0x10a374: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x10A370u, 0x10A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A378u;
label_10a378:
    // 0x10a378: 0x8fb3007c  lw          $s3, 0x7C($sp)
    ctx->pc = 0x10a378u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x10a37c: 0x0  nop
    ctx->pc = 0x10a37cu;
    // NOP
    ctx->pc = 0x10a380u;
}

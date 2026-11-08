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

// Function: FUN_0014c810
// Address: 0x14c810 - 0x14c88c
void FUN_0014c810_0x14c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c810_0x14c810");
#endif

    switch (ctx->pc) {
        case 0x14c82cu: goto label_14c82c;
        case 0x14c834u: goto label_14c834;
        case 0x14c854u: goto label_14c854;
        default: break;
    }

    ctx->pc = 0x14c810u;

    // 0x14c810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c81c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x14c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x14c820: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x14c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14c824: 0xc04c558  jal         func_131560
    ctx->pc = 0x14C824u;
    SET_GPR_U32(ctx, 31, 0x14C82Cu);
    ctx->pc = 0x14C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C824u;
    // 0x14c828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x14C824u, 0x14C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C82Cu;
label_14c82c:
    // 0x14c82c: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x14C82Cu;
    SET_GPR_U32(ctx, 31, 0x14C834u);
    ctx->pc = 0x14C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C82Cu;
    // 0x14c830: 0x260400b4  addiu       $a0, $s0, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x14C82Cu, 0x14C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C834u;
label_14c834:
    // 0x14c834: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x14c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x14c838: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x14c838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x14c83c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c840: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c844: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x14c844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14c848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c84c: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x14C84Cu;
    SET_GPR_U32(ctx, 31, 0x14C854u);
    ctx->pc = 0x14C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C84Cu;
    // 0x14c850: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x14C84Cu, 0x14C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C854u;
label_14c854:
    // 0x14c854: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x14c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x14c858: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14c85c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14c85cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14c860: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C860u;
    {
        const bool branch_taken_0x14c860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c860) {
            ctx->pc = 0x14C87Cu;
            goto label_14c87c;
        }
    }
    ctx->pc = 0x14C868u;
    // 0x14c868: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x14c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x14c86c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c870: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14c874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c878: 0xac6502b4  sw          $a1, 0x2B4($v1)
    ctx->pc = 0x14c878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 5));
label_14c87c:
    // 0x14c87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c884: 0x3e00008  jr          $ra
    ctx->pc = 0x14C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C884u;
        // 0x14c888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C88Cu;
}

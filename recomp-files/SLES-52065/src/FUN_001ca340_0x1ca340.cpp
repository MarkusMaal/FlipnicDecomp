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

// Function: FUN_001ca340
// Address: 0x1ca340 - 0x1ca3bc
void FUN_001ca340_0x1ca340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca340_0x1ca340");
#endif

    switch (ctx->pc) {
        case 0x1ca36cu: goto label_1ca36c;
        case 0x1ca374u: goto label_1ca374;
        case 0x1ca388u: goto label_1ca388;
        case 0x1ca390u: goto label_1ca390;
        case 0x1ca3a0u: goto label_1ca3a0;
        case 0x1ca3a8u: goto label_1ca3a8;
        default: break;
    }

    ctx->pc = 0x1ca340u;

    // 0x1ca340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca350: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1ca350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1ca354: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca358: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA358u;
    {
        const bool branch_taken_0x1ca358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA358u;
        // 0x1ca35c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca358) {
            ctx->pc = 0x1CA37Cu;
            goto label_1ca37c;
        }
    }
    ctx->pc = 0x1CA360u;
    // 0x1ca360: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca364: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA364u;
    SET_GPR_U32(ctx, 31, 0x1CA36Cu);
    ctx->pc = 0x1CA368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA364u;
    // 0x1ca368: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA364u, 0x1CA36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA36Cu;
label_1ca36c:
    // 0x1ca36c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA36Cu;
    SET_GPR_U32(ctx, 31, 0x1CA374u);
    ctx->pc = 0x1CA370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA36Cu;
    // 0x1ca370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA36Cu, 0x1CA374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA374u;
label_1ca374:
    // 0x1ca374: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CA374u;
    {
        const bool branch_taken_0x1ca374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA374u;
        // 0x1ca378: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca374) {
            ctx->pc = 0x1CA3ACu;
            goto label_1ca3ac;
        }
    }
    ctx->pc = 0x1CA37Cu;
label_1ca37c:
    // 0x1ca37c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca380: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA380u;
    SET_GPR_U32(ctx, 31, 0x1CA388u);
    ctx->pc = 0x1CA384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA380u;
    // 0x1ca384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA380u, 0x1CA388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA388u;
label_1ca388:
    // 0x1ca388: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA388u;
    SET_GPR_U32(ctx, 31, 0x1CA390u);
    ctx->pc = 0x1CA38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA388u;
    // 0x1ca38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA388u, 0x1CA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA390u;
label_1ca390:
    // 0x1ca390: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca398: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA398u;
    SET_GPR_U32(ctx, 31, 0x1CA3A0u);
    ctx->pc = 0x1CA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA398u;
    // 0x1ca39c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA398u, 0x1CA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3A0u;
label_1ca3a0:
    // 0x1ca3a0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA3A0u;
    SET_GPR_U32(ctx, 31, 0x1CA3A8u);
    ctx->pc = 0x1CA3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3A0u;
    // 0x1ca3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA3A0u, 0x1CA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3A8u;
label_1ca3a8:
    // 0x1ca3a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca3ac:
    // 0x1ca3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3B4u;
        // 0x1ca3b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3BCu;
}

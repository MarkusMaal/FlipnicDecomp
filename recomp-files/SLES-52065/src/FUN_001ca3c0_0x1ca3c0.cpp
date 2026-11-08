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

// Function: FUN_001ca3c0
// Address: 0x1ca3c0 - 0x1ca43c
void FUN_001ca3c0_0x1ca3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca3c0_0x1ca3c0");
#endif

    switch (ctx->pc) {
        case 0x1ca3ecu: goto label_1ca3ec;
        case 0x1ca3f4u: goto label_1ca3f4;
        case 0x1ca408u: goto label_1ca408;
        case 0x1ca410u: goto label_1ca410;
        case 0x1ca420u: goto label_1ca420;
        case 0x1ca428u: goto label_1ca428;
        default: break;
    }

    ctx->pc = 0x1ca3c0u;

    // 0x1ca3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca3d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1ca3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1ca3d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3d8: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA3D8u;
    {
        const bool branch_taken_0x1ca3d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3D8u;
        // 0x1ca3dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3d8) {
            ctx->pc = 0x1CA3FCu;
            goto label_1ca3fc;
        }
    }
    ctx->pc = 0x1CA3E0u;
    // 0x1ca3e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca3e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA3E4u;
    SET_GPR_U32(ctx, 31, 0x1CA3ECu);
    ctx->pc = 0x1CA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3E4u;
    // 0x1ca3e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA3E4u, 0x1CA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3ECu;
label_1ca3ec:
    // 0x1ca3ec: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA3ECu;
    SET_GPR_U32(ctx, 31, 0x1CA3F4u);
    ctx->pc = 0x1CA3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3ECu;
    // 0x1ca3f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA3ECu, 0x1CA3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3F4u;
label_1ca3f4:
    // 0x1ca3f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CA3F4u;
    {
        const bool branch_taken_0x1ca3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3F4u;
        // 0x1ca3f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3f4) {
            ctx->pc = 0x1CA42Cu;
            goto label_1ca42c;
        }
    }
    ctx->pc = 0x1CA3FCu;
label_1ca3fc:
    // 0x1ca3fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca400: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA400u;
    SET_GPR_U32(ctx, 31, 0x1CA408u);
    ctx->pc = 0x1CA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA400u;
    // 0x1ca404: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA400u, 0x1CA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA408u;
label_1ca408:
    // 0x1ca408: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA408u;
    SET_GPR_U32(ctx, 31, 0x1CA410u);
    ctx->pc = 0x1CA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA408u;
    // 0x1ca40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA408u, 0x1CA410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA410u;
label_1ca410:
    // 0x1ca410: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca418: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA418u;
    SET_GPR_U32(ctx, 31, 0x1CA420u);
    ctx->pc = 0x1CA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA418u;
    // 0x1ca41c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA418u, 0x1CA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA420u;
label_1ca420:
    // 0x1ca420: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA420u;
    SET_GPR_U32(ctx, 31, 0x1CA428u);
    ctx->pc = 0x1CA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA420u;
    // 0x1ca424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA420u, 0x1CA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA428u;
label_1ca428:
    // 0x1ca428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca42c:
    // 0x1ca42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca434: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA434u;
        // 0x1ca438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA43Cu;
}

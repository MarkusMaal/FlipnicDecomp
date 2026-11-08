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

// Function: FUN_0016f7e0
// Address: 0x16f7e0 - 0x16f884
void FUN_0016f7e0_0x16f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f7e0_0x16f7e0");
#endif

    switch (ctx->pc) {
        case 0x16f810u: goto label_16f810;
        case 0x16f818u: goto label_16f818;
        case 0x16f834u: goto label_16f834;
        case 0x16f83cu: goto label_16f83c;
        case 0x16f844u: goto label_16f844;
        case 0x16f86cu: goto label_16f86c;
        default: break;
    }

    ctx->pc = 0x16f7e0u;

    // 0x16f7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16f7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7f4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16F7F4u;
    {
        const bool branch_taken_0x16f7f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7F4u;
        // 0x16f7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7f4) {
            ctx->pc = 0x16F86Cu;
            goto label_16f86c;
        }
    }
    ctx->pc = 0x16F7FCu;
    // 0x16f7fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16f800: 0x2442a9d0  addiu       $v0, $v0, -0x5630
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x16f804: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16f804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x16f808: 0xc04018c  jal         func_100630
    ctx->pc = 0x16F808u;
    SET_GPR_U32(ctx, 31, 0x16F810u);
    ctx->pc = 0x16F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F808u;
    // 0x16f80c: 0x8e240244  lw          $a0, 0x244($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x16F808u, 0x16F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F810u;
label_16f810:
    // 0x16f810: 0xc04018c  jal         func_100630
    ctx->pc = 0x16F810u;
    SET_GPR_U32(ctx, 31, 0x16F818u);
    ctx->pc = 0x16F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F810u;
    // 0x16f814: 0x8e240248  lw          $a0, 0x248($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x16F810u, 0x16F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F818u;
label_16f818:
    // 0x16f818: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x16F818u;
    {
        const bool branch_taken_0x16f818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F818u;
        // 0x16f81c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f818) {
            ctx->pc = 0x16F858u;
            goto label_16f858;
        }
    }
    ctx->pc = 0x16F820u;
    // 0x16f820: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16f824: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x16f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x16f828: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16f828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x16f82c: 0xc04018c  jal         func_100630
    ctx->pc = 0x16F82Cu;
    SET_GPR_U32(ctx, 31, 0x16F834u);
    ctx->pc = 0x16F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F82Cu;
    // 0x16f830: 0x8e24021c  lw          $a0, 0x21C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x16F82Cu, 0x16F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F834u;
label_16f834:
    // 0x16f834: 0xc04018c  jal         func_100630
    ctx->pc = 0x16F834u;
    SET_GPR_U32(ctx, 31, 0x16F83Cu);
    ctx->pc = 0x16F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F834u;
    // 0x16f838: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x16F834u, 0x16F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F83Cu;
label_16f83c:
    // 0x16f83c: 0xc04018c  jal         func_100630
    ctx->pc = 0x16F83Cu;
    SET_GPR_U32(ctx, 31, 0x16F844u);
    ctx->pc = 0x16F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F83Cu;
    // 0x16f840: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x16F83Cu, 0x16F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F844u;
label_16f844:
    // 0x16f844: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F844u;
    {
        const bool branch_taken_0x16f844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F844u;
        // 0x16f848: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f844) {
            ctx->pc = 0x16F854u;
            goto label_16f854;
        }
    }
    ctx->pc = 0x16F84Cu;
    // 0x16f84c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x16f850: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16f850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_16f854:
    // 0x16f854: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_16f858:
    // 0x16f858: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16f858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16f85c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F85Cu;
    {
        const bool branch_taken_0x16f85c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F85Cu;
        // 0x16f860: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f85c) {
            ctx->pc = 0x16F870u;
            goto label_16f870;
        }
    }
    ctx->pc = 0x16F864u;
    // 0x16f864: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16F864u;
    SET_GPR_U32(ctx, 31, 0x16F86Cu);
    ctx->pc = 0x16F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F864u;
    // 0x16f868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16F864u, 0x16F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F86Cu;
label_16f86c:
    // 0x16f86c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16f86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f870:
    // 0x16f870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16f870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f87c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F87Cu;
        // 0x16f880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F884u;
}

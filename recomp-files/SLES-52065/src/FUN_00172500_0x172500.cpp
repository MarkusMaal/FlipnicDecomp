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

// Function: FUN_00172500
// Address: 0x172500 - 0x172574
void FUN_00172500_0x172500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172500_0x172500");
#endif

    switch (ctx->pc) {
        case 0x17253cu: goto label_17253c;
        case 0x17255cu: goto label_17255c;
        default: break;
    }

    ctx->pc = 0x172500u;

    // 0x172500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17250c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172514: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x172514u;
    {
        const bool branch_taken_0x172514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x172518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172514u;
        // 0x172518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172514) {
            ctx->pc = 0x17255Cu;
            goto label_17255c;
        }
    }
    ctx->pc = 0x17251Cu;
    // 0x17251c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17251cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172520: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172524: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x172524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x172528: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x172528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17252c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17252Cu;
    {
        const bool branch_taken_0x17252c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17252Cu;
        // 0x172530: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17252c) {
            ctx->pc = 0x172548u;
            goto label_172548;
        }
    }
    ctx->pc = 0x172534u;
    // 0x172534: 0xc04018c  jal         func_100630
    ctx->pc = 0x172534u;
    SET_GPR_U32(ctx, 31, 0x17253Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172534u, 0x17253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17253Cu;
label_17253c:
    // 0x17253c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x172540: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x172540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x172544: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x172544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_172548:
    // 0x172548: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x172548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17254c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17254Cu;
    {
        const bool branch_taken_0x17254c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17254Cu;
        // 0x172550: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17254c) {
            ctx->pc = 0x172560u;
            goto label_172560;
        }
    }
    ctx->pc = 0x172554u;
    // 0x172554: 0xc0401a4  jal         func_100690
    ctx->pc = 0x172554u;
    SET_GPR_U32(ctx, 31, 0x17255Cu);
    ctx->pc = 0x172558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172554u;
    // 0x172558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x172554u, 0x17255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17255Cu;
label_17255c:
    // 0x17255c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17255cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172560:
    // 0x172560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17256c: 0x3e00008  jr          $ra
    ctx->pc = 0x17256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17256Cu;
        // 0x172570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172574u;
}

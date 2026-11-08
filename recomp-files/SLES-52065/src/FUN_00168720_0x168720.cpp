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

// Function: FUN_00168720
// Address: 0x168720 - 0x168778
void FUN_00168720_0x168720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168720_0x168720");
#endif

    switch (ctx->pc) {
        case 0x168720u: goto label_168720;
        case 0x168724u: goto label_168724;
        case 0x168728u: goto label_168728;
        case 0x16872cu: goto label_16872c;
        case 0x168730u: goto label_168730;
        case 0x168734u: goto label_168734;
        case 0x168738u: goto label_168738;
        case 0x16873cu: goto label_16873c;
        case 0x168740u: goto label_168740;
        case 0x168744u: goto label_168744;
        case 0x168748u: goto label_168748;
        case 0x16874cu: goto label_16874c;
        case 0x168750u: goto label_168750;
        case 0x168754u: goto label_168754;
        case 0x168758u: goto label_168758;
        case 0x16875cu: goto label_16875c;
        case 0x168760u: goto label_168760;
        case 0x168764u: goto label_168764;
        case 0x168768u: goto label_168768;
        case 0x16876cu: goto label_16876c;
        case 0x168770u: goto label_168770;
        case 0x168774u: goto label_168774;
        default: break;
    }

    ctx->pc = 0x168720u;

label_168720:
    // 0x168720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_168724:
    // 0x168724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_168728:
    // 0x168728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16872c:
    // 0x16872c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168730:
    // 0x168730: 0x8c900220  lw          $s0, 0x220($a0)
    ctx->pc = 0x168730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_168734:
    // 0x168734: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_168738:
    if (ctx->pc == 0x168738u) {
        ctx->pc = 0x168738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168734u;
        // 0x168738: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16873Cu;
        goto label_16873c;
    }
    ctx->pc = 0x168734u;
    {
        const bool branch_taken_0x168734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x168738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168734u;
        // 0x168738: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168734) {
            ctx->pc = 0x168744u;
            goto label_168744;
        }
    }
    ctx->pc = 0x16873Cu;
label_16873c:
    // 0x16873c: 0x10000009  b           . + 4 + (0x9 << 2)
label_168740:
    if (ctx->pc == 0x168740u) {
        ctx->pc = 0x168740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16873Cu;
        // 0x168740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168744u;
        goto label_168744;
    }
    ctx->pc = 0x16873Cu;
    {
        const bool branch_taken_0x16873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16873Cu;
        // 0x168740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16873c) {
            ctx->pc = 0x168764u;
            goto label_168764;
        }
    }
    ctx->pc = 0x168744u;
label_168744:
    // 0x168744: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_168748:
    // 0x168748: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x168748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16874c:
    // 0x16874c: 0x320f809  jalr        $t9
label_168750:
    if (ctx->pc == 0x168750u) {
        ctx->pc = 0x168754u;
        goto label_168754;
    }
    ctx->pc = 0x16874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16874Cu, 0x168754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x168754u;
label_168754:
    // 0x168754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168758:
    // 0x168758: 0xc0564c8  jal         func_159320
label_16875c:
    if (ctx->pc == 0x16875Cu) {
        ctx->pc = 0x16875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168758u;
        // 0x16875c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168760u;
        goto label_168760;
    }
    ctx->pc = 0x168758u;
    SET_GPR_U32(ctx, 31, 0x168760u);
    ctx->pc = 0x16875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168758u;
    // 0x16875c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x168758u, 0x168760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168760u;
label_168760:
    // 0x168760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168764:
    // 0x168764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_168768:
    // 0x168768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16876c:
    // 0x16876c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16876cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168770:
    // 0x168770: 0x3e00008  jr          $ra
label_168774:
    if (ctx->pc == 0x168774u) {
        ctx->pc = 0x168774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168770u;
        // 0x168774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168778u;
        goto label_fallthrough_0x168770;
    }
    ctx->pc = 0x168770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168770u;
        // 0x168774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x168770:
    ctx->pc = 0x168778u;
}

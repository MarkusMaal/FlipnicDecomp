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

// Function: FUN_0014e810
// Address: 0x14e810 - 0x14e89c
void FUN_0014e810_0x14e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014e810_0x14e810");
#endif

    switch (ctx->pc) {
        case 0x14e84cu: goto label_14e84c;
        case 0x14e86cu: goto label_14e86c;
        default: break;
    }

    ctx->pc = 0x14e810u;

    // 0x14e810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14e814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14e818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e81c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e820: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e828: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x14e828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14e82c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x14e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e830: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e83c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x14e83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14e840: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e844: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14E844u;
    {
        const bool branch_taken_0x14e844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e844) {
            ctx->pc = 0x14E87Cu;
            goto label_14e87c;
        }
    }
    ctx->pc = 0x14E84Cu;
label_14e84c:
    // 0x14e84c: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x14e84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x14e850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e854: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E854u;
    {
        const bool branch_taken_0x14e854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e854) {
            ctx->pc = 0x14E86Cu;
            goto label_14e86c;
        }
    }
    ctx->pc = 0x14E85Cu;
    // 0x14e85c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E85Cu;
    {
        const bool branch_taken_0x14e85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E85Cu;
        // 0x14e860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e85c) {
            ctx->pc = 0x14E86Cu;
            goto label_14e86c;
        }
    }
    ctx->pc = 0x14E864u;
    // 0x14e864: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14E864u;
    SET_GPR_U32(ctx, 31, 0x14E86Cu);
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14E864u, 0x14E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E86Cu;
label_14e86c:
    // 0x14e86c: 0x0  nop
    ctx->pc = 0x14e86cu;
    // NOP
    // 0x14e870: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e874: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14E874u;
    {
        const bool branch_taken_0x14e874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e874) {
            ctx->pc = 0x14E84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e84c;
        }
    }
    ctx->pc = 0x14E87Cu;
label_14e87c:
    // 0x14e87c: 0x0  nop
    ctx->pc = 0x14e87cu;
    // NOP
    // 0x14e880: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x14e880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x14e884: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e894: 0x3e00008  jr          $ra
    ctx->pc = 0x14E894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E894u;
        // 0x14e898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E89Cu;
}

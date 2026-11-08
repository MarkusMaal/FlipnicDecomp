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

// Function: FUN_001b7760
// Address: 0x1b7760 - 0x1b780c
void FUN_001b7760_0x1b7760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7760_0x1b7760");
#endif

    switch (ctx->pc) {
        case 0x1b7788u: goto label_1b7788;
        case 0x1b779cu: goto label_1b779c;
        case 0x1b77a8u: goto label_1b77a8;
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77b8u: goto label_1b77b8;
        case 0x1b77c0u: goto label_1b77c0;
        default: break;
    }

    ctx->pc = 0x1b7760u;

    // 0x1b7760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7764: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b7764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b7768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b776c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7774: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b777c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b777cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7780: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B7780u;
    {
        const bool branch_taken_0x1b7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7780u;
        // 0x1b7784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7780) {
            ctx->pc = 0x1B77D4u;
            goto label_1b77d4;
        }
    }
    ctx->pc = 0x1B7788u;
label_1b7788:
    // 0x1b7788: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1b778c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7790: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7794: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7794u;
    SET_GPR_U32(ctx, 31, 0x1B779Cu);
    ctx->pc = 0x1B7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7794u;
    // 0x1b7798: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7794u, 0x1B779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B779Cu;
label_1b779c:
    // 0x1b779c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b77a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B77A0u;
    {
        const bool branch_taken_0x1b77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77A0u;
        // 0x1b77a4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77a0) {
            ctx->pc = 0x1B77B8u;
            goto label_1b77b8;
        }
    }
    ctx->pc = 0x1B77A8u;
label_1b77a8:
    // 0x1b77a8: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1B77A8u;
    SET_GPR_U32(ctx, 31, 0x1B77B0u);
    ctx->pc = 0x1B77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77A8u;
    // 0x1b77ac: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1B77A8u, 0x1B77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77B0u;
label_1b77b0:
    // 0x1b77b0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B77B0u;
    SET_GPR_U32(ctx, 31, 0x1B77B8u);
    ctx->pc = 0x1B77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77B0u;
    // 0x1b77b4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B77B0u, 0x1B77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77B8u;
label_1b77b8:
    // 0x1b77b8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B77B8u;
    SET_GPR_U32(ctx, 31, 0x1B77C0u);
    ctx->pc = 0x1B77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77B8u;
    // 0x1b77bc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B77B8u, 0x1B77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77C0u;
label_1b77c0:
    // 0x1b77c0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b77c4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B77C4u;
    {
        const bool branch_taken_0x1b77c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b77c4) {
            ctx->pc = 0x1B77A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b77a8;
        }
    }
    ctx->pc = 0x1B77CCu;
    // 0x1b77cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b77ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b77d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b77d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b77d4:
    // 0x1b77d4: 0x0  nop
    ctx->pc = 0x1b77d4u;
    // NOP
    // 0x1b77d8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1b77dc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b77e0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B77E0u;
    {
        const bool branch_taken_0x1b77e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77E0u;
        // 0x1b77e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77e0) {
            ctx->pc = 0x1B7788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7788;
        }
    }
    ctx->pc = 0x1B77E8u;
    // 0x1b77e8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b77ec: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1b77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1b77f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b77f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b77f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b77f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b77f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b77fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b77fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7804: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7804u;
        // 0x1b7808: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B780Cu;
}

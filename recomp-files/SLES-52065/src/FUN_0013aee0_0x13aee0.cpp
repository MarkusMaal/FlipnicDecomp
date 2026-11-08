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

// Function: FUN_0013aee0
// Address: 0x13aee0 - 0x13afac
void FUN_0013aee0_0x13aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013aee0_0x13aee0");
#endif

    switch (ctx->pc) {
        case 0x13af04u: goto label_13af04;
        case 0x13af2cu: goto label_13af2c;
        case 0x13af4cu: goto label_13af4c;
        case 0x13af84u: goto label_13af84;
        case 0x13af8cu: goto label_13af8c;
        default: break;
    }

    ctx->pc = 0x13aee0u;

    // 0x13aee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13aee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13aee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13aeec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13aef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13aef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aef4: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x13aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x13aef8: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x13aef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13aefc: 0xc04ebec  jal         func_13AFB0
    ctx->pc = 0x13AEFCu;
    SET_GPR_U32(ctx, 31, 0x13AF04u);
    ctx->pc = 0x13AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEFCu;
    // 0x13af00: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AFB0u, 0x13AEFCu, 0x13AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF04u;
label_13af04:
    // 0x13af04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13af08: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13af0c: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x13AF0Cu;
    {
        const bool branch_taken_0x13af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13af0c) {
            ctx->pc = 0x13AF78u;
            goto label_13af78;
        }
    }
    ctx->pc = 0x13AF14u;
    // 0x13af14: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13af18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13af1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13AF1Cu;
    {
        const bool branch_taken_0x13af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF1Cu;
        // 0x13af20: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af1c) {
            ctx->pc = 0x13AF50u;
            goto label_13af50;
        }
    }
    ctx->pc = 0x13AF24u;
    // 0x13af24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13AF24u;
    {
        const bool branch_taken_0x13af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af24) {
            ctx->pc = 0x13AF30u;
            goto label_13af30;
        }
    }
    ctx->pc = 0x13AF2Cu;
label_13af2c:
    // 0x13af2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13af2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13af30:
    // 0x13af30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13af34: 0x0  nop
    ctx->pc = 0x13af34u;
    // NOP
    // 0x13af38: 0x0  nop
    ctx->pc = 0x13af38u;
    // NOP
    // 0x13af3c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13AF3Cu;
    {
        const bool branch_taken_0x13af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af3c) {
            ctx->pc = 0x13AF2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13af2c;
        }
    }
    ctx->pc = 0x13AF44u;
    // 0x13af44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13AF44u;
    {
        const bool branch_taken_0x13af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF44u;
        // 0x13af48: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af44) {
            ctx->pc = 0x13AF70u;
            goto label_13af70;
        }
    }
    ctx->pc = 0x13AF4Cu;
label_13af4c:
    // 0x13af4c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x13af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_13af50:
    // 0x13af50: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x13af50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13af54: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13af58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x13af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13af5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13af60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13af64: 0x14a2fff9  bne         $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13AF64u;
    {
        const bool branch_taken_0x13af64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13af64) {
            ctx->pc = 0x13AF4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13af4c;
        }
    }
    ctx->pc = 0x13AF6Cu;
    // 0x13af6c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x13af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_13af70:
    // 0x13af70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13af74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13af74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_13af78:
    // 0x13af78: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13af78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13af7c: 0xc048bfc  jal         func_122FF0
    ctx->pc = 0x13AF7Cu;
    SET_GPR_U32(ctx, 31, 0x13AF84u);
    ctx->pc = 0x13AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF7Cu;
    // 0x13af80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FF0u, 0x13AF7Cu, 0x13AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF84u;
label_13af84:
    // 0x13af84: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13AF84u;
    SET_GPR_U32(ctx, 31, 0x13AF8Cu);
    ctx->pc = 0x13AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF84u;
    // 0x13af88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13AF84u, 0x13AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF8Cu;
label_13af8c:
    // 0x13af8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13af90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13af94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x13af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x13af98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13af98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13af9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13af9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13afa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13afa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13afa4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFA4u;
        // 0x13afa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AFACu;
}

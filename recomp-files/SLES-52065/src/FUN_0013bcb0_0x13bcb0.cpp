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

// Function: FUN_0013bcb0
// Address: 0x13bcb0 - 0x13bd7c
void FUN_0013bcb0_0x13bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013bcb0_0x13bcb0");
#endif

    switch (ctx->pc) {
        case 0x13bcd4u: goto label_13bcd4;
        case 0x13bcfcu: goto label_13bcfc;
        case 0x13bd1cu: goto label_13bd1c;
        case 0x13bd54u: goto label_13bd54;
        case 0x13bd5cu: goto label_13bd5c;
        default: break;
    }

    ctx->pc = 0x13bcb0u;

    // 0x13bcb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13bcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bcbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bcc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcc4: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x13bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x13bcc8: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x13bcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13bccc: 0xc04ef60  jal         func_13BD80
    ctx->pc = 0x13BCCCu;
    SET_GPR_U32(ctx, 31, 0x13BCD4u);
    ctx->pc = 0x13BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCCCu;
    // 0x13bcd0: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BD80u, 0x13BCCCu, 0x13BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCD4u;
label_13bcd4:
    // 0x13bcd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bcd8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13bcdc: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x13BCDCu;
    {
        const bool branch_taken_0x13bcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13bcdc) {
            ctx->pc = 0x13BD48u;
            goto label_13bd48;
        }
    }
    ctx->pc = 0x13BCE4u;
    // 0x13bce4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13bce8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13bcec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13BCECu;
    {
        const bool branch_taken_0x13bcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCECu;
        // 0x13bcf0: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcec) {
            ctx->pc = 0x13BD20u;
            goto label_13bd20;
        }
    }
    ctx->pc = 0x13BCF4u;
    // 0x13bcf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BCF4u;
    {
        const bool branch_taken_0x13bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcf4) {
            ctx->pc = 0x13BD00u;
            goto label_13bd00;
        }
    }
    ctx->pc = 0x13BCFCu;
label_13bcfc:
    // 0x13bcfc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13bd00:
    // 0x13bd00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bd04: 0x0  nop
    ctx->pc = 0x13bd04u;
    // NOP
    // 0x13bd08: 0x0  nop
    ctx->pc = 0x13bd08u;
    // NOP
    // 0x13bd0c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13BD0Cu;
    {
        const bool branch_taken_0x13bd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd0c) {
            ctx->pc = 0x13BCFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bcfc;
        }
    }
    ctx->pc = 0x13BD14u;
    // 0x13bd14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13BD14u;
    {
        const bool branch_taken_0x13bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD14u;
        // 0x13bd18: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd14) {
            ctx->pc = 0x13BD40u;
            goto label_13bd40;
        }
    }
    ctx->pc = 0x13BD1Cu;
label_13bd1c:
    // 0x13bd1c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x13bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_13bd20:
    // 0x13bd20: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x13bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13bd24: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13bd28: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x13bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13bd2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bd30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bd34: 0x14a2fff9  bne         $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13BD34u;
    {
        const bool branch_taken_0x13bd34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13bd34) {
            ctx->pc = 0x13BD1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bd1c;
        }
    }
    ctx->pc = 0x13BD3Cu;
    // 0x13bd3c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x13bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_13bd40:
    // 0x13bd40: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13bd44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_13bd48:
    // 0x13bd48: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13bd4c: 0xc048bfc  jal         func_122FF0
    ctx->pc = 0x13BD4Cu;
    SET_GPR_U32(ctx, 31, 0x13BD54u);
    ctx->pc = 0x13BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD4Cu;
    // 0x13bd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FF0u, 0x13BD4Cu, 0x13BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD54u;
label_13bd54:
    // 0x13bd54: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13BD54u;
    SET_GPR_U32(ctx, 31, 0x13BD5Cu);
    ctx->pc = 0x13BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD54u;
    // 0x13bd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13BD54u, 0x13BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD5Cu;
label_13bd5c:
    // 0x13bd5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bd60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13bd64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x13bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x13bd68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13bd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bd70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bd74: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD74u;
        // 0x13bd78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD7Cu;
}

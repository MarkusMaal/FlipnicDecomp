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

// Function: FUN_0017efb0
// Address: 0x17efb0 - 0x17f06c
void FUN_0017efb0_0x17efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017efb0_0x17efb0");
#endif

    switch (ctx->pc) {
        case 0x17efb0u: goto label_17efb0;
        case 0x17efb4u: goto label_17efb4;
        case 0x17efb8u: goto label_17efb8;
        case 0x17efbcu: goto label_17efbc;
        case 0x17efc0u: goto label_17efc0;
        case 0x17efc4u: goto label_17efc4;
        case 0x17efc8u: goto label_17efc8;
        case 0x17efccu: goto label_17efcc;
        case 0x17efd0u: goto label_17efd0;
        case 0x17efd4u: goto label_17efd4;
        case 0x17efd8u: goto label_17efd8;
        case 0x17efdcu: goto label_17efdc;
        case 0x17efe0u: goto label_17efe0;
        case 0x17efe4u: goto label_17efe4;
        case 0x17efe8u: goto label_17efe8;
        case 0x17efecu: goto label_17efec;
        case 0x17eff0u: goto label_17eff0;
        case 0x17eff4u: goto label_17eff4;
        case 0x17eff8u: goto label_17eff8;
        case 0x17effcu: goto label_17effc;
        case 0x17f000u: goto label_17f000;
        case 0x17f004u: goto label_17f004;
        case 0x17f008u: goto label_17f008;
        case 0x17f00cu: goto label_17f00c;
        case 0x17f010u: goto label_17f010;
        case 0x17f014u: goto label_17f014;
        case 0x17f018u: goto label_17f018;
        case 0x17f01cu: goto label_17f01c;
        case 0x17f020u: goto label_17f020;
        case 0x17f024u: goto label_17f024;
        case 0x17f028u: goto label_17f028;
        case 0x17f02cu: goto label_17f02c;
        case 0x17f030u: goto label_17f030;
        case 0x17f034u: goto label_17f034;
        case 0x17f038u: goto label_17f038;
        case 0x17f03cu: goto label_17f03c;
        case 0x17f040u: goto label_17f040;
        case 0x17f044u: goto label_17f044;
        case 0x17f048u: goto label_17f048;
        case 0x17f04cu: goto label_17f04c;
        case 0x17f050u: goto label_17f050;
        case 0x17f054u: goto label_17f054;
        case 0x17f058u: goto label_17f058;
        case 0x17f05cu: goto label_17f05c;
        case 0x17f060u: goto label_17f060;
        case 0x17f064u: goto label_17f064;
        case 0x17f068u: goto label_17f068;
        default: break;
    }

    ctx->pc = 0x17efb0u;

label_17efb0:
    // 0x17efb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17efb4:
    // 0x17efb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17efb8:
    // 0x17efb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17efbc:
    // 0x17efbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17efc0:
    // 0x17efc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17efc4:
    // 0x17efc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17efc8:
    // 0x17efc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17efcc:
    // 0x17efcc: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x17efccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17efd0:
    // 0x17efd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17efd4:
    // 0x17efd4: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x17efd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_17efd8:
    // 0x17efd8: 0x1251001c  beq         $s2, $s1, . + 4 + (0x1C << 2)
label_17efdc:
    if (ctx->pc == 0x17EFDCu) {
        ctx->pc = 0x17EFE0u;
        goto label_17efe0;
    }
    ctx->pc = 0x17EFD8u;
    {
        const bool branch_taken_0x17efd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x17efd8) {
            ctx->pc = 0x17F04Cu;
            goto label_17f04c;
        }
    }
    ctx->pc = 0x17EFE0u;
label_17efe0:
    // 0x17efe0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x17efe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17efe4:
    // 0x17efe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17efe8:
    // 0x17efe8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x17efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_17efec:
    // 0x17efec: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x17efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_17eff0:
    // 0x17eff0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17eff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17eff4:
    // 0x17eff4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17eff8:
    if (ctx->pc == 0x17EFF8u) {
        ctx->pc = 0x17EFFCu;
        goto label_17effc;
    }
    ctx->pc = 0x17EFF4u;
    {
        const bool branch_taken_0x17eff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eff4) {
            ctx->pc = 0x17F004u;
            goto label_17f004;
        }
    }
    ctx->pc = 0x17EFFCu;
label_17effc:
    // 0x17effc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x17effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_17f000:
    // 0x17f000: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17f000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17f004:
    // 0x17f004: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17f008:
    // 0x17f008: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f00c:
    if (ctx->pc == 0x17F00Cu) {
        ctx->pc = 0x17F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F008u;
        // 0x17f00c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F010u;
        goto label_17f010;
    }
    ctx->pc = 0x17F008u;
    {
        const bool branch_taken_0x17f008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F008u;
        // 0x17f00c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f008) {
            ctx->pc = 0x17F020u;
            goto label_17f020;
        }
    }
    ctx->pc = 0x17F010u;
label_17f010:
    // 0x17f010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f014:
    // 0x17f014: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f018:
    // 0x17f018: 0x320f809  jalr        $t9
label_17f01c:
    if (ctx->pc == 0x17F01Cu) {
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F018u;
        // 0x17f01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F020u;
        goto label_17f020;
    }
    ctx->pc = 0x17F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F020u);
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F018u;
        // 0x17f01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F018u, 0x17F020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F020u;
label_17f020:
    // 0x17f020: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f024:
    // 0x17f024: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f028:
    if (ctx->pc == 0x17F028u) {
        ctx->pc = 0x17F02Cu;
        goto label_17f02c;
    }
    ctx->pc = 0x17F024u;
    {
        const bool branch_taken_0x17f024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f024) {
            ctx->pc = 0x17F03Cu;
            goto label_17f03c;
        }
    }
    ctx->pc = 0x17F02Cu;
label_17f02c:
    // 0x17f02c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f030:
    // 0x17f030: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f034:
    // 0x17f034: 0x320f809  jalr        $t9
label_17f038:
    if (ctx->pc == 0x17F038u) {
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F03Cu;
        goto label_17f03c;
    }
    ctx->pc = 0x17F034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F03Cu);
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F034u, 0x17F03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F03Cu;
label_17f03c:
    // 0x17f03c: 0x0  nop
    ctx->pc = 0x17f03cu;
    // NOP
label_17f040:
    // 0x17f040: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17f040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_17f044:
    // 0x17f044: 0x1651ffe6  bne         $s2, $s1, . + 4 + (-0x1A << 2)
label_17f048:
    if (ctx->pc == 0x17F048u) {
        ctx->pc = 0x17F04Cu;
        goto label_17f04c;
    }
    ctx->pc = 0x17F044u;
    {
        const bool branch_taken_0x17f044 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x17f044) {
            ctx->pc = 0x17EFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17efe0;
        }
    }
    ctx->pc = 0x17F04Cu;
label_17f04c:
    // 0x17f04c: 0x0  nop
    ctx->pc = 0x17f04cu;
    // NOP
label_17f050:
    // 0x17f050: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17f054:
    // 0x17f054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f058:
    // 0x17f058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f05c:
    // 0x17f05c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f060:
    // 0x17f060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17f064:
    // 0x17f064: 0x3e00008  jr          $ra
label_17f068:
    if (ctx->pc == 0x17F068u) {
        ctx->pc = 0x17F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F064u;
        // 0x17f068: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F06Cu;
        goto label_fallthrough_0x17f064;
    }
    ctx->pc = 0x17F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F064u;
        // 0x17f068: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17f064:
    ctx->pc = 0x17F06Cu;
}

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

// Function: FUN_0017f070
// Address: 0x17f070 - 0x17f12c
void FUN_0017f070_0x17f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f070_0x17f070");
#endif

    switch (ctx->pc) {
        case 0x17f070u: goto label_17f070;
        case 0x17f074u: goto label_17f074;
        case 0x17f078u: goto label_17f078;
        case 0x17f07cu: goto label_17f07c;
        case 0x17f080u: goto label_17f080;
        case 0x17f084u: goto label_17f084;
        case 0x17f088u: goto label_17f088;
        case 0x17f08cu: goto label_17f08c;
        case 0x17f090u: goto label_17f090;
        case 0x17f094u: goto label_17f094;
        case 0x17f098u: goto label_17f098;
        case 0x17f09cu: goto label_17f09c;
        case 0x17f0a0u: goto label_17f0a0;
        case 0x17f0a4u: goto label_17f0a4;
        case 0x17f0a8u: goto label_17f0a8;
        case 0x17f0acu: goto label_17f0ac;
        case 0x17f0b0u: goto label_17f0b0;
        case 0x17f0b4u: goto label_17f0b4;
        case 0x17f0b8u: goto label_17f0b8;
        case 0x17f0bcu: goto label_17f0bc;
        case 0x17f0c0u: goto label_17f0c0;
        case 0x17f0c4u: goto label_17f0c4;
        case 0x17f0c8u: goto label_17f0c8;
        case 0x17f0ccu: goto label_17f0cc;
        case 0x17f0d0u: goto label_17f0d0;
        case 0x17f0d4u: goto label_17f0d4;
        case 0x17f0d8u: goto label_17f0d8;
        case 0x17f0dcu: goto label_17f0dc;
        case 0x17f0e0u: goto label_17f0e0;
        case 0x17f0e4u: goto label_17f0e4;
        case 0x17f0e8u: goto label_17f0e8;
        case 0x17f0ecu: goto label_17f0ec;
        case 0x17f0f0u: goto label_17f0f0;
        case 0x17f0f4u: goto label_17f0f4;
        case 0x17f0f8u: goto label_17f0f8;
        case 0x17f0fcu: goto label_17f0fc;
        case 0x17f100u: goto label_17f100;
        case 0x17f104u: goto label_17f104;
        case 0x17f108u: goto label_17f108;
        case 0x17f10cu: goto label_17f10c;
        case 0x17f110u: goto label_17f110;
        case 0x17f114u: goto label_17f114;
        case 0x17f118u: goto label_17f118;
        case 0x17f11cu: goto label_17f11c;
        case 0x17f120u: goto label_17f120;
        case 0x17f124u: goto label_17f124;
        case 0x17f128u: goto label_17f128;
        default: break;
    }

    ctx->pc = 0x17f070u;

label_17f070:
    // 0x17f070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17f074:
    // 0x17f074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17f078:
    // 0x17f078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17f07c:
    // 0x17f07c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17f080:
    // 0x17f080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17f084:
    // 0x17f084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17f088:
    // 0x17f088: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17f08c:
    // 0x17f08c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x17f08cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17f090:
    // 0x17f090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17f094:
    // 0x17f094: 0x2039821  addu        $s3, $s0, $v1
    ctx->pc = 0x17f094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_17f098:
    // 0x17f098: 0x1213001c  beq         $s0, $s3, . + 4 + (0x1C << 2)
label_17f09c:
    if (ctx->pc == 0x17F09Cu) {
        ctx->pc = 0x17F0A0u;
        goto label_17f0a0;
    }
    ctx->pc = 0x17F098u;
    {
        const bool branch_taken_0x17f098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x17f098) {
            ctx->pc = 0x17F10Cu;
            goto label_17f10c;
        }
    }
    ctx->pc = 0x17F0A0u;
label_17f0a0:
    // 0x17f0a0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x17f0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17f0a4:
    // 0x17f0a4: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x17f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_17f0a8:
    // 0x17f0a8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_17f0ac:
    // 0x17f0ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17f0acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17f0b0:
    // 0x17f0b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17f0b4:
    if (ctx->pc == 0x17F0B4u) {
        ctx->pc = 0x17F0B8u;
        goto label_17f0b8;
    }
    ctx->pc = 0x17F0B0u;
    {
        const bool branch_taken_0x17f0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0b0) {
            ctx->pc = 0x17F0C0u;
            goto label_17f0c0;
        }
    }
    ctx->pc = 0x17F0B8u;
label_17f0b8:
    // 0x17f0b8: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x17f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_17f0bc:
    // 0x17f0bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17f0bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17f0c0:
    // 0x17f0c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17f0c4:
    // 0x17f0c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f0c8:
    if (ctx->pc == 0x17F0C8u) {
        ctx->pc = 0x17F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0C4u;
        // 0x17f0c8: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0CCu;
        goto label_17f0cc;
    }
    ctx->pc = 0x17F0C4u;
    {
        const bool branch_taken_0x17f0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0C4u;
        // 0x17f0c8: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c4) {
            ctx->pc = 0x17F0DCu;
            goto label_17f0dc;
        }
    }
    ctx->pc = 0x17F0CCu;
label_17f0cc:
    // 0x17f0cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f0d0:
    // 0x17f0d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f0d4:
    // 0x17f0d4: 0x320f809  jalr        $t9
label_17f0d8:
    if (ctx->pc == 0x17F0D8u) {
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0DCu;
        goto label_17f0dc;
    }
    ctx->pc = 0x17F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F0DCu);
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0D4u, 0x17F0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F0DCu;
label_17f0dc:
    // 0x17f0dc: 0x0  nop
    ctx->pc = 0x17f0dcu;
    // NOP
label_17f0e0:
    // 0x17f0e0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17f0e4:
    // 0x17f0e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f0e8:
    if (ctx->pc == 0x17F0E8u) {
        ctx->pc = 0x17F0ECu;
        goto label_17f0ec;
    }
    ctx->pc = 0x17F0E4u;
    {
        const bool branch_taken_0x17f0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0e4) {
            ctx->pc = 0x17F0FCu;
            goto label_17f0fc;
        }
    }
    ctx->pc = 0x17F0ECu;
label_17f0ec:
    // 0x17f0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f0f0:
    // 0x17f0f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f0f4:
    // 0x17f0f4: 0x320f809  jalr        $t9
label_17f0f8:
    if (ctx->pc == 0x17F0F8u) {
        ctx->pc = 0x17F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0F4u;
        // 0x17f0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F0FCu;
        goto label_17f0fc;
    }
    ctx->pc = 0x17F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F0FCu);
        ctx->pc = 0x17F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0F4u;
        // 0x17f0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0F4u, 0x17F0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F0FCu;
label_17f0fc:
    // 0x17f0fc: 0x0  nop
    ctx->pc = 0x17f0fcu;
    // NOP
label_17f100:
    // 0x17f100: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17f104:
    // 0x17f104: 0x1613ffe6  bne         $s0, $s3, . + 4 + (-0x1A << 2)
label_17f108:
    if (ctx->pc == 0x17F108u) {
        ctx->pc = 0x17F10Cu;
        goto label_17f10c;
    }
    ctx->pc = 0x17F104u;
    {
        const bool branch_taken_0x17f104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x17f104) {
            ctx->pc = 0x17F0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f0a0;
        }
    }
    ctx->pc = 0x17F10Cu;
label_17f10c:
    // 0x17f10c: 0x0  nop
    ctx->pc = 0x17f10cu;
    // NOP
label_17f110:
    // 0x17f110: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17f114:
    // 0x17f114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f118:
    // 0x17f118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f11c:
    // 0x17f11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f120:
    // 0x17f120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17f124:
    // 0x17f124: 0x3e00008  jr          $ra
label_17f128:
    if (ctx->pc == 0x17F128u) {
        ctx->pc = 0x17F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F124u;
        // 0x17f128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F12Cu;
        goto label_fallthrough_0x17f124;
    }
    ctx->pc = 0x17F124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F124u;
        // 0x17f128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17f124:
    ctx->pc = 0x17F12Cu;
}

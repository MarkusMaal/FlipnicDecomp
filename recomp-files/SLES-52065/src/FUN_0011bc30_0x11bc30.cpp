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

// Function: FUN_0011bc30
// Address: 0x11bc30 - 0x11bd34
void FUN_0011bc30_0x11bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011bc30_0x11bc30");
#endif

    switch (ctx->pc) {
        case 0x11bc58u: goto label_11bc58;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc98u: goto label_11bc98;
        case 0x11bcacu: goto label_11bcac;
        case 0x11bcd4u: goto label_11bcd4;
        case 0x11bce4u: goto label_11bce4;
        case 0x11bcecu: goto label_11bcec;
        case 0x11bd04u: goto label_11bd04;
        default: break;
    }

    ctx->pc = 0x11bc30u;

    // 0x11bc30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11bc34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11bc38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11bc3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11bc40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11bc40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11bc48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11bc48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11bc50: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x11bc50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bc54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11bc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bc58:
    // 0x11bc58: 0x8e620524  lw          $v0, 0x524($s3)
    ctx->pc = 0x11bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11bc5c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11bc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11bc60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc64: 0x24c6e770  addiu       $a2, $a2, -0x1890
    ctx->pc = 0x11bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961008));
    // 0x11bc68: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11BC68u;
    SET_GPR_U32(ctx, 31, 0x11BC70u);
    ctx->pc = 0x11BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC68u;
    // 0x11bc6c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11BC68u, 0x11BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bc74: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BC74u;
    {
        const bool branch_taken_0x11bc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bc74) {
            ctx->pc = 0x11BC84u;
            goto label_11bc84;
        }
    }
    ctx->pc = 0x11BC7Cu;
    // 0x11bc7c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11BC7Cu;
    {
        const bool branch_taken_0x11bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC7Cu;
        // 0x11bc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc7c) {
            ctx->pc = 0x11BD18u;
            goto label_11bd18;
        }
    }
    ctx->pc = 0x11BC84u;
label_11bc84:
    // 0x11bc84: 0x8e620524  lw          $v0, 0x524($s3)
    ctx->pc = 0x11bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11bc88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11bc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc90: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11BC90u;
    SET_GPR_U32(ctx, 31, 0x11BC98u);
    ctx->pc = 0x11BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC90u;
    // 0x11bc94: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11BC90u, 0x11BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC98u;
label_11bc98:
    // 0x11bc98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bc9c: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x11BC9Cu;
    {
        const bool branch_taken_0x11bc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC9Cu;
        // 0x11bca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc9c) {
            ctx->pc = 0x11BD0Cu;
            goto label_11bd0c;
        }
    }
    ctx->pc = 0x11BCA4u;
    // 0x11bca4: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11BCA4u;
    SET_GPR_U32(ctx, 31, 0x11BCACu);
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11BCA4u, 0x11BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCACu;
label_11bcac:
    // 0x11bcac: 0x8e630524  lw          $v1, 0x524($s3)
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11bcb0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x11bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11bcb4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bcb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11bcbc: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11bcc0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11bcc4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11bcc8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11bccc: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BCCCu;
    SET_GPR_U32(ctx, 31, 0x11BCD4u);
    ctx->pc = 0x11BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCCCu;
    // 0x11bcd0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BCCCu, 0x11BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCD4u;
label_11bcd4:
    // 0x11bcd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11bcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcdc: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BCDCu;
    SET_GPR_U32(ctx, 31, 0x11BCE4u);
    ctx->pc = 0x11BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCDCu;
    // 0x11bce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BCDCu, 0x11BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCE4u;
label_11bce4:
    // 0x11bce4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11BCE4u;
    SET_GPR_U32(ctx, 31, 0x11BCECu);
    ctx->pc = 0x11BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCE4u;
    // 0x11bce8: 0xae300040  sw          $s0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11BCE4u, 0x11BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCECu;
label_11bcec:
    // 0x11bcec: 0x8e6300fc  lw          $v1, 0xFC($s3)
    ctx->pc = 0x11bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x11bcf0: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x11bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x11bcf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BCF4u;
    {
        const bool branch_taken_0x11bcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF4u;
        // 0x11bcf8: 0xae7100fc  sw          $s1, 0xFC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf4) {
            ctx->pc = 0x11BD04u;
            goto label_11bd04;
        }
    }
    ctx->pc = 0x11BCFCu;
    // 0x11bcfc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11BCFCu;
    SET_GPR_U32(ctx, 31, 0x11BD04u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11BCFCu, 0x11BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD04u;
label_11bd04:
    // 0x11bd04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BD04u;
    {
        const bool branch_taken_0x11bd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD04u;
        // 0x11bd08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd04) {
            ctx->pc = 0x11BD18u;
            goto label_11bd18;
        }
    }
    ctx->pc = 0x11BD0Cu;
label_11bd0c:
    // 0x11bd0c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x11bd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11bd10: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x11BD10u;
    {
        const bool branch_taken_0x11bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD10u;
        // 0x11bd14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd10) {
            ctx->pc = 0x11BC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bc58;
        }
    }
    ctx->pc = 0x11BD18u;
label_11bd18:
    // 0x11bd18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11bd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bd1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11bd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bd20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bd20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bd24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11bd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11bd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD2Cu;
        // 0x11bd30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BD34u;
}

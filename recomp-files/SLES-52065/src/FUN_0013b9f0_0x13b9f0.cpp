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

// Function: FUN_0013b9f0
// Address: 0x13b9f0 - 0x13bb60
void FUN_0013b9f0_0x13b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b9f0_0x13b9f0");
#endif

    switch (ctx->pc) {
        case 0x13ba38u: goto label_13ba38;
        case 0x13ba4cu: goto label_13ba4c;
        case 0x13ba58u: goto label_13ba58;
        case 0x13ba60u: goto label_13ba60;
        case 0x13ba80u: goto label_13ba80;
        case 0x13ba94u: goto label_13ba94;
        case 0x13baa0u: goto label_13baa0;
        case 0x13baa8u: goto label_13baa8;
        case 0x13bad4u: goto label_13bad4;
        case 0x13bae8u: goto label_13bae8;
        case 0x13baf4u: goto label_13baf4;
        case 0x13bafcu: goto label_13bafc;
        case 0x13bb1cu: goto label_13bb1c;
        case 0x13bb30u: goto label_13bb30;
        case 0x13bb3cu: goto label_13bb3c;
        case 0x13bb44u: goto label_13bb44;
        default: break;
    }

    ctx->pc = 0x13b9f0u;

label_13b9f0:
    // 0x13b9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b9f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13b9f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b9fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ba00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13ba00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ba08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ba0c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x13ba0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ba10: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13BA10u;
    {
        const bool branch_taken_0x13ba10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA10u;
        // 0x13ba14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba10) {
            ctx->pc = 0x13BAA8u;
            goto label_13baa8;
        }
    }
    ctx->pc = 0x13BA18u;
    // 0x13ba18: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ba1c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BA1Cu;
    {
        const bool branch_taken_0x13ba1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba1c) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13BA24u;
    // 0x13ba24: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13ba28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA28u;
    {
        const bool branch_taken_0x13ba28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba28) {
            ctx->pc = 0x13BA38u;
            goto label_13ba38;
        }
    }
    ctx->pc = 0x13BA30u;
    // 0x13ba30: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA30u;
    SET_GPR_U32(ctx, 31, 0x13BA38u);
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BA38u;
label_13ba38:
    // 0x13ba38: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x13ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13ba3c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BA3Cu;
    {
        const bool branch_taken_0x13ba3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA3Cu;
        // 0x13ba40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba3c) {
            ctx->pc = 0x13BA50u;
            goto label_13ba50;
        }
    }
    ctx->pc = 0x13BA44u;
    // 0x13ba44: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA44u;
    SET_GPR_U32(ctx, 31, 0x13BA4Cu);
    ctx->pc = 0x13BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA44u;
    // 0x13ba48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BA4Cu;
label_13ba4c:
    // 0x13ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ba50:
    // 0x13ba50: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BA50u;
    SET_GPR_U32(ctx, 31, 0x13BA58u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BA50u, 0x13BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA58u;
label_13ba58:
    // 0x13ba58: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BA58u;
    SET_GPR_U32(ctx, 31, 0x13BA60u);
    ctx->pc = 0x13BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA58u;
    // 0x13ba5c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BA58u, 0x13BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA60u;
label_13ba60:
    // 0x13ba60: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ba64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BA64u;
    {
        const bool branch_taken_0x13ba64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba64) {
            ctx->pc = 0x13BAA8u;
            goto label_13baa8;
        }
    }
    ctx->pc = 0x13BA6Cu;
    // 0x13ba6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ba70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA70u;
    {
        const bool branch_taken_0x13ba70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA70u;
        // 0x13ba74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba70) {
            ctx->pc = 0x13BA80u;
            goto label_13ba80;
        }
    }
    ctx->pc = 0x13BA78u;
    // 0x13ba78: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA78u;
    SET_GPR_U32(ctx, 31, 0x13BA80u);
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BA80u;
label_13ba80:
    // 0x13ba80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13ba80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ba84: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BA84u;
    {
        const bool branch_taken_0x13ba84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA84u;
        // 0x13ba88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba84) {
            ctx->pc = 0x13BA98u;
            goto label_13ba98;
        }
    }
    ctx->pc = 0x13BA8Cu;
    // 0x13ba8c: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA8Cu;
    SET_GPR_U32(ctx, 31, 0x13BA94u);
    ctx->pc = 0x13BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA8Cu;
    // 0x13ba90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BA94u;
label_13ba94:
    // 0x13ba94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ba98:
    // 0x13ba98: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BA98u;
    SET_GPR_U32(ctx, 31, 0x13BAA0u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BA98u, 0x13BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAA0u;
label_13baa0:
    // 0x13baa0: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BAA0u;
    SET_GPR_U32(ctx, 31, 0x13BAA8u);
    ctx->pc = 0x13BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAA0u;
    // 0x13baa4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BAA0u, 0x13BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAA8u;
label_13baa8:
    // 0x13baa8: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13baac: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13BAACu;
    {
        const bool branch_taken_0x13baac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baac) {
            ctx->pc = 0x13BB44u;
            goto label_13bb44;
        }
    }
    ctx->pc = 0x13BAB4u;
    // 0x13bab4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x13bab4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bab8: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BAB8u;
    {
        const bool branch_taken_0x13bab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bab8) {
            ctx->pc = 0x13BAFCu;
            goto label_13bafc;
        }
    }
    ctx->pc = 0x13BAC0u;
    // 0x13bac0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13bac4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BAC4u;
    {
        const bool branch_taken_0x13bac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAC4u;
        // 0x13bac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bac4) {
            ctx->pc = 0x13BAD4u;
            goto label_13bad4;
        }
    }
    ctx->pc = 0x13BACCu;
    // 0x13bacc: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BACCu;
    SET_GPR_U32(ctx, 31, 0x13BAD4u);
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BAD4u;
label_13bad4:
    // 0x13bad4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x13bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13bad8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BAD8u;
    {
        const bool branch_taken_0x13bad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAD8u;
        // 0x13badc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bad8) {
            ctx->pc = 0x13BAECu;
            goto label_13baec;
        }
    }
    ctx->pc = 0x13BAE0u;
    // 0x13bae0: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BAE0u;
    SET_GPR_U32(ctx, 31, 0x13BAE8u);
    ctx->pc = 0x13BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAE0u;
    // 0x13bae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BAE8u;
label_13bae8:
    // 0x13bae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13baec:
    // 0x13baec: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BAECu;
    SET_GPR_U32(ctx, 31, 0x13BAF4u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BAECu, 0x13BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAF4u;
label_13baf4:
    // 0x13baf4: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BAF4u;
    SET_GPR_U32(ctx, 31, 0x13BAFCu);
    ctx->pc = 0x13BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAF4u;
    // 0x13baf8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BAF4u, 0x13BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAFCu;
label_13bafc:
    // 0x13bafc: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x13bafcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13bb00: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BB00u;
    {
        const bool branch_taken_0x13bb00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb00) {
            ctx->pc = 0x13BB44u;
            goto label_13bb44;
        }
    }
    ctx->pc = 0x13BB08u;
    // 0x13bb08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bb0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB0Cu;
    {
        const bool branch_taken_0x13bb0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB0Cu;
        // 0x13bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb0c) {
            ctx->pc = 0x13BB1Cu;
            goto label_13bb1c;
        }
    }
    ctx->pc = 0x13BB14u;
    // 0x13bb14: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BB14u;
    SET_GPR_U32(ctx, 31, 0x13BB1Cu);
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BB1Cu;
label_13bb1c:
    // 0x13bb1c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13bb20: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB20u;
    {
        const bool branch_taken_0x13bb20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB20u;
        // 0x13bb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb20) {
            ctx->pc = 0x13BB34u;
            goto label_13bb34;
        }
    }
    ctx->pc = 0x13BB28u;
    // 0x13bb28: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BB28u;
    SET_GPR_U32(ctx, 31, 0x13BB30u);
    ctx->pc = 0x13BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB28u;
    // 0x13bb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    goto label_13b9f0;
    ctx->pc = 0x13BB30u;
label_13bb30:
    // 0x13bb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bb34:
    // 0x13bb34: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BB34u;
    SET_GPR_U32(ctx, 31, 0x13BB3Cu);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BB34u, 0x13BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB3Cu;
label_13bb3c:
    // 0x13bb3c: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BB3Cu;
    SET_GPR_U32(ctx, 31, 0x13BB44u);
    ctx->pc = 0x13BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB3Cu;
    // 0x13bb40: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BB3Cu, 0x13BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB44u;
label_13bb44:
    // 0x13bb44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bb48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bb48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bb4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bb50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bb58: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB58u;
        // 0x13bb5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB60u;
}

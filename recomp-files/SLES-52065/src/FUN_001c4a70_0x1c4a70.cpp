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

// Function: FUN_001c4a70
// Address: 0x1c4a70 - 0x1c4af0
void FUN_001c4a70_0x1c4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4a70_0x1c4a70");
#endif

    switch (ctx->pc) {
        case 0x1c4a70u: goto label_1c4a70;
        case 0x1c4a74u: goto label_1c4a74;
        case 0x1c4a78u: goto label_1c4a78;
        case 0x1c4a7cu: goto label_1c4a7c;
        case 0x1c4a80u: goto label_1c4a80;
        case 0x1c4a84u: goto label_1c4a84;
        case 0x1c4a88u: goto label_1c4a88;
        case 0x1c4a8cu: goto label_1c4a8c;
        case 0x1c4a90u: goto label_1c4a90;
        case 0x1c4a94u: goto label_1c4a94;
        case 0x1c4a98u: goto label_1c4a98;
        case 0x1c4a9cu: goto label_1c4a9c;
        case 0x1c4aa0u: goto label_1c4aa0;
        case 0x1c4aa4u: goto label_1c4aa4;
        case 0x1c4aa8u: goto label_1c4aa8;
        case 0x1c4aacu: goto label_1c4aac;
        case 0x1c4ab0u: goto label_1c4ab0;
        case 0x1c4ab4u: goto label_1c4ab4;
        case 0x1c4ab8u: goto label_1c4ab8;
        case 0x1c4abcu: goto label_1c4abc;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ac4u: goto label_1c4ac4;
        case 0x1c4ac8u: goto label_1c4ac8;
        case 0x1c4accu: goto label_1c4acc;
        case 0x1c4ad0u: goto label_1c4ad0;
        case 0x1c4ad4u: goto label_1c4ad4;
        case 0x1c4ad8u: goto label_1c4ad8;
        case 0x1c4adcu: goto label_1c4adc;
        case 0x1c4ae0u: goto label_1c4ae0;
        case 0x1c4ae4u: goto label_1c4ae4;
        case 0x1c4ae8u: goto label_1c4ae8;
        case 0x1c4aecu: goto label_1c4aec;
        default: break;
    }

    ctx->pc = 0x1c4a70u;

label_1c4a70:
    // 0x1c4a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c4a74:
    // 0x1c4a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c4a78:
    // 0x1c4a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c4a7c:
    // 0x1c4a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c4a80:
    // 0x1c4a80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4a84:
    // 0x1c4a84: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1c4a88:
    if (ctx->pc == 0x1C4A88u) {
        ctx->pc = 0x1C4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A84u;
        // 0x1c4a88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A8Cu;
        goto label_1c4a8c;
    }
    ctx->pc = 0x1C4A84u;
    {
        const bool branch_taken_0x1c4a84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A84u;
        // 0x1c4a88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a84) {
            ctx->pc = 0x1C4AD8u;
            goto label_1c4ad8;
        }
    }
    ctx->pc = 0x1C4A8Cu;
label_1c4a8c:
    // 0x1c4a8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1c4a90:
    // 0x1c4a90: 0x2442bb60  addiu       $v0, $v0, -0x44A0
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949728));
label_1c4a94:
    // 0x1c4a94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c4a98:
    // 0x1c4a98: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1c4a9c:
    // 0x1c4a9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1c4aa0:
    if (ctx->pc == 0x1C4AA0u) {
        ctx->pc = 0x1C4AA4u;
        goto label_1c4aa4;
    }
    ctx->pc = 0x1C4A9Cu;
    {
        const bool branch_taken_0x1c4a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a9c) {
            ctx->pc = 0x1C4AB4u;
            goto label_1c4ab4;
        }
    }
    ctx->pc = 0x1C4AA4u;
label_1c4aa4:
    // 0x1c4aa4: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1c4aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1c4aa8:
    // 0x1c4aa8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1c4aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1c4aac:
    // 0x1c4aac: 0x320f809  jalr        $t9
label_1c4ab0:
    if (ctx->pc == 0x1C4AB0u) {
        ctx->pc = 0x1C4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AACu;
        // 0x1c4ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AB4u;
        goto label_1c4ab4;
    }
    ctx->pc = 0x1C4AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C4AB4u);
        ctx->pc = 0x1C4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AACu;
        // 0x1c4ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AACu, 0x1C4AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4AB4u;
label_1c4ab4:
    // 0x1c4ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ab8:
    // 0x1c4ab8: 0xc06dc54  jal         func_1B7150
label_1c4abc:
    if (ctx->pc == 0x1C4ABCu) {
        ctx->pc = 0x1C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AB8u;
        // 0x1c4abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AC0u;
        goto label_1c4ac0;
    }
    ctx->pc = 0x1C4AB8u;
    SET_GPR_U32(ctx, 31, 0x1C4AC0u);
    ctx->pc = 0x1C4ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AB8u;
    // 0x1c4abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C4AB8u, 0x1C4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AC0u;
label_1c4ac0:
    // 0x1c4ac0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c4ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1c4ac4:
    // 0x1c4ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c4ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c4ac8:
    // 0x1c4ac8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1c4acc:
    if (ctx->pc == 0x1C4ACCu) {
        ctx->pc = 0x1C4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AC8u;
        // 0x1c4acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AD0u;
        goto label_1c4ad0;
    }
    ctx->pc = 0x1C4AC8u;
    {
        const bool branch_taken_0x1c4ac8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AC8u;
        // 0x1c4acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ac8) {
            ctx->pc = 0x1C4ADCu;
            goto label_1c4adc;
        }
    }
    ctx->pc = 0x1C4AD0u;
label_1c4ad0:
    // 0x1c4ad0: 0xc0401a4  jal         func_100690
label_1c4ad4:
    if (ctx->pc == 0x1C4AD4u) {
        ctx->pc = 0x1C4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AD0u;
        // 0x1c4ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AD8u;
        goto label_1c4ad8;
    }
    ctx->pc = 0x1C4AD0u;
    SET_GPR_U32(ctx, 31, 0x1C4AD8u);
    ctx->pc = 0x1C4AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AD0u;
    // 0x1c4ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C4AD0u, 0x1C4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AD8u;
label_1c4ad8:
    // 0x1c4ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c4ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4adc:
    // 0x1c4adc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4ae0:
    // 0x1c4ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4ae4:
    // 0x1c4ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4ae8:
    // 0x1c4ae8: 0x3e00008  jr          $ra
label_1c4aec:
    if (ctx->pc == 0x1C4AECu) {
        ctx->pc = 0x1C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE8u;
        // 0x1c4aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AF0u;
        goto label_fallthrough_0x1c4ae8;
    }
    ctx->pc = 0x1C4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE8u;
        // 0x1c4aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4ae8:
    ctx->pc = 0x1C4AF0u;
}

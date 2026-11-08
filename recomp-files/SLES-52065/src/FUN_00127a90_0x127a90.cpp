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

// Function: FUN_00127a90
// Address: 0x127a90 - 0x127b3c
void FUN_00127a90_0x127a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127a90_0x127a90");
#endif

    switch (ctx->pc) {
        case 0x127a90u: goto label_127a90;
        case 0x127a94u: goto label_127a94;
        case 0x127a98u: goto label_127a98;
        case 0x127a9cu: goto label_127a9c;
        case 0x127aa0u: goto label_127aa0;
        case 0x127aa4u: goto label_127aa4;
        case 0x127aa8u: goto label_127aa8;
        case 0x127aacu: goto label_127aac;
        case 0x127ab0u: goto label_127ab0;
        case 0x127ab4u: goto label_127ab4;
        case 0x127ab8u: goto label_127ab8;
        case 0x127abcu: goto label_127abc;
        case 0x127ac0u: goto label_127ac0;
        case 0x127ac4u: goto label_127ac4;
        case 0x127ac8u: goto label_127ac8;
        case 0x127accu: goto label_127acc;
        case 0x127ad0u: goto label_127ad0;
        case 0x127ad4u: goto label_127ad4;
        case 0x127ad8u: goto label_127ad8;
        case 0x127adcu: goto label_127adc;
        case 0x127ae0u: goto label_127ae0;
        case 0x127ae4u: goto label_127ae4;
        case 0x127ae8u: goto label_127ae8;
        case 0x127aecu: goto label_127aec;
        case 0x127af0u: goto label_127af0;
        case 0x127af4u: goto label_127af4;
        case 0x127af8u: goto label_127af8;
        case 0x127afcu: goto label_127afc;
        case 0x127b00u: goto label_127b00;
        case 0x127b04u: goto label_127b04;
        case 0x127b08u: goto label_127b08;
        case 0x127b0cu: goto label_127b0c;
        case 0x127b10u: goto label_127b10;
        case 0x127b14u: goto label_127b14;
        case 0x127b18u: goto label_127b18;
        case 0x127b1cu: goto label_127b1c;
        case 0x127b20u: goto label_127b20;
        case 0x127b24u: goto label_127b24;
        case 0x127b28u: goto label_127b28;
        case 0x127b2cu: goto label_127b2c;
        case 0x127b30u: goto label_127b30;
        case 0x127b34u: goto label_127b34;
        case 0x127b38u: goto label_127b38;
        default: break;
    }

    ctx->pc = 0x127a90u;

label_127a90:
    // 0x127a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_127a94:
    // 0x127a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_127a98:
    // 0x127a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127a9c:
    // 0x127a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_127aa0:
    // 0x127aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127aa4:
    // 0x127aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_127aa8:
    // 0x127aa8: 0xc0401bc  jal         func_1006F0
label_127aac:
    if (ctx->pc == 0x127AACu) {
        ctx->pc = 0x127AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AA8u;
        // 0x127aac: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127AB0u;
        goto label_127ab0;
    }
    ctx->pc = 0x127AA8u;
    SET_GPR_U32(ctx, 31, 0x127AB0u);
    ctx->pc = 0x127AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AA8u;
    // 0x127aac: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127AA8u, 0x127AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AB0u;
label_127ab0:
    // 0x127ab0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_127ab4:
    if (ctx->pc == 0x127AB4u) {
        ctx->pc = 0x127AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AB0u;
        // 0x127ab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127AB8u;
        goto label_127ab8;
    }
    ctx->pc = 0x127AB0u;
    {
        const bool branch_taken_0x127ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AB0u;
        // 0x127ab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ab0) {
            ctx->pc = 0x127AC4u;
            goto label_127ac4;
        }
    }
    ctx->pc = 0x127AB8u;
label_127ab8:
    // 0x127ab8: 0xc049984  jal         func_126610
label_127abc:
    if (ctx->pc == 0x127ABCu) {
        ctx->pc = 0x127ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AB8u;
        // 0x127abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127AC0u;
        goto label_127ac0;
    }
    ctx->pc = 0x127AB8u;
    SET_GPR_U32(ctx, 31, 0x127AC0u);
    ctx->pc = 0x127ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AB8u;
    // 0x127abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126610u, 0x127AB8u, 0x127AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AC0u;
label_127ac0:
    // 0x127ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127ac4:
    // 0x127ac4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x127ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_127ac8:
    // 0x127ac8: 0xc049a0c  jal         func_126830
label_127acc:
    if (ctx->pc == 0x127ACCu) {
        ctx->pc = 0x127ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AC8u;
        // 0x127acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127AD0u;
        goto label_127ad0;
    }
    ctx->pc = 0x127AC8u;
    SET_GPR_U32(ctx, 31, 0x127AD0u);
    ctx->pc = 0x127ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AC8u;
    // 0x127acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126830u, 0x127AC8u, 0x127AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AD0u;
label_127ad0:
    // 0x127ad0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_127ad4:
    if (ctx->pc == 0x127AD4u) {
        ctx->pc = 0x127AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AD0u;
        // 0x127ad4: 0x2624002c  addiu       $a0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127AD8u;
        goto label_127ad8;
    }
    ctx->pc = 0x127AD0u;
    {
        const bool branch_taken_0x127ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AD0u;
        // 0x127ad4: 0x2624002c  addiu       $a0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ad0) {
            ctx->pc = 0x127B08u;
            goto label_127b08;
        }
    }
    ctx->pc = 0x127AD8u;
label_127ad8:
    // 0x127ad8: 0xc049ed0  jal         func_127B40
label_127adc:
    if (ctx->pc == 0x127ADCu) {
        ctx->pc = 0x127AE0u;
        goto label_127ae0;
    }
    ctx->pc = 0x127AD8u;
    SET_GPR_U32(ctx, 31, 0x127AE0u);
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x127AD8u, 0x127AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AE0u;
label_127ae0:
    // 0x127ae0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x127ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_127ae4:
    // 0x127ae4: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x127ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_127ae8:
    // 0x127ae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127aec:
    // 0x127aec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127af0:
    // 0x127af0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x127af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_127af4:
    // 0x127af4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_127af8:
    // 0x127af8: 0xc0484ec  jal         func_1213B0
label_127afc:
    if (ctx->pc == 0x127AFCu) {
        ctx->pc = 0x127AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AF8u;
        // 0x127afc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B00u;
        goto label_127b00;
    }
    ctx->pc = 0x127AF8u;
    SET_GPR_U32(ctx, 31, 0x127B00u);
    ctx->pc = 0x127AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AF8u;
    // 0x127afc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x127AF8u, 0x127B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B00u;
label_127b00:
    // 0x127b00: 0x10000009  b           . + 4 + (0x9 << 2)
label_127b04:
    if (ctx->pc == 0x127B04u) {
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B00u;
        // 0x127b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B08u;
        goto label_127b08;
    }
    ctx->pc = 0x127B00u;
    {
        const bool branch_taken_0x127b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B00u;
        // 0x127b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b00) {
            ctx->pc = 0x127B28u;
            goto label_127b28;
        }
    }
    ctx->pc = 0x127B08u;
label_127b08:
    // 0x127b08: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_127b0c:
    // 0x127b0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_127b10:
    if (ctx->pc == 0x127B10u) {
        ctx->pc = 0x127B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B0Cu;
        // 0x127b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B14u;
        goto label_127b14;
    }
    ctx->pc = 0x127B0Cu;
    {
        const bool branch_taken_0x127b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B0Cu;
        // 0x127b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b0c) {
            ctx->pc = 0x127B28u;
            goto label_127b28;
        }
    }
    ctx->pc = 0x127B14u;
label_127b14:
    // 0x127b14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127b18:
    // 0x127b18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127b1c:
    // 0x127b1c: 0x320f809  jalr        $t9
label_127b20:
    if (ctx->pc == 0x127B20u) {
        ctx->pc = 0x127B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B1Cu;
        // 0x127b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B24u;
        goto label_127b24;
    }
    ctx->pc = 0x127B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127B24u);
        ctx->pc = 0x127B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B1Cu;
        // 0x127b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B1Cu, 0x127B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127B24u;
label_127b24:
    // 0x127b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127b28:
    // 0x127b28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x127b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_127b2c:
    // 0x127b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127b30:
    // 0x127b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127b34:
    // 0x127b34: 0x3e00008  jr          $ra
label_127b38:
    if (ctx->pc == 0x127B38u) {
        ctx->pc = 0x127B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B34u;
        // 0x127b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B3Cu;
        goto label_fallthrough_0x127b34;
    }
    ctx->pc = 0x127B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B34u;
        // 0x127b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127b34:
    ctx->pc = 0x127B3Cu;
}

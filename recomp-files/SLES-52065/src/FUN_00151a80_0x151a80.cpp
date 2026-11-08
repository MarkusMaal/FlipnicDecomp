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

// Function: FUN_00151a80
// Address: 0x151a80 - 0x151bb8
void FUN_00151a80_0x151a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151a80_0x151a80");
#endif

    switch (ctx->pc) {
        case 0x151a80u: goto label_151a80;
        case 0x151a84u: goto label_151a84;
        case 0x151a88u: goto label_151a88;
        case 0x151a8cu: goto label_151a8c;
        case 0x151a90u: goto label_151a90;
        case 0x151a94u: goto label_151a94;
        case 0x151a98u: goto label_151a98;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa0u: goto label_151aa0;
        case 0x151aa4u: goto label_151aa4;
        case 0x151aa8u: goto label_151aa8;
        case 0x151aacu: goto label_151aac;
        case 0x151ab0u: goto label_151ab0;
        case 0x151ab4u: goto label_151ab4;
        case 0x151ab8u: goto label_151ab8;
        case 0x151abcu: goto label_151abc;
        case 0x151ac0u: goto label_151ac0;
        case 0x151ac4u: goto label_151ac4;
        case 0x151ac8u: goto label_151ac8;
        case 0x151accu: goto label_151acc;
        case 0x151ad0u: goto label_151ad0;
        case 0x151ad4u: goto label_151ad4;
        case 0x151ad8u: goto label_151ad8;
        case 0x151adcu: goto label_151adc;
        case 0x151ae0u: goto label_151ae0;
        case 0x151ae4u: goto label_151ae4;
        case 0x151ae8u: goto label_151ae8;
        case 0x151aecu: goto label_151aec;
        case 0x151af0u: goto label_151af0;
        case 0x151af4u: goto label_151af4;
        case 0x151af8u: goto label_151af8;
        case 0x151afcu: goto label_151afc;
        case 0x151b00u: goto label_151b00;
        case 0x151b04u: goto label_151b04;
        case 0x151b08u: goto label_151b08;
        case 0x151b0cu: goto label_151b0c;
        case 0x151b10u: goto label_151b10;
        case 0x151b14u: goto label_151b14;
        case 0x151b18u: goto label_151b18;
        case 0x151b1cu: goto label_151b1c;
        case 0x151b20u: goto label_151b20;
        case 0x151b24u: goto label_151b24;
        case 0x151b28u: goto label_151b28;
        case 0x151b2cu: goto label_151b2c;
        case 0x151b30u: goto label_151b30;
        case 0x151b34u: goto label_151b34;
        case 0x151b38u: goto label_151b38;
        case 0x151b3cu: goto label_151b3c;
        case 0x151b40u: goto label_151b40;
        case 0x151b44u: goto label_151b44;
        case 0x151b48u: goto label_151b48;
        case 0x151b4cu: goto label_151b4c;
        case 0x151b50u: goto label_151b50;
        case 0x151b54u: goto label_151b54;
        case 0x151b58u: goto label_151b58;
        case 0x151b5cu: goto label_151b5c;
        case 0x151b60u: goto label_151b60;
        case 0x151b64u: goto label_151b64;
        case 0x151b68u: goto label_151b68;
        case 0x151b6cu: goto label_151b6c;
        case 0x151b70u: goto label_151b70;
        case 0x151b74u: goto label_151b74;
        case 0x151b78u: goto label_151b78;
        case 0x151b7cu: goto label_151b7c;
        case 0x151b80u: goto label_151b80;
        case 0x151b84u: goto label_151b84;
        case 0x151b88u: goto label_151b88;
        case 0x151b8cu: goto label_151b8c;
        case 0x151b90u: goto label_151b90;
        case 0x151b94u: goto label_151b94;
        case 0x151b98u: goto label_151b98;
        case 0x151b9cu: goto label_151b9c;
        case 0x151ba0u: goto label_151ba0;
        case 0x151ba4u: goto label_151ba4;
        case 0x151ba8u: goto label_151ba8;
        case 0x151bacu: goto label_151bac;
        case 0x151bb0u: goto label_151bb0;
        case 0x151bb4u: goto label_151bb4;
        default: break;
    }

    ctx->pc = 0x151a80u;

label_151a80:
    // 0x151a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_151a84:
    // 0x151a84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_151a88:
    // 0x151a88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_151a8c:
    // 0x151a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151a90:
    // 0x151a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151a94:
    // 0x151a94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_151a98:
    // 0x151a98: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x151a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_151a9c:
    // 0x151a9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x151a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_151aa0:
    // 0x151aa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_151aa4:
    if (ctx->pc == 0x151AA4u) {
        ctx->pc = 0x151AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AA0u;
        // 0x151aa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AA8u;
        goto label_151aa8;
    }
    ctx->pc = 0x151AA0u;
    {
        const bool branch_taken_0x151aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AA0u;
        // 0x151aa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151aa0) {
            ctx->pc = 0x151AB8u;
            goto label_151ab8;
        }
    }
    ctx->pc = 0x151AA8u;
label_151aa8:
    // 0x151aa8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x151aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_151aac:
    // 0x151aac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x151aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_151ab0:
    // 0x151ab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x151ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151ab4:
    // 0x151ab4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x151ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_151ab8:
    // 0x151ab8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_151abc:
    if (ctx->pc == 0x151ABCu) {
        ctx->pc = 0x151AC0u;
        goto label_151ac0;
    }
    ctx->pc = 0x151AB8u;
    {
        const bool branch_taken_0x151ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ab8) {
            ctx->pc = 0x151ADCu;
            goto label_151adc;
        }
    }
    ctx->pc = 0x151AC0u;
label_151ac0:
    // 0x151ac0: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x151ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_151ac4:
    // 0x151ac4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x151ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_151ac8:
    // 0x151ac8: 0x320f809  jalr        $t9
label_151acc:
    if (ctx->pc == 0x151ACCu) {
        ctx->pc = 0x151ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AC8u;
        // 0x151acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AD0u;
        goto label_151ad0;
    }
    ctx->pc = 0x151AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151AD0u);
        ctx->pc = 0x151ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AC8u;
        // 0x151acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AC8u, 0x151AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151AD0u;
label_151ad0:
    // 0x151ad0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_151ad4:
    // 0x151ad4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_151ad8:
    if (ctx->pc == 0x151AD8u) {
        ctx->pc = 0x151ADCu;
        goto label_151adc;
    }
    ctx->pc = 0x151AD4u;
    {
        const bool branch_taken_0x151ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ad4) {
            ctx->pc = 0x151AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151ac0;
        }
    }
    ctx->pc = 0x151ADCu;
label_151adc:
    // 0x151adc: 0x0  nop
    ctx->pc = 0x151adcu;
    // NOP
label_151ae0:
    // 0x151ae0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x151ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_151ae4:
    // 0x151ae4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x151ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_151ae8:
    // 0x151ae8: 0x320f809  jalr        $t9
label_151aec:
    if (ctx->pc == 0x151AECu) {
        ctx->pc = 0x151AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE8u;
        // 0x151aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AF0u;
        goto label_151af0;
    }
    ctx->pc = 0x151AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151AF0u);
        ctx->pc = 0x151AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE8u;
        // 0x151aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AE8u, 0x151AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151AF0u;
label_151af0:
    // 0x151af0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_151af4:
    // 0x151af4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x151af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_151af8:
    // 0x151af8: 0x320f809  jalr        $t9
label_151afc:
    if (ctx->pc == 0x151AFCu) {
        ctx->pc = 0x151AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AF8u;
        // 0x151afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B00u;
        goto label_151b00;
    }
    ctx->pc = 0x151AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B00u);
        ctx->pc = 0x151AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AF8u;
        // 0x151afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AF8u, 0x151B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B00u;
label_151b00:
    // 0x151b00: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x151b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_151b04:
    // 0x151b04: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x151b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_151b08:
    // 0x151b08: 0x320f809  jalr        $t9
label_151b0c:
    if (ctx->pc == 0x151B0Cu) {
        ctx->pc = 0x151B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B08u;
        // 0x151b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B10u;
        goto label_151b10;
    }
    ctx->pc = 0x151B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B10u);
        ctx->pc = 0x151B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B08u;
        // 0x151b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B08u, 0x151B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B10u;
label_151b10:
    // 0x151b10: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x151b10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151b14:
    // 0x151b14: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_151b18:
    if (ctx->pc == 0x151B18u) {
        ctx->pc = 0x151B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B14u;
        // 0x151b18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B1Cu;
        goto label_151b1c;
    }
    ctx->pc = 0x151B14u;
    {
        const bool branch_taken_0x151b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B14u;
        // 0x151b18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b14) {
            ctx->pc = 0x151B3Cu;
            goto label_151b3c;
        }
    }
    ctx->pc = 0x151B1Cu;
label_151b1c:
    // 0x151b1c: 0x0  nop
    ctx->pc = 0x151b1cu;
    // NOP
label_151b20:
    // 0x151b20: 0x8e59000c  lw          $t9, 0xC($s2)
    ctx->pc = 0x151b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_151b24:
    // 0x151b24: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x151b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_151b28:
    // 0x151b28: 0x320f809  jalr        $t9
label_151b2c:
    if (ctx->pc == 0x151B2Cu) {
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B30u;
        goto label_151b30;
    }
    ctx->pc = 0x151B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B30u);
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B28u, 0x151B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B30u;
label_151b30:
    // 0x151b30: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x151b30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_151b34:
    // 0x151b34: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
label_151b38:
    if (ctx->pc == 0x151B38u) {
        ctx->pc = 0x151B3Cu;
        goto label_151b3c;
    }
    ctx->pc = 0x151B34u;
    {
        const bool branch_taken_0x151b34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b34) {
            ctx->pc = 0x151B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b1c;
        }
    }
    ctx->pc = 0x151B3Cu;
label_151b3c:
    // 0x151b3c: 0x0  nop
    ctx->pc = 0x151b3cu;
    // NOP
label_151b40:
    // 0x151b40: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x151b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_151b44:
    // 0x151b44: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_151b48:
    if (ctx->pc == 0x151B48u) {
        ctx->pc = 0x151B4Cu;
        goto label_151b4c;
    }
    ctx->pc = 0x151B44u;
    {
        const bool branch_taken_0x151b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b44) {
            ctx->pc = 0x151B84u;
            goto label_151b84;
        }
    }
    ctx->pc = 0x151B4Cu;
label_151b4c:
    // 0x151b4c: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_151b50:
    if (ctx->pc == 0x151B50u) {
        ctx->pc = 0x151B54u;
        goto label_151b54;
    }
    ctx->pc = 0x151B4Cu;
    {
        const bool branch_taken_0x151b4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b4c) {
            ctx->pc = 0x151B84u;
            goto label_151b84;
        }
    }
    ctx->pc = 0x151B54u;
label_151b54:
    // 0x151b54: 0x1200ffe1  beqz        $s0, . + 4 + (-0x1F << 2)
label_151b58:
    if (ctx->pc == 0x151B58u) {
        ctx->pc = 0x151B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B54u;
        // 0x151b58: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B5Cu;
        goto label_151b5c;
    }
    ctx->pc = 0x151B54u;
    {
        const bool branch_taken_0x151b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B54u;
        // 0x151b58: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b54) {
            ctx->pc = 0x151ADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151adc;
        }
    }
    ctx->pc = 0x151B5Cu;
label_151b5c:
    // 0x151b5c: 0x0  nop
    ctx->pc = 0x151b5cu;
    // NOP
label_151b60:
    // 0x151b60: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x151b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_151b64:
    // 0x151b64: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_151b68:
    // 0x151b68: 0x320f809  jalr        $t9
label_151b6c:
    if (ctx->pc == 0x151B6Cu) {
        ctx->pc = 0x151B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B68u;
        // 0x151b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B70u;
        goto label_151b70;
    }
    ctx->pc = 0x151B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B70u);
        ctx->pc = 0x151B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B68u;
        // 0x151b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B68u, 0x151B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B70u;
label_151b70:
    // 0x151b70: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_151b74:
    // 0x151b74: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_151b78:
    if (ctx->pc == 0x151B78u) {
        ctx->pc = 0x151B7Cu;
        goto label_151b7c;
    }
    ctx->pc = 0x151B74u;
    {
        const bool branch_taken_0x151b74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b74) {
            ctx->pc = 0x151B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b5c;
        }
    }
    ctx->pc = 0x151B7Cu;
label_151b7c:
    // 0x151b7c: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_151b80:
    if (ctx->pc == 0x151B80u) {
        ctx->pc = 0x151B84u;
        goto label_151b84;
    }
    ctx->pc = 0x151B7Cu;
    {
        const bool branch_taken_0x151b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b7c) {
            ctx->pc = 0x151ADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151adc;
        }
    }
    ctx->pc = 0x151B84u;
label_151b84:
    // 0x151b84: 0x0  nop
    ctx->pc = 0x151b84u;
    // NOP
label_151b88:
    // 0x151b88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151b8c:
    // 0x151b8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_151b90:
    if (ctx->pc == 0x151B90u) {
        ctx->pc = 0x151B94u;
        goto label_151b94;
    }
    ctx->pc = 0x151B8Cu;
    {
        const bool branch_taken_0x151b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b8c) {
            ctx->pc = 0x151B9Cu;
            goto label_151b9c;
        }
    }
    ctx->pc = 0x151B94u;
label_151b94:
    // 0x151b94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151b98:
    // 0x151b98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x151b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_151b9c:
    // 0x151b9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x151b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_151ba0:
    // 0x151ba0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_151ba4:
    // 0x151ba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151ba8:
    // 0x151ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151bac:
    // 0x151bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151bb0:
    // 0x151bb0: 0x3e00008  jr          $ra
label_151bb4:
    if (ctx->pc == 0x151BB4u) {
        ctx->pc = 0x151BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BB0u;
        // 0x151bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151BB8u;
        goto label_fallthrough_0x151bb0;
    }
    ctx->pc = 0x151BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BB0u;
        // 0x151bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x151bb0:
    ctx->pc = 0x151BB8u;
}

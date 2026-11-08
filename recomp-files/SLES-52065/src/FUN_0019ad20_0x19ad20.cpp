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

// Function: FUN_0019ad20
// Address: 0x19ad20 - 0x19ae64
void FUN_0019ad20_0x19ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ad20_0x19ad20");
#endif

    switch (ctx->pc) {
        case 0x19ad20u: goto label_19ad20;
        case 0x19ad24u: goto label_19ad24;
        case 0x19ad28u: goto label_19ad28;
        case 0x19ad2cu: goto label_19ad2c;
        case 0x19ad30u: goto label_19ad30;
        case 0x19ad34u: goto label_19ad34;
        case 0x19ad38u: goto label_19ad38;
        case 0x19ad3cu: goto label_19ad3c;
        case 0x19ad40u: goto label_19ad40;
        case 0x19ad44u: goto label_19ad44;
        case 0x19ad48u: goto label_19ad48;
        case 0x19ad4cu: goto label_19ad4c;
        case 0x19ad50u: goto label_19ad50;
        case 0x19ad54u: goto label_19ad54;
        case 0x19ad58u: goto label_19ad58;
        case 0x19ad5cu: goto label_19ad5c;
        case 0x19ad60u: goto label_19ad60;
        case 0x19ad64u: goto label_19ad64;
        case 0x19ad68u: goto label_19ad68;
        case 0x19ad6cu: goto label_19ad6c;
        case 0x19ad70u: goto label_19ad70;
        case 0x19ad74u: goto label_19ad74;
        case 0x19ad78u: goto label_19ad78;
        case 0x19ad7cu: goto label_19ad7c;
        case 0x19ad80u: goto label_19ad80;
        case 0x19ad84u: goto label_19ad84;
        case 0x19ad88u: goto label_19ad88;
        case 0x19ad8cu: goto label_19ad8c;
        case 0x19ad90u: goto label_19ad90;
        case 0x19ad94u: goto label_19ad94;
        case 0x19ad98u: goto label_19ad98;
        case 0x19ad9cu: goto label_19ad9c;
        case 0x19ada0u: goto label_19ada0;
        case 0x19ada4u: goto label_19ada4;
        case 0x19ada8u: goto label_19ada8;
        case 0x19adacu: goto label_19adac;
        case 0x19adb0u: goto label_19adb0;
        case 0x19adb4u: goto label_19adb4;
        case 0x19adb8u: goto label_19adb8;
        case 0x19adbcu: goto label_19adbc;
        case 0x19adc0u: goto label_19adc0;
        case 0x19adc4u: goto label_19adc4;
        case 0x19adc8u: goto label_19adc8;
        case 0x19adccu: goto label_19adcc;
        case 0x19add0u: goto label_19add0;
        case 0x19add4u: goto label_19add4;
        case 0x19add8u: goto label_19add8;
        case 0x19addcu: goto label_19addc;
        case 0x19ade0u: goto label_19ade0;
        case 0x19ade4u: goto label_19ade4;
        case 0x19ade8u: goto label_19ade8;
        case 0x19adecu: goto label_19adec;
        case 0x19adf0u: goto label_19adf0;
        case 0x19adf4u: goto label_19adf4;
        case 0x19adf8u: goto label_19adf8;
        case 0x19adfcu: goto label_19adfc;
        case 0x19ae00u: goto label_19ae00;
        case 0x19ae04u: goto label_19ae04;
        case 0x19ae08u: goto label_19ae08;
        case 0x19ae0cu: goto label_19ae0c;
        case 0x19ae10u: goto label_19ae10;
        case 0x19ae14u: goto label_19ae14;
        case 0x19ae18u: goto label_19ae18;
        case 0x19ae1cu: goto label_19ae1c;
        case 0x19ae20u: goto label_19ae20;
        case 0x19ae24u: goto label_19ae24;
        case 0x19ae28u: goto label_19ae28;
        case 0x19ae2cu: goto label_19ae2c;
        case 0x19ae30u: goto label_19ae30;
        case 0x19ae34u: goto label_19ae34;
        case 0x19ae38u: goto label_19ae38;
        case 0x19ae3cu: goto label_19ae3c;
        case 0x19ae40u: goto label_19ae40;
        case 0x19ae44u: goto label_19ae44;
        case 0x19ae48u: goto label_19ae48;
        case 0x19ae4cu: goto label_19ae4c;
        case 0x19ae50u: goto label_19ae50;
        case 0x19ae54u: goto label_19ae54;
        case 0x19ae58u: goto label_19ae58;
        case 0x19ae5cu: goto label_19ae5c;
        case 0x19ae60u: goto label_19ae60;
        default: break;
    }

    ctx->pc = 0x19ad20u;

label_19ad20:
    // 0x19ad20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19ad24:
    // 0x19ad24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19ad28:
    // 0x19ad28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19ad2c:
    // 0x19ad2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19ad30:
    // 0x19ad30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ad30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ad34:
    // 0x19ad34: 0xc067f08  jal         func_19FC20
label_19ad38:
    if (ctx->pc == 0x19AD38u) {
        ctx->pc = 0x19AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD34u;
        // 0x19ad38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD3Cu;
        goto label_19ad3c;
    }
    ctx->pc = 0x19AD34u;
    SET_GPR_U32(ctx, 31, 0x19AD3Cu);
    ctx->pc = 0x19AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD34u;
    // 0x19ad38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19AD34u, 0x19AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD3Cu;
label_19ad3c:
    // 0x19ad3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ad3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ad40:
    // 0x19ad40: 0xc067f0c  jal         func_19FC30
label_19ad44:
    if (ctx->pc == 0x19AD44u) {
        ctx->pc = 0x19AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD40u;
        // 0x19ad44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD48u;
        goto label_19ad48;
    }
    ctx->pc = 0x19AD40u;
    SET_GPR_U32(ctx, 31, 0x19AD48u);
    ctx->pc = 0x19AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD40u;
    // 0x19ad44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x19AD40u, 0x19AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD48u;
label_19ad48:
    // 0x19ad48: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19ad4c:
    // 0x19ad4c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_19ad50:
    if (ctx->pc == 0x19AD50u) {
        ctx->pc = 0x19AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD4Cu;
        // 0x19ad50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD54u;
        goto label_19ad54;
    }
    ctx->pc = 0x19AD4Cu;
    {
        const bool branch_taken_0x19ad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD4Cu;
        // 0x19ad50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad4c) {
            ctx->pc = 0x19AD90u;
            goto label_19ad90;
        }
    }
    ctx->pc = 0x19AD54u;
label_19ad54:
    // 0x19ad54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ad54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ad58:
    // 0x19ad58: 0x10000005  b           . + 4 + (0x5 << 2)
label_19ad5c:
    if (ctx->pc == 0x19AD5Cu) {
        ctx->pc = 0x19AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD58u;
        // 0x19ad5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD60u;
        goto label_19ad60;
    }
    ctx->pc = 0x19AD58u;
    {
        const bool branch_taken_0x19ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD58u;
        // 0x19ad5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad58) {
            ctx->pc = 0x19AD70u;
            goto label_19ad70;
        }
    }
    ctx->pc = 0x19AD60u;
label_19ad60:
    // 0x19ad60: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19ad64:
    // 0x19ad64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19ad68:
    // 0x19ad68: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_19ad6c:
    // 0x19ad6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19ad70:
    // 0x19ad70: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_19ad74:
    // 0x19ad74: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19ad74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19ad78:
    // 0x19ad78: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ad7c:
    if (ctx->pc == 0x19AD7Cu) {
        ctx->pc = 0x19AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD78u;
        // 0x19ad7c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD80u;
        goto label_19ad80;
    }
    ctx->pc = 0x19AD78u;
    {
        const bool branch_taken_0x19ad78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD78u;
        // 0x19ad7c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad78) {
            ctx->pc = 0x19AD64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad64;
        }
    }
    ctx->pc = 0x19AD80u;
label_19ad80:
    // 0x19ad80: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19ad84:
    // 0x19ad84: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x19ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_19ad88:
    // 0x19ad88: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19ad8c:
    // 0x19ad8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ad90:
    // 0x19ad90: 0xc063dd4  jal         func_18F750
label_19ad94:
    if (ctx->pc == 0x19AD94u) {
        ctx->pc = 0x19AD98u;
        goto label_19ad98;
    }
    ctx->pc = 0x19AD90u;
    SET_GPR_U32(ctx, 31, 0x19AD98u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19AD90u, 0x19AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD98u;
label_19ad98:
    // 0x19ad98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ad9c:
    // 0x19ad9c: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
label_19ada0:
    if (ctx->pc == 0x19ADA0u) {
        ctx->pc = 0x19ADA4u;
        goto label_19ada4;
    }
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AE14u;
            goto label_19ae14;
        }
    }
    ctx->pc = 0x19ADA4u;
label_19ada4:
    // 0x19ada4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ada8:
    // 0x19ada8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19adac:
    if (ctx->pc == 0x19ADACu) {
        ctx->pc = 0x19ADB0u;
        goto label_19adb0;
    }
    ctx->pc = 0x19ADA8u;
    {
        const bool branch_taken_0x19ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ada8) {
            ctx->pc = 0x19ADDCu;
            goto label_19addc;
        }
    }
    ctx->pc = 0x19ADB0u;
label_19adb0:
    // 0x19adb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19adb4:
    if (ctx->pc == 0x19ADB4u) {
        ctx->pc = 0x19ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB0u;
        // 0x19adb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADB8u;
        goto label_19adb8;
    }
    ctx->pc = 0x19ADB0u;
    {
        const bool branch_taken_0x19adb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB0u;
        // 0x19adb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb0) {
            ctx->pc = 0x19ADC4u;
            goto label_19adc4;
        }
    }
    ctx->pc = 0x19ADB8u;
label_19adb8:
    // 0x19adb8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19adbc:
    if (ctx->pc == 0x19ADBCu) {
        ctx->pc = 0x19ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB8u;
        // 0x19adbc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADC0u;
        goto label_19adc0;
    }
    ctx->pc = 0x19ADB8u;
    {
        const bool branch_taken_0x19adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB8u;
        // 0x19adbc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb8) {
            ctx->pc = 0x19AE2Cu;
            goto label_19ae2c;
        }
    }
    ctx->pc = 0x19ADC0u;
label_19adc0:
    // 0x19adc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19adc4:
    // 0x19adc4: 0xc0667bc  jal         func_199EF0
label_19adc8:
    if (ctx->pc == 0x19ADC8u) {
        ctx->pc = 0x19ADCCu;
        goto label_19adcc;
    }
    ctx->pc = 0x19ADC4u;
    SET_GPR_U32(ctx, 31, 0x19ADCCu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19ADC4u, 0x19ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADCCu;
label_19adcc:
    // 0x19adcc: 0xc063e14  jal         func_18F850
label_19add0:
    if (ctx->pc == 0x19ADD0u) {
        ctx->pc = 0x19ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADCCu;
        // 0x19add0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADD4u;
        goto label_19add4;
    }
    ctx->pc = 0x19ADCCu;
    SET_GPR_U32(ctx, 31, 0x19ADD4u);
    ctx->pc = 0x19ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADCCu;
    // 0x19add0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19ADCCu, 0x19ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADD4u;
label_19add4:
    // 0x19add4: 0x10000014  b           . + 4 + (0x14 << 2)
label_19add8:
    if (ctx->pc == 0x19ADD8u) {
        ctx->pc = 0x19ADDCu;
        goto label_19addc;
    }
    ctx->pc = 0x19ADD4u;
    {
        const bool branch_taken_0x19add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19add4) {
            ctx->pc = 0x19AE28u;
            goto label_19ae28;
        }
    }
    ctx->pc = 0x19ADDCu;
label_19addc:
    // 0x19addc: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19ade0:
    // 0x19ade0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x19ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19ade4:
    // 0x19ade4: 0xc06cdb8  jal         func_1B36E0
label_19ade8:
    if (ctx->pc == 0x19ADE8u) {
        ctx->pc = 0x19ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADE4u;
        // 0x19ade8: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADECu;
        goto label_19adec;
    }
    ctx->pc = 0x19ADE4u;
    SET_GPR_U32(ctx, 31, 0x19ADECu);
    ctx->pc = 0x19ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADE4u;
    // 0x19ade8: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x19ADE4u, 0x19ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADECu;
label_19adec:
    // 0x19adec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19adf0:
    // 0x19adf0: 0xc0667e0  jal         func_199F80
label_19adf4:
    if (ctx->pc == 0x19ADF4u) {
        ctx->pc = 0x19ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADF0u;
        // 0x19adf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADF8u;
        goto label_19adf8;
    }
    ctx->pc = 0x19ADF0u;
    SET_GPR_U32(ctx, 31, 0x19ADF8u);
    ctx->pc = 0x19ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADF0u;
    // 0x19adf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19ADF0u, 0x19ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADF8u;
label_19adf8:
    // 0x19adf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19adfc:
    if (ctx->pc == 0x19ADFCu) {
        ctx->pc = 0x19AE00u;
        goto label_19ae00;
    }
    ctx->pc = 0x19ADF8u;
    {
        const bool branch_taken_0x19adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19adf8) {
            ctx->pc = 0x19AE28u;
            goto label_19ae28;
        }
    }
    ctx->pc = 0x19AE00u;
label_19ae00:
    // 0x19ae00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ae04:
    // 0x19ae04: 0xc063e08  jal         func_18F820
label_19ae08:
    if (ctx->pc == 0x19AE08u) {
        ctx->pc = 0x19AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE04u;
        // 0x19ae08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE0Cu;
        goto label_19ae0c;
    }
    ctx->pc = 0x19AE04u;
    SET_GPR_U32(ctx, 31, 0x19AE0Cu);
    ctx->pc = 0x19AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE04u;
    // 0x19ae08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19AE04u, 0x19AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE0Cu;
label_19ae0c:
    // 0x19ae0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_19ae10:
    if (ctx->pc == 0x19AE10u) {
        ctx->pc = 0x19AE14u;
        goto label_19ae14;
    }
    ctx->pc = 0x19AE0Cu;
    {
        const bool branch_taken_0x19ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae0c) {
            ctx->pc = 0x19AE28u;
            goto label_19ae28;
        }
    }
    ctx->pc = 0x19AE14u;
label_19ae14:
    // 0x19ae14: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19ae18:
    // 0x19ae18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ae1c:
    // 0x19ae1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ae20:
    // 0x19ae20: 0xc063e08  jal         func_18F820
label_19ae24:
    if (ctx->pc == 0x19AE24u) {
        ctx->pc = 0x19AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE20u;
        // 0x19ae24: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE28u;
        goto label_19ae28;
    }
    ctx->pc = 0x19AE20u;
    SET_GPR_U32(ctx, 31, 0x19AE28u);
    ctx->pc = 0x19AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE20u;
    // 0x19ae24: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19AE20u, 0x19AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE28u;
label_19ae28:
    // 0x19ae28: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19ae2c:
    // 0x19ae2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19ae30:
    if (ctx->pc == 0x19AE30u) {
        ctx->pc = 0x19AE34u;
        goto label_19ae34;
    }
    ctx->pc = 0x19AE2Cu;
    {
        const bool branch_taken_0x19ae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae2c) {
            ctx->pc = 0x19AE50u;
            goto label_19ae50;
        }
    }
    ctx->pc = 0x19AE34u;
label_19ae34:
    // 0x19ae34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19ae38:
    if (ctx->pc == 0x19AE38u) {
        ctx->pc = 0x19AE3Cu;
        goto label_19ae3c;
    }
    ctx->pc = 0x19AE34u;
    {
        const bool branch_taken_0x19ae34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae34) {
            ctx->pc = 0x19AE50u;
            goto label_19ae50;
        }
    }
    ctx->pc = 0x19AE3Cu;
label_19ae3c:
    // 0x19ae3c: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19ae40:
    // 0x19ae40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ae44:
    // 0x19ae44: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19ae44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19ae48:
    // 0x19ae48: 0x320f809  jalr        $t9
label_19ae4c:
    if (ctx->pc == 0x19AE4Cu) {
        ctx->pc = 0x19AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE48u;
        // 0x19ae4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE50u;
        goto label_19ae50;
    }
    ctx->pc = 0x19AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19AE50u);
        ctx->pc = 0x19AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE48u;
        // 0x19ae4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE48u, 0x19AE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AE50u;
label_19ae50:
    // 0x19ae50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ae54:
    // 0x19ae54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ae54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19ae58:
    // 0x19ae58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ae58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19ae5c:
    // 0x19ae5c: 0x3e00008  jr          $ra
label_19ae60:
    if (ctx->pc == 0x19AE60u) {
        ctx->pc = 0x19AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE5Cu;
        // 0x19ae60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE64u;
        goto label_fallthrough_0x19ae5c;
    }
    ctx->pc = 0x19AE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE5Cu;
        // 0x19ae60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19ae5c:
    ctx->pc = 0x19AE64u;
}

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

// Function: entry_0015acf8
// Address: 0x15acf8 - 0x15ade4
void entry_0015acf8_0x15acf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015acf8_0x15acf8");
#endif

    switch (ctx->pc) {
        case 0x15ad40u: goto label_15ad40;
        case 0x15adbcu: goto label_15adbc;
        case 0x15add0u: goto label_15add0;
        default: break;
    }

    ctx->pc = 0x15acf8u;

label_15acf8:
    // 0x15acf8: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x15acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_15acfc:
    // 0x15acfc: 0x480009f  bltz        $a0, . + 4 + (0x9F << 2)
label_15ad00:
    if (ctx->pc == 0x15AD00u) {
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD04u;
        goto label_15ad04;
    }
    ctx->pc = 0x15ACFCu;
    {
        const bool branch_taken_0x15acfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acfc) {
            ctx->pc = 0x15AF7Cu;
            return;
        }
    }
    ctx->pc = 0x15AD04u;
label_15ad04:
    // 0x15ad04: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x15ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15ad08:
    // 0x15ad08: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15ad0c:
    // 0x15ad0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ad10:
    // 0x15ad10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15ad14:
    // 0x15ad14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ad18:
    // 0x15ad18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15ad1c:
    // 0x15ad1c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15ad20:
    // 0x15ad20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ad20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ad24:
    // 0x15ad24: 0x26290300  addiu       $t1, $s1, 0x300
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15ad28:
    // 0x15ad28: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ad2c:
    // 0x15ad2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ad30:
    // 0x15ad30: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x15ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
label_15ad34:
    // 0x15ad34: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x15ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15ad38:
    // 0x15ad38: 0xc054c30  jal         func_1530C0
label_15ad3c:
    if (ctx->pc == 0x15AD3Cu) {
        ctx->pc = 0x15AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD38u;
        // 0x15ad3c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD40u;
        goto label_15ad40;
    }
    ctx->pc = 0x15AD38u;
    SET_GPR_U32(ctx, 31, 0x15AD40u);
    ctx->pc = 0x15AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD38u;
    // 0x15ad3c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530C0u, 0x15AD38u, 0x15AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD40u;
label_15ad40:
    // 0x15ad40: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15ad44:
    // 0x15ad44: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_15ad48:
    // 0x15ad48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x15ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_15ad4c:
    // 0x15ad4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ad50:
    // 0x15ad50: 0x0  nop
    ctx->pc = 0x15ad50u;
    // NOP
label_15ad54:
    // 0x15ad54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15ad54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_15ad58:
    // 0x15ad58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15ad58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ad5c:
    // 0x15ad5c: 0x0  nop
    ctx->pc = 0x15ad5cu;
    // NOP
label_15ad60:
    // 0x15ad60: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_15ad64:
    if (ctx->pc == 0x15AD64u) {
        ctx->pc = 0x15AD68u;
        goto label_15ad68;
    }
    ctx->pc = 0x15AD60u;
    {
        const bool branch_taken_0x15ad60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ad60) {
            ctx->pc = 0x15AE14u;
            return;
        }
    }
    ctx->pc = 0x15AD68u;
label_15ad68:
    // 0x15ad68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15ad68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ad6c:
    // 0x15ad6c: 0x0  nop
    ctx->pc = 0x15ad6cu;
    // NOP
label_15ad70:
    // 0x15ad70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15ad70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ad74:
    // 0x15ad74: 0x0  nop
    ctx->pc = 0x15ad74u;
    // NOP
label_15ad78:
    // 0x15ad78: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_15ad7c:
    if (ctx->pc == 0x15AD7Cu) {
        ctx->pc = 0x15AD80u;
        goto label_15ad80;
    }
    ctx->pc = 0x15AD78u;
    {
        const bool branch_taken_0x15ad78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ad78) {
            ctx->pc = 0x15AE14u;
            return;
        }
    }
    ctx->pc = 0x15AD80u;
label_15ad80:
    // 0x15ad80: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15ad84:
    // 0x15ad84: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_15ad88:
    // 0x15ad88: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x15ad88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_15ad8c:
    // 0x15ad8c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_15ad90:
    if (ctx->pc == 0x15AD90u) {
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD94u;
        goto label_15ad94;
    }
    ctx->pc = 0x15AD8Cu;
    {
        const bool branch_taken_0x15ad8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad8c) {
            ctx->pc = 0x15ADECu;
            return;
        }
    }
    ctx->pc = 0x15AD94u;
label_15ad94:
    // 0x15ad94: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_15ad98:
    if (ctx->pc == 0x15AD98u) {
        ctx->pc = 0x15AD9Cu;
        goto label_15ad9c;
    }
    ctx->pc = 0x15AD94u;
    {
        const bool branch_taken_0x15ad94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ad94) {
            ctx->pc = 0x15ADECu;
            return;
        }
    }
    ctx->pc = 0x15AD9Cu;
label_15ad9c:
    // 0x15ad9c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x15ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_15ada0:
    // 0x15ada0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_15ada4:
    if (ctx->pc == 0x15ADA4u) {
        ctx->pc = 0x15ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADA0u;
        // 0x15ada4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADA8u;
        goto label_15ada8;
    }
    ctx->pc = 0x15ADA0u;
    {
        const bool branch_taken_0x15ada0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADA0u;
        // 0x15ada4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ada0) {
            ctx->pc = 0x15ADECu;
            return;
        }
    }
    ctx->pc = 0x15ADA8u;
label_15ada8:
    // 0x15ada8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adac:
    // 0x15adac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15adacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15adb0:
    // 0x15adb0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15adb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15adb4:
    // 0x15adb4: 0xc056a64  jal         func_15A990
label_15adb8:
    if (ctx->pc == 0x15ADB8u) {
        ctx->pc = 0x15ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADB4u;
        // 0x15adb8: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADBCu;
        goto label_15adbc;
    }
    ctx->pc = 0x15ADB4u;
    SET_GPR_U32(ctx, 31, 0x15ADBCu);
    ctx->pc = 0x15ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADB4u;
    // 0x15adb8: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A990u, 0x15ADB4u, 0x15ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADBCu;
label_15adbc:
    // 0x15adbc: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15adc0:
    // 0x15adc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adc4:
    // 0x15adc4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15adc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15adc8:
    // 0x15adc8: 0x320f809  jalr        $t9
label_15adcc:
    if (ctx->pc == 0x15ADCCu) {
        ctx->pc = 0x15ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC8u;
        // 0x15adcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADD0u;
        goto label_15add0;
    }
    ctx->pc = 0x15ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ADD0u);
        ctx->pc = 0x15ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC8u;
        // 0x15adcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADC8u, 0x15ADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ADD0u;
label_15add0:
    // 0x15add0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15add0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15add4:
    // 0x15add4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_15add8:
    if (ctx->pc == 0x15ADD8u) {
        ctx->pc = 0x15ADDCu;
        goto label_15addc;
    }
    ctx->pc = 0x15ADD4u;
    {
        const bool branch_taken_0x15add4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x15add4) {
            ctx->pc = 0x15ADE4u;
            return;
        }
    }
    ctx->pc = 0x15ADDCu;
label_15addc:
    // 0x15addc: 0x10000069  b           . + 4 + (0x69 << 2)
label_15ade0:
    if (ctx->pc == 0x15ADE0u) {
        ctx->pc = 0x15ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADDCu;
        // 0x15ade0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADE4u;
        goto label_fallthrough_0x15addc;
    }
    ctx->pc = 0x15ADDCu;
    {
        const bool branch_taken_0x15addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADDCu;
        // 0x15ade0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15addc) {
            ctx->pc = 0x15AF84u;
            return;
        }
    }
label_fallthrough_0x15addc:
    ctx->pc = 0x15ADE4u;
}

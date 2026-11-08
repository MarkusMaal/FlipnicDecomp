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

// Function: FUN_0013ad70
// Address: 0x13ad70 - 0x13ae10
void FUN_0013ad70_0x13ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ad70_0x13ad70");
#endif

    switch (ctx->pc) {
        case 0x13ada0u: goto label_13ada0;
        case 0x13adfcu: goto label_13adfc;
        default: break;
    }

    ctx->pc = 0x13ad70u;

    // 0x13ad70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ad74: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13ad74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ad7c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x13ad7cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13ad80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ad84: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13ad88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ad88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad8c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x13ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13ad90: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13AD90u;
    {
        const bool branch_taken_0x13ad90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD90u;
        // 0x13ad94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad90) {
            ctx->pc = 0x13ADF0u;
            goto label_13adf0;
        }
    }
    ctx->pc = 0x13AD98u;
    // 0x13ad98: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x13ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad9c: 0x0  nop
    ctx->pc = 0x13ad9cu;
    // NOP
label_13ada0:
    // 0x13ada0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x13ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ada4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13ada4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ada8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ada8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13adac: 0x0  nop
    ctx->pc = 0x13adacu;
    // NOP
    // 0x13adb0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADB0u;
    {
        const bool branch_taken_0x13adb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADB0u;
        // 0x13adb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adb0) {
            ctx->pc = 0x13ADBCu;
            goto label_13adbc;
        }
    }
    ctx->pc = 0x13ADB8u;
    // 0x13adb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13adb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13adbc:
    // 0x13adbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13adc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ADC0u;
    {
        const bool branch_taken_0x13adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13adc0) {
            ctx->pc = 0x13ADD4u;
            goto label_13add4;
        }
    }
    ctx->pc = 0x13ADC8u;
    // 0x13adc8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13adcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13ADCCu;
    {
        const bool branch_taken_0x13adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADCCu;
        // 0x13add0: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adcc) {
            ctx->pc = 0x13ADE4u;
            goto label_13ade4;
        }
    }
    ctx->pc = 0x13ADD4u;
label_13add4:
    // 0x13add4: 0x0  nop
    ctx->pc = 0x13add4u;
    // NOP
    // 0x13add8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x13add8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13addc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13addcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ade0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ade0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ade4:
    // 0x13ade4: 0x0  nop
    ctx->pc = 0x13ade4u;
    // NOP
    // 0x13ade8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13ADE8u;
    {
        const bool branch_taken_0x13ade8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ade8) {
            ctx->pc = 0x13ADA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ada0;
        }
    }
    ctx->pc = 0x13ADF0u;
label_13adf0:
    // 0x13adf0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adf4: 0xc04ee34  jal         func_13B8D0
    ctx->pc = 0x13ADF4u;
    SET_GPR_U32(ctx, 31, 0x13ADFCu);
    ctx->pc = 0x13ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ADF4u;
    // 0x13adf8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B8D0u, 0x13ADF4u, 0x13ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADFCu;
label_13adfc:
    // 0x13adfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13ae00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ae04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ae04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x13AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE08u;
        // 0x13ae0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AE10u;
}

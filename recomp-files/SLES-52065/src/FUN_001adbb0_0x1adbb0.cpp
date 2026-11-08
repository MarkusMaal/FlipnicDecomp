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

// Function: FUN_001adbb0
// Address: 0x1adbb0 - 0x1adc30
void FUN_001adbb0_0x1adbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adbb0_0x1adbb0");
#endif

    switch (ctx->pc) {
        case 0x1adbd8u: goto label_1adbd8;
        case 0x1adbe8u: goto label_1adbe8;
        case 0x1adc20u: goto label_1adc20;
        default: break;
    }

    ctx->pc = 0x1adbb0u;

    // 0x1adbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1adbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbc0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1adbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1adbc4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1adbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1adbc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADBC8u;
    {
        const bool branch_taken_0x1adbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adbc8) {
            ctx->pc = 0x1ADBD8u;
            goto label_1adbd8;
        }
    }
    ctx->pc = 0x1ADBD0u;
    // 0x1adbd0: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1ADBD0u;
    SET_GPR_U32(ctx, 31, 0x1ADBD8u);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1ADBD0u, 0x1ADBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBD8u;
label_1adbd8:
    // 0x1adbd8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1adbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1adbdc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1adbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1adbe0: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1ADBE0u;
    SET_GPR_U32(ctx, 31, 0x1ADBE8u);
    ctx->pc = 0x1ADBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBE0u;
    // 0x1adbe4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1ADBE0u, 0x1ADBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBE8u;
label_1adbe8:
    // 0x1adbe8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1adbec: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1adbf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADBF0u;
    {
        const bool branch_taken_0x1adbf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBF0u;
        // 0x1adbf4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbf0) {
            ctx->pc = 0x1ADC00u;
            goto label_1adc00;
        }
    }
    ctx->pc = 0x1ADBF8u;
    // 0x1adbf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADBF8u;
    {
        const bool branch_taken_0x1adbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBF8u;
        // 0x1adbfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbf8) {
            ctx->pc = 0x1ADC18u;
            goto label_1adc18;
        }
    }
    ctx->pc = 0x1ADC00u;
label_1adc00:
    // 0x1adc00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adc04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1adc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adc0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1adc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1adc10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1adc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1adc14: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1adc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1adc18:
    // 0x1adc18: 0xc055c68  jal         func_1571A0
    ctx->pc = 0x1ADC18u;
    SET_GPR_U32(ctx, 31, 0x1ADC20u);
    ctx->pc = 0x1571A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571A0u, 0x1ADC18u, 0x1ADC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC20u;
label_1adc20:
    // 0x1adc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC28u;
        // 0x1adc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADC30u;
}

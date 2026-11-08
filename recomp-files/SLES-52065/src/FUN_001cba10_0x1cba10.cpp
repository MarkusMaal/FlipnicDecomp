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

// Function: FUN_001cba10
// Address: 0x1cba10 - 0x1cbaec
void FUN_001cba10_0x1cba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cba10_0x1cba10");
#endif

    switch (ctx->pc) {
        case 0x1cba3cu: goto label_1cba3c;
        default: break;
    }

    ctx->pc = 0x1cba10u;

    // 0x1cba10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cba14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cba18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cba1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cba20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cba24: 0x24422960  addiu       $v0, $v0, 0x2960
    ctx->pc = 0x1cba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    // 0x1cba28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cba2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cba30: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cba34: 0xc072f18  jal         func_1CBC60
    ctx->pc = 0x1CBA34u;
    SET_GPR_U32(ctx, 31, 0x1CBA3Cu);
    ctx->pc = 0x1CBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA34u;
    // 0x1cba38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC60u, 0x1CBA34u, 0x1CBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA3Cu;
label_1cba3c:
    // 0x1cba3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cba40: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA40u;
    {
        const bool branch_taken_0x1cba40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1CBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA40u;
        // 0x1cba44: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba40) {
            ctx->pc = 0x1CBA50u;
            goto label_1cba50;
        }
    }
    ctx->pc = 0x1CBA48u;
    // 0x1cba48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CBA48u;
    {
        const bool branch_taken_0x1cba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA48u;
        // 0x1cba4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba48) {
            ctx->pc = 0x1CBA6Cu;
            goto label_1cba6c;
        }
    }
    ctx->pc = 0x1CBA50u;
label_1cba50:
    // 0x1cba50: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cba54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cba58: 0x9042275c  lbu         $v0, 0x275C($v0)
    ctx->pc = 0x1cba58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10076)));
    // 0x1cba5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cba60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBA60u;
    {
        const bool branch_taken_0x1cba60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA60u;
        // 0x1cba64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba60) {
            ctx->pc = 0x1CBA6Cu;
            goto label_1cba6c;
        }
    }
    ctx->pc = 0x1CBA68u;
    // 0x1cba68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cba6c:
    // 0x1cba6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cba70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA70u;
    {
        const bool branch_taken_0x1cba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA70u;
        // 0x1cba74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba70) {
            ctx->pc = 0x1CBA80u;
            goto label_1cba80;
        }
    }
    ctx->pc = 0x1CBA78u;
    // 0x1cba78: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CBA78u;
    {
        const bool branch_taken_0x1cba78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cba78) {
            ctx->pc = 0x1CBAB0u;
            goto label_1cbab0;
        }
    }
    ctx->pc = 0x1CBA80u;
label_1cba80:
    // 0x1cba80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cba84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cba88: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1cba88u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cba8c: 0x0  nop
    ctx->pc = 0x1cba8cu;
    // NOP
    // 0x1cba90: 0x0  nop
    ctx->pc = 0x1cba90u;
    // NOP
    // 0x1cba94: 0x1810  mfhi        $v1
    ctx->pc = 0x1cba94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cba98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA98u;
    {
        const bool branch_taken_0x1cba98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA98u;
        // 0x1cba9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba98) {
            ctx->pc = 0x1CBAA8u;
            goto label_1cbaa8;
        }
    }
    ctx->pc = 0x1CBAA0u;
    // 0x1cbaa0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CBAA0u;
    {
        const bool branch_taken_0x1cbaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAA0u;
        // 0x1cbaa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaa0) {
            ctx->pc = 0x1CBAD8u;
            goto label_1cbad8;
        }
    }
    ctx->pc = 0x1CBAA8u;
label_1cbaa8:
    // 0x1cbaa8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CBAA8u;
    {
        const bool branch_taken_0x1cbaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAA8u;
        // 0x1cbaac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaa8) {
            ctx->pc = 0x1CBADCu;
            goto label_1cbadc;
        }
    }
    ctx->pc = 0x1CBAB0u;
label_1cbab0:
    // 0x1cbab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cbab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cbab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbab8: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1cbab8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cbabc: 0x0  nop
    ctx->pc = 0x1cbabcu;
    // NOP
    // 0x1cbac0: 0x0  nop
    ctx->pc = 0x1cbac0u;
    // NOP
    // 0x1cbac4: 0x1810  mfhi        $v1
    ctx->pc = 0x1cbac4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cbac8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBAC8u;
    {
        const bool branch_taken_0x1cbac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAC8u;
        // 0x1cbacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbac8) {
            ctx->pc = 0x1CBAD8u;
            goto label_1cbad8;
        }
    }
    ctx->pc = 0x1CBAD0u;
    // 0x1cbad0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CBAD0u;
    {
        const bool branch_taken_0x1cbad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAD0u;
        // 0x1cbad4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbad0) {
            ctx->pc = 0x1CBAD8u;
            goto label_1cbad8;
        }
    }
    ctx->pc = 0x1CBAD8u;
label_1cbad8:
    // 0x1cbad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbadc:
    // 0x1cbadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAE4u;
        // 0x1cbae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBAECu;
}

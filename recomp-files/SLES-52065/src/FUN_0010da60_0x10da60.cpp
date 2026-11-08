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

// Function: FUN_0010da60
// Address: 0x10da60 - 0x10daf0
void FUN_0010da60_0x10da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010da60_0x10da60");
#endif

    switch (ctx->pc) {
        case 0x10dac0u: goto label_10dac0;
        case 0x10dad8u: goto label_10dad8;
        default: break;
    }

    ctx->pc = 0x10da60u;

    // 0x10da60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10da64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10da68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10da6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10da70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10da70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da74: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10DA74u;
    {
        const bool branch_taken_0x10da74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA74u;
        // 0x10da78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da74) {
            ctx->pc = 0x10DAD8u;
            goto label_10dad8;
        }
    }
    ctx->pc = 0x10DA7Cu;
    // 0x10da7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10da80: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
    // 0x10da84: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x10DA84u;
    {
        const bool branch_taken_0x10da84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA84u;
        // 0x10da88: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da84) {
            ctx->pc = 0x10DAC0u;
            goto label_10dac0;
        }
    }
    ctx->pc = 0x10DA8Cu;
    // 0x10da8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10da90: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x10da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x10da94: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10DA94u;
    {
        const bool branch_taken_0x10da94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA94u;
        // 0x10da98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da94) {
            ctx->pc = 0x10DAC0u;
            goto label_10dac0;
        }
    }
    ctx->pc = 0x10DA9Cu;
    // 0x10da9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10daa0: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x10daa4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DAA4u;
    {
        const bool branch_taken_0x10daa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAA4u;
        // 0x10daa8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10daa4) {
            ctx->pc = 0x10DAC0u;
            goto label_10dac0;
        }
    }
    ctx->pc = 0x10DAACu;
    // 0x10daac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10dab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10dab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dab4: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x10dab8: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x10DAB8u;
    SET_GPR_U32(ctx, 31, 0x10DAC0u);
    ctx->pc = 0x10DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAB8u;
    // 0x10dabc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x10DAB8u, 0x10DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAC0u;
label_10dac0:
    // 0x10dac0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x10dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x10dac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10dac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10dac8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DAC8u;
    {
        const bool branch_taken_0x10dac8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAC8u;
        // 0x10dacc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dac8) {
            ctx->pc = 0x10DADCu;
            goto label_10dadc;
        }
    }
    ctx->pc = 0x10DAD0u;
    // 0x10dad0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x10DAD0u;
    SET_GPR_U32(ctx, 31, 0x10DAD8u);
    ctx->pc = 0x10DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAD0u;
    // 0x10dad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x10DAD0u, 0x10DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAD8u;
label_10dad8:
    // 0x10dad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10dad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dadc:
    // 0x10dadc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10dadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10dae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dae8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAE8u;
        // 0x10daec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DAF0u;
}

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

// Function: FUN_001abf10
// Address: 0x1abf10 - 0x1abf70
void FUN_001abf10_0x1abf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abf10_0x1abf10");
#endif

    switch (ctx->pc) {
        case 0x1abf40u: goto label_1abf40;
        case 0x1abf58u: goto label_1abf58;
        default: break;
    }

    ctx->pc = 0x1abf10u;

    // 0x1abf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abf14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abf18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abf1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abf20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abf20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1ABF24u;
    {
        const bool branch_taken_0x1abf24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF24u;
        // 0x1abf28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf24) {
            ctx->pc = 0x1ABF58u;
            goto label_1abf58;
        }
    }
    ctx->pc = 0x1ABF2Cu;
    // 0x1abf2c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abf30: 0x2442b6f0  addiu       $v0, $v0, -0x4910
    ctx->pc = 0x1abf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
    // 0x1abf34: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1abf34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1abf38: 0xc04018c  jal         func_100630
    ctx->pc = 0x1ABF38u;
    SET_GPR_U32(ctx, 31, 0x1ABF40u);
    ctx->pc = 0x1ABF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF38u;
    // 0x1abf3c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1ABF38u, 0x1ABF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF40u;
label_1abf40:
    // 0x1abf40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1abf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1abf44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1abf44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1abf48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABF48u;
    {
        const bool branch_taken_0x1abf48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ABF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF48u;
        // 0x1abf4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf48) {
            ctx->pc = 0x1ABF5Cu;
            goto label_1abf5c;
        }
    }
    ctx->pc = 0x1ABF50u;
    // 0x1abf50: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ABF50u;
    SET_GPR_U32(ctx, 31, 0x1ABF58u);
    ctx->pc = 0x1ABF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF50u;
    // 0x1abf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ABF50u, 0x1ABF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF58u;
label_1abf58:
    // 0x1abf58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1abf58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abf5c:
    // 0x1abf5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abf60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abf64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf68: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF68u;
        // 0x1abf6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF70u;
}

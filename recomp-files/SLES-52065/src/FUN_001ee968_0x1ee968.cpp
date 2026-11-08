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

// Function: FUN_001ee968
// Address: 0x1ee968 - 0x1ee9a4
void FUN_001ee968_0x1ee968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee968_0x1ee968");
#endif

    ctx->pc = 0x1ee968u;

    // 0x1ee968: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee96c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE96Cu;
    {
        const bool branch_taken_0x1ee96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee96c) {
            ctx->pc = 0x1EE994u;
            goto label_1ee994;
        }
    }
    ctx->pc = 0x1EE974u;
    // 0x1ee974: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ee974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ee978: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ee97c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE97Cu;
    {
        const bool branch_taken_0x1ee97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee97c) {
            ctx->pc = 0x1EE994u;
            goto label_1ee994;
        }
    }
    ctx->pc = 0x1EE984u;
    // 0x1ee984: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1ee984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ee988: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee98c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE98Cu;
    {
        const bool branch_taken_0x1ee98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee98c) {
            ctx->pc = 0x1EE99Cu;
            goto label_1ee99c;
        }
    }
    ctx->pc = 0x1EE994u;
label_1ee994:
    // 0x1ee994: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE994u;
        // 0x1ee998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE99Cu;
label_1ee99c:
    // 0x1ee99c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE99Cu;
        // 0x1ee9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE9A4u;
}

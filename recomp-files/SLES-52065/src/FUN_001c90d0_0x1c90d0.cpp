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

// Function: FUN_001c90d0
// Address: 0x1c90d0 - 0x1c911c
void FUN_001c90d0_0x1c90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c90d0_0x1c90d0");
#endif

    ctx->pc = 0x1c90d0u;

    // 0x1c90d0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c90d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c90d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c90d8: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c90dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c90dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c90e0: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c90e4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C90E4u;
    {
        const bool branch_taken_0x1c90e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90E4u;
        // 0x1c90e8: 0x8c842830  lw          $a0, 0x2830($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90e4) {
            ctx->pc = 0x1C9110u;
            goto label_1c9110;
        }
    }
    ctx->pc = 0x1C90ECu;
    // 0x1c90ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c90f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C90F0u;
    {
        const bool branch_taken_0x1c90f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F0u;
        // 0x1c90f4: 0x2482001e  addiu       $v0, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f0) {
            ctx->pc = 0x1C9108u;
            goto label_1c9108;
        }
    }
    ctx->pc = 0x1C90F8u;
    // 0x1c90f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C90F8u;
    {
        const bool branch_taken_0x1c90f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90f8) {
            ctx->pc = 0x1C9108u;
            goto label_1c9108;
        }
    }
    ctx->pc = 0x1C9100u;
    // 0x1c9100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9100u;
    {
        const bool branch_taken_0x1c9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9100u;
        // 0x1c9104: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9100) {
            ctx->pc = 0x1C9114u;
            goto label_1c9114;
        }
    }
    ctx->pc = 0x1C9108u;
label_1c9108:
    // 0x1c9108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9108u;
    {
        const bool branch_taken_0x1c9108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9108) {
            ctx->pc = 0x1C9114u;
            goto label_1c9114;
        }
    }
    ctx->pc = 0x1C9110u;
label_1c9110:
    // 0x1c9110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9114:
    // 0x1c9114: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C911Cu;
}

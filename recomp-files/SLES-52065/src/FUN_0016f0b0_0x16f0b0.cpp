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

// Function: FUN_0016f0b0
// Address: 0x16f0b0 - 0x16f0ec
void FUN_0016f0b0_0x16f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f0b0_0x16f0b0");
#endif

    ctx->pc = 0x16f0b0u;

    // 0x16f0b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f0b4: 0x2841003f  slti        $at, $v0, 0x3F
    ctx->pc = 0x16f0b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x16f0b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F0B8u;
    {
        const bool branch_taken_0x16f0b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f0b8) {
            ctx->pc = 0x16F0E0u;
            goto label_16f0e0;
        }
    }
    ctx->pc = 0x16F0C0u;
    // 0x16f0c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f0c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16f0c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x16f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x16f0cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f0d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f0d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16f0d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F0D8u;
    {
        const bool branch_taken_0x16f0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0D8u;
        // 0x16f0dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0d8) {
            ctx->pc = 0x16F0E4u;
            goto label_16f0e4;
        }
    }
    ctx->pc = 0x16F0E0u;
label_16f0e0:
    // 0x16f0e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f0e4:
    // 0x16f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F0ECu;
}

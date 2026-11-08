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

// Function: FUN_0014afe0
// Address: 0x14afe0 - 0x14b018
void FUN_0014afe0_0x14afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014afe0_0x14afe0");
#endif

    ctx->pc = 0x14afe0u;

    // 0x14afe0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14afe4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14afe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afe8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14afec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14aff0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x14aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x14aff4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14aff8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14affc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x14affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14b000: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x14b000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x14b004: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14b008: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x14b008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x14b00c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x14b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x14b010: 0x3e00008  jr          $ra
    ctx->pc = 0x14B010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B010u;
        // 0x14b014: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B018u;
}

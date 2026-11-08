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

// Function: FUN_00143ca0
// Address: 0x143ca0 - 0x143ce8
void FUN_00143ca0_0x143ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143ca0_0x143ca0");
#endif

    ctx->pc = 0x143ca0u;

    // 0x143ca0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x143ca4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ca8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x143ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x143cac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x143cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x143cb0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x143cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x143cb4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x143cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x143cb8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x143cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x143cbc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x143cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x143cc0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x143cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x143cc4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x143cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x143cc8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x143cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x143ccc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x143cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x143cd0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x143cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x143cd4: 0x90a30018  lbu         $v1, 0x18($a1)
    ctx->pc = 0x143cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x143cd8: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x143cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x143cdc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x143ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x143CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CE0u;
        // 0x143ce4: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143CE8u;
}

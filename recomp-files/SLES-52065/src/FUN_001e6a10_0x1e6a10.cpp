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

// Function: FUN_001e6a10
// Address: 0x1e6a10 - 0x1e6a44
void FUN_001e6a10_0x1e6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6a10_0x1e6a10");
#endif

    ctx->pc = 0x1e6a10u;

    // 0x1e6a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6a14: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x1e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1e6a18: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1e6a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1e6a1c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e6a20: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1e6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e6a24: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6a28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e6a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6a2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6A2Cu;
    {
        const bool branch_taken_0x1e6a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A2Cu;
        // 0x1e6a30: 0x27a20008  addiu       $v0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a2c) {
            ctx->pc = 0x1E6A38u;
            goto label_1e6a38;
        }
    }
    ctx->pc = 0x1E6A34u;
    // 0x1e6a34: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1e6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1e6a38:
    // 0x1e6a38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A3Cu;
        // 0x1e6a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6A44u;
}

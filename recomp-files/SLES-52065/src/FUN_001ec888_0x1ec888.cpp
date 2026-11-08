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

// Function: FUN_001ec888
// Address: 0x1ec888 - 0x1ec8c4
void FUN_001ec888_0x1ec888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec888_0x1ec888");
#endif

    ctx->pc = 0x1ec888u;

    // 0x1ec888: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ec888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec88c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ec890: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1ec890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ec894: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ec894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec89c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ec89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ec8a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ec8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1ec8a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ec8a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ec8ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC8ACu;
    {
        const bool branch_taken_0x1ec8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8ACu;
        // 0x1ec8b0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8ac) {
            ctx->pc = 0x1EC8BCu;
            goto label_1ec8bc;
        }
    }
    ctx->pc = 0x1EC8B4u;
    // 0x1ec8b4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ec8b8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1ec8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1ec8bc:
    // 0x1ec8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC8C4u;
}

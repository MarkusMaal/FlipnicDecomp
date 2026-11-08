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

// Function: FUN_0013f8b0
// Address: 0x13f8b0 - 0x13f8e8
void FUN_0013f8b0_0x13f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f8b0_0x13f8b0");
#endif

    ctx->pc = 0x13f8b0u;

    // 0x13f8b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f8b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13f8b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13f8bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f8c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13f8c4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x13f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x13f8c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x13f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f8cc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f8d0: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x13f8d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13f8d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F8D4u;
    {
        const bool branch_taken_0x13f8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8D4u;
        // 0x13f8d8: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8d4) {
            ctx->pc = 0x13F8E0u;
            goto label_13f8e0;
        }
    }
    ctx->pc = 0x13F8DCu;
    // 0x13f8dc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x13f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_13f8e0:
    // 0x13f8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F8E8u;
}

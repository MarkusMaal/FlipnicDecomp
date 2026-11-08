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

// Function: entry_001d44f0
// Address: 0x1d44f0 - 0x1d4518
void entry_001d44f0_0x1d44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d44f0_0x1d44f0");
#endif

    ctx->pc = 0x1d44f0u;

    // 0x1d44f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D44F0u;
    {
        const bool branch_taken_0x1d44f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44F0u;
        // 0x1d44f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44f0) {
            ctx->pc = 0x1D44D0u;
            return;
        }
    }
    ctx->pc = 0x1D44F8u;
    // 0x1d44f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d44fc: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d44fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4500u;
    {
        const bool branch_taken_0x1d4500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4500u;
        // 0x1d4504: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4500) {
            ctx->pc = 0x1D4518u;
            return;
        }
    }
    ctx->pc = 0x1D4508u;
    // 0x1d4508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d450c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d450cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d4510: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4510u;
        // 0x1d4514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4518u;
}

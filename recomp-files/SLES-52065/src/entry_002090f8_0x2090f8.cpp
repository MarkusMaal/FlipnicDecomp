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

// Function: entry_002090f8
// Address: 0x2090f8 - 0x209118
void entry_002090f8_0x2090f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002090f8_0x2090f8");
#endif

    ctx->pc = 0x2090f8u;

    // 0x2090f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2090F8u;
    {
        const bool branch_taken_0x2090f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090F8u;
        // 0x2090fc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090f8) {
            ctx->pc = 0x209128u;
            return;
        }
    }
    ctx->pc = 0x209100u;
    // 0x209100: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x209100u;
    {
        const bool branch_taken_0x209100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209100) {
            ctx->pc = 0x209104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209100u;
            // 0x209104: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209118u;
            return;
        }
    }
    ctx->pc = 0x209108u;
    // 0x209108: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20910c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209110: 0x3e00008  jr          $ra
    ctx->pc = 0x209110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209110u;
        // 0x209114: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209118u;
}

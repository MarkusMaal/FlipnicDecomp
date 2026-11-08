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

// Function: entry_001ffed8
// Address: 0x1ffed8 - 0x1ffef4
void entry_001ffed8_0x1ffed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffed8_0x1ffed8");
#endif

    ctx->pc = 0x1ffed8u;

    // 0x1ffed8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFED8u;
    {
        const bool branch_taken_0x1ffed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffed8) {
            ctx->pc = 0x1FFEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFED8u;
            // 0x1ffedc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFEF8u;
            return;
        }
    }
    ctx->pc = 0x1FFEE0u;
    // 0x1ffee0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ffee4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFEE4u;
    {
        const bool branch_taken_0x1ffee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEE4u;
        // 0x1ffee8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffee4) {
            ctx->pc = 0x1FFEF4u;
            return;
        }
    }
    ctx->pc = 0x1FFEECu;
    // 0x1ffeec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEECu;
        // 0x1ffef0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFEF4u;
}

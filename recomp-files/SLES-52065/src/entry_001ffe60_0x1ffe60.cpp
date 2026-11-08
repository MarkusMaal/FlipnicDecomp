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

// Function: entry_001ffe60
// Address: 0x1ffe60 - 0x1ffe78
void entry_001ffe60_0x1ffe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe60_0x1ffe60");
#endif

    ctx->pc = 0x1ffe60u;

    // 0x1ffe60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFE60u;
    {
        const bool branch_taken_0x1ffe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe60) {
            ctx->pc = 0x1FFE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE60u;
            // 0x1ffe64: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE78u;
            return;
        }
    }
    ctx->pc = 0x1FFE68u;
    // 0x1ffe68: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ffe6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE70u;
        // 0x1ffe74: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE78u;
}

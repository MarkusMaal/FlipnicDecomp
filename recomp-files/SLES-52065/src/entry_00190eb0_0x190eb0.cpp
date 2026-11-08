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

// Function: entry_00190eb0
// Address: 0x190eb0 - 0x190ec8
void entry_00190eb0_0x190eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190eb0_0x190eb0");
#endif

    ctx->pc = 0x190eb0u;

    // 0x190eb0: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x190eb4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x190eb8: 0x106201f7  beq         $v1, $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x190EB8u;
    {
        const bool branch_taken_0x190eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190eb8) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190EC0u;
    // 0x190ec0: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x190EC0u;
    {
        const bool branch_taken_0x190ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EC0u;
        // 0x190ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ec0) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190EC8u;
}

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

// Function: entry_001d5aa0
// Address: 0x1d5aa0 - 0x1d5ab0
void entry_001d5aa0_0x1d5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5aa0_0x1d5aa0");
#endif

    ctx->pc = 0x1d5aa0u;

    // 0x1d5aa0: 0x120200a7  beq         $s0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1D5AA0u;
    {
        const bool branch_taken_0x1d5aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AA0u;
        // 0x1d5aa4: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5aa0) {
            ctx->pc = 0x1D5D40u;
            return;
        }
    }
    ctx->pc = 0x1D5AA8u;
    // 0x1d5aa8: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1D5AA8u;
    {
        const bool branch_taken_0x1d5aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5aa8) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5AB0u;
}

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

// Function: entry_001f7a6c
// Address: 0x1f7a6c - 0x1f7a78
void entry_001f7a6c_0x1f7a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7a6c_0x1f7a6c");
#endif

    ctx->pc = 0x1f7a6cu;

    // 0x1f7a6c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F7A6Cu;
    {
        const bool branch_taken_0x1f7a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A6Cu;
        // 0x1f7a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a6c) {
            ctx->pc = 0x1F79E0u;
            return;
        }
    }
    ctx->pc = 0x1F7A74u;
    // 0x1f7a74: 0xae40bb4c  sw          $zero, -0x44B4($s2)
    ctx->pc = 0x1f7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949708), GPR_U32(ctx, 0));
    ctx->pc = 0x1f7a78u;
}

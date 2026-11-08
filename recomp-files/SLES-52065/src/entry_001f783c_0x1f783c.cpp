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

// Function: entry_001f783c
// Address: 0x1f783c - 0x1f7848
void entry_001f783c_0x1f783c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f783c_0x1f783c");
#endif

    ctx->pc = 0x1f783cu;

    // 0x1f783c: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f783cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f7840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7840u;
    {
        const bool branch_taken_0x1f7840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7840u;
        // 0x1f7844: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7840) {
            ctx->pc = 0x1F7850u;
            return;
        }
    }
    ctx->pc = 0x1F7848u;
}

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

// Function: entry_001f9fb0
// Address: 0x1f9fb0 - 0x1f9fc0
void entry_001f9fb0_0x1f9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9fb0_0x1f9fb0");
#endif

    ctx->pc = 0x1f9fb0u;

    // 0x1f9fb0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9FB0u;
    {
        const bool branch_taken_0x1f9fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9fb0) {
            ctx->pc = 0x1F9FD4u;
            return;
        }
    }
    ctx->pc = 0x1F9FB8u;
    // 0x1f9fb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9FB8u;
    {
        const bool branch_taken_0x1f9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fb8) {
            ctx->pc = 0x1F9FFCu;
            return;
        }
    }
    ctx->pc = 0x1F9FC0u;
}

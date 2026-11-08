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

// Function: entry_001f79b8
// Address: 0x1f79b8 - 0x1f79c0
void entry_001f79b8_0x1f79b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f79b8_0x1f79b8");
#endif

    ctx->pc = 0x1f79b8u;

    // 0x1f79b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F79B8u;
    {
        const bool branch_taken_0x1f79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B8u;
        // 0x1f79bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79b8) {
            ctx->pc = 0x1F7A78u;
            return;
        }
    }
    ctx->pc = 0x1F79C0u;
}

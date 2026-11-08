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

// Function: entry_001946c0
// Address: 0x1946c0 - 0x1946c8
void entry_001946c0_0x1946c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001946c0_0x1946c0");
#endif

    ctx->pc = 0x1946c0u;

    // 0x1946c0: 0x100005ac  b           . + 4 + (0x5AC << 2)
    ctx->pc = 0x1946C0u;
    {
        const bool branch_taken_0x1946c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946C0u;
        // 0x1946c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946c0) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1946C8u;
}

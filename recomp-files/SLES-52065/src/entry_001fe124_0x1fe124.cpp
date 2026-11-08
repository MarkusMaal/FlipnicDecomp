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

// Function: entry_001fe124
// Address: 0x1fe124 - 0x1fe12c
void entry_001fe124_0x1fe124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe124_0x1fe124");
#endif

    ctx->pc = 0x1fe124u;

    // 0x1fe124: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FE124u;
    {
        const bool branch_taken_0x1fe124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE124u;
        // 0x1fe128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe124) {
            ctx->pc = 0x1FE198u;
            return;
        }
    }
    ctx->pc = 0x1FE12Cu;
}

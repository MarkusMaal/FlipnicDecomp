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

// Function: entry_0012f9dc
// Address: 0x12f9dc - 0x12f9e4
void entry_0012f9dc_0x12f9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f9dc_0x12f9dc");
#endif

    ctx->pc = 0x12f9dcu;

    // 0x12f9dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12F9DCu;
    {
        const bool branch_taken_0x12f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9DCu;
        // 0x12f9e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9dc) {
            ctx->pc = 0x12FA00u;
            return;
        }
    }
    ctx->pc = 0x12F9E4u;
}

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

// Function: entry_001a2434
// Address: 0x1a2434 - 0x1a2440
void entry_001a2434_0x1a2434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2434_0x1a2434");
#endif

    ctx->pc = 0x1a2434u;

    // 0x1a2434: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1A2434u;
    {
        const bool branch_taken_0x1a2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2434u;
        // 0x1a2438: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2434) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A243Cu;
    // 0x1a243c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a243cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2440u;
}

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

// Function: entry_0010279c
// Address: 0x10279c - 0x1027a4
void entry_0010279c_0x10279c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010279c_0x10279c");
#endif

    ctx->pc = 0x10279cu;

    // 0x10279c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x10279Cu;
    {
        const bool branch_taken_0x10279c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10279Cu;
        // 0x1027a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10279c) {
            ctx->pc = 0x1027E8u;
            return;
        }
    }
    ctx->pc = 0x1027A4u;
}

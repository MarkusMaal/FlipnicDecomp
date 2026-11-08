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

// Function: entry_00113568
// Address: 0x113568 - 0x113574
void entry_00113568_0x113568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113568_0x113568");
#endif

    ctx->pc = 0x113568u;

    // 0x113568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11356c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11356Cu;
    {
        const bool branch_taken_0x11356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11356Cu;
        // 0x113570: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11356c) {
            ctx->pc = 0x1135E0u;
            return;
        }
    }
    ctx->pc = 0x113574u;
}

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

// Function: entry_0011351c
// Address: 0x11351c - 0x113528
void entry_0011351c_0x11351c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011351c_0x11351c");
#endif

    ctx->pc = 0x11351cu;

    // 0x11351c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x11351Cu;
    {
        const bool branch_taken_0x11351c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11351Cu;
        // 0x113520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11351c) {
            ctx->pc = 0x113568u;
            return;
        }
    }
    ctx->pc = 0x113524u;
    // 0x113524: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113528u;
}

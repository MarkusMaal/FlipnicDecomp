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

// Function: entry_0011258c
// Address: 0x11258c - 0x11259c
void entry_0011258c_0x11258c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011258c_0x11258c");
#endif

    ctx->pc = 0x11258cu;

    // 0x11258c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11258Cu;
    {
        const bool branch_taken_0x11258c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11258Cu;
        // 0x112590: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11258c) {
            ctx->pc = 0x1125C0u;
            return;
        }
    }
    ctx->pc = 0x112594u;
    // 0x112594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112594u;
    {
        const bool branch_taken_0x112594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112594) {
            ctx->pc = 0x1125A8u;
            return;
        }
    }
    ctx->pc = 0x11259Cu;
}

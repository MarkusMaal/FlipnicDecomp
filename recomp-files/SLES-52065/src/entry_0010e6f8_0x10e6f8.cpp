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

// Function: entry_0010e6f8
// Address: 0x10e6f8 - 0x10e704
void entry_0010e6f8_0x10e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e6f8_0x10e6f8");
#endif

    ctx->pc = 0x10e6f8u;

    // 0x10e6f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10E6FCu;
    {
        const bool branch_taken_0x10e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6FCu;
        // 0x10e700: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6fc) {
            ctx->pc = 0x10E74Cu;
            return;
        }
    }
    ctx->pc = 0x10E704u;
}

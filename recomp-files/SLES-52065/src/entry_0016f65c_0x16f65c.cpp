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

// Function: entry_0016f65c
// Address: 0x16f65c - 0x16f66c
void entry_0016f65c_0x16f65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f65c_0x16f65c");
#endif

    ctx->pc = 0x16f65cu;

    // 0x16f65c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F65Cu;
    {
        const bool branch_taken_0x16f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f65c) {
            ctx->pc = 0x16F66Cu;
            return;
        }
    }
    ctx->pc = 0x16F664u;
    // 0x16f664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F664u;
    {
        const bool branch_taken_0x16f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F664u;
        // 0x16f668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f664) {
            ctx->pc = 0x16F670u;
            return;
        }
    }
    ctx->pc = 0x16F66Cu;
}

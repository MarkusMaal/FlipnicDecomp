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

// Function: entry_00112f60
// Address: 0x112f60 - 0x112f6c
void entry_00112f60_0x112f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f60_0x112f60");
#endif

    ctx->pc = 0x112f60u;

    // 0x112f60: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x112F60u;
    {
        const bool branch_taken_0x112f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F60u;
        // 0x112f64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f60) {
            ctx->pc = 0x112FACu;
            return;
        }
    }
    ctx->pc = 0x112F68u;
    // 0x112f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x112f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112f6cu;
}

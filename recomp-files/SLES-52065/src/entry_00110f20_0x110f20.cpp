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

// Function: entry_00110f20
// Address: 0x110f20 - 0x110f2c
void entry_00110f20_0x110f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f20_0x110f20");
#endif

    ctx->pc = 0x110f20u;

    // 0x110f20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x110f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x110F24u;
    {
        const bool branch_taken_0x110f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F24u;
        // 0x110f28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f24) {
            ctx->pc = 0x110F88u;
            return;
        }
    }
    ctx->pc = 0x110F2Cu;
}

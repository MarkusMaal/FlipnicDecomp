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

// Function: entry_001cd57c
// Address: 0x1cd57c - 0x1cd588
void entry_001cd57c_0x1cd57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd57c_0x1cd57c");
#endif

    ctx->pc = 0x1cd57cu;

    // 0x1cd57c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD57Cu;
    {
        const bool branch_taken_0x1cd57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD57Cu;
        // 0x1cd580: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd57c) {
            ctx->pc = 0x1CD588u;
            return;
        }
    }
    ctx->pc = 0x1CD584u;
    // 0x1cd584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd588u;
}

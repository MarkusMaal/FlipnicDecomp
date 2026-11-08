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

// Function: entry_0012cfa0
// Address: 0x12cfa0 - 0x12cfa8
void entry_0012cfa0_0x12cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cfa0_0x12cfa0");
#endif

    ctx->pc = 0x12cfa0u;

    // 0x12cfa0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x12CFA0u;
    {
        const bool branch_taken_0x12cfa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFA0u;
        // 0x12cfa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfa0) {
            ctx->pc = 0x12D050u;
            return;
        }
    }
    ctx->pc = 0x12CFA8u;
}

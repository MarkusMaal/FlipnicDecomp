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

// Function: entry_001899f8
// Address: 0x1899f8 - 0x189a08
void entry_001899f8_0x1899f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001899f8_0x1899f8");
#endif

    ctx->pc = 0x1899f8u;

    // 0x1899f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1899F8u;
    {
        const bool branch_taken_0x1899f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899f8) {
            ctx->pc = 0x189A08u;
            return;
        }
    }
    ctx->pc = 0x189A00u;
    // 0x189a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189A00u;
    {
        const bool branch_taken_0x189a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A00u;
        // 0x189a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a00) {
            ctx->pc = 0x189A10u;
            return;
        }
    }
    ctx->pc = 0x189A08u;
}

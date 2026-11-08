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

// Function: entry_0019db58
// Address: 0x19db58 - 0x19db60
void entry_0019db58_0x19db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019db58_0x19db58");
#endif

    ctx->pc = 0x19db58u;

    // 0x19db58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19DB58u;
    {
        const bool branch_taken_0x19db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB58u;
        // 0x19db5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db58) {
            ctx->pc = 0x19DBC0u;
            return;
        }
    }
    ctx->pc = 0x19DB60u;
}

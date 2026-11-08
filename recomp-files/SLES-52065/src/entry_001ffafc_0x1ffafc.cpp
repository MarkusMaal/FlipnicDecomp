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

// Function: entry_001ffafc
// Address: 0x1ffafc - 0x1ffb04
void entry_001ffafc_0x1ffafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffafc_0x1ffafc");
#endif

    ctx->pc = 0x1ffafcu;

    // 0x1ffafc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFAFCu;
    {
        const bool branch_taken_0x1ffafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAFCu;
        // 0x1ffb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffafc) {
            ctx->pc = 0x1FFB14u;
            return;
        }
    }
    ctx->pc = 0x1FFB04u;
}

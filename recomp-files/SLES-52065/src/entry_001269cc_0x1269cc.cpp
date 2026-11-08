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

// Function: entry_001269cc
// Address: 0x1269cc - 0x1269d4
void entry_001269cc_0x1269cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001269cc_0x1269cc");
#endif

    ctx->pc = 0x1269ccu;

    // 0x1269cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1269CCu;
    {
        const bool branch_taken_0x1269cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269cc) {
            ctx->pc = 0x126A38u;
            return;
        }
    }
    ctx->pc = 0x1269D4u;
}

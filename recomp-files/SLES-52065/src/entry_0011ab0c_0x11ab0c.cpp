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

// Function: entry_0011ab0c
// Address: 0x11ab0c - 0x11ab14
void entry_0011ab0c_0x11ab0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab0c_0x11ab0c");
#endif

    ctx->pc = 0x11ab0cu;

    // 0x11ab0c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11AB0Cu;
    {
        const bool branch_taken_0x11ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB0Cu;
        // 0x11ab10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab0c) {
            ctx->pc = 0x11AB58u;
            return;
        }
    }
    ctx->pc = 0x11AB14u;
}

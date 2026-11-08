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

// Function: entry_00133e30
// Address: 0x133e30 - 0x133e38
void entry_00133e30_0x133e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e30_0x133e30");
#endif

    ctx->pc = 0x133e30u;

    // 0x133e30: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x133E30u;
    {
        const bool branch_taken_0x133e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E30u;
        // 0x133e34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e30) {
            ctx->pc = 0x133EACu;
            return;
        }
    }
    ctx->pc = 0x133E38u;
}

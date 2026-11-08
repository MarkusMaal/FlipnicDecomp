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

// Function: entry_00125544
// Address: 0x125544 - 0x12554c
void entry_00125544_0x125544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125544_0x125544");
#endif

    ctx->pc = 0x125544u;

    // 0x125544: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x125544u;
    {
        const bool branch_taken_0x125544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125544u;
        // 0x125548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125544) {
            ctx->pc = 0x1256E4u;
            return;
        }
    }
    ctx->pc = 0x12554Cu;
}

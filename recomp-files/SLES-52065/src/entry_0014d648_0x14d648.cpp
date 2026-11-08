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

// Function: entry_0014d648
// Address: 0x14d648 - 0x14d654
void entry_0014d648_0x14d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d648_0x14d648");
#endif

    ctx->pc = 0x14d648u;

    // 0x14d648: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x14D648u;
    {
        const bool branch_taken_0x14d648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D648u;
        // 0x14d64c: 0x3c021555  lui         $v0, 0x1555 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d648) {
            ctx->pc = 0x14D684u;
            return;
        }
    }
    ctx->pc = 0x14D650u;
    // 0x14d650: 0x3c010aaa  lui         $at, 0xAAA
    ctx->pc = 0x14d650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
    ctx->pc = 0x14d654u;
}

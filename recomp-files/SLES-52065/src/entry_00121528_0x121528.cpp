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

// Function: entry_00121528
// Address: 0x121528 - 0x121534
void entry_00121528_0x121528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121528_0x121528");
#endif

    ctx->pc = 0x121528u;

    // 0x121528: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x121528u;
    {
        const bool branch_taken_0x121528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121528u;
        // 0x12152c: 0x3c023fff  lui         $v0, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121528) {
            ctx->pc = 0x121564u;
            return;
        }
    }
    ctx->pc = 0x121530u;
    // 0x121530: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x121530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
    ctx->pc = 0x121534u;
}

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

// Function: entry_00144010
// Address: 0x144010 - 0x14401c
void entry_00144010_0x144010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144010_0x144010");
#endif

    ctx->pc = 0x144010u;

    // 0x144010: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x144010u;
    {
        const bool branch_taken_0x144010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144010u;
        // 0x144014: 0x3c0207ff  lui         $v0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144010) {
            ctx->pc = 0x14404Cu;
            return;
        }
    }
    ctx->pc = 0x144018u;
    // 0x144018: 0x3c0103ff  lui         $at, 0x3FF
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
    ctx->pc = 0x14401cu;
}

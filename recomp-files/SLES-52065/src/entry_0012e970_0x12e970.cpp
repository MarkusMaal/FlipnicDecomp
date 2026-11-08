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

// Function: entry_0012e970
// Address: 0x12e970 - 0x12e97c
void entry_0012e970_0x12e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e970_0x12e970");
#endif

    ctx->pc = 0x12e970u;

    // 0x12e970: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x12E970u;
    {
        const bool branch_taken_0x12e970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E970u;
        // 0x12e974: 0x3c0207ff  lui         $v0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e970) {
            ctx->pc = 0x12E9ACu;
            return;
        }
    }
    ctx->pc = 0x12E978u;
    // 0x12e978: 0x3c0103ff  lui         $at, 0x3FF
    ctx->pc = 0x12e978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
    ctx->pc = 0x12e97cu;
}

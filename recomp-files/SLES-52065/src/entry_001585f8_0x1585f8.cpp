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

// Function: entry_001585f8
// Address: 0x1585f8 - 0x158604
void entry_001585f8_0x1585f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001585f8_0x1585f8");
#endif

    ctx->pc = 0x1585f8u;

    // 0x1585f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1585f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1585fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1585FCu;
    {
        const bool branch_taken_0x1585fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585FCu;
        // 0x158600: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585fc) {
            ctx->pc = 0x1585C8u;
            return;
        }
    }
    ctx->pc = 0x158604u;
}

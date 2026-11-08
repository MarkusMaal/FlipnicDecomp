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

// Function: entry_001f6500
// Address: 0x1f6500 - 0x1f650c
void entry_001f6500_0x1f6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6500_0x1f6500");
#endif

    ctx->pc = 0x1f6500u;

    // 0x1f6500: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f6500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6504u;
    {
        const bool branch_taken_0x1f6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6504u;
        // 0x1f6508: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6504) {
            ctx->pc = 0x1F6518u;
            return;
        }
    }
    ctx->pc = 0x1F650Cu;
}

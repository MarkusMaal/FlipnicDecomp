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

// Function: entry_0015df60
// Address: 0x15df60 - 0x15df6c
void entry_0015df60_0x15df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df60_0x15df60");
#endif

    ctx->pc = 0x15df60u;

    // 0x15df60: 0x1b0082a  slt         $at, $t5, $s0
    ctx->pc = 0x15df60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15df64: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15DF64u;
    {
        const bool branch_taken_0x15df64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF64u;
        // 0x15df68: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df64) {
            ctx->pc = 0x15DFB0u;
            return;
        }
    }
    ctx->pc = 0x15DF6Cu;
}

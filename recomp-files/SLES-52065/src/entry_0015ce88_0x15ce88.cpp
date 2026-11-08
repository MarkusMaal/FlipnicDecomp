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

// Function: entry_0015ce88
// Address: 0x15ce88 - 0x15ce98
void entry_0015ce88_0x15ce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce88_0x15ce88");
#endif

    ctx->pc = 0x15ce88u;

    // 0x15ce88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15ce8c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15ce8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15ce90: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x15CE90u;
    {
        const bool branch_taken_0x15ce90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE90u;
        // 0x15ce94: 0x27de0050  addiu       $fp, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce90) {
            ctx->pc = 0x15CDC0u;
            return;
        }
    }
    ctx->pc = 0x15CE98u;
}

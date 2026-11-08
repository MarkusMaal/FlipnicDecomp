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

// Function: entry_0015ce78
// Address: 0x15ce78 - 0x15ce88
void entry_0015ce78_0x15ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce78_0x15ce78");
#endif

    ctx->pc = 0x15ce78u;

    // 0x15ce78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15ce78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15ce7c: 0x292182a  slt         $v1, $s4, $s2
    ctx->pc = 0x15ce7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15ce80: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15CE80u;
    {
        const bool branch_taken_0x15ce80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE80u;
        // 0x15ce84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce80) {
            ctx->pc = 0x15CE44u;
            return;
        }
    }
    ctx->pc = 0x15CE88u;
}

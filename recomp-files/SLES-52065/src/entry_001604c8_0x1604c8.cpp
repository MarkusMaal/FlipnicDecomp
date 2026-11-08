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

// Function: entry_001604c8
// Address: 0x1604c8 - 0x1604d8
void entry_001604c8_0x1604c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001604c8_0x1604c8");
#endif

    ctx->pc = 0x1604c8u;

    // 0x1604c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1604cc: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1604d0: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1604D0u;
    {
        const bool branch_taken_0x1604d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604D0u;
        // 0x1604d4: 0x256b0050  addiu       $t3, $t3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604d0) {
            ctx->pc = 0x160474u;
            return;
        }
    }
    ctx->pc = 0x1604D8u;
}

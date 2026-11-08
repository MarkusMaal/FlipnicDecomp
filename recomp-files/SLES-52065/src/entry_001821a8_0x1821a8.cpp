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

// Function: entry_001821a8
// Address: 0x1821a8 - 0x1821b8
void entry_001821a8_0x1821a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001821a8_0x1821a8");
#endif

    ctx->pc = 0x1821a8u;

    // 0x1821a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1821ac: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1821acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1821b0: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1821B0u;
    {
        const bool branch_taken_0x1821b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1821B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821B0u;
        // 0x1821b4: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821b0) {
            ctx->pc = 0x182134u;
            return;
        }
    }
    ctx->pc = 0x1821B8u;
}

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

// Function: entry_0015d42c
// Address: 0x15d42c - 0x15d440
void entry_0015d42c_0x15d42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d42c_0x15d42c");
#endif

    ctx->pc = 0x15d42cu;

    // 0x15d42c: 0x0  nop
    ctx->pc = 0x15d42cu;
    // NOP
    // 0x15d430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15d434: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x15d434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x15d438: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x15D438u;
    {
        const bool branch_taken_0x15d438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D438u;
        // 0x15d43c: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d438) {
            ctx->pc = 0x15D3A8u;
            return;
        }
    }
    ctx->pc = 0x15D440u;
}

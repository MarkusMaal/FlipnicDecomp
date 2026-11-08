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

// Function: entry_001228d0
// Address: 0x1228d0 - 0x1228ec
void entry_001228d0_0x1228d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228d0_0x1228d0");
#endif

    ctx->pc = 0x1228d0u;

    // 0x1228d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1228d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1228d4: 0x0  nop
    ctx->pc = 0x1228d4u;
    // NOP
    // 0x1228d8: 0x0  nop
    ctx->pc = 0x1228d8u;
    // NOP
    // 0x1228dc: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1228DCu;
    {
        const bool branch_taken_0x1228dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1228dc) {
            ctx->pc = 0x1228CCu;
            return;
        }
    }
    ctx->pc = 0x1228E4u;
    // 0x1228e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1228E4u;
    {
        const bool branch_taken_0x1228e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228E4u;
        // 0x1228e8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228e4) {
            ctx->pc = 0x122910u;
            return;
        }
    }
    ctx->pc = 0x1228ECu;
}

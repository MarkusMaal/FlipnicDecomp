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

// Function: entry_0015d314
// Address: 0x15d314 - 0x15d328
void entry_0015d314_0x15d314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d314_0x15d314");
#endif

    ctx->pc = 0x15d314u;

    // 0x15d314: 0x0  nop
    ctx->pc = 0x15d314u;
    // NOP
    // 0x15d318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15d31c: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x15d31cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x15d320: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x15D320u;
    {
        const bool branch_taken_0x15d320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D320u;
        // 0x15d324: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d320) {
            ctx->pc = 0x15D26Cu;
            return;
        }
    }
    ctx->pc = 0x15D328u;
}

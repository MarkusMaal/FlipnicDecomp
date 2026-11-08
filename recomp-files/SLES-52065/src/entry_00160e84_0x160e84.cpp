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

// Function: entry_00160e84
// Address: 0x160e84 - 0x160e9c
void entry_00160e84_0x160e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e84_0x160e84");
#endif

    ctx->pc = 0x160e84u;

    // 0x160e84: 0x0  nop
    ctx->pc = 0x160e84u;
    // NOP
    // 0x160e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160e8c: 0x49182a  slt         $v1, $v0, $t1
    ctx->pc = 0x160e8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x160e90: 0x258c0050  addiu       $t4, $t4, 0x50
    ctx->pc = 0x160e90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x160e94: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x160E94u;
    {
        const bool branch_taken_0x160e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E94u;
        // 0x160e98: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e94) {
            ctx->pc = 0x160DD8u;
            return;
        }
    }
    ctx->pc = 0x160E9Cu;
}

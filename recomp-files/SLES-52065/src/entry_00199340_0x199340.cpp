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

// Function: entry_00199340
// Address: 0x199340 - 0x199350
void entry_00199340_0x199340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199340_0x199340");
#endif

    ctx->pc = 0x199340u;

    // 0x199340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x199344: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x199344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x199348: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x199348u;
    {
        const bool branch_taken_0x199348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199348u;
        // 0x19934c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199348) {
            ctx->pc = 0x1992ACu;
            return;
        }
    }
    ctx->pc = 0x199350u;
}

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

// Function: entry_00160330
// Address: 0x160330 - 0x160340
void entry_00160330_0x160330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160330_0x160330");
#endif

    ctx->pc = 0x160330u;

    // 0x160330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x160334: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x160334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x160338: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x160338u;
    {
        const bool branch_taken_0x160338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160338u;
        // 0x16033c: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160338) {
            ctx->pc = 0x1602ACu;
            return;
        }
    }
    ctx->pc = 0x160340u;
}

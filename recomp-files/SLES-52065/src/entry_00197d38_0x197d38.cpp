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

// Function: entry_00197d38
// Address: 0x197d38 - 0x197d44
void entry_00197d38_0x197d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d38_0x197d38");
#endif

    ctx->pc = 0x197d38u;

    // 0x197d38: 0x207302a  slt         $a2, $s0, $a3
    ctx->pc = 0x197d38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x197d3c: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x197D3Cu;
    {
        const bool branch_taken_0x197d3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D3Cu;
        // 0x197d40: 0x2a93021  addu        $a2, $s5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d3c) {
            ctx->pc = 0x197C84u;
            return;
        }
    }
    ctx->pc = 0x197D44u;
}

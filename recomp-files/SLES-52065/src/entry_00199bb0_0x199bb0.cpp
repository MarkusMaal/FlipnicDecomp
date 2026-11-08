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

// Function: entry_00199bb0
// Address: 0x199bb0 - 0x199bc0
void entry_00199bb0_0x199bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199bb0_0x199bb0");
#endif

    ctx->pc = 0x199bb0u;

    // 0x199bb0: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x199bb4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x199bb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199bb8: 0x1460ff64  bnez        $v1, . + 4 + (-0x9C << 2)
    ctx->pc = 0x199BB8u;
    {
        const bool branch_taken_0x199bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BB8u;
        // 0x199bbc: 0x296a821  addu        $s5, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bb8) {
            ctx->pc = 0x19994Cu;
            return;
        }
    }
    ctx->pc = 0x199BC0u;
}

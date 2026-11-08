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

// Function: entry_0018f060
// Address: 0x18f060 - 0x18f070
void entry_0018f060_0x18f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f060_0x18f060");
#endif

    ctx->pc = 0x18f060u;

    // 0x18f060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f064: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x18f064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x18f068: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x18F068u;
    {
        const bool branch_taken_0x18f068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F068u;
        // 0x18f06c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f068) {
            ctx->pc = 0x18EFF0u;
            return;
        }
    }
    ctx->pc = 0x18F070u;
}

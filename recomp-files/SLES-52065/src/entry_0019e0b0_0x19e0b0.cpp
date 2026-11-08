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

// Function: entry_0019e0b0
// Address: 0x19e0b0 - 0x19e0d0
void entry_0019e0b0_0x19e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0b0_0x19e0b0");
#endif

    ctx->pc = 0x19e0b0u;

label_19e0b0:
    // 0x19e0b0: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x19e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19e0b4: 0x8c420984  lw          $v0, 0x984($v0)
    ctx->pc = 0x19e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2436)));
    // 0x19e0b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E0B8u;
    {
        const bool branch_taken_0x19e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0b8) {
            ctx->pc = 0x19E0D0u;
            return;
        }
    }
    ctx->pc = 0x19E0C0u;
    // 0x19e0c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19e0c4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x19e0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e0c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E0C8u;
    {
        const bool branch_taken_0x19e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0C8u;
        // 0x19e0cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0c8) {
            ctx->pc = 0x19E0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e0b0;
        }
    }
    ctx->pc = 0x19E0D0u;
}

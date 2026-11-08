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

// Function: entry_0016af28
// Address: 0x16af28 - 0x16af44
void entry_0016af28_0x16af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af28_0x16af28");
#endif

    ctx->pc = 0x16af28u;

    // 0x16af28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16af2c: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x16af2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16af30: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16af30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16af34: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF34u;
    {
        const bool branch_taken_0x16af34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af34) {
            ctx->pc = 0x16AF44u;
            return;
        }
    }
    ctx->pc = 0x16AF3Cu;
    // 0x16af3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AF3Cu;
    {
        const bool branch_taken_0x16af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF3Cu;
        // 0x16af40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af3c) {
            ctx->pc = 0x16AF48u;
            return;
        }
    }
    ctx->pc = 0x16AF44u;
}

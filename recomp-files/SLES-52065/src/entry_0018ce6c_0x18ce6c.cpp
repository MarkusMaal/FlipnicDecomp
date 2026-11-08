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

// Function: entry_0018ce6c
// Address: 0x18ce6c - 0x18ce84
void entry_0018ce6c_0x18ce6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce6c_0x18ce6c");
#endif

    ctx->pc = 0x18ce6cu;

    // 0x18ce6c: 0x8e03271c  lw          $v1, 0x271C($s0)
    ctx->pc = 0x18ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10012)));
    // 0x18ce70: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x18ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x18ce74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE74u;
    {
        const bool branch_taken_0x18ce74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ce74) {
            ctx->pc = 0x18CE84u;
            return;
        }
    }
    ctx->pc = 0x18CE7Cu;
    // 0x18ce7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE7Cu;
    {
        const bool branch_taken_0x18ce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE7Cu;
        // 0x18ce80: 0x8e020474  lw          $v0, 0x474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce7c) {
            ctx->pc = 0x18CE8Cu;
            return;
        }
    }
    ctx->pc = 0x18CE84u;
}

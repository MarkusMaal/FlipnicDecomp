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

// Function: entry_0019a080
// Address: 0x19a080 - 0x19a09c
void entry_0019a080_0x19a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a080_0x19a080");
#endif

    ctx->pc = 0x19a080u;

    // 0x19a080: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x19a084: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x19a084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a088: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A088u;
    {
        const bool branch_taken_0x19a088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A088u;
        // 0x19a08c: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a088) {
            ctx->pc = 0x19A074u;
            return;
        }
    }
    ctx->pc = 0x19A090u;
    // 0x19a090: 0xac800344  sw          $zero, 0x344($a0)
    ctx->pc = 0x19a090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 0));
    // 0x19a094: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A094u;
    {
        const bool branch_taken_0x19a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A094u;
        // 0x19a098: 0xac800670  sw          $zero, 0x670($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a094) {
            ctx->pc = 0x19A0A0u;
            return;
        }
    }
    ctx->pc = 0x19A09Cu;
}

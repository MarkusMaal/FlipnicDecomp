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

// Function: entry_001a9068
// Address: 0x1a9068 - 0x1a9088
void entry_001a9068_0x1a9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9068_0x1a9068");
#endif

    ctx->pc = 0x1a9068u;

    // 0x1a9068: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a906c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9070: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9070u;
    {
        const bool branch_taken_0x1a9070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9070u;
        // 0x1a9074: 0xb11024  and         $v0, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9070) {
            ctx->pc = 0x1A9088u;
            return;
        }
    }
    ctx->pc = 0x1A9078u;
    // 0x1a9078: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x1a9078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1a907c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A907Cu;
    {
        const bool branch_taken_0x1a907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A907Cu;
        // 0x1a9080: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a907c) {
            ctx->pc = 0x1A90A0u;
            return;
        }
    }
    ctx->pc = 0x1A9084u;
    // 0x1a9084: 0xb11024  and         $v0, $a1, $s1
    ctx->pc = 0x1a9084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    ctx->pc = 0x1a9088u;
}

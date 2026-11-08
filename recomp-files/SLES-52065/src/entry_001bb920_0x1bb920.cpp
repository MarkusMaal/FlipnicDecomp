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

// Function: entry_001bb920
// Address: 0x1bb920 - 0x1bb944
void entry_001bb920_0x1bb920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb920_0x1bb920");
#endif

    ctx->pc = 0x1bb920u;

    // 0x1bb920: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb924: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb928: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1bb928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bb92c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1bb930: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1bb930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb934: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bb938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BB938u;
    {
        const bool branch_taken_0x1bb938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB938u;
        // 0x1bb93c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb938) {
            ctx->pc = 0x1BB9C4u;
            return;
        }
    }
    ctx->pc = 0x1BB940u;
    // 0x1bb940: 0x24740008  addiu       $s4, $v1, 0x8
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    ctx->pc = 0x1bb944u;
}

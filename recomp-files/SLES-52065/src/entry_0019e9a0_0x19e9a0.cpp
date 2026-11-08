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

// Function: entry_0019e9a0
// Address: 0x19e9a0 - 0x19e9bc
void entry_0019e9a0_0x19e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9a0_0x19e9a0");
#endif

    ctx->pc = 0x19e9a0u;

    // 0x19e9a0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9a4: 0x2443284c  addiu       $v1, $v0, 0x284C
    ctx->pc = 0x19e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10316));
    // 0x19e9a8: 0x8c42284c  lw          $v0, 0x284C($v0)
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10316)));
    // 0x19e9ac: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x19e9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19e9b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E9B0u;
    {
        const bool branch_taken_0x19e9b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9B0u;
        // 0x19e9b4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9b0) {
            ctx->pc = 0x19E9BCu;
            return;
        }
    }
    ctx->pc = 0x19E9B8u;
    // 0x19e9b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19e9bcu;
}

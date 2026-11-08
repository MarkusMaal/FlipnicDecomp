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

// Function: entry_001b16c8
// Address: 0x1b16c8 - 0x1b16e0
void entry_001b16c8_0x1b16c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b16c8_0x1b16c8");
#endif

    ctx->pc = 0x1b16c8u;

    // 0x1b16c8: 0x8f908714  lw          $s0, -0x78EC($gp)
    ctx->pc = 0x1b16c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b16cc: 0x8e06284c  lw          $a2, 0x284C($s0)
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10316)));
    // 0x1b16d0: 0x28c103e8  slti        $at, $a2, 0x3E8
    ctx->pc = 0x1b16d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1b16d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B16D4u;
    {
        const bool branch_taken_0x1b16d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D4u;
        // 0x1b16d8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d4) {
            ctx->pc = 0x1B16E0u;
            return;
        }
    }
    ctx->pc = 0x1B16DCu;
    // 0x1b16dc: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x1b16dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->pc = 0x1b16e0u;
}

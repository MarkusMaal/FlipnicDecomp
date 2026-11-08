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

// Function: entry_0019f2c4
// Address: 0x19f2c4 - 0x19f2f0
void entry_0019f2c4_0x19f2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2c4_0x19f2c4");
#endif

    ctx->pc = 0x19f2c4u;

    // 0x19f2c4: 0x106001bf  beqz        $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x19F2C4u;
    {
        const bool branch_taken_0x19f2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2c4) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F2CCu;
    // 0x19f2cc: 0x8e830690  lw          $v1, 0x690($s4)
    ctx->pc = 0x19f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x19f2d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f2d4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19F2D4u;
    {
        const bool branch_taken_0x19f2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f2d4) {
            ctx->pc = 0x19F310u;
            return;
        }
    }
    ctx->pc = 0x19F2DCu;
    // 0x19f2dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F2DCu;
    {
        const bool branch_taken_0x19f2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2dc) {
            ctx->pc = 0x19F2F0u;
            return;
        }
    }
    ctx->pc = 0x19F2E4u;
    // 0x19f2e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19f2e8: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x19F2E8u;
    SET_GPR_U32(ctx, 31, 0x19F2F0u);
    ctx->pc = 0x19F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2E8u;
    // 0x19f2ec: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F2E8u, 0x19F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2F0u;
}

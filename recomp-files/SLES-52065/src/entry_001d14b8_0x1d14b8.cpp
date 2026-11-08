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

// Function: entry_001d14b8
// Address: 0x1d14b8 - 0x1d14e0
void entry_001d14b8_0x1d14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d14b8_0x1d14b8");
#endif

    ctx->pc = 0x1d14b8u;

    // 0x1d14b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d14bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d14c0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d14c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d14c8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D14C8u;
    {
        const bool branch_taken_0x1d14c8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d14c8) {
            ctx->pc = 0x1D14E8u;
            return;
        }
    }
    ctx->pc = 0x1D14D0u;
    // 0x1d14d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d14d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d14d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D14D8u;
    {
        const bool branch_taken_0x1d14d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14D8u;
        // 0x1d14dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14d8) {
            ctx->pc = 0x1D14E8u;
            return;
        }
    }
    ctx->pc = 0x1D14E0u;
}

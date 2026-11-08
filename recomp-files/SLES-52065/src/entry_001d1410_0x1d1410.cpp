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

// Function: entry_001d1410
// Address: 0x1d1410 - 0x1d1438
void entry_001d1410_0x1d1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1410_0x1d1410");
#endif

    ctx->pc = 0x1d1410u;

    // 0x1d1410: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d1414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1418: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d1418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d141c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d1420: 0x1c400031  bgtz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D1420u;
    {
        const bool branch_taken_0x1d1420 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d1420) {
            ctx->pc = 0x1D14E8u;
            return;
        }
    }
    ctx->pc = 0x1D1428u;
    // 0x1d1428: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d142c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1430: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D1430u;
    {
        const bool branch_taken_0x1d1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1430u;
        // 0x1d1434: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1430) {
            ctx->pc = 0x1D14E8u;
            return;
        }
    }
    ctx->pc = 0x1D1438u;
}

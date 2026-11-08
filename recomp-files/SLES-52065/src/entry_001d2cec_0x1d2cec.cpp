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

// Function: entry_001d2cec
// Address: 0x1d2cec - 0x1d2d08
void entry_001d2cec_0x1d2cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2cec_0x1d2cec");
#endif

    ctx->pc = 0x1d2cecu;

    // 0x1d2cec: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D2CECu;
    {
        const bool branch_taken_0x1d2cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CECu;
        // 0x1d2cf0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cec) {
            ctx->pc = 0x1D2DD8u;
            return;
        }
    }
    ctx->pc = 0x1D2CF4u;
    // 0x1d2cf4: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 928)));
    // 0x1d2cf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2cfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d00: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1D2D00u;
    {
        const bool branch_taken_0x1d2d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D00u;
        // 0x1d2d04: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d00) {
            ctx->pc = 0x1D2DD8u;
            return;
        }
    }
    ctx->pc = 0x1D2D08u;
}

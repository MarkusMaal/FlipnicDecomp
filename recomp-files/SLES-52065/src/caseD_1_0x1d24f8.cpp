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

// Function: caseD_1
// Address: 0x1d24f8 - 0x1d2508
void caseD_1_0x1d24f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1d24f8");
#endif

    ctx->pc = 0x1d24f8u;

    // 0x1d24f8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d24fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2500: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1D2500u;
    {
        const bool branch_taken_0x1d2500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2500u;
        // 0x1d2504: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2500) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D2508u;
}

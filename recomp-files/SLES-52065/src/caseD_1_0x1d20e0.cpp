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
// Address: 0x1d20e0 - 0x1d20f0
void caseD_1_0x1d20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1d20e0");
#endif

    ctx->pc = 0x1d20e0u;

    // 0x1d20e0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d20e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20e8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1D20E8u;
    {
        const bool branch_taken_0x1d20e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20E8u;
        // 0x1d20ec: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20e8) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D20F0u;
}

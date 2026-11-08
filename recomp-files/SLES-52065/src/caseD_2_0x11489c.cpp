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

// Function: caseD_2
// Address: 0x11489c - 0x1148bc
void caseD_2_0x11489c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x11489c");
#endif

    ctx->pc = 0x11489cu;

    // 0x11489c: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
    // 0x1148a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1148a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1148a4: 0x1c4004b6  bgtz        $v0, . + 4 + (0x4B6 << 2)
    ctx->pc = 0x1148A4u;
    {
        const bool branch_taken_0x1148a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1148A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148A4u;
        // 0x1148a8: 0xae420268  sw          $v0, 0x268($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148a4) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1148ACu;
    // 0x1148ac: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1148acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1148b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1148b4: 0x100004b2  b           . + 4 + (0x4B2 << 2)
    ctx->pc = 0x1148B4u;
    {
        const bool branch_taken_0x1148b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148B4u;
        // 0x1148b8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148b4) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1148BCu;
}

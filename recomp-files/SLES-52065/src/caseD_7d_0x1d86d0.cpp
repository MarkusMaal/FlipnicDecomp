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

// Function: caseD_7d
// Address: 0x1d86d0 - 0x1d86e8
void caseD_7d_0x1d86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7d_0x1d86d0");
#endif

    switch (ctx->pc) {
        case 0x1d86dcu: goto label_1d86dc;
        default: break;
    }

    ctx->pc = 0x1d86d0u;

    // 0x1d86d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d86d4: 0xc0753be  jal         func_1D4EF8
    ctx->pc = 0x1D86D4u;
    SET_GPR_U32(ctx, 31, 0x1D86DCu);
    ctx->pc = 0x1D86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86D4u;
    // 0x1d86d8: 0x8c440548  lw          $a0, 0x548($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF8u, 0x1D86D4u, 0x1D86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86DCu;
label_1d86dc:
    // 0x1d86dc: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1D86DCu;
    {
        const bool branch_taken_0x1d86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86DCu;
        // 0x1d86e0: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86dc) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D86E4u;
    // 0x1d86e4: 0x0  nop
    ctx->pc = 0x1d86e4u;
    // NOP
    ctx->pc = 0x1d86e8u;
}

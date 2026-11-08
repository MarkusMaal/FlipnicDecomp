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

// Function: caseD_7c
// Address: 0x1d86b8 - 0x1d86d0
void caseD_7c_0x1d86b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7c_0x1d86b8");
#endif

    switch (ctx->pc) {
        case 0x1d86c4u: goto label_1d86c4;
        default: break;
    }

    ctx->pc = 0x1d86b8u;

    // 0x1d86b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d86bc: 0xc0753e2  jal         func_1D4F88
    ctx->pc = 0x1D86BCu;
    SET_GPR_U32(ctx, 31, 0x1D86C4u);
    ctx->pc = 0x1D86C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86BCu;
    // 0x1d86c0: 0x8c440548  lw          $a0, 0x548($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F88u, 0x1D86BCu, 0x1D86C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86C4u;
label_1d86c4:
    // 0x1d86c4: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1D86C4u;
    {
        const bool branch_taken_0x1d86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86C4u;
        // 0x1d86c8: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86c4) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D86CCu;
    // 0x1d86cc: 0x0  nop
    ctx->pc = 0x1d86ccu;
    // NOP
    ctx->pc = 0x1d86d0u;
}

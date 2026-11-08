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

// Function: entry_001df2d0
// Address: 0x1df2d0 - 0x1df2dc
void entry_001df2d0_0x1df2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df2d0_0x1df2d0");
#endif

    switch (ctx->pc) {
        case 0x1df2d8u: goto label_1df2d8;
        default: break;
    }

    ctx->pc = 0x1df2d0u;

    // 0x1df2d0: 0xc07566a  jal         func_1D59A8
    ctx->pc = 0x1DF2D0u;
    SET_GPR_U32(ctx, 31, 0x1DF2D8u);
    ctx->pc = 0x1DF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2D0u;
    // 0x1df2d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59A8u, 0x1DF2D0u, 0x1DF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2D8u;
label_1df2d8:
    // 0x1df2d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1df2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1df2dcu;
}

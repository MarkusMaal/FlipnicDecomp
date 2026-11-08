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

// Function: entry_001fbcb8
// Address: 0x1fbcb8 - 0x1fbcd0
void entry_001fbcb8_0x1fbcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbcb8_0x1fbcb8");
#endif

    switch (ctx->pc) {
        case 0x1fbcc8u: goto label_1fbcc8;
        default: break;
    }

    ctx->pc = 0x1fbcb8u;

    // 0x1fbcb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBCB8u;
    {
        const bool branch_taken_0x1fbcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbcb8) {
            ctx->pc = 0x1FBCD0u;
            return;
        }
    }
    ctx->pc = 0x1FBCC0u;
    // 0x1fbcc0: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBCC0u;
    SET_GPR_U32(ctx, 31, 0x1FBCC8u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBCC0u, 0x1FBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCC8u;
label_1fbcc8:
    // 0x1fbcc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbccc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1fbcd0u;
}

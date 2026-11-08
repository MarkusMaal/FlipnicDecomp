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

// Function: entry_001429a8
// Address: 0x1429a8 - 0x1429bc
void entry_001429a8_0x1429a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001429a8_0x1429a8");
#endif

    switch (ctx->pc) {
        case 0x1429b0u: goto label_1429b0;
        default: break;
    }

    ctx->pc = 0x1429a8u;

    // 0x1429a8: 0xc050950  jal         func_142540
    ctx->pc = 0x1429A8u;
    SET_GPR_U32(ctx, 31, 0x1429B0u);
    ctx->pc = 0x1429ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429A8u;
    // 0x1429ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142540u, 0x1429A8u, 0x1429B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429B0u;
label_1429b0:
    // 0x1429b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1429b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1429b4: 0x1634ffe2  bne         $s1, $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1429B4u;
    {
        const bool branch_taken_0x1429b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x1429b4) {
            ctx->pc = 0x142940u;
            return;
        }
    }
    ctx->pc = 0x1429BCu;
}

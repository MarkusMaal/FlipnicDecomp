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

// Function: entry_001945d8
// Address: 0x1945d8 - 0x1945e8
void entry_001945d8_0x1945d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001945d8_0x1945d8");
#endif

    switch (ctx->pc) {
        case 0x1945e0u: goto label_1945e0;
        default: break;
    }

    ctx->pc = 0x1945d8u;

    // 0x1945d8: 0xc0645ac  jal         func_1916B0
    ctx->pc = 0x1945D8u;
    SET_GPR_U32(ctx, 31, 0x1945E0u);
    ctx->pc = 0x1945DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D8u;
    // 0x1945dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x1945D8u, 0x1945E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945E0u;
label_1945e0:
    // 0x1945e0: 0x100005e4  b           . + 4 + (0x5E4 << 2)
    ctx->pc = 0x1945E0u;
    {
        const bool branch_taken_0x1945e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1945e0) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1945E8u;
}

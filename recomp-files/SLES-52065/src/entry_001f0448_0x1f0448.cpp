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

// Function: entry_001f0448
// Address: 0x1f0448 - 0x1f0458
void entry_001f0448_0x1f0448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0448_0x1f0448");
#endif

    switch (ctx->pc) {
        case 0x1f0450u: goto label_1f0450;
        default: break;
    }

    ctx->pc = 0x1f0448u;

    // 0x1f0448: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F0448u;
    SET_GPR_U32(ctx, 31, 0x1F0450u);
    ctx->pc = 0x1F044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0448u;
    // 0x1f044c: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F0448u, 0x1F0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0450u;
label_1f0450:
    // 0x1f0450: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0450u;
    {
        const bool branch_taken_0x1f0450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0450) {
            ctx->pc = 0x1F04B0u;
            return;
        }
    }
    ctx->pc = 0x1F0458u;
}

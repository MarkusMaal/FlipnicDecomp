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

// Function: entry_001b12e8
// Address: 0x1b12e8 - 0x1b12f8
void entry_001b12e8_0x1b12e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12e8_0x1b12e8");
#endif

    switch (ctx->pc) {
        case 0x1b12f0u: goto label_1b12f0;
        default: break;
    }

    ctx->pc = 0x1b12e8u;

    // 0x1b12e8: 0xc06c154  jal         func_1B0550
    ctx->pc = 0x1B12E8u;
    SET_GPR_U32(ctx, 31, 0x1B12F0u);
    ctx->pc = 0x1B12ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12E8u;
    // 0x1b12ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0550u, 0x1B12E8u, 0x1B12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12F0u;
label_1b12f0:
    // 0x1b12f0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1B12F0u;
    {
        const bool branch_taken_0x1b12f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12f0) {
            ctx->pc = 0x1B1528u;
            return;
        }
    }
    ctx->pc = 0x1B12F8u;
}

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

// Function: entry_001d4260
// Address: 0x1d4260 - 0x1d4270
void entry_001d4260_0x1d4260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4260_0x1d4260");
#endif

    switch (ctx->pc) {
        case 0x1d4268u: goto label_1d4268;
        default: break;
    }

    ctx->pc = 0x1d4260u;

    // 0x1d4260: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D4260u;
    SET_GPR_U32(ctx, 31, 0x1D4268u);
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D4260u, 0x1D4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4268u;
label_1d4268:
    // 0x1d4268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4268u;
    {
        const bool branch_taken_0x1d4268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4268u;
        // 0x1d426c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4268) {
            ctx->pc = 0x1D427Cu;
            return;
        }
    }
    ctx->pc = 0x1D4270u;
}

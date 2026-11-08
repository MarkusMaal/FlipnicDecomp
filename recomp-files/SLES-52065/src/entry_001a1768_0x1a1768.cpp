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

// Function: entry_001a1768
// Address: 0x1a1768 - 0x1a1778
void entry_001a1768_0x1a1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1768_0x1a1768");
#endif

    switch (ctx->pc) {
        case 0x1a1770u: goto label_1a1770;
        default: break;
    }

    ctx->pc = 0x1a1768u;

    // 0x1a1768: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A1768u;
    SET_GPR_U32(ctx, 31, 0x1A1770u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1768u, 0x1A1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1770u;
label_1a1770:
    // 0x1a1770: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x1A1770u;
    {
        const bool branch_taken_0x1a1770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1770) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1778u;
}

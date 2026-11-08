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

// Function: entry_0019644c
// Address: 0x19644c - 0x19645c
void entry_0019644c_0x19644c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019644c_0x19644c");
#endif

    switch (ctx->pc) {
        case 0x196454u: goto label_196454;
        default: break;
    }

    ctx->pc = 0x19644cu;

    // 0x19644c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19644Cu;
    SET_GPR_U32(ctx, 31, 0x196454u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19644Cu, 0x196454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196454u;
label_196454:
    // 0x196454: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x196454u;
    {
        const bool branch_taken_0x196454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196454) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x19645Cu;
}

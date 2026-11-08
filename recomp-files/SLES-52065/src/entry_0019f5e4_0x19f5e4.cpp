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

// Function: entry_0019f5e4
// Address: 0x19f5e4 - 0x19f5f4
void entry_0019f5e4_0x19f5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5e4_0x19f5e4");
#endif

    switch (ctx->pc) {
        case 0x19f5ecu: goto label_19f5ec;
        default: break;
    }

    ctx->pc = 0x19f5e4u;

    // 0x19f5e4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19F5E4u;
    SET_GPR_U32(ctx, 31, 0x19F5ECu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F5E4u, 0x19F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5ECu;
label_19f5ec:
    // 0x19f5ec: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x19F5ECu;
    {
        const bool branch_taken_0x19f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5ec) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F5F4u;
}

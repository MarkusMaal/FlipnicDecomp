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

// Function: entry_0018de00
// Address: 0x18de00 - 0x18de10
void entry_0018de00_0x18de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de00_0x18de00");
#endif

    switch (ctx->pc) {
        case 0x18de08u: goto label_18de08;
        default: break;
    }

    ctx->pc = 0x18de00u;

    // 0x18de00: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18DE00u;
    SET_GPR_U32(ctx, 31, 0x18DE08u);
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DE00u, 0x18DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE08u;
label_18de08:
    // 0x18de08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18DE08u;
    {
        const bool branch_taken_0x18de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de08) {
            ctx->pc = 0x18DE18u;
            return;
        }
    }
    ctx->pc = 0x18DE10u;
}

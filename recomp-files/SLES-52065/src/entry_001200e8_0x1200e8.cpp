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

// Function: entry_001200e8
// Address: 0x1200e8 - 0x1200f4
void entry_001200e8_0x1200e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001200e8_0x1200e8");
#endif

    switch (ctx->pc) {
        case 0x1200f0u: goto label_1200f0;
        default: break;
    }

    ctx->pc = 0x1200e8u;

    // 0x1200e8: 0xc048060  jal         func_120180
    ctx->pc = 0x1200E8u;
    SET_GPR_U32(ctx, 31, 0x1200F0u);
    ctx->pc = 0x120180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120180u, 0x1200E8u, 0x1200F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200F0u;
label_1200f0:
    // 0x1200f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1200f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1200f4u;
}

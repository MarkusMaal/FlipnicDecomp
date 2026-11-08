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

// Function: entry_001891f0
// Address: 0x1891f0 - 0x1891fc
void entry_001891f0_0x1891f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001891f0_0x1891f0");
#endif

    switch (ctx->pc) {
        case 0x1891f8u: goto label_1891f8;
        default: break;
    }

    ctx->pc = 0x1891f0u;

    // 0x1891f0: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1891F0u;
    SET_GPR_U32(ctx, 31, 0x1891F8u);
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1891F0u, 0x1891F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891F8u;
label_1891f8:
    // 0x1891f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1891fcu;
}

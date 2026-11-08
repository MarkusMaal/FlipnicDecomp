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

// Function: entry_0016d3e8
// Address: 0x16d3e8 - 0x16d3f8
void entry_0016d3e8_0x16d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d3e8_0x16d3e8");
#endif

    switch (ctx->pc) {
        case 0x16d3f0u: goto label_16d3f0;
        default: break;
    }

    ctx->pc = 0x16d3e8u;

    // 0x16d3e8: 0xc059990  jal         func_166640
    ctx->pc = 0x16D3E8u;
    SET_GPR_U32(ctx, 31, 0x16D3F0u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16D3E8u, 0x16D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3F0u;
label_16d3f0:
    // 0x16d3f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D3F0u;
    {
        const bool branch_taken_0x16d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d3f0) {
            ctx->pc = 0x16D3FCu;
            return;
        }
    }
    ctx->pc = 0x16D3F8u;
}

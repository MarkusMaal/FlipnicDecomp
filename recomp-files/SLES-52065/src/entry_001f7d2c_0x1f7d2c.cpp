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

// Function: entry_001f7d2c
// Address: 0x1f7d2c - 0x1f7d40
void entry_001f7d2c_0x1f7d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7d2c_0x1f7d2c");
#endif

    switch (ctx->pc) {
        case 0x1f7d34u: goto label_1f7d34;
        case 0x1f7d3cu: goto label_1f7d3c;
        default: break;
    }

    ctx->pc = 0x1f7d2cu;

    // 0x1f7d2c: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D34u);
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7D2Cu, 0x1F7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D34u;
label_1f7d34:
    // 0x1f7d34: 0xc07dc96  jal         func_1F7258
    ctx->pc = 0x1F7D34u;
    SET_GPR_U32(ctx, 31, 0x1F7D3Cu);
    ctx->pc = 0x1F7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7258u, 0x1F7D34u, 0x1F7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D3Cu;
label_1f7d3c:
    // 0x1f7d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f7d40u;
}

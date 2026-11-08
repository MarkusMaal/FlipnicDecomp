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

// Function: entry_001fbbec
// Address: 0x1fbbec - 0x1fbbf4
void entry_001fbbec_0x1fbbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbbec_0x1fbbec");
#endif

    ctx->pc = 0x1fbbecu;

    // 0x1fbbec: 0xc07ec3e  jal         func_1FB0F8
    ctx->pc = 0x1FBBECu;
    SET_GPR_U32(ctx, 31, 0x1FBBF4u);
    ctx->pc = 0x1FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0F8u, 0x1FBBECu, 0x1FBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBF4u;
}

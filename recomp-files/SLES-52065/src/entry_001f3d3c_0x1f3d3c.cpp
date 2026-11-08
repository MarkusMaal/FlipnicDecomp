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

// Function: entry_001f3d3c
// Address: 0x1f3d3c - 0x1f3d44
void entry_001f3d3c_0x1f3d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3d3c_0x1f3d3c");
#endif

    ctx->pc = 0x1f3d3cu;

    // 0x1f3d3c: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D44u);
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3D3Cu, 0x1F3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D44u;
}

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

// Function: entry_001e56bc
// Address: 0x1e56bc - 0x1e56c4
void entry_001e56bc_0x1e56bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e56bc_0x1e56bc");
#endif

    ctx->pc = 0x1e56bcu;

    // 0x1e56bc: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E56BCu;
    SET_GPR_U32(ctx, 31, 0x1E56C4u);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E56BCu, 0x1E56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E56C4u;
}

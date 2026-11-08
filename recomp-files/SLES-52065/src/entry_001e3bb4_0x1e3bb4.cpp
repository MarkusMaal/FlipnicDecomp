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

// Function: entry_001e3bb4
// Address: 0x1e3bb4 - 0x1e3bbc
void entry_001e3bb4_0x1e3bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3bb4_0x1e3bb4");
#endif

    ctx->pc = 0x1e3bb4u;

    // 0x1e3bb4: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E3BB4u;
    SET_GPR_U32(ctx, 31, 0x1E3BBCu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3BB4u, 0x1E3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BBCu;
}

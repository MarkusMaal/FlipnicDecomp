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

// Function: entry_001ba1e4
// Address: 0x1ba1e4 - 0x1ba1ec
void entry_001ba1e4_0x1ba1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba1e4_0x1ba1e4");
#endif

    ctx->pc = 0x1ba1e4u;

    // 0x1ba1e4: 0xc060e4c  jal         func_183930
    ctx->pc = 0x1BA1E4u;
    SET_GPR_U32(ctx, 31, 0x1BA1ECu);
    ctx->pc = 0x183930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183930u, 0x1BA1E4u, 0x1BA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1ECu;
}

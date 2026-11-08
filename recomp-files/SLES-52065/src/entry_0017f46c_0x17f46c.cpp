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

// Function: entry_0017f46c
// Address: 0x17f46c - 0x17f474
void entry_0017f46c_0x17f46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f46c_0x17f46c");
#endif

    ctx->pc = 0x17f46cu;

    // 0x17f46c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F46Cu;
    SET_GPR_U32(ctx, 31, 0x17F474u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F46Cu, 0x17F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F474u;
}

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

// Function: entry_0012ed7c
// Address: 0x12ed7c - 0x12ed84
void entry_0012ed7c_0x12ed7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed7c_0x12ed7c");
#endif

    ctx->pc = 0x12ed7cu;

    // 0x12ed7c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12ED7Cu;
    SET_GPR_U32(ctx, 31, 0x12ED84u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12ED7Cu, 0x12ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED84u;
}

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

// Function: entry_001774bc
// Address: 0x1774bc - 0x1774c8
void entry_001774bc_0x1774bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001774bc_0x1774bc");
#endif

    ctx->pc = 0x1774bcu;

    // 0x1774bc: 0x0  nop
    ctx->pc = 0x1774bcu;
    // NOP
    // 0x1774c0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1774C0u;
    SET_GPR_U32(ctx, 31, 0x1774C8u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1774C0u, 0x1774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C8u;
}

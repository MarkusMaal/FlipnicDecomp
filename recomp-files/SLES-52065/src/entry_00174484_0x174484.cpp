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

// Function: entry_00174484
// Address: 0x174484 - 0x174490
void entry_00174484_0x174484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174484_0x174484");
#endif

    ctx->pc = 0x174484u;

    // 0x174484: 0x0  nop
    ctx->pc = 0x174484u;
    // NOP
    // 0x174488: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174488u;
    SET_GPR_U32(ctx, 31, 0x174490u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174488u, 0x174490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174490u;
}

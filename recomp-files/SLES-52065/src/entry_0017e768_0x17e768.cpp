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

// Function: entry_0017e768
// Address: 0x17e768 - 0x17e770
void entry_0017e768_0x17e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e768_0x17e768");
#endif

    ctx->pc = 0x17e768u;

    // 0x17e768: 0xc05f560  jal         func_17D580
    ctx->pc = 0x17E768u;
    SET_GPR_U32(ctx, 31, 0x17E770u);
    ctx->pc = 0x17D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D580u, 0x17E768u, 0x17E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E770u;
}

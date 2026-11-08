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

// Function: entry_00181e48
// Address: 0x181e48 - 0x181e50
void entry_00181e48_0x181e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e48_0x181e48");
#endif

    ctx->pc = 0x181e48u;

    // 0x181e48: 0xc060514  jal         func_181450
    ctx->pc = 0x181E48u;
    SET_GPR_U32(ctx, 31, 0x181E50u);
    ctx->pc = 0x181450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181450u, 0x181E48u, 0x181E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E50u;
}

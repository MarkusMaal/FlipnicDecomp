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

// Function: entry_001773fc
// Address: 0x1773fc - 0x177404
void entry_001773fc_0x1773fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001773fc_0x1773fc");
#endif

    ctx->pc = 0x1773fcu;

    // 0x1773fc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1773FCu;
    SET_GPR_U32(ctx, 31, 0x177404u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1773FCu, 0x177404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177404u;
}

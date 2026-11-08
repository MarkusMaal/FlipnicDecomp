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

// Function: entry_0010f5a4
// Address: 0x10f5a4 - 0x10f5ac
void entry_0010f5a4_0x10f5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f5a4_0x10f5a4");
#endif

    ctx->pc = 0x10f5a4u;

    // 0x10f5a4: 0xc042118  jal         func_108460
    ctx->pc = 0x10F5A4u;
    SET_GPR_U32(ctx, 31, 0x10F5ACu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F5A4u, 0x10F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5ACu;
}

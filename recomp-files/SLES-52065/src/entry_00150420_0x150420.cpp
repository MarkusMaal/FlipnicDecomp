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

// Function: entry_00150420
// Address: 0x150420 - 0x150428
void entry_00150420_0x150420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150420_0x150420");
#endif

    ctx->pc = 0x150420u;

    // 0x150420: 0xc053ed4  jal         func_14FB50
    ctx->pc = 0x150420u;
    SET_GPR_U32(ctx, 31, 0x150428u);
    ctx->pc = 0x14FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB50u, 0x150420u, 0x150428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150428u;
}

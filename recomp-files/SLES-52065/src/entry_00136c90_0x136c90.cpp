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

// Function: entry_00136c90
// Address: 0x136c90 - 0x136c98
void entry_00136c90_0x136c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c90_0x136c90");
#endif

    ctx->pc = 0x136c90u;

    // 0x136c90: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x136C90u;
    SET_GPR_U32(ctx, 31, 0x136C98u);
    ctx->pc = 0x14F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F290u, 0x136C90u, 0x136C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C98u;
}

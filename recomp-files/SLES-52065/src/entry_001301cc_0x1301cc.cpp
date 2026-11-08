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

// Function: entry_001301cc
// Address: 0x1301cc - 0x1301d4
void entry_001301cc_0x1301cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001301cc_0x1301cc");
#endif

    ctx->pc = 0x1301ccu;

    // 0x1301cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1301CCu;
    SET_GPR_U32(ctx, 31, 0x1301D4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1301CCu, 0x1301D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D4u;
}

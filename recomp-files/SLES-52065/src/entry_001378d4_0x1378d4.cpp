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

// Function: entry_001378d4
// Address: 0x1378d4 - 0x1378e0
void entry_001378d4_0x1378d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001378d4_0x1378d4");
#endif

    switch (ctx->pc) {
        case 0x1378dcu: goto label_1378dc;
        default: break;
    }

    ctx->pc = 0x1378d4u;

    // 0x1378d4: 0xc040150  jal         func_100540
    ctx->pc = 0x1378D4u;
    SET_GPR_U32(ctx, 31, 0x1378DCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1378D4u, 0x1378DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378DCu;
label_1378dc:
    // 0x1378dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1378dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x1378e0u;
}

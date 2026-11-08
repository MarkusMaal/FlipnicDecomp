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

// Function: entry_0011e278
// Address: 0x11e278 - 0x11e28c
void entry_0011e278_0x11e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e278_0x11e278");
#endif

    ctx->pc = 0x11e278u;

    // 0x11e278: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11e27c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E27Cu;
    {
        const bool branch_taken_0x11e27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e27c) {
            ctx->pc = 0x11E28Cu;
            return;
        }
    }
    ctx->pc = 0x11E284u;
    // 0x11e284: 0xc040150  jal         func_100540
    ctx->pc = 0x11E284u;
    SET_GPR_U32(ctx, 31, 0x11E28Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E284u, 0x11E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E28Cu;
}

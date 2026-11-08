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

// Function: entry_0011e250
// Address: 0x11e250 - 0x11e264
void entry_0011e250_0x11e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e250_0x11e250");
#endif

    ctx->pc = 0x11e250u;

    // 0x11e250: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x11e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x11e254: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E254u;
    {
        const bool branch_taken_0x11e254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e254) {
            ctx->pc = 0x11E264u;
            return;
        }
    }
    ctx->pc = 0x11E25Cu;
    // 0x11e25c: 0xc040150  jal         func_100540
    ctx->pc = 0x11E25Cu;
    SET_GPR_U32(ctx, 31, 0x11E264u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E25Cu, 0x11E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E264u;
}

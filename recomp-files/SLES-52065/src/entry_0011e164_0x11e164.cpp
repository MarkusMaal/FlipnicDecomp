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

// Function: entry_0011e164
// Address: 0x11e164 - 0x11e178
void entry_0011e164_0x11e164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e164_0x11e164");
#endif

    ctx->pc = 0x11e164u;

    // 0x11e164: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x11e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11e168: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E168u;
    {
        const bool branch_taken_0x11e168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e168) {
            ctx->pc = 0x11E178u;
            return;
        }
    }
    ctx->pc = 0x11E170u;
    // 0x11e170: 0xc040150  jal         func_100540
    ctx->pc = 0x11E170u;
    SET_GPR_U32(ctx, 31, 0x11E178u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E170u, 0x11E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E178u;
}

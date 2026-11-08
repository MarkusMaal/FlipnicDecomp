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

// Function: entry_0019f810
// Address: 0x19f810 - 0x19f81c
void entry_0019f810_0x19f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f810_0x19f810");
#endif

    ctx->pc = 0x19f810u;

    // 0x19f810: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19f814: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x19F814u;
    SET_GPR_U32(ctx, 31, 0x19F81Cu);
    ctx->pc = 0x19F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F814u;
    // 0x19f818: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F814u, 0x19F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F81Cu;
}

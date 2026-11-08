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

// Function: entry_001deaf4
// Address: 0x1deaf4 - 0x1deb00
void entry_001deaf4_0x1deaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deaf4_0x1deaf4");
#endif

    ctx->pc = 0x1deaf4u;

    // 0x1deaf4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1deaf8: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEAF8u;
    SET_GPR_U32(ctx, 31, 0x1DEB00u);
    ctx->pc = 0x1DEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAF8u;
    // 0x1deafc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEAF8u, 0x1DEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB00u;
}

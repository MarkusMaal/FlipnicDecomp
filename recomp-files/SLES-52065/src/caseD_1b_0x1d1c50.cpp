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

// Function: caseD_1b
// Address: 0x1d1c50 - 0x1d1c60
void caseD_1b_0x1d1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x1d1c50");
#endif

    ctx->pc = 0x1d1c50u;

    // 0x1d1c50: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d1c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c58: 0xc074730  jal         func_1D1CC0
    ctx->pc = 0x1D1C58u;
    SET_GPR_U32(ctx, 31, 0x1D1C60u);
    ctx->pc = 0x1D1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C58u;
    // 0x1d1c5c: 0x24c634f8  addiu       $a2, $a2, 0x34F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1CC0u, 0x1D1C58u, 0x1D1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C60u;
}

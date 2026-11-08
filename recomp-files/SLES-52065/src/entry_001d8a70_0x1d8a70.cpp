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

// Function: entry_001d8a70
// Address: 0x1d8a70 - 0x1d8a84
void entry_001d8a70_0x1d8a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a70_0x1d8a70");
#endif

    ctx->pc = 0x1d8a70u;

    // 0x1d8a70: 0x90860006  lbu         $a2, 0x6($a0)
    ctx->pc = 0x1d8a70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d8a74: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x1d8a78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8a7c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A84u);
    ctx->pc = 0x1D8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A7Cu;
    // 0x1d8a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8A7Cu, 0x1D8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A84u;
}

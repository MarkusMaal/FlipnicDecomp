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

// Function: entry_001bb110
// Address: 0x1bb110 - 0x1bb118
void entry_001bb110_0x1bb110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb110_0x1bb110");
#endif

    ctx->pc = 0x1bb110u;

    // 0x1bb110: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB110u;
    SET_GPR_U32(ctx, 31, 0x1BB118u);
    ctx->pc = 0x1BB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB110u;
    // 0x1bb114: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB110u, 0x1BB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB118u;
}

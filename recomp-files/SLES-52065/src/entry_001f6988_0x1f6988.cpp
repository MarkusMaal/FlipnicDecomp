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

// Function: entry_001f6988
// Address: 0x1f6988 - 0x1f6990
void entry_001f6988_0x1f6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6988_0x1f6988");
#endif

    ctx->pc = 0x1f6988u;

    // 0x1f6988: 0xc07da0e  jal         func_1F6838
    ctx->pc = 0x1F6988u;
    SET_GPR_U32(ctx, 31, 0x1F6990u);
    ctx->pc = 0x1F698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6988u;
    // 0x1f698c: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6838u, 0x1F6988u, 0x1F6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6990u;
}

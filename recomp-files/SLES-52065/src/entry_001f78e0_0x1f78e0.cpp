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

// Function: entry_001f78e0
// Address: 0x1f78e0 - 0x1f78e8
void entry_001f78e0_0x1f78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f78e0_0x1f78e0");
#endif

    ctx->pc = 0x1f78e0u;

    // 0x1f78e0: 0xc07db24  jal         func_1F6C90
    ctx->pc = 0x1F78E0u;
    SET_GPR_U32(ctx, 31, 0x1F78E8u);
    ctx->pc = 0x1F78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78E0u;
    // 0x1f78e4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C90u, 0x1F78E0u, 0x1F78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78E8u;
}

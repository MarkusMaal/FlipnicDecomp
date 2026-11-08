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

// Function: entry_0013a4f0
// Address: 0x13a4f0 - 0x13a4f8
void entry_0013a4f0_0x13a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4f0_0x13a4f0");
#endif

    ctx->pc = 0x13a4f0u;

    // 0x13a4f0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x13A4F0u;
    SET_GPR_U32(ctx, 31, 0x13A4F8u);
    ctx->pc = 0x13A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4F0u;
    // 0x13a4f4: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x13A4F0u, 0x13A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4F8u;
}

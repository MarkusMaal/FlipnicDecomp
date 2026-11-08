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

// Function: entry_0013a3a4
// Address: 0x13a3a4 - 0x13a3b0
void entry_0013a3a4_0x13a3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a3a4_0x13a3a4");
#endif

    ctx->pc = 0x13a3a4u;

    // 0x13a3a4: 0x0  nop
    ctx->pc = 0x13a3a4u;
    // NOP
    // 0x13a3a8: 0xc048974  jal         func_1225D0
    ctx->pc = 0x13A3A8u;
    SET_GPR_U32(ctx, 31, 0x13A3B0u);
    ctx->pc = 0x13A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3A8u;
    // 0x13a3ac: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x13A3A8u, 0x13A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3B0u;
}

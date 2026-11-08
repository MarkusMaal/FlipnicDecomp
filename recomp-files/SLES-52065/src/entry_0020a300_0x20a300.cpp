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

// Function: entry_0020a300
// Address: 0x20a300 - 0x20a308
void entry_0020a300_0x20a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a300_0x20a300");
#endif

    ctx->pc = 0x20a300u;

    // 0x20a300: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20A300u;
    SET_GPR_U32(ctx, 31, 0x20A308u);
    ctx->pc = 0x20A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A300u;
    // 0x20a304: 0x24845c80  addiu       $a0, $a0, 0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20A300u, 0x20A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A308u;
}

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

// Function: entry_00162dc8
// Address: 0x162dc8 - 0x162dd0
void entry_00162dc8_0x162dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162dc8_0x162dc8");
#endif

    ctx->pc = 0x162dc8u;

    // 0x162dc8: 0xc042118  jal         func_108460
    ctx->pc = 0x162DC8u;
    SET_GPR_U32(ctx, 31, 0x162DD0u);
    ctx->pc = 0x162DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DC8u;
    // 0x162dcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162DC8u, 0x162DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DD0u;
}

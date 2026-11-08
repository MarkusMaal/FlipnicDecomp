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

// Function: entry_001bcad8
// Address: 0x1bcad8 - 0x1bcae0
void entry_001bcad8_0x1bcad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcad8_0x1bcad8");
#endif

    ctx->pc = 0x1bcad8u;

    // 0x1bcad8: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCAD8u;
    SET_GPR_U32(ctx, 31, 0x1BCAE0u);
    ctx->pc = 0x1BCADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAD8u;
    // 0x1bcadc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCAD8u, 0x1BCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAE0u;
}

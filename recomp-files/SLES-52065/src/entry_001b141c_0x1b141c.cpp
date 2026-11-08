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

// Function: entry_001b141c
// Address: 0x1b141c - 0x1b1428
void entry_001b141c_0x1b141c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b141c_0x1b141c");
#endif

    ctx->pc = 0x1b141cu;

    // 0x1b141c: 0x0  nop
    ctx->pc = 0x1b141cu;
    // NOP
    // 0x1b1420: 0xc06c554  jal         func_1B1550
    ctx->pc = 0x1B1420u;
    SET_GPR_U32(ctx, 31, 0x1B1428u);
    ctx->pc = 0x1B1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1420u;
    // 0x1b1424: 0x27a40128  addiu       $a0, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1550u, 0x1B1420u, 0x1B1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1428u;
}

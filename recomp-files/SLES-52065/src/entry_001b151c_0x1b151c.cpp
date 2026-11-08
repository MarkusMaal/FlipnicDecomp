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

// Function: entry_001b151c
// Address: 0x1b151c - 0x1b1528
void entry_001b151c_0x1b151c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b151c_0x1b151c");
#endif

    ctx->pc = 0x1b151cu;

    // 0x1b151c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1b151cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1b1520: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x1B1520u;
    SET_GPR_U32(ctx, 31, 0x1B1528u);
    ctx->pc = 0x1B1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1520u;
    // 0x1b1524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1B1520u, 0x1B1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1528u;
}

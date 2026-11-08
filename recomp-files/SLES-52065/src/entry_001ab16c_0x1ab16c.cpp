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

// Function: entry_001ab16c
// Address: 0x1ab16c - 0x1ab174
void entry_001ab16c_0x1ab16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab16c_0x1ab16c");
#endif

    ctx->pc = 0x1ab16cu;

    // 0x1ab16c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB16Cu;
    SET_GPR_U32(ctx, 31, 0x1AB174u);
    ctx->pc = 0x1AB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB16Cu;
    // 0x1ab170: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB16Cu, 0x1AB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB174u;
}

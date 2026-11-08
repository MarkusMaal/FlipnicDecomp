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

// Function: entry_001b63ec
// Address: 0x1b63ec - 0x1b63f4
void entry_001b63ec_0x1b63ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b63ec_0x1b63ec");
#endif

    ctx->pc = 0x1b63ecu;

    // 0x1b63ec: 0xc06da58  jal         func_1B6960
    ctx->pc = 0x1B63ECu;
    SET_GPR_U32(ctx, 31, 0x1B63F4u);
    ctx->pc = 0x1B63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63ECu;
    // 0x1b63f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6960u, 0x1B63ECu, 0x1B63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63F4u;
}

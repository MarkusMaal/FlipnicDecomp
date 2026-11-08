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

// Function: entry_00205ca0
// Address: 0x205ca0 - 0x205cac
void entry_00205ca0_0x205ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205ca0_0x205ca0");
#endif

    ctx->pc = 0x205ca0u;

    // 0x205ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ca4: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x205CA4u;
    SET_GPR_U32(ctx, 31, 0x205CACu);
    ctx->pc = 0x205CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CA4u;
    // 0x205ca8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205CA4u, 0x205CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CACu;
}

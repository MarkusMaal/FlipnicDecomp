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

// Function: entry_0019288c
// Address: 0x19288c - 0x192898
void entry_0019288c_0x19288c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019288c_0x19288c");
#endif

    ctx->pc = 0x19288cu;

    // 0x19288c: 0x0  nop
    ctx->pc = 0x19288cu;
    // NOP
    // 0x192890: 0xc063e70  jal         func_18F9C0
    ctx->pc = 0x192890u;
    SET_GPR_U32(ctx, 31, 0x192898u);
    ctx->pc = 0x192894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192890u;
    // 0x192894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F9C0u, 0x192890u, 0x192898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192898u;
}

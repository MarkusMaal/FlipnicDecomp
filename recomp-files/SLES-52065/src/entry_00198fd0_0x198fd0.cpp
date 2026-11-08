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

// Function: entry_00198fd0
// Address: 0x198fd0 - 0x198fe0
void entry_00198fd0_0x198fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fd0_0x198fd0");
#endif

    ctx->pc = 0x198fd0u;

    // 0x198fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fd8: 0xc064c20  jal         func_193080
    ctx->pc = 0x198FD8u;
    SET_GPR_U32(ctx, 31, 0x198FE0u);
    ctx->pc = 0x198FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FD8u;
    // 0x198fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x198FD8u, 0x198FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FE0u;
}

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

// Function: entry_0015d420
// Address: 0x15d420 - 0x15d42c
void entry_0015d420_0x15d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d420_0x15d420");
#endif

    ctx->pc = 0x15d420u;

    // 0x15d420: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d424: 0xc057620  jal         func_15D880
    ctx->pc = 0x15D424u;
    SET_GPR_U32(ctx, 31, 0x15D42Cu);
    ctx->pc = 0x15D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D424u;
    // 0x15d428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D424u, 0x15D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D42Cu;
}

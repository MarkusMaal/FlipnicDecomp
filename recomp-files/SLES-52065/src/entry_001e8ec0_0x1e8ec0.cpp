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

// Function: entry_001e8ec0
// Address: 0x1e8ec0 - 0x1e8ec8
void entry_001e8ec0_0x1e8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8ec0_0x1e8ec0");
#endif

    ctx->pc = 0x1e8ec0u;

    // 0x1e8ec0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E8EC0u;
    SET_GPR_U32(ctx, 31, 0x1E8EC8u);
    ctx->pc = 0x1E8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EC0u;
    // 0x1e8ec4: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E8EC0u, 0x1E8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EC8u;
}

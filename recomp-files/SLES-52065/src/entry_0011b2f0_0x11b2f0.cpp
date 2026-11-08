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

// Function: entry_0011b2f0
// Address: 0x11b2f0 - 0x11b2f8
void entry_0011b2f0_0x11b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b2f0_0x11b2f0");
#endif

    ctx->pc = 0x11b2f0u;

    // 0x11b2f0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B2F0u;
    SET_GPR_U32(ctx, 31, 0x11B2F8u);
    ctx->pc = 0x11B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2F0u;
    // 0x11b2f4: 0x262503c4  addiu       $a1, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B2F0u, 0x11B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2F8u;
}

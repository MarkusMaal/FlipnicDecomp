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

// Function: entry_001a38f8
// Address: 0x1a38f8 - 0x1a3904
void entry_001a38f8_0x1a38f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a38f8_0x1a38f8");
#endif

    ctx->pc = 0x1a38f8u;

    // 0x1a38f8: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a38fc: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A38FCu;
    SET_GPR_U32(ctx, 31, 0x1A3904u);
    ctx->pc = 0x1A3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38FCu;
    // 0x1a3900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A38FCu, 0x1A3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3904u;
}

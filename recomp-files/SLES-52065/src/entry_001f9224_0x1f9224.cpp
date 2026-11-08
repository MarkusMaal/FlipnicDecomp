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

// Function: entry_001f9224
// Address: 0x1f9224 - 0x1f922c
void entry_001f9224_0x1f9224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9224_0x1f9224");
#endif

    ctx->pc = 0x1f9224u;

    // 0x1f9224: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9224u;
    SET_GPR_U32(ctx, 31, 0x1F922Cu);
    ctx->pc = 0x1F9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9224u;
    // 0x1f9228: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9224u, 0x1F922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F922Cu;
}

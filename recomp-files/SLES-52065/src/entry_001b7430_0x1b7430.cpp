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

// Function: entry_001b7430
// Address: 0x1b7430 - 0x1b7438
void entry_001b7430_0x1b7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7430_0x1b7430");
#endif

    ctx->pc = 0x1b7430u;

    // 0x1b7430: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7430u;
    SET_GPR_U32(ctx, 31, 0x1B7438u);
    ctx->pc = 0x1B7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7430u;
    // 0x1b7434: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7430u, 0x1B7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7438u;
}

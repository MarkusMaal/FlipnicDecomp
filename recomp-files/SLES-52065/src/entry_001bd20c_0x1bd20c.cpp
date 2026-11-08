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

// Function: entry_001bd20c
// Address: 0x1bd20c - 0x1bd218
void entry_001bd20c_0x1bd20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd20c_0x1bd20c");
#endif

    ctx->pc = 0x1bd20cu;

    // 0x1bd20c: 0x0  nop
    ctx->pc = 0x1bd20cu;
    // NOP
    // 0x1bd210: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BD210u;
    SET_GPR_U32(ctx, 31, 0x1BD218u);
    ctx->pc = 0x1BD214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD210u;
    // 0x1bd214: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BD210u, 0x1BD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD218u;
}

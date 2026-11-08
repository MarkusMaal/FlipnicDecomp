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

// Function: entry_001c5a48
// Address: 0x1c5a48 - 0x1c5a50
void entry_001c5a48_0x1c5a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a48_0x1c5a48");
#endif

    ctx->pc = 0x1c5a48u;

    // 0x1c5a48: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1C5A48u;
    SET_GPR_U32(ctx, 31, 0x1C5A50u);
    ctx->pc = 0x1C5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A48u;
    // 0x1c5a4c: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1C5A48u, 0x1C5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A50u;
}

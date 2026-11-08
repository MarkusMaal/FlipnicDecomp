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

// Function: entry_0017ec70
// Address: 0x17ec70 - 0x17ec78
void entry_0017ec70_0x17ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec70_0x17ec70");
#endif

    ctx->pc = 0x17ec70u;

    // 0x17ec70: 0xc048974  jal         func_1225D0
    ctx->pc = 0x17EC70u;
    SET_GPR_U32(ctx, 31, 0x17EC78u);
    ctx->pc = 0x17EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC70u;
    // 0x17ec74: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x17EC70u, 0x17EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC78u;
}

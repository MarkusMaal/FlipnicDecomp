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

// Function: entry_00173de4
// Address: 0x173de4 - 0x173df0
void entry_00173de4_0x173de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173de4_0x173de4");
#endif

    ctx->pc = 0x173de4u;

    // 0x173de4: 0x0  nop
    ctx->pc = 0x173de4u;
    // NOP
    // 0x173de8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x173DE8u;
    SET_GPR_U32(ctx, 31, 0x173DF0u);
    ctx->pc = 0x173DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DE8u;
    // 0x173dec: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x173DE8u, 0x173DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DF0u;
}

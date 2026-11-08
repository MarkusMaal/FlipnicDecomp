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

// Function: entry_00176b9c
// Address: 0x176b9c - 0x176ba8
void entry_00176b9c_0x176b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176b9c_0x176b9c");
#endif

    ctx->pc = 0x176b9cu;

    // 0x176b9c: 0x0  nop
    ctx->pc = 0x176b9cu;
    // NOP
    // 0x176ba0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176BA0u;
    SET_GPR_U32(ctx, 31, 0x176BA8u);
    ctx->pc = 0x176BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BA0u;
    // 0x176ba4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176BA0u, 0x176BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176BA8u;
}

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

// Function: entry_00173eec
// Address: 0x173eec - 0x173ef8
void entry_00173eec_0x173eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173eec_0x173eec");
#endif

    ctx->pc = 0x173eecu;

    // 0x173eec: 0x0  nop
    ctx->pc = 0x173eecu;
    // NOP
    // 0x173ef0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x173EF0u;
    SET_GPR_U32(ctx, 31, 0x173EF8u);
    ctx->pc = 0x173EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173EF0u;
    // 0x173ef4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x173EF0u, 0x173EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EF8u;
}

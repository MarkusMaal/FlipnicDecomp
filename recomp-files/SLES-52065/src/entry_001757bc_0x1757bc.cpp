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

// Function: entry_001757bc
// Address: 0x1757bc - 0x1757c8
void entry_001757bc_0x1757bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001757bc_0x1757bc");
#endif

    ctx->pc = 0x1757bcu;

    // 0x1757bc: 0x0  nop
    ctx->pc = 0x1757bcu;
    // NOP
    // 0x1757c0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1757C0u;
    SET_GPR_U32(ctx, 31, 0x1757C8u);
    ctx->pc = 0x1757C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757C0u;
    // 0x1757c4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1757C0u, 0x1757C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757C8u;
}

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

// Function: entry_001777c4
// Address: 0x1777c4 - 0x1777d0
void entry_001777c4_0x1777c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001777c4_0x1777c4");
#endif

    ctx->pc = 0x1777c4u;

    // 0x1777c4: 0x0  nop
    ctx->pc = 0x1777c4u;
    // NOP
    // 0x1777c8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1777C8u;
    SET_GPR_U32(ctx, 31, 0x1777D0u);
    ctx->pc = 0x1777CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777C8u;
    // 0x1777cc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1777C8u, 0x1777D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777D0u;
}

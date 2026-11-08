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

// Function: entry_00176d20
// Address: 0x176d20 - 0x176d28
void entry_00176d20_0x176d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176d20_0x176d20");
#endif

    ctx->pc = 0x176d20u;

    // 0x176d20: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176D20u;
    SET_GPR_U32(ctx, 31, 0x176D28u);
    ctx->pc = 0x176D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D20u;
    // 0x176d24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176D20u, 0x176D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D28u;
}

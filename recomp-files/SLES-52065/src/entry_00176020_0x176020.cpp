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

// Function: entry_00176020
// Address: 0x176020 - 0x176028
void entry_00176020_0x176020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176020_0x176020");
#endif

    ctx->pc = 0x176020u;

    // 0x176020: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176020u;
    SET_GPR_U32(ctx, 31, 0x176028u);
    ctx->pc = 0x176024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176020u;
    // 0x176024: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176020u, 0x176028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176028u;
}

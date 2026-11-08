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

// Function: entry_0020ab70
// Address: 0x20ab70 - 0x20ab7c
void entry_0020ab70_0x20ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ab70_0x20ab70");
#endif

    switch (ctx->pc) {
        case 0x20ab78u: goto label_20ab78;
        default: break;
    }

    ctx->pc = 0x20ab70u;

    // 0x20ab70: 0xc0829ec  jal         func_20A7B0
    ctx->pc = 0x20AB70u;
    SET_GPR_U32(ctx, 31, 0x20AB78u);
    ctx->pc = 0x20AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB70u;
    // 0x20ab74: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A7B0u, 0x20AB70u, 0x20AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB78u;
label_20ab78:
    // 0x20ab78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x20ab7cu;
}

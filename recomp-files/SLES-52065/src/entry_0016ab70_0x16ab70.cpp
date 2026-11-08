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

// Function: entry_0016ab70
// Address: 0x16ab70 - 0x16ab7c
void entry_0016ab70_0x16ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab70_0x16ab70");
#endif

    switch (ctx->pc) {
        case 0x16ab78u: goto label_16ab78;
        default: break;
    }

    ctx->pc = 0x16ab70u;

    // 0x16ab70: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AB70u;
    SET_GPR_U32(ctx, 31, 0x16AB78u);
    ctx->pc = 0x16AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB70u;
    // 0x16ab74: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AB70u, 0x16AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB78u;
label_16ab78:
    // 0x16ab78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16ab7cu;
}

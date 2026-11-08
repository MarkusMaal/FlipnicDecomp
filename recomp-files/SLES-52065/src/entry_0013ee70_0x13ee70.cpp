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

// Function: entry_0013ee70
// Address: 0x13ee70 - 0x13ee7c
void entry_0013ee70_0x13ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee70_0x13ee70");
#endif

    switch (ctx->pc) {
        case 0x13ee78u: goto label_13ee78;
        default: break;
    }

    ctx->pc = 0x13ee70u;

    // 0x13ee70: 0xc050c88  jal         func_143220
    ctx->pc = 0x13EE70u;
    SET_GPR_U32(ctx, 31, 0x13EE78u);
    ctx->pc = 0x13EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE70u;
    // 0x13ee74: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143220u, 0x13EE70u, 0x13EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE78u;
label_13ee78:
    // 0x13ee78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x13ee7cu;
}

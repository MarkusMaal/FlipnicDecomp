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

// Function: entry_0013f0f0
// Address: 0x13f0f0 - 0x13f0fc
void entry_0013f0f0_0x13f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0f0_0x13f0f0");
#endif

    switch (ctx->pc) {
        case 0x13f0f8u: goto label_13f0f8;
        default: break;
    }

    ctx->pc = 0x13f0f0u;

    // 0x13f0f0: 0xc050cf4  jal         func_1433D0
    ctx->pc = 0x13F0F0u;
    SET_GPR_U32(ctx, 31, 0x13F0F8u);
    ctx->pc = 0x13F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0F0u;
    // 0x13f0f4: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433D0u, 0x13F0F0u, 0x13F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0F8u;
label_13f0f8:
    // 0x13f0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13f0fcu;
}

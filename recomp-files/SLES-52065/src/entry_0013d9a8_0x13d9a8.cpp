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

// Function: entry_0013d9a8
// Address: 0x13d9a8 - 0x13d9b4
void entry_0013d9a8_0x13d9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d9a8_0x13d9a8");
#endif

    switch (ctx->pc) {
        case 0x13d9b0u: goto label_13d9b0;
        default: break;
    }

    ctx->pc = 0x13d9a8u;

    // 0x13d9a8: 0xc050c6c  jal         func_1431B0
    ctx->pc = 0x13D9A8u;
    SET_GPR_U32(ctx, 31, 0x13D9B0u);
    ctx->pc = 0x13D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D9A8u;
    // 0x13d9ac: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1431B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431B0u, 0x13D9A8u, 0x13D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9B0u;
label_13d9b0:
    // 0x13d9b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13d9b4u;
}

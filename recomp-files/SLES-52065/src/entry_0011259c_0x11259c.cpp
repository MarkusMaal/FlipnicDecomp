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

// Function: entry_0011259c
// Address: 0x11259c - 0x1125a8
void entry_0011259c_0x11259c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011259c_0x11259c");
#endif

    switch (ctx->pc) {
        case 0x1125a4u: goto label_1125a4;
        default: break;
    }

    ctx->pc = 0x11259cu;

    // 0x11259c: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x11259Cu;
    SET_GPR_U32(ctx, 31, 0x1125A4u);
    ctx->pc = 0x1125A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11259Cu;
    // 0x1125a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x11259Cu, 0x1125A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125A4u;
label_1125a4:
    // 0x1125a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1125a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1125a8u;
}

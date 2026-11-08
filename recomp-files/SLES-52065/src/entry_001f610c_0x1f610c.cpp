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

// Function: entry_001f610c
// Address: 0x1f610c - 0x1f611c
void entry_001f610c_0x1f610c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f610c_0x1f610c");
#endif

    switch (ctx->pc) {
        case 0x1f6114u: goto label_1f6114;
        default: break;
    }

    ctx->pc = 0x1f610cu;

    // 0x1f610c: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F610Cu;
    SET_GPR_U32(ctx, 31, 0x1F6114u);
    ctx->pc = 0x1F6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F610Cu;
    // 0x1f6110: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F610Cu, 0x1F6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6114u;
label_1f6114:
    // 0x1f6114: 0xa0500071  sb          $s0, 0x71($v0)
    ctx->pc = 0x1f6114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 16));
    // 0x1f6118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1f611cu;
}

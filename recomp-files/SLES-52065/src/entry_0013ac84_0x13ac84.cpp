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

// Function: entry_0013ac84
// Address: 0x13ac84 - 0x13ac94
void entry_0013ac84_0x13ac84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ac84_0x13ac84");
#endif

    switch (ctx->pc) {
        case 0x13ac90u: goto label_13ac90;
        default: break;
    }

    ctx->pc = 0x13ac84u;

    // 0x13ac84: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ac88: 0xc04ef2c  jal         func_13BCB0
    ctx->pc = 0x13AC88u;
    SET_GPR_U32(ctx, 31, 0x13AC90u);
    ctx->pc = 0x13AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC88u;
    // 0x13ac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BCB0u, 0x13AC88u, 0x13AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC90u;
label_13ac90:
    // 0x13ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13ac94u;
}

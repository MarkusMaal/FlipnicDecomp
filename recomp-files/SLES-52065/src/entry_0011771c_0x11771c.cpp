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

// Function: entry_0011771c
// Address: 0x11771c - 0x117734
void entry_0011771c_0x11771c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011771c_0x11771c");
#endif

    switch (ctx->pc) {
        case 0x117728u: goto label_117728;
        default: break;
    }

    ctx->pc = 0x11771cu;

    // 0x11771c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117720: 0xc045ecc  jal         func_117B30
    ctx->pc = 0x117720u;
    SET_GPR_U32(ctx, 31, 0x117728u);
    ctx->pc = 0x117724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117720u;
    // 0x117724: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B30u, 0x117720u, 0x117728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117728u;
label_117728:
    // 0x117728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11772c: 0xc045f00  jal         func_117C00
    ctx->pc = 0x11772Cu;
    SET_GPR_U32(ctx, 31, 0x117734u);
    ctx->pc = 0x117730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11772Cu;
    // 0x117730: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C00u, 0x11772Cu, 0x117734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117734u;
}

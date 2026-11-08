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

// Function: entry_00109310
// Address: 0x109310 - 0x109324
void entry_00109310_0x109310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109310_0x109310");
#endif

    switch (ctx->pc) {
        case 0x109318u: goto label_109318;
        default: break;
    }

    ctx->pc = 0x109310u;

    // 0x109310: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109310u;
    SET_GPR_U32(ctx, 31, 0x109318u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109310u, 0x109318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109318u;
label_109318:
    // 0x109318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10931c: 0xc04a018  jal         func_128060
    ctx->pc = 0x10931Cu;
    SET_GPR_U32(ctx, 31, 0x109324u);
    ctx->pc = 0x109320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10931Cu;
    // 0x109320: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x10931Cu, 0x109324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109324u;
}

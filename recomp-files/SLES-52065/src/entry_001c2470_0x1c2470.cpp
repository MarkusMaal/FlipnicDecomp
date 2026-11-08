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

// Function: entry_001c2470
// Address: 0x1c2470 - 0x1c2484
void entry_001c2470_0x1c2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2470_0x1c2470");
#endif

    switch (ctx->pc) {
        case 0x1c2480u: goto label_1c2480;
        default: break;
    }

    ctx->pc = 0x1c2470u;

    // 0x1c2470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2474: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1c2474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c2478: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2478u;
    SET_GPR_U32(ctx, 31, 0x1C2480u);
    ctx->pc = 0x1C247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2478u;
    // 0x1c247c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2478u, 0x1C2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2480u;
label_1c2480:
    // 0x1c2480: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1c2484u;
}

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

// Function: entry_001f2374
// Address: 0x1f2374 - 0x1f2388
void entry_001f2374_0x1f2374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2374_0x1f2374");
#endif

    switch (ctx->pc) {
        case 0x1f237cu: goto label_1f237c;
        case 0x1f2384u: goto label_1f2384;
        default: break;
    }

    ctx->pc = 0x1f2374u;

    // 0x1f2374: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F2374u;
    SET_GPR_U32(ctx, 31, 0x1F237Cu);
    ctx->pc = 0x1F2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2374u;
    // 0x1f2378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F2374u, 0x1F237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F237Cu;
label_1f237c:
    // 0x1f237c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F237Cu;
    SET_GPR_U32(ctx, 31, 0x1F2384u);
    ctx->pc = 0x1F2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F237Cu;
    // 0x1f2380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F237Cu, 0x1F2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2384u;
label_1f2384:
    // 0x1f2384: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f2388u;
}

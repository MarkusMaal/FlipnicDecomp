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

// Function: entry_001f0834
// Address: 0x1f0834 - 0x1f0848
void entry_001f0834_0x1f0834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0834_0x1f0834");
#endif

    switch (ctx->pc) {
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0844u: goto label_1f0844;
        default: break;
    }

    ctx->pc = 0x1f0834u;

    // 0x1f0834: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0834u;
    SET_GPR_U32(ctx, 31, 0x1F083Cu);
    ctx->pc = 0x1F0838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0834u;
    // 0x1f0838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0834u, 0x1F083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F083Cu;
label_1f083c:
    // 0x1f083c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F083Cu;
    SET_GPR_U32(ctx, 31, 0x1F0844u);
    ctx->pc = 0x1F0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F083Cu;
    // 0x1f0840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F083Cu, 0x1F0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0844u;
label_1f0844:
    // 0x1f0844: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f0848u;
}

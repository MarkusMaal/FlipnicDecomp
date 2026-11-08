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

// Function: entry_001f1cf8
// Address: 0x1f1cf8 - 0x1f1d0c
void entry_001f1cf8_0x1f1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1cf8_0x1f1cf8");
#endif

    switch (ctx->pc) {
        case 0x1f1d00u: goto label_1f1d00;
        case 0x1f1d08u: goto label_1f1d08;
        default: break;
    }

    ctx->pc = 0x1f1cf8u;

    // 0x1f1cf8: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1CF8u;
    SET_GPR_U32(ctx, 31, 0x1F1D00u);
    ctx->pc = 0x1F1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CF8u;
    // 0x1f1cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1CF8u, 0x1F1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D00u;
label_1f1d00:
    // 0x1f1d00: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1D00u;
    SET_GPR_U32(ctx, 31, 0x1F1D08u);
    ctx->pc = 0x1F1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D00u;
    // 0x1f1d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1D00u, 0x1F1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D08u;
label_1f1d08:
    // 0x1f1d08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f1d0cu;
}

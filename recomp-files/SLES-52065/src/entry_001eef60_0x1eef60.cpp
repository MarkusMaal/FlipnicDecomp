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

// Function: entry_001eef60
// Address: 0x1eef60 - 0x1eef6c
void entry_001eef60_0x1eef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eef60_0x1eef60");
#endif

    switch (ctx->pc) {
        case 0x1eef68u: goto label_1eef68;
        default: break;
    }

    ctx->pc = 0x1eef60u;

    // 0x1eef60: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEF60u;
    SET_GPR_U32(ctx, 31, 0x1EEF68u);
    ctx->pc = 0x1EEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF60u;
    // 0x1eef64: 0x8e24a468  lw          $a0, -0x5B98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEF60u, 0x1EEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF68u;
label_1eef68:
    // 0x1eef68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eef68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eef6cu;
}

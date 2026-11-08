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

// Function: entry_001652f8
// Address: 0x1652f8 - 0x165304
void entry_001652f8_0x1652f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001652f8_0x1652f8");
#endif

    switch (ctx->pc) {
        case 0x165300u: goto label_165300;
        default: break;
    }

    ctx->pc = 0x1652f8u;

    // 0x1652f8: 0xc055dd8  jal         func_157760
    ctx->pc = 0x1652F8u;
    SET_GPR_U32(ctx, 31, 0x165300u);
    ctx->pc = 0x1652FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652F8u;
    // 0x1652fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x1652F8u, 0x165300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165300u;
label_165300:
    // 0x165300: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x165304u;
}

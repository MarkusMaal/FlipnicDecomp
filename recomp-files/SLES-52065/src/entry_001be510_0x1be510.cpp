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

// Function: entry_001be510
// Address: 0x1be510 - 0x1be528
void entry_001be510_0x1be510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be510_0x1be510");
#endif

    switch (ctx->pc) {
        case 0x1be518u: goto label_1be518;
        case 0x1be520u: goto label_1be520;
        default: break;
    }

    ctx->pc = 0x1be510u;

    // 0x1be510: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE510u;
    SET_GPR_U32(ctx, 31, 0x1BE518u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE510u, 0x1BE518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE518u;
label_1be518:
    // 0x1be518: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE518u;
    SET_GPR_U32(ctx, 31, 0x1BE520u);
    ctx->pc = 0x1BE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE518u;
    // 0x1be51c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE518u, 0x1BE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE520u;
label_1be520:
    // 0x1be520: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE520u;
    SET_GPR_U32(ctx, 31, 0x1BE528u);
    ctx->pc = 0x1BE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE520u;
    // 0x1be524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE520u, 0x1BE528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE528u;
}

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

// Function: entry_001be6e8
// Address: 0x1be6e8 - 0x1be700
void entry_001be6e8_0x1be6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be6e8_0x1be6e8");
#endif

    switch (ctx->pc) {
        case 0x1be6f0u: goto label_1be6f0;
        case 0x1be6f8u: goto label_1be6f8;
        default: break;
    }

    ctx->pc = 0x1be6e8u;

    // 0x1be6e8: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE6E8u;
    SET_GPR_U32(ctx, 31, 0x1BE6F0u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE6E8u, 0x1BE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6F0u;
label_1be6f0:
    // 0x1be6f0: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE6F0u;
    SET_GPR_U32(ctx, 31, 0x1BE6F8u);
    ctx->pc = 0x1BE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F0u;
    // 0x1be6f4: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE6F0u, 0x1BE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6F8u;
label_1be6f8:
    // 0x1be6f8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE6F8u;
    SET_GPR_U32(ctx, 31, 0x1BE700u);
    ctx->pc = 0x1BE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F8u;
    // 0x1be6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE6F8u, 0x1BE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE700u;
}

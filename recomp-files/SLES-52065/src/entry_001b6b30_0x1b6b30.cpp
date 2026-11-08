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

// Function: entry_001b6b30
// Address: 0x1b6b30 - 0x1b6b48
void entry_001b6b30_0x1b6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b30_0x1b6b30");
#endif

    switch (ctx->pc) {
        case 0x1b6b38u: goto label_1b6b38;
        case 0x1b6b40u: goto label_1b6b40;
        default: break;
    }

    ctx->pc = 0x1b6b30u;

    // 0x1b6b30: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6B30u;
    SET_GPR_U32(ctx, 31, 0x1B6B38u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6B30u, 0x1B6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B38u;
label_1b6b38:
    // 0x1b6b38: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6B38u;
    SET_GPR_U32(ctx, 31, 0x1B6B40u);
    ctx->pc = 0x1B6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B38u;
    // 0x1b6b3c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6B38u, 0x1B6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B40u;
label_1b6b40:
    // 0x1b6b40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6B40u;
    SET_GPR_U32(ctx, 31, 0x1B6B48u);
    ctx->pc = 0x1B6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B40u;
    // 0x1b6b44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6B40u, 0x1B6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B48u;
}

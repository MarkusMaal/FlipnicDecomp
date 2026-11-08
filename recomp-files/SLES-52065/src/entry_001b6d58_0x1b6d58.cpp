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

// Function: entry_001b6d58
// Address: 0x1b6d58 - 0x1b6d74
void entry_001b6d58_0x1b6d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d58_0x1b6d58");
#endif

    switch (ctx->pc) {
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d68u: goto label_1b6d68;
        case 0x1b6d70u: goto label_1b6d70;
        default: break;
    }

    ctx->pc = 0x1b6d58u;

    // 0x1b6d58: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6D58u;
    SET_GPR_U32(ctx, 31, 0x1B6D60u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6D58u, 0x1B6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D60u;
label_1b6d60:
    // 0x1b6d60: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6D60u;
    SET_GPR_U32(ctx, 31, 0x1B6D68u);
    ctx->pc = 0x1B6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D60u;
    // 0x1b6d64: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6D60u, 0x1B6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D68u;
label_1b6d68:
    // 0x1b6d68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6D68u;
    SET_GPR_U32(ctx, 31, 0x1B6D70u);
    ctx->pc = 0x1B6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D68u;
    // 0x1b6d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6D68u, 0x1B6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D70u;
label_1b6d70:
    // 0x1b6d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6d74u;
}

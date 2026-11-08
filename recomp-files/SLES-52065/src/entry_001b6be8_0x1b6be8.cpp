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

// Function: entry_001b6be8
// Address: 0x1b6be8 - 0x1b6c00
void entry_001b6be8_0x1b6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6be8_0x1b6be8");
#endif

    switch (ctx->pc) {
        case 0x1b6bf0u: goto label_1b6bf0;
        case 0x1b6bf8u: goto label_1b6bf8;
        default: break;
    }

    ctx->pc = 0x1b6be8u;

    // 0x1b6be8: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6BE8u;
    SET_GPR_U32(ctx, 31, 0x1B6BF0u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6BE8u, 0x1B6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BF0u;
label_1b6bf0:
    // 0x1b6bf0: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6BF0u;
    SET_GPR_U32(ctx, 31, 0x1B6BF8u);
    ctx->pc = 0x1B6BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BF0u;
    // 0x1b6bf4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6BF0u, 0x1B6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BF8u;
label_1b6bf8:
    // 0x1b6bf8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6BF8u;
    SET_GPR_U32(ctx, 31, 0x1B6C00u);
    ctx->pc = 0x1B6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BF8u;
    // 0x1b6bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6BF8u, 0x1B6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C00u;
}

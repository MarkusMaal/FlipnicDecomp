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

// Function: entry_001b6b80
// Address: 0x1b6b80 - 0x1b6b9c
void entry_001b6b80_0x1b6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b80_0x1b6b80");
#endif

    switch (ctx->pc) {
        case 0x1b6b88u: goto label_1b6b88;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6b98u: goto label_1b6b98;
        default: break;
    }

    ctx->pc = 0x1b6b80u;

    // 0x1b6b80: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6B80u;
    SET_GPR_U32(ctx, 31, 0x1B6B88u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6B80u, 0x1B6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B88u;
label_1b6b88:
    // 0x1b6b88: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6B88u;
    SET_GPR_U32(ctx, 31, 0x1B6B90u);
    ctx->pc = 0x1B6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B88u;
    // 0x1b6b8c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6B88u, 0x1B6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B90u;
label_1b6b90:
    // 0x1b6b90: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6B90u;
    SET_GPR_U32(ctx, 31, 0x1B6B98u);
    ctx->pc = 0x1B6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B90u;
    // 0x1b6b94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6B90u, 0x1B6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B98u;
label_1b6b98:
    // 0x1b6b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6b9cu;
}

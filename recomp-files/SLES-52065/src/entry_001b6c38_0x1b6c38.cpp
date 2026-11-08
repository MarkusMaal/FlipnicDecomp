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

// Function: entry_001b6c38
// Address: 0x1b6c38 - 0x1b6c54
void entry_001b6c38_0x1b6c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c38_0x1b6c38");
#endif

    switch (ctx->pc) {
        case 0x1b6c40u: goto label_1b6c40;
        case 0x1b6c48u: goto label_1b6c48;
        case 0x1b6c50u: goto label_1b6c50;
        default: break;
    }

    ctx->pc = 0x1b6c38u;

    // 0x1b6c38: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6C38u;
    SET_GPR_U32(ctx, 31, 0x1B6C40u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6C38u, 0x1B6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C40u;
label_1b6c40:
    // 0x1b6c40: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6C40u;
    SET_GPR_U32(ctx, 31, 0x1B6C48u);
    ctx->pc = 0x1B6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C40u;
    // 0x1b6c44: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6C40u, 0x1B6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C48u;
label_1b6c48:
    // 0x1b6c48: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6C48u;
    SET_GPR_U32(ctx, 31, 0x1B6C50u);
    ctx->pc = 0x1B6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C48u;
    // 0x1b6c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6C48u, 0x1B6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C50u;
label_1b6c50:
    // 0x1b6c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6c54u;
}

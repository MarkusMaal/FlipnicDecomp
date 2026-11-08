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

// Function: entry_001b77b8
// Address: 0x1b77b8 - 0x1b77d4
void entry_001b77b8_0x1b77b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b77b8_0x1b77b8");
#endif

    switch (ctx->pc) {
        case 0x1b77c0u: goto label_1b77c0;
        default: break;
    }

    ctx->pc = 0x1b77b8u;

    // 0x1b77b8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B77B8u;
    SET_GPR_U32(ctx, 31, 0x1B77C0u);
    ctx->pc = 0x1B77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77B8u;
    // 0x1b77bc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B77B8u, 0x1B77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77C0u;
label_1b77c0:
    // 0x1b77c0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b77c4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B77C4u;
    {
        const bool branch_taken_0x1b77c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b77c4) {
            ctx->pc = 0x1B77A8u;
            return;
        }
    }
    ctx->pc = 0x1B77CCu;
    // 0x1b77cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b77ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b77d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b77d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1b77d4u;
}

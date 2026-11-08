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

// Function: entry_001276a0
// Address: 0x1276a0 - 0x1276c0
void entry_001276a0_0x1276a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001276a0_0x1276a0");
#endif

    switch (ctx->pc) {
        case 0x1276b0u: goto label_1276b0;
        default: break;
    }

    ctx->pc = 0x1276a0u;

    // 0x1276a0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276a4: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1276a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1276a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1276A8u;
    SET_GPR_U32(ctx, 31, 0x1276B0u);
    ctx->pc = 0x1276ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276A8u;
    // 0x1276ac: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1276A8u, 0x1276B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276B0u;
label_1276b0:
    // 0x1276b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276B0u;
    {
        const bool branch_taken_0x1276b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276B0u;
        // 0x1276b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b0) {
            ctx->pc = 0x1276C0u;
            return;
        }
    }
    ctx->pc = 0x1276B8u;
    // 0x1276b8: 0xc04a51c  jal         func_129470
    ctx->pc = 0x1276B8u;
    SET_GPR_U32(ctx, 31, 0x1276C0u);
    ctx->pc = 0x129470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129470u, 0x1276B8u, 0x1276C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276C0u;
}

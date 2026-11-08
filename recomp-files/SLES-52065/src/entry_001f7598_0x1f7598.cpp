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

// Function: entry_001f7598
// Address: 0x1f7598 - 0x1f75b4
void entry_001f7598_0x1f7598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7598_0x1f7598");
#endif

    switch (ctx->pc) {
        case 0x1f75b0u: goto label_1f75b0;
        default: break;
    }

    ctx->pc = 0x1f7598u;

    // 0x1f7598: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1f7598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1f759c: 0x27c21500  addiu       $v0, $fp, 0x1500
    ctx->pc = 0x1f759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5376));
    // 0x1f75a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f75a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f75a4: 0x8ec4bb28  lw          $a0, -0x44D8($s6)
    ctx->pc = 0x1f75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949672)));
    // 0x1f75a8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F75A8u;
    SET_GPR_U32(ctx, 31, 0x1F75B0u);
    ctx->pc = 0x1F75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F75A8u;
    // 0x1f75ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F75A8u, 0x1F75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F75B0u;
label_1f75b0:
    // 0x1f75b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f75b4u;
}

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

// Function: entry_001f7f14
// Address: 0x1f7f14 - 0x1f7f2c
void entry_001f7f14_0x1f7f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7f14_0x1f7f14");
#endif

    switch (ctx->pc) {
        case 0x1f7f28u: goto label_1f7f28;
        default: break;
    }

    ctx->pc = 0x1f7f14u;

    // 0x1f7f14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7f18: 0x8ea4bb30  lw          $a0, -0x44D0($s5)
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7f1c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1f7f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1f7f20: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7F20u;
    SET_GPR_U32(ctx, 31, 0x1F7F28u);
    ctx->pc = 0x1F7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F20u;
    // 0x1f7f24: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7F20u, 0x1F7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F28u;
label_1f7f28:
    // 0x1f7f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f7f2cu;
}

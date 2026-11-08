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

// Function: entry_001cf988
// Address: 0x1cf988 - 0x1cf9ac
void entry_001cf988_0x1cf988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf988_0x1cf988");
#endif

    switch (ctx->pc) {
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf9a0u: goto label_1cf9a0;
        default: break;
    }

    ctx->pc = 0x1cf988u;

    // 0x1cf988: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1cf98c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1CF98Cu;
    SET_GPR_U32(ctx, 31, 0x1CF994u);
    ctx->pc = 0x1CF990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF98Cu;
    // 0x1cf990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1CF98Cu, 0x1CF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF994u;
label_1cf994:
    // 0x1cf994: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf998: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1CF998u;
    SET_GPR_U32(ctx, 31, 0x1CF9A0u);
    ctx->pc = 0x1CF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF998u;
    // 0x1cf99c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1CF998u, 0x1CF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9A0u;
label_1cf9a0:
    // 0x1cf9a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1cf9a4: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF9A4u;
    {
        const bool branch_taken_0x1cf9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf9a4) {
            ctx->pc = 0x1CF968u;
            return;
        }
    }
    ctx->pc = 0x1CF9ACu;
}

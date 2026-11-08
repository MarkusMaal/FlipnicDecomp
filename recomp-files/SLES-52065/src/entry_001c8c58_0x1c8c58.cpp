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

// Function: entry_001c8c58
// Address: 0x1c8c58 - 0x1c8c74
void entry_001c8c58_0x1c8c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c58_0x1c8c58");
#endif

    switch (ctx->pc) {
        case 0x1c8c64u: goto label_1c8c64;
        case 0x1c8c70u: goto label_1c8c70;
        default: break;
    }

    ctx->pc = 0x1c8c58u;

    // 0x1c8c58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8c5c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8C5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C64u);
    ctx->pc = 0x1C8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C5Cu;
    // 0x1c8c60: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8C5Cu, 0x1C8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C64u;
label_1c8c64:
    // 0x1c8c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c68: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C8C68u;
    SET_GPR_U32(ctx, 31, 0x1C8C70u);
    ctx->pc = 0x1C8C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C68u;
    // 0x1c8c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C8C68u, 0x1C8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C70u;
label_1c8c70:
    // 0x1c8c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c8c74u;
}

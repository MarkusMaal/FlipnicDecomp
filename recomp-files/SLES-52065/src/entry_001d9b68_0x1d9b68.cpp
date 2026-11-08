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

// Function: entry_001d9b68
// Address: 0x1d9b68 - 0x1d9b80
void entry_001d9b68_0x1d9b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9b68_0x1d9b68");
#endif

    switch (ctx->pc) {
        case 0x1d9b74u: goto label_1d9b74;
        default: break;
    }

    ctx->pc = 0x1d9b68u;

    // 0x1d9b68: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1d9b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1d9b6c: 0xc081a60  jal         func_206980
    ctx->pc = 0x1D9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9B74u);
    ctx->pc = 0x1D9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B6Cu;
    // 0x1d9b70: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1D9B6Cu, 0x1D9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B74u;
label_1d9b74:
    // 0x1d9b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b78: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1D9B78u;
    SET_GPR_U32(ctx, 31, 0x1D9B80u);
    ctx->pc = 0x1D9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B78u;
    // 0x1d9b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1D9B78u, 0x1D9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B80u;
}

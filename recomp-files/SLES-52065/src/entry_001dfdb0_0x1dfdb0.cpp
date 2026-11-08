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

// Function: entry_001dfdb0
// Address: 0x1dfdb0 - 0x1dfdc8
void entry_001dfdb0_0x1dfdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfdb0_0x1dfdb0");
#endif

    switch (ctx->pc) {
        case 0x1dfdbcu: goto label_1dfdbc;
        default: break;
    }

    ctx->pc = 0x1dfdb0u;

    // 0x1dfdb0: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1dfdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1dfdb4: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DFDB4u;
    SET_GPR_U32(ctx, 31, 0x1DFDBCu);
    ctx->pc = 0x1DFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDB4u;
    // 0x1dfdb8: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DFDB4u, 0x1DFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDBCu;
label_1dfdbc:
    // 0x1dfdbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdc0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DFDC0u;
    SET_GPR_U32(ctx, 31, 0x1DFDC8u);
    ctx->pc = 0x1DFDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDC0u;
    // 0x1dfdc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFDC0u, 0x1DFDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDC8u;
}

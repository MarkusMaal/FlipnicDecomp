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

// Function: entry_001da4d0
// Address: 0x1da4d0 - 0x1da4e8
void entry_001da4d0_0x1da4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da4d0_0x1da4d0");
#endif

    switch (ctx->pc) {
        case 0x1da4dcu: goto label_1da4dc;
        default: break;
    }

    ctx->pc = 0x1da4d0u;

    // 0x1da4d0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1da4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1da4d4: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA4D4u;
    SET_GPR_U32(ctx, 31, 0x1DA4DCu);
    ctx->pc = 0x1DA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4D4u;
    // 0x1da4d8: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA4D4u, 0x1DA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4DCu;
label_1da4dc:
    // 0x1da4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DA4E0u;
    SET_GPR_U32(ctx, 31, 0x1DA4E8u);
    ctx->pc = 0x1DA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4E0u;
    // 0x1da4e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DA4E0u, 0x1DA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4E8u;
}

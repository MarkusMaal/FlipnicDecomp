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

// Function: entry_001df4f8
// Address: 0x1df4f8 - 0x1df514
void entry_001df4f8_0x1df4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df4f8_0x1df4f8");
#endif

    switch (ctx->pc) {
        case 0x1df508u: goto label_1df508;
        default: break;
    }

    ctx->pc = 0x1df4f8u;

    // 0x1df4f8: 0x6107a  dsrl        $v0, $a2, 1
    ctx->pc = 0x1df4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
    // 0x1df4fc: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1df4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1df500: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DF500u;
    SET_GPR_U32(ctx, 31, 0x1DF508u);
    ctx->pc = 0x1DF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF500u;
    // 0x1df504: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DF500u, 0x1DF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF508u;
label_1df508:
    // 0x1df508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df50c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF50Cu;
    SET_GPR_U32(ctx, 31, 0x1DF514u);
    ctx->pc = 0x1DF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF50Cu;
    // 0x1df510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF50Cu, 0x1DF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF514u;
}

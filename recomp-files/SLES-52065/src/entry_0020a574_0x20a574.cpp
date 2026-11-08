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

// Function: entry_0020a574
// Address: 0x20a574 - 0x20a598
void entry_0020a574_0x20a574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a574_0x20a574");
#endif

    switch (ctx->pc) {
        case 0x20a584u: goto label_20a584;
        default: break;
    }

    ctx->pc = 0x20a574u;

    // 0x20a574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a57c: 0xc0828fe  jal         func_20A3F8
    ctx->pc = 0x20A57Cu;
    SET_GPR_U32(ctx, 31, 0x20A584u);
    ctx->pc = 0x20A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A57Cu;
    // 0x20a580: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3F8u, 0x20A57Cu, 0x20A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A584u;
label_20a584:
    // 0x20a584: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a588: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x20a588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x20a58c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a590: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x20a590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x20a594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x20a598u;
}

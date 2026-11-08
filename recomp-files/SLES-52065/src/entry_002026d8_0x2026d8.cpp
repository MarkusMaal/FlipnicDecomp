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

// Function: entry_002026d8
// Address: 0x2026d8 - 0x2026f8
void entry_002026d8_0x2026d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002026d8_0x2026d8");
#endif

    switch (ctx->pc) {
        case 0x2026e8u: goto label_2026e8;
        case 0x2026f4u: goto label_2026f4;
        default: break;
    }

    ctx->pc = 0x2026d8u;

    // 0x2026d8: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x2026d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x2026dc: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x2026dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2026e0: 0xc081a60  jal         func_206980
    ctx->pc = 0x2026E0u;
    SET_GPR_U32(ctx, 31, 0x2026E8u);
    ctx->pc = 0x2026E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026E0u;
    // 0x2026e4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2026E0u, 0x2026E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026E8u;
label_2026e8:
    // 0x2026e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2026e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026ec: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2026ECu;
    SET_GPR_U32(ctx, 31, 0x2026F4u);
    ctx->pc = 0x2026F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026ECu;
    // 0x2026f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2026ECu, 0x2026F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026F4u;
label_2026f4:
    // 0x2026f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2026f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2026f8u;
}

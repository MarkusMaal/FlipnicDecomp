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

// Function: entry_0013c414
// Address: 0x13c414 - 0x13c444
void entry_0013c414_0x13c414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c414_0x13c414");
#endif

    switch (ctx->pc) {
        case 0x13c420u: goto label_13c420;
        case 0x13c42cu: goto label_13c42c;
        default: break;
    }

    ctx->pc = 0x13c414u;

    // 0x13c414: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x13c418: 0xc0505fc  jal         func_1417F0
    ctx->pc = 0x13C418u;
    SET_GPR_U32(ctx, 31, 0x13C420u);
    ctx->pc = 0x13C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C418u;
    // 0x13c41c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417F0u, 0x13C418u, 0x13C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C420u;
label_13c420:
    // 0x13c420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c424: 0xc04d108  jal         func_134420
    ctx->pc = 0x13C424u;
    SET_GPR_U32(ctx, 31, 0x13C42Cu);
    ctx->pc = 0x13C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C424u;
    // 0x13c428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134420u, 0x13C424u, 0x13C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C42Cu;
label_13c42c:
    // 0x13c42c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13c42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13c430: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c434: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C434u;
    {
        const bool branch_taken_0x13c434 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C434u;
        // 0x13c438: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c434) {
            ctx->pc = 0x13C448u;
            return;
        }
    }
    ctx->pc = 0x13C43Cu;
    // 0x13c43c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C43Cu;
    SET_GPR_U32(ctx, 31, 0x13C444u);
    ctx->pc = 0x13C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C43Cu;
    // 0x13c440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C43Cu, 0x13C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C444u;
}

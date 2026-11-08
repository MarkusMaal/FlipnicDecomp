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

// Function: entry_0015e154
// Address: 0x15e154 - 0x15e170
void entry_0015e154_0x15e154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e154_0x15e154");
#endif

    switch (ctx->pc) {
        case 0x15e160u: goto label_15e160;
        case 0x15e168u: goto label_15e168;
        default: break;
    }

    ctx->pc = 0x15e154u;

    // 0x15e154: 0x0  nop
    ctx->pc = 0x15e154u;
    // NOP
    // 0x15e158: 0xc04018c  jal         func_100630
    ctx->pc = 0x15E158u;
    SET_GPR_U32(ctx, 31, 0x15E160u);
    ctx->pc = 0x15E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E158u;
    // 0x15e15c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15E158u, 0x15E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E160u;
label_15e160:
    // 0x15e160: 0xc04018c  jal         func_100630
    ctx->pc = 0x15E160u;
    SET_GPR_U32(ctx, 31, 0x15E168u);
    ctx->pc = 0x15E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E160u;
    // 0x15e164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15E160u, 0x15E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E168u;
label_15e168:
    // 0x15e168: 0xc04018c  jal         func_100630
    ctx->pc = 0x15E168u;
    SET_GPR_U32(ctx, 31, 0x15E170u);
    ctx->pc = 0x15E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E168u;
    // 0x15e16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15E168u, 0x15E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E170u;
}

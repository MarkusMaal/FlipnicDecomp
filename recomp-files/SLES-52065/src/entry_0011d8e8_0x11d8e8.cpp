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

// Function: entry_0011d8e8
// Address: 0x11d8e8 - 0x11d918
void entry_0011d8e8_0x11d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d8e8_0x11d8e8");
#endif

    switch (ctx->pc) {
        case 0x11d8f4u: goto label_11d8f4;
        case 0x11d900u: goto label_11d900;
        case 0x11d914u: goto label_11d914;
        default: break;
    }

    ctx->pc = 0x11d8e8u;

    // 0x11d8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8ec: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D8ECu;
    SET_GPR_U32(ctx, 31, 0x11D8F4u);
    ctx->pc = 0x11D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8ECu;
    // 0x11d8f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D8ECu, 0x11D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8F4u;
label_11d8f4:
    // 0x11d8f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11d8f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8f8: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11D8F8u;
    SET_GPR_U32(ctx, 31, 0x11D900u);
    ctx->pc = 0x11D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8F8u;
    // 0x11d8fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11D8F8u, 0x11D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D900u;
label_11d900:
    // 0x11d900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d90c: 0xc046b94  jal         func_11AE50
    ctx->pc = 0x11D90Cu;
    SET_GPR_U32(ctx, 31, 0x11D914u);
    ctx->pc = 0x11D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D90Cu;
    // 0x11d910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE50u, 0x11D90Cu, 0x11D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D914u;
label_11d914:
    // 0x11d914: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11d918u;
}

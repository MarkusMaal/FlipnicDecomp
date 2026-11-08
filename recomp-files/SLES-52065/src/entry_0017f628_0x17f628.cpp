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

// Function: entry_0017f628
// Address: 0x17f628 - 0x17f644
void entry_0017f628_0x17f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f628_0x17f628");
#endif

    switch (ctx->pc) {
        case 0x17f630u: goto label_17f630;
        case 0x17f638u: goto label_17f638;
        case 0x17f640u: goto label_17f640;
        default: break;
    }

    ctx->pc = 0x17f628u;

    // 0x17f628: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F628u;
    SET_GPR_U32(ctx, 31, 0x17F630u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F628u, 0x17F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F630u;
label_17f630:
    // 0x17f630: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F630u;
    SET_GPR_U32(ctx, 31, 0x17F638u);
    ctx->pc = 0x17F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F630u;
    // 0x17f634: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F630u, 0x17F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F638u;
label_17f638:
    // 0x17f638: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F638u;
    SET_GPR_U32(ctx, 31, 0x17F640u);
    ctx->pc = 0x17F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F638u;
    // 0x17f63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F638u, 0x17F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F640u;
label_17f640:
    // 0x17f640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f644u;
}

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

// Function: entry_0017f508
// Address: 0x17f508 - 0x17f524
void entry_0017f508_0x17f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f508_0x17f508");
#endif

    switch (ctx->pc) {
        case 0x17f510u: goto label_17f510;
        case 0x17f518u: goto label_17f518;
        case 0x17f520u: goto label_17f520;
        default: break;
    }

    ctx->pc = 0x17f508u;

    // 0x17f508: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F508u;
    SET_GPR_U32(ctx, 31, 0x17F510u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F508u, 0x17F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F510u;
label_17f510:
    // 0x17f510: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F510u;
    SET_GPR_U32(ctx, 31, 0x17F518u);
    ctx->pc = 0x17F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F510u;
    // 0x17f514: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F510u, 0x17F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F518u;
label_17f518:
    // 0x17f518: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F518u;
    SET_GPR_U32(ctx, 31, 0x17F520u);
    ctx->pc = 0x17F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F518u;
    // 0x17f51c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F518u, 0x17F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F520u;
label_17f520:
    // 0x17f520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f524u;
}

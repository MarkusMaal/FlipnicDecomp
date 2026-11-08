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

// Function: entry_0017f450
// Address: 0x17f450 - 0x17f46c
void entry_0017f450_0x17f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f450_0x17f450");
#endif

    switch (ctx->pc) {
        case 0x17f458u: goto label_17f458;
        case 0x17f460u: goto label_17f460;
        case 0x17f468u: goto label_17f468;
        default: break;
    }

    ctx->pc = 0x17f450u;

    // 0x17f450: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F450u;
    SET_GPR_U32(ctx, 31, 0x17F458u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F450u, 0x17F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F458u;
label_17f458:
    // 0x17f458: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F458u;
    SET_GPR_U32(ctx, 31, 0x17F460u);
    ctx->pc = 0x17F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F458u;
    // 0x17f45c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F458u, 0x17F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F460u;
label_17f460:
    // 0x17f460: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F460u;
    SET_GPR_U32(ctx, 31, 0x17F468u);
    ctx->pc = 0x17F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F460u;
    // 0x17f464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F460u, 0x17F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F468u;
label_17f468:
    // 0x17f468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f46cu;
}

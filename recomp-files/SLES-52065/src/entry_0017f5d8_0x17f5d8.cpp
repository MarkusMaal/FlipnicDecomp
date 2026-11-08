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

// Function: entry_0017f5d8
// Address: 0x17f5d8 - 0x17f5f0
void entry_0017f5d8_0x17f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f5d8_0x17f5d8");
#endif

    switch (ctx->pc) {
        case 0x17f5e0u: goto label_17f5e0;
        case 0x17f5e8u: goto label_17f5e8;
        default: break;
    }

    ctx->pc = 0x17f5d8u;

    // 0x17f5d8: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F5D8u;
    SET_GPR_U32(ctx, 31, 0x17F5E0u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F5D8u, 0x17F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5E0u;
label_17f5e0:
    // 0x17f5e0: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F5E0u;
    SET_GPR_U32(ctx, 31, 0x17F5E8u);
    ctx->pc = 0x17F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5E0u;
    // 0x17f5e4: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F5E0u, 0x17F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5E8u;
label_17f5e8:
    // 0x17f5e8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F5E8u;
    SET_GPR_U32(ctx, 31, 0x17F5F0u);
    ctx->pc = 0x17F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5E8u;
    // 0x17f5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F5E8u, 0x17F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5F0u;
}

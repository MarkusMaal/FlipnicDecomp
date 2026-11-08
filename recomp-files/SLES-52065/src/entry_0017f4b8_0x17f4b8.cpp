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

// Function: entry_0017f4b8
// Address: 0x17f4b8 - 0x17f4d0
void entry_0017f4b8_0x17f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f4b8_0x17f4b8");
#endif

    switch (ctx->pc) {
        case 0x17f4c0u: goto label_17f4c0;
        case 0x17f4c8u: goto label_17f4c8;
        default: break;
    }

    ctx->pc = 0x17f4b8u;

    // 0x17f4b8: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F4B8u;
    SET_GPR_U32(ctx, 31, 0x17F4C0u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F4B8u, 0x17F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4C0u;
label_17f4c0:
    // 0x17f4c0: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F4C0u;
    SET_GPR_U32(ctx, 31, 0x17F4C8u);
    ctx->pc = 0x17F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4C0u;
    // 0x17f4c4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F4C0u, 0x17F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4C8u;
label_17f4c8:
    // 0x17f4c8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F4C8u;
    SET_GPR_U32(ctx, 31, 0x17F4D0u);
    ctx->pc = 0x17F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4C8u;
    // 0x17f4cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F4C8u, 0x17F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4D0u;
}

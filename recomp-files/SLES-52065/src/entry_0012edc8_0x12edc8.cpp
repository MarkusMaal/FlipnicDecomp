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

// Function: entry_0012edc8
// Address: 0x12edc8 - 0x12ede0
void entry_0012edc8_0x12edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012edc8_0x12edc8");
#endif

    switch (ctx->pc) {
        case 0x12edd0u: goto label_12edd0;
        case 0x12edd8u: goto label_12edd8;
        default: break;
    }

    ctx->pc = 0x12edc8u;

    // 0x12edc8: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12EDC8u;
    SET_GPR_U32(ctx, 31, 0x12EDD0u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12EDC8u, 0x12EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12EDD0u;
    SET_GPR_U32(ctx, 31, 0x12EDD8u);
    ctx->pc = 0x12EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDD0u;
    // 0x12edd4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12EDD0u, 0x12EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD8u;
label_12edd8:
    // 0x12edd8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EDD8u;
    SET_GPR_U32(ctx, 31, 0x12EDE0u);
    ctx->pc = 0x12EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDD8u;
    // 0x12eddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EDD8u, 0x12EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDE0u;
}

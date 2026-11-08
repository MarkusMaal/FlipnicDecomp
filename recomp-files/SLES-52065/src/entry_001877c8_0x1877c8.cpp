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

// Function: entry_001877c8
// Address: 0x1877c8 - 0x1877e0
void entry_001877c8_0x1877c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001877c8_0x1877c8");
#endif

    switch (ctx->pc) {
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d8u: goto label_1877d8;
        default: break;
    }

    ctx->pc = 0x1877c8u;

    // 0x1877c8: 0xc061e20  jal         func_187880
    ctx->pc = 0x1877C8u;
    SET_GPR_U32(ctx, 31, 0x1877D0u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x1877C8u, 0x1877D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877D0u;
label_1877d0:
    // 0x1877d0: 0xc061e1c  jal         func_187870
    ctx->pc = 0x1877D0u;
    SET_GPR_U32(ctx, 31, 0x1877D8u);
    ctx->pc = 0x1877D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877D0u;
    // 0x1877d4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x1877D0u, 0x1877D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877D8u;
label_1877d8:
    // 0x1877d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1877D8u;
    SET_GPR_U32(ctx, 31, 0x1877E0u);
    ctx->pc = 0x1877DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877D8u;
    // 0x1877dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1877D8u, 0x1877E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877E0u;
}

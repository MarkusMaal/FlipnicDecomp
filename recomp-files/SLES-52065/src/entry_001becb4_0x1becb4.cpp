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

// Function: entry_001becb4
// Address: 0x1becb4 - 0x1beccc
void entry_001becb4_0x1becb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001becb4_0x1becb4");
#endif

    switch (ctx->pc) {
        case 0x1becc0u: goto label_1becc0;
        default: break;
    }

    ctx->pc = 0x1becb4u;

    // 0x1becb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1becb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1becb8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BECB8u;
    SET_GPR_U32(ctx, 31, 0x1BECC0u);
    ctx->pc = 0x1BECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECB8u;
    // 0x1becbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BECB8u, 0x1BECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECC0u;
label_1becc0:
    // 0x1becc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1becc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becc4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BECC4u;
    SET_GPR_U32(ctx, 31, 0x1BECCCu);
    ctx->pc = 0x1BECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECC4u;
    // 0x1becc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BECC4u, 0x1BECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECCCu;
}

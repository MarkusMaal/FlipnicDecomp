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

// Function: entry_001caec8
// Address: 0x1caec8 - 0x1caee4
void entry_001caec8_0x1caec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caec8_0x1caec8");
#endif

    switch (ctx->pc) {
        case 0x1caed4u: goto label_1caed4;
        case 0x1caee0u: goto label_1caee0;
        default: break;
    }

    ctx->pc = 0x1caec8u;

    // 0x1caec8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1caec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caecc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAECCu;
    SET_GPR_U32(ctx, 31, 0x1CAED4u);
    ctx->pc = 0x1CAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAECCu;
    // 0x1caed0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAECCu, 0x1CAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAED4u;
label_1caed4:
    // 0x1caed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caed8: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CAED8u;
    SET_GPR_U32(ctx, 31, 0x1CAEE0u);
    ctx->pc = 0x1CAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAED8u;
    // 0x1caedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CAED8u, 0x1CAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEE0u;
label_1caee0:
    // 0x1caee0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1caee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->pc = 0x1caee4u;
}

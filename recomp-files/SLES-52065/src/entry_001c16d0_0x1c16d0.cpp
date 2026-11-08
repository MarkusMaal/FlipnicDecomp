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

// Function: entry_001c16d0
// Address: 0x1c16d0 - 0x1c16ec
void entry_001c16d0_0x1c16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c16d0_0x1c16d0");
#endif

    switch (ctx->pc) {
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c16e8u: goto label_1c16e8;
        default: break;
    }

    ctx->pc = 0x1c16d0u;

    // 0x1c16d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c16d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c16d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C16D4u;
    SET_GPR_U32(ctx, 31, 0x1C16DCu);
    ctx->pc = 0x1C16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16D4u;
    // 0x1c16d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C16D4u, 0x1C16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16DCu;
label_1c16dc:
    // 0x1c16dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c16dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c16e0: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C16E0u;
    SET_GPR_U32(ctx, 31, 0x1C16E8u);
    ctx->pc = 0x1C16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16E0u;
    // 0x1c16e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C16E0u, 0x1C16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16E8u;
label_1c16e8:
    // 0x1c16e8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1c16ecu;
}

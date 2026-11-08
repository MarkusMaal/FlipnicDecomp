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

// Function: entry_0019ea10
// Address: 0x19ea10 - 0x19ea30
void entry_0019ea10_0x19ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea10_0x19ea10");
#endif

    switch (ctx->pc) {
        case 0x19ea18u: goto label_19ea18;
        default: break;
    }

    ctx->pc = 0x19ea10u;

    // 0x19ea10: 0xc06cdc4  jal         func_1B3710
    ctx->pc = 0x19EA10u;
    SET_GPR_U32(ctx, 31, 0x19EA18u);
    ctx->pc = 0x19EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA10u;
    // 0x19ea14: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3710u, 0x19EA10u, 0x19EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA18u;
label_19ea18:
    // 0x19ea18: 0x284303e8  slti        $v1, $v0, 0x3E8
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19ea1c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EA1Cu;
    {
        const bool branch_taken_0x19ea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ea1c) {
            ctx->pc = 0x19EA30u;
            return;
        }
    }
    ctx->pc = 0x19EA24u;
    // 0x19ea24: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ea28: 0xc06cdd4  jal         func_1B3750
    ctx->pc = 0x19EA28u;
    SET_GPR_U32(ctx, 31, 0x19EA30u);
    ctx->pc = 0x19EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA28u;
    // 0x19ea2c: 0x2445fc18  addiu       $a1, $v0, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3750u, 0x19EA28u, 0x19EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA30u;
}

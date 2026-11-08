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

// Function: entry_001ada24
// Address: 0x1ada24 - 0x1ada34
void entry_001ada24_0x1ada24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ada24_0x1ada24");
#endif

    switch (ctx->pc) {
        case 0x1ada30u: goto label_1ada30;
        default: break;
    }

    ctx->pc = 0x1ada24u;

    // 0x1ada24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ada24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada28: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1ADA28u;
    SET_GPR_U32(ctx, 31, 0x1ADA30u);
    ctx->pc = 0x1ADA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA28u;
    // 0x1ada2c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1ADA28u, 0x1ADA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA30u;
label_1ada30:
    // 0x1ada30: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ada30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
    ctx->pc = 0x1ada34u;
}

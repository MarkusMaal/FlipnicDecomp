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

// Function: entry_00160404
// Address: 0x160404 - 0x160418
void entry_00160404_0x160404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160404_0x160404");
#endif

    ctx->pc = 0x160404u;

label_160404:
    // 0x160404: 0x0  nop
    ctx->pc = 0x160404u;
    // NOP
label_160408:
    // 0x160408: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16040c:
    // 0x16040c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16040cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_160410:
    // 0x160410: 0x320f809  jalr        $t9
label_160414:
    if (ctx->pc == 0x160414u) {
        ctx->pc = 0x160414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160410u;
        // 0x160414: 0x8c850210  lw          $a1, 0x210($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160418u;
        goto label_fallthrough_0x160410;
    }
    ctx->pc = 0x160410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x160418u);
        ctx->pc = 0x160414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160410u;
        // 0x160414: 0x8c850210  lw          $a1, 0x210($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160410u, 0x160418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x160410:
    ctx->pc = 0x160418u;
}

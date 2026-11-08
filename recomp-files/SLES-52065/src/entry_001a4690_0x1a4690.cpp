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

// Function: entry_001a4690
// Address: 0x1a4690 - 0x1a46b4
void entry_001a4690_0x1a4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4690_0x1a4690");
#endif

    switch (ctx->pc) {
        case 0x1a4698u: goto label_1a4698;
        default: break;
    }

    ctx->pc = 0x1a4690u;

    // 0x1a4690: 0xc04ae90  jal         func_12BA40
    ctx->pc = 0x1A4690u;
    SET_GPR_U32(ctx, 31, 0x1A4698u);
    ctx->pc = 0x1A4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4690u;
    // 0x1a4694: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA40u, 0x1A4690u, 0x1A4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4698u;
label_1a4698:
    // 0x1a4698: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4698u;
    {
        const bool branch_taken_0x1a4698 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4698) {
            ctx->pc = 0x1A46B4u;
            return;
        }
    }
    ctx->pc = 0x1A46A0u;
    // 0x1a46a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a46a4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1a46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a46a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a46ac: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A46ACu;
    {
        const bool branch_taken_0x1a46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46ACu;
        // 0x1a46b0: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46ac) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A46B4u;
}

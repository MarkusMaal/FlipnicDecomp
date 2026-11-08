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

// Function: entry_00119414
// Address: 0x119414 - 0x119430
void entry_00119414_0x119414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119414_0x119414");
#endif

    switch (ctx->pc) {
        case 0x119420u: goto label_119420;
        default: break;
    }

    ctx->pc = 0x119414u;

label_119414:
    // 0x119414: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119418: 0xc046558  jal         func_119560
    ctx->pc = 0x119418u;
    SET_GPR_U32(ctx, 31, 0x119420u);
    ctx->pc = 0x11941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119418u;
    // 0x11941c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119560u, 0x119418u, 0x119420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119420u;
label_119420:
    // 0x119420: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x119420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x119424: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x119424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x119428: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119428u;
    {
        const bool branch_taken_0x119428 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x119428) {
            ctx->pc = 0x119414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119414;
        }
    }
    ctx->pc = 0x119430u;
}

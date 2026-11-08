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

// Function: entry_00119590
// Address: 0x119590 - 0x1195ac
void entry_00119590_0x119590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119590_0x119590");
#endif

    switch (ctx->pc) {
        case 0x1195a0u: goto label_1195a0;
        default: break;
    }

    ctx->pc = 0x119590u;

label_119590:
    // 0x119590: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x119594: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119598: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x119598u;
    SET_GPR_U32(ctx, 31, 0x1195A0u);
    ctx->pc = 0x11959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119598u;
    // 0x11959c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x119598u, 0x1195A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195A0u;
label_1195a0:
    // 0x1195a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1195a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1195a4: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1195A4u;
    {
        const bool branch_taken_0x1195a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1195A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195A4u;
        // 0x1195a8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195a4) {
            ctx->pc = 0x119590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119590;
        }
    }
    ctx->pc = 0x1195ACu;
}

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

// Function: entry_001d5070
// Address: 0x1d5070 - 0x1d5088
void entry_001d5070_0x1d5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5070_0x1d5070");
#endif

    switch (ctx->pc) {
        case 0x1d5080u: goto label_1d5080;
        default: break;
    }

    ctx->pc = 0x1d5070u;

label_1d5070:
    // 0x1d5070: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5074: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5078: 0xc0774c2  jal         func_1DD308
    ctx->pc = 0x1D5078u;
    SET_GPR_U32(ctx, 31, 0x1D5080u);
    ctx->pc = 0x1D507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5078u;
    // 0x1d507c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD308u, 0x1D5078u, 0x1D5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5080u;
label_1d5080:
    // 0x1d5080: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5080u;
    {
        const bool branch_taken_0x1d5080 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5080) {
            ctx->pc = 0x1D5084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5080u;
            // 0x1d5084: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5070;
        }
    }
    ctx->pc = 0x1D5088u;
}

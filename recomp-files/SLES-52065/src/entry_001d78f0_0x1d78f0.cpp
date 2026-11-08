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

// Function: entry_001d78f0
// Address: 0x1d78f0 - 0x1d790c
void entry_001d78f0_0x1d78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d78f0_0x1d78f0");
#endif

    switch (ctx->pc) {
        case 0x1d7904u: goto label_1d7904;
        default: break;
    }

    ctx->pc = 0x1d78f0u;

label_1d78f0:
    // 0x1d78f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d78f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d78f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d78f8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d78f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d78fc: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D78FCu;
    SET_GPR_U32(ctx, 31, 0x1D7904u);
    ctx->pc = 0x1D7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78FCu;
    // 0x1d7900: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D78FCu, 0x1D7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7904u;
label_1d7904:
    // 0x1d7904: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7904u;
        // 0x1d7908: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d78f0;
        }
    }
    ctx->pc = 0x1D790Cu;
}

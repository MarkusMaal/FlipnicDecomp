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

// Function: entry_001d7a40
// Address: 0x1d7a40 - 0x1d7a5c
void entry_001d7a40_0x1d7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7a40_0x1d7a40");
#endif

    switch (ctx->pc) {
        case 0x1d7a54u: goto label_1d7a54;
        default: break;
    }

    ctx->pc = 0x1d7a40u;

label_1d7a40:
    // 0x1d7a40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d7a44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7a48: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d7a4c: 0xc0775d2  jal         func_1DD748
    ctx->pc = 0x1D7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A54u);
    ctx->pc = 0x1D7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A4Cu;
    // 0x1d7a50: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD748u, 0x1D7A4Cu, 0x1D7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A54u;
label_1d7a54:
    // 0x1d7a54: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7A54u;
    {
        const bool branch_taken_0x1d7a54 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A54u;
        // 0x1d7a58: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a54) {
            ctx->pc = 0x1D7A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7a40;
        }
    }
    ctx->pc = 0x1D7A5Cu;
}

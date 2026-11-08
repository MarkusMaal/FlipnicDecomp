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

// Function: entry_001d7d68
// Address: 0x1d7d68 - 0x1d7d84
void entry_001d7d68_0x1d7d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7d68_0x1d7d68");
#endif

    switch (ctx->pc) {
        case 0x1d7d7cu: goto label_1d7d7c;
        default: break;
    }

    ctx->pc = 0x1d7d68u;

label_1d7d68:
    // 0x1d7d68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d7d6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7d70: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d7d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d7d74: 0xc077424  jal         func_1DD090
    ctx->pc = 0x1D7D74u;
    SET_GPR_U32(ctx, 31, 0x1D7D7Cu);
    ctx->pc = 0x1D7D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D74u;
    // 0x1d7d78: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD090u, 0x1D7D74u, 0x1D7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D7Cu;
label_1d7d7c:
    // 0x1d7d7c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7D7Cu;
    {
        const bool branch_taken_0x1d7d7c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D7Cu;
        // 0x1d7d80: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d7c) {
            ctx->pc = 0x1D7D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7d68;
        }
    }
    ctx->pc = 0x1D7D84u;
}

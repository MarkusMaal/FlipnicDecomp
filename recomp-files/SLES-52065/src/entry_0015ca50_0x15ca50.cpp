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

// Function: entry_0015ca50
// Address: 0x15ca50 - 0x15ca74
void entry_0015ca50_0x15ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca50_0x15ca50");
#endif

    switch (ctx->pc) {
        case 0x15ca68u: goto label_15ca68;
        default: break;
    }

    ctx->pc = 0x15ca50u;

label_15ca50:
    // 0x15ca50: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x15ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_15ca54:
    // 0x15ca54: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x15ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_15ca58:
    // 0x15ca58: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ca5c:
    // 0x15ca5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15ca60:
    // 0x15ca60: 0x320f809  jalr        $t9
label_15ca64:
    if (ctx->pc == 0x15CA64u) {
        ctx->pc = 0x15CA68u;
        goto label_15ca68;
    }
    ctx->pc = 0x15CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CA68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA60u, 0x15CA68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA68u;
label_15ca68:
    // 0x15ca68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_15ca6c:
    // 0x15ca6c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_15ca70:
    if (ctx->pc == 0x15CA70u) {
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA74u;
        goto label_fallthrough_0x15ca6c;
    }
    ctx->pc = 0x15CA6Cu;
    {
        const bool branch_taken_0x15ca6c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca6c) {
            ctx->pc = 0x15CA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ca50;
        }
    }
label_fallthrough_0x15ca6c:
    ctx->pc = 0x15CA74u;
}

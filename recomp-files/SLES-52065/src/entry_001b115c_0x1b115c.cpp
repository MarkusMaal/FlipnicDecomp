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

// Function: entry_001b115c
// Address: 0x1b115c - 0x1b1184
void entry_001b115c_0x1b115c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b115c_0x1b115c");
#endif

    switch (ctx->pc) {
        case 0x1b1174u: goto label_1b1174;
        default: break;
    }

    ctx->pc = 0x1b115cu;

label_1b115c:
    // 0x1b115c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b1160:
    // 0x1b1160: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1b1164:
    // 0x1b1164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1168:
    // 0x1b1168: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b116c:
    // 0x1b116c: 0x320f809  jalr        $t9
label_1b1170:
    if (ctx->pc == 0x1B1170u) {
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1174u;
        goto label_1b1174;
    }
    ctx->pc = 0x1B116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1174u);
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B116Cu, 0x1B1174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1174u;
label_1b1174:
    // 0x1b1174: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1178:
    // 0x1b1178: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1b1178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b117c:
    // 0x1b117c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b1180:
    if (ctx->pc == 0x1B1180u) {
        ctx->pc = 0x1B1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B117Cu;
        // 0x1b1180: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1184u;
        goto label_fallthrough_0x1b117c;
    }
    ctx->pc = 0x1B117Cu;
    {
        const bool branch_taken_0x1b117c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B117Cu;
        // 0x1b1180: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b117c) {
            ctx->pc = 0x1B115Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b115c;
        }
    }
label_fallthrough_0x1b117c:
    ctx->pc = 0x1B1184u;
}

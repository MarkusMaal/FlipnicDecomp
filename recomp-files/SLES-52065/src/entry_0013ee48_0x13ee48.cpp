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

// Function: entry_0013ee48
// Address: 0x13ee48 - 0x13ee68
void entry_0013ee48_0x13ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee48_0x13ee48");
#endif

    switch (ctx->pc) {
        case 0x13ee5cu: goto label_13ee5c;
        default: break;
    }

    ctx->pc = 0x13ee48u;

label_13ee48:
    // 0x13ee48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13ee4c:
    // 0x13ee4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ee4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ee50:
    // 0x13ee50: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x13ee50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_13ee54:
    // 0x13ee54: 0x320f809  jalr        $t9
label_13ee58:
    if (ctx->pc == 0x13EE58u) {
        ctx->pc = 0x13EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE54u;
        // 0x13ee58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE5Cu;
        goto label_13ee5c;
    }
    ctx->pc = 0x13EE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13EE5Cu);
        ctx->pc = 0x13EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE54u;
        // 0x13ee58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE54u, 0x13EE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EE5Cu;
label_13ee5c:
    // 0x13ee5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_13ee60:
    // 0x13ee60: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_13ee64:
    if (ctx->pc == 0x13EE64u) {
        ctx->pc = 0x13EE68u;
        goto label_fallthrough_0x13ee60;
    }
    ctx->pc = 0x13EE60u;
    {
        const bool branch_taken_0x13ee60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ee60) {
            ctx->pc = 0x13EE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ee48;
        }
    }
label_fallthrough_0x13ee60:
    ctx->pc = 0x13EE68u;
}

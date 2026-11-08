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

// Function: entry_0013eab8
// Address: 0x13eab8 - 0x13ead8
void entry_0013eab8_0x13eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eab8_0x13eab8");
#endif

    switch (ctx->pc) {
        case 0x13eaccu: goto label_13eacc;
        default: break;
    }

    ctx->pc = 0x13eab8u;

label_13eab8:
    // 0x13eab8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x13eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13eabc:
    // 0x13eabc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13eabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13eac0:
    // 0x13eac0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_13eac4:
    // 0x13eac4: 0x320f809  jalr        $t9
label_13eac8:
    if (ctx->pc == 0x13EAC8u) {
        ctx->pc = 0x13EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC4u;
        // 0x13eac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EACCu;
        goto label_13eacc;
    }
    ctx->pc = 0x13EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13EACCu);
        ctx->pc = 0x13EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC4u;
        // 0x13eac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAC4u, 0x13EACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EACCu;
label_13eacc:
    // 0x13eacc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x13eaccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_13ead0:
    // 0x13ead0: 0x1670fff9  bne         $s3, $s0, . + 4 + (-0x7 << 2)
label_13ead4:
    if (ctx->pc == 0x13EAD4u) {
        ctx->pc = 0x13EAD8u;
        goto label_fallthrough_0x13ead0;
    }
    ctx->pc = 0x13EAD0u;
    {
        const bool branch_taken_0x13ead0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ead0) {
            ctx->pc = 0x13EAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13eab8;
        }
    }
label_fallthrough_0x13ead0:
    ctx->pc = 0x13EAD8u;
}

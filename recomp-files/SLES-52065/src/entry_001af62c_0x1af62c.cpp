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

// Function: entry_001af62c
// Address: 0x1af62c - 0x1af654
void entry_001af62c_0x1af62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af62c_0x1af62c");
#endif

    switch (ctx->pc) {
        case 0x1af644u: goto label_1af644;
        default: break;
    }

    ctx->pc = 0x1af62cu;

label_1af62c:
    // 0x1af62c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1af630:
    // 0x1af630: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1af634:
    // 0x1af634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1af634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af638:
    // 0x1af638: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af63c:
    // 0x1af63c: 0x320f809  jalr        $t9
label_1af640:
    if (ctx->pc == 0x1AF640u) {
        ctx->pc = 0x1AF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF63Cu;
        // 0x1af640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF644u;
        goto label_1af644;
    }
    ctx->pc = 0x1AF63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF644u);
        ctx->pc = 0x1AF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF63Cu;
        // 0x1af640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF63Cu, 0x1AF644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF644u;
label_1af644:
    // 0x1af644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af648:
    // 0x1af648: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1af648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1af64c:
    // 0x1af64c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1af650:
    if (ctx->pc == 0x1AF650u) {
        ctx->pc = 0x1AF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF64Cu;
        // 0x1af650: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF654u;
        goto label_fallthrough_0x1af64c;
    }
    ctx->pc = 0x1AF64Cu;
    {
        const bool branch_taken_0x1af64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF64Cu;
        // 0x1af650: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af64c) {
            ctx->pc = 0x1AF62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af62c;
        }
    }
label_fallthrough_0x1af64c:
    ctx->pc = 0x1AF654u;
}

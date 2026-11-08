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

// Function: entry_001fe630
// Address: 0x1fe630 - 0x1fe660
void entry_001fe630_0x1fe630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe630_0x1fe630");
#endif

    switch (ctx->pc) {
        case 0x1fe64cu: goto label_1fe64c;
        default: break;
    }

    ctx->pc = 0x1fe630u;

label_1fe630:
    // 0x1fe630: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x1fe630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1fe634:
    // 0x1fe634: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1fe638:
    if (ctx->pc == 0x1FE638u) {
        ctx->pc = 0x1FE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE634u;
        // 0x1fe638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE63Cu;
        goto label_1fe63c;
    }
    ctx->pc = 0x1FE634u;
    {
        const bool branch_taken_0x1fe634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE634u;
        // 0x1fe638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe634) {
            ctx->pc = 0x1FE660u;
            return;
        }
    }
    ctx->pc = 0x1FE63Cu;
label_1fe63c:
    // 0x1fe63c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fe640:
    // 0x1fe640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe644:
    // 0x1fe644: 0x40f809  jalr        $v0
label_1fe648:
    if (ctx->pc == 0x1FE648u) {
        ctx->pc = 0x1FE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE644u;
        // 0x1fe648: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE64Cu;
        goto label_1fe64c;
    }
    ctx->pc = 0x1FE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE64Cu);
        ctx->pc = 0x1FE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE644u;
        // 0x1fe648: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE644u, 0x1FE64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE64Cu;
label_1fe64c:
    // 0x1fe64c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe650:
    // 0x1fe650: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_1fe654:
    if (ctx->pc == 0x1FE654u) {
        ctx->pc = 0x1FE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE650u;
        // 0x1fe654: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE658u;
        goto label_1fe658;
    }
    ctx->pc = 0x1FE650u;
    {
        const bool branch_taken_0x1fe650 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE650u;
        // 0x1fe654: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe650) {
            ctx->pc = 0x1FE6C4u;
            return;
        }
    }
    ctx->pc = 0x1FE658u;
label_1fe658:
    // 0x1fe658: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fe65c:
    if (ctx->pc == 0x1FE65Cu) {
        ctx->pc = 0x1FE660u;
        goto label_fallthrough_0x1fe658;
    }
    ctx->pc = 0x1FE658u;
    {
        const bool branch_taken_0x1fe658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe658) {
            ctx->pc = 0x1FE68Cu;
            return;
        }
    }
label_fallthrough_0x1fe658:
    ctx->pc = 0x1FE660u;
}

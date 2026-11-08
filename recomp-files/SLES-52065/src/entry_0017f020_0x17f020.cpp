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

// Function: entry_0017f020
// Address: 0x17f020 - 0x17f03c
void entry_0017f020_0x17f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f020_0x17f020");
#endif

    ctx->pc = 0x17f020u;

label_17f020:
    // 0x17f020: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f024:
    // 0x17f024: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17f028:
    if (ctx->pc == 0x17F028u) {
        ctx->pc = 0x17F02Cu;
        goto label_17f02c;
    }
    ctx->pc = 0x17F024u;
    {
        const bool branch_taken_0x17f024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f024) {
            ctx->pc = 0x17F03Cu;
            return;
        }
    }
    ctx->pc = 0x17F02Cu;
label_17f02c:
    // 0x17f02c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17f02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f030:
    // 0x17f030: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17f030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17f034:
    // 0x17f034: 0x320f809  jalr        $t9
label_17f038:
    if (ctx->pc == 0x17F038u) {
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F03Cu;
        goto label_fallthrough_0x17f034;
    }
    ctx->pc = 0x17F034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17F03Cu);
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F034u, 0x17F03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17f034:
    ctx->pc = 0x17F03Cu;
}

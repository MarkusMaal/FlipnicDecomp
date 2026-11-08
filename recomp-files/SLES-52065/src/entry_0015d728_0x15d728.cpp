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

// Function: entry_0015d728
// Address: 0x15d728 - 0x15d744
void entry_0015d728_0x15d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d728_0x15d728");
#endif

    ctx->pc = 0x15d728u;

label_15d728:
    // 0x15d728: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15d72c:
    // 0x15d72c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15d730:
    if (ctx->pc == 0x15D730u) {
        ctx->pc = 0x15D734u;
        goto label_15d734;
    }
    ctx->pc = 0x15D72Cu;
    {
        const bool branch_taken_0x15d72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d72c) {
            ctx->pc = 0x15D744u;
            return;
        }
    }
    ctx->pc = 0x15D734u;
label_15d734:
    // 0x15d734: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d738:
    // 0x15d738: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x15d738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_15d73c:
    // 0x15d73c: 0x320f809  jalr        $t9
label_15d740:
    if (ctx->pc == 0x15D740u) {
        ctx->pc = 0x15D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D73Cu;
        // 0x15d740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D744u;
        goto label_fallthrough_0x15d73c;
    }
    ctx->pc = 0x15D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D744u);
        ctx->pc = 0x15D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D73Cu;
        // 0x15d740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D73Cu, 0x15D744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d73c:
    ctx->pc = 0x15D744u;
}

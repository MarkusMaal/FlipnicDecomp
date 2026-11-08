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

// Function: entry_00127810
// Address: 0x127810 - 0x12782c
void entry_00127810_0x127810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127810_0x127810");
#endif

    ctx->pc = 0x127810u;

label_127810:
    // 0x127810: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_127814:
    // 0x127814: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_127818:
    if (ctx->pc == 0x127818u) {
        ctx->pc = 0x12781Cu;
        goto label_12781c;
    }
    ctx->pc = 0x127814u;
    {
        const bool branch_taken_0x127814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127814) {
            ctx->pc = 0x12782Cu;
            return;
        }
    }
    ctx->pc = 0x12781Cu;
label_12781c:
    // 0x12781c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127820:
    // 0x127820: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127824:
    // 0x127824: 0x320f809  jalr        $t9
label_127828:
    if (ctx->pc == 0x127828u) {
        ctx->pc = 0x127828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127824u;
        // 0x127828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12782Cu;
        goto label_fallthrough_0x127824;
    }
    ctx->pc = 0x127824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12782Cu);
        ctx->pc = 0x127828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127824u;
        // 0x127828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127824u, 0x12782Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x127824:
    ctx->pc = 0x12782Cu;
}

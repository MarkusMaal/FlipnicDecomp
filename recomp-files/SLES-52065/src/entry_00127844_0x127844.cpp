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

// Function: entry_00127844
// Address: 0x127844 - 0x127860
void entry_00127844_0x127844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127844_0x127844");
#endif

    ctx->pc = 0x127844u;

label_127844:
    // 0x127844: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x127844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_127848:
    // 0x127848: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12784c:
    if (ctx->pc == 0x12784Cu) {
        ctx->pc = 0x127850u;
        goto label_127850;
    }
    ctx->pc = 0x127848u;
    {
        const bool branch_taken_0x127848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127848) {
            ctx->pc = 0x127860u;
            return;
        }
    }
    ctx->pc = 0x127850u;
label_127850:
    // 0x127850: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127854:
    // 0x127854: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127858:
    // 0x127858: 0x320f809  jalr        $t9
label_12785c:
    if (ctx->pc == 0x12785Cu) {
        ctx->pc = 0x12785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127858u;
        // 0x12785c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127860u;
        goto label_fallthrough_0x127858;
    }
    ctx->pc = 0x127858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127860u);
        ctx->pc = 0x12785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127858u;
        // 0x12785c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127858u, 0x127860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x127858:
    ctx->pc = 0x127860u;
}

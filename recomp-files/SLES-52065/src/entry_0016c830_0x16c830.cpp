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

// Function: entry_0016c830
// Address: 0x16c830 - 0x16c84c
void entry_0016c830_0x16c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c830_0x16c830");
#endif

    ctx->pc = 0x16c830u;

label_16c830:
    // 0x16c830: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_16c834:
    if (ctx->pc == 0x16C834u) {
        ctx->pc = 0x16C838u;
        goto label_16c838;
    }
    ctx->pc = 0x16C830u;
    {
        const bool branch_taken_0x16c830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c830) {
            ctx->pc = 0x16C84Cu;
            return;
        }
    }
    ctx->pc = 0x16C838u;
label_16c838:
    // 0x16c838: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c83c:
    // 0x16c83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c840:
    // 0x16c840: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c844:
    // 0x16c844: 0x320f809  jalr        $t9
label_16c848:
    if (ctx->pc == 0x16C848u) {
        ctx->pc = 0x16C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C844u;
        // 0x16c848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C84Cu;
        goto label_fallthrough_0x16c844;
    }
    ctx->pc = 0x16C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C84Cu);
        ctx->pc = 0x16C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C844u;
        // 0x16c848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C844u, 0x16C84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16c844:
    ctx->pc = 0x16C84Cu;
}

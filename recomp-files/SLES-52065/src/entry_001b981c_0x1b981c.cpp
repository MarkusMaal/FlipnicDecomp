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

// Function: entry_001b981c
// Address: 0x1b981c - 0x1b9840
void entry_001b981c_0x1b981c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b981c_0x1b981c");
#endif

    ctx->pc = 0x1b981cu;

label_1b981c:
    // 0x1b981c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1b981cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1b9820:
    // 0x1b9820: 0x10200104  beqz        $at, . + 4 + (0x104 << 2)
label_1b9824:
    if (ctx->pc == 0x1B9824u) {
        ctx->pc = 0x1B9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9820u;
        // 0x1b9824: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9828u;
        goto label_1b9828;
    }
    ctx->pc = 0x1B9820u;
    {
        const bool branch_taken_0x1b9820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9820u;
        // 0x1b9824: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9820) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9828u;
label_1b9828:
    // 0x1b9828: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b9828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b982c:
    // 0x1b982c: 0x24841020  addiu       $a0, $a0, 0x1020
    ctx->pc = 0x1b982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
label_1b9830:
    // 0x1b9830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b9830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b9834:
    // 0x1b9834: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b9834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9838:
    // 0x1b9838: 0x600008  jr          $v1
label_1b983c:
    if (ctx->pc == 0x1B983Cu) {
        ctx->pc = 0x1B9840u;
        goto label_fallthrough_0x1b9838;
    }
    ctx->pc = 0x1B9838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9838u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1b9838:
    ctx->pc = 0x1B9840u;
}

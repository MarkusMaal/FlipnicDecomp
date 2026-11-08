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

// Function: entry_00124584
// Address: 0x124584 - 0x1245a8
void entry_00124584_0x124584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124584_0x124584");
#endif

    ctx->pc = 0x124584u;

label_124584:
    // 0x124584: 0x2e810007  sltiu       $at, $s4, 0x7
    ctx->pc = 0x124584u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_124588:
    // 0x124588: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
label_12458c:
    if (ctx->pc == 0x12458Cu) {
        ctx->pc = 0x12458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124588u;
        // 0x12458c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124590u;
        goto label_124590;
    }
    ctx->pc = 0x124588u;
    {
        const bool branch_taken_0x124588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124588u;
        // 0x12458c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124588) {
            ctx->pc = 0x1246B4u;
            return;
        }
    }
    ctx->pc = 0x124590u;
label_124590:
    // 0x124590: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_124594:
    // 0x124594: 0x2463eab0  addiu       $v1, $v1, -0x1550
    ctx->pc = 0x124594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961840));
label_124598:
    // 0x124598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12459c:
    // 0x12459c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1245a0:
    // 0x1245a0: 0x400008  jr          $v0
label_1245a4:
    if (ctx->pc == 0x1245A4u) {
        ctx->pc = 0x1245A8u;
        goto label_fallthrough_0x1245a0;
    }
    ctx->pc = 0x1245A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1245A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1245a0:
    ctx->pc = 0x1245A8u;
}

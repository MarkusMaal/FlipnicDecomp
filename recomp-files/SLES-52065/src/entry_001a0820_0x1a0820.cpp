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

// Function: entry_001a0820
// Address: 0x1a0820 - 0x1a083c
void entry_001a0820_0x1a0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0820_0x1a0820");
#endif

    ctx->pc = 0x1a0820u;

label_1a0820:
    // 0x1a0820: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a0824:
    if (ctx->pc == 0x1A0824u) {
        ctx->pc = 0x1A0828u;
        goto label_1a0828;
    }
    ctx->pc = 0x1A0820u;
    {
        const bool branch_taken_0x1a0820 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0820) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A0828u;
label_1a0828:
    // 0x1a0828: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a0828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a082c:
    // 0x1a082c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0830:
    // 0x1a0830: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a0834:
    // 0x1a0834: 0x320f809  jalr        $t9
label_1a0838:
    if (ctx->pc == 0x1A0838u) {
        ctx->pc = 0x1A0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0834u;
        // 0x1a0838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A083Cu;
        goto label_fallthrough_0x1a0834;
    }
    ctx->pc = 0x1A0834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A083Cu);
        ctx->pc = 0x1A0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0834u;
        // 0x1a0838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0834u, 0x1A083Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a0834:
    ctx->pc = 0x1A083Cu;
}

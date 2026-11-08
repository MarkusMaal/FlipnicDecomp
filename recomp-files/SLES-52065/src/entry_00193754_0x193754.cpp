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

// Function: entry_00193754
// Address: 0x193754 - 0x19376c
void entry_00193754_0x193754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193754_0x193754");
#endif

    switch (ctx->pc) {
        case 0x193764u: goto label_193764;
        default: break;
    }

    ctx->pc = 0x193754u;

label_193754:
    // 0x193754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193758:
    // 0x193758: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_19375c:
    // 0x19375c: 0x320f809  jalr        $t9
label_193760:
    if (ctx->pc == 0x193760u) {
        ctx->pc = 0x193760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19375Cu;
        // 0x193760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193764u;
        goto label_193764;
    }
    ctx->pc = 0x19375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193764u);
        ctx->pc = 0x193760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19375Cu;
        // 0x193760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19375Cu, 0x193764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193764u;
label_193764:
    // 0x193764: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_193768:
    if (ctx->pc == 0x193768u) {
        ctx->pc = 0x19376Cu;
        goto label_fallthrough_0x193764;
    }
    ctx->pc = 0x193764u;
    {
        const bool branch_taken_0x193764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193764) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193764:
    ctx->pc = 0x19376Cu;
}

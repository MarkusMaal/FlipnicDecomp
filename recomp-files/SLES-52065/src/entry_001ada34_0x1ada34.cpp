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

// Function: entry_001ada34
// Address: 0x1ada34 - 0x1ada50
void entry_001ada34_0x1ada34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ada34_0x1ada34");
#endif

    ctx->pc = 0x1ada34u;

label_1ada34:
    // 0x1ada34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ada38:
    if (ctx->pc == 0x1ADA38u) {
        ctx->pc = 0x1ADA3Cu;
        goto label_1ada3c;
    }
    ctx->pc = 0x1ADA34u;
    {
        const bool branch_taken_0x1ada34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ada34) {
            ctx->pc = 0x1ADA50u;
            return;
        }
    }
    ctx->pc = 0x1ADA3Cu;
label_1ada3c:
    // 0x1ada3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ada40:
    // 0x1ada40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ada44:
    // 0x1ada44: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ada44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ada48:
    // 0x1ada48: 0x320f809  jalr        $t9
label_1ada4c:
    if (ctx->pc == 0x1ADA4Cu) {
        ctx->pc = 0x1ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA48u;
        // 0x1ada4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA50u;
        goto label_fallthrough_0x1ada48;
    }
    ctx->pc = 0x1ADA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ADA50u);
        ctx->pc = 0x1ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA48u;
        // 0x1ada4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA48u, 0x1ADA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ada48:
    ctx->pc = 0x1ADA50u;
}

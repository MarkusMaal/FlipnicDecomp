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

// Function: entry_0014c65c
// Address: 0x14c65c - 0x14c674
void entry_0014c65c_0x14c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c65c_0x14c65c");
#endif

    switch (ctx->pc) {
        case 0x14c670u: goto label_14c670;
        default: break;
    }

    ctx->pc = 0x14c65cu;

label_14c65c:
    // 0x14c65c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c660:
    // 0x14c660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c664:
    // 0x14c664: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c668:
    // 0x14c668: 0x320f809  jalr        $t9
label_14c66c:
    if (ctx->pc == 0x14C66Cu) {
        ctx->pc = 0x14C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C668u;
        // 0x14c66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C670u;
        goto label_14c670;
    }
    ctx->pc = 0x14C668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C670u);
        ctx->pc = 0x14C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C668u;
        // 0x14c66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C668u, 0x14C670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C670u;
label_14c670:
    // 0x14c670: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x14c674u;
}

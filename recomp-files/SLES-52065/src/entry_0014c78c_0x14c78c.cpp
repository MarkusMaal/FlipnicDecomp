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

// Function: entry_0014c78c
// Address: 0x14c78c - 0x14c7a4
void entry_0014c78c_0x14c78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c78c_0x14c78c");
#endif

    switch (ctx->pc) {
        case 0x14c7a0u: goto label_14c7a0;
        default: break;
    }

    ctx->pc = 0x14c78cu;

label_14c78c:
    // 0x14c78c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c790:
    // 0x14c790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c794:
    // 0x14c794: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c798:
    // 0x14c798: 0x320f809  jalr        $t9
label_14c79c:
    if (ctx->pc == 0x14C79Cu) {
        ctx->pc = 0x14C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C798u;
        // 0x14c79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7A0u;
        goto label_14c7a0;
    }
    ctx->pc = 0x14C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C7A0u);
        ctx->pc = 0x14C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C798u;
        // 0x14c79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C798u, 0x14C7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C7A0u;
label_14c7a0:
    // 0x14c7a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x14c7a4u;
}

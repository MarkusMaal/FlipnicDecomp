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

// Function: entry_0015d7bc
// Address: 0x15d7bc - 0x15d7d8
void entry_0015d7bc_0x15d7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d7bc_0x15d7bc");
#endif

    ctx->pc = 0x15d7bcu;

label_15d7bc:
    // 0x15d7bc: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15d7c0:
    // 0x15d7c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15d7c4:
    if (ctx->pc == 0x15D7C4u) {
        ctx->pc = 0x15D7C8u;
        goto label_15d7c8;
    }
    ctx->pc = 0x15D7C0u;
    {
        const bool branch_taken_0x15d7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7c0) {
            ctx->pc = 0x15D7D8u;
            return;
        }
    }
    ctx->pc = 0x15D7C8u;
label_15d7c8:
    // 0x15d7c8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d7cc:
    // 0x15d7cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_15d7d0:
    // 0x15d7d0: 0x320f809  jalr        $t9
label_15d7d4:
    if (ctx->pc == 0x15D7D4u) {
        ctx->pc = 0x15D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D0u;
        // 0x15d7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7D8u;
        goto label_fallthrough_0x15d7d0;
    }
    ctx->pc = 0x15D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D7D8u);
        ctx->pc = 0x15D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D0u;
        // 0x15d7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D7D0u, 0x15D7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d7d0:
    ctx->pc = 0x15D7D8u;
}

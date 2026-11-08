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

// Function: entry_001930d8
// Address: 0x1930d8 - 0x1930f0
void entry_001930d8_0x1930d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930d8_0x1930d8");
#endif

    switch (ctx->pc) {
        case 0x1930e8u: goto label_1930e8;
        default: break;
    }

    ctx->pc = 0x1930d8u;

label_1930d8:
    // 0x1930d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1930d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1930dc:
    // 0x1930dc: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1930dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1930e0:
    // 0x1930e0: 0x320f809  jalr        $t9
label_1930e4:
    if (ctx->pc == 0x1930E4u) {
        ctx->pc = 0x1930E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E0u;
        // 0x1930e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930E8u;
        goto label_1930e8;
    }
    ctx->pc = 0x1930E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1930E8u);
        ctx->pc = 0x1930E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E0u;
        // 0x1930e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930E0u, 0x1930E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1930E8u;
label_1930e8:
    // 0x1930e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1930ec:
    if (ctx->pc == 0x1930ECu) {
        ctx->pc = 0x1930F0u;
        goto label_fallthrough_0x1930e8;
    }
    ctx->pc = 0x1930E8u;
    {
        const bool branch_taken_0x1930e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930e8) {
            ctx->pc = 0x193118u;
            return;
        }
    }
label_fallthrough_0x1930e8:
    ctx->pc = 0x1930F0u;
}

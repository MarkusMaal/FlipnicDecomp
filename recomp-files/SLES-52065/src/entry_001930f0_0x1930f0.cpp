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

// Function: entry_001930f0
// Address: 0x1930f0 - 0x193108
void entry_001930f0_0x1930f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930f0_0x1930f0");
#endif

    switch (ctx->pc) {
        case 0x193100u: goto label_193100;
        default: break;
    }

    ctx->pc = 0x1930f0u;

label_1930f0:
    // 0x1930f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1930f4:
    // 0x1930f4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1930f8:
    // 0x1930f8: 0x320f809  jalr        $t9
label_1930fc:
    if (ctx->pc == 0x1930FCu) {
        ctx->pc = 0x1930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930F8u;
        // 0x1930fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193100u;
        goto label_193100;
    }
    ctx->pc = 0x1930F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193100u);
        ctx->pc = 0x1930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930F8u;
        // 0x1930fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930F8u, 0x193100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193100u;
label_193100:
    // 0x193100: 0x10000005  b           . + 4 + (0x5 << 2)
label_193104:
    if (ctx->pc == 0x193104u) {
        ctx->pc = 0x193108u;
        goto label_fallthrough_0x193100;
    }
    ctx->pc = 0x193100u;
    {
        const bool branch_taken_0x193100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193100) {
            ctx->pc = 0x193118u;
            return;
        }
    }
label_fallthrough_0x193100:
    ctx->pc = 0x193108u;
}

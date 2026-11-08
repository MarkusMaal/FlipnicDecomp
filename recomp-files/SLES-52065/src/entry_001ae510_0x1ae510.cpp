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

// Function: entry_001ae510
// Address: 0x1ae510 - 0x1ae530
void entry_001ae510_0x1ae510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae510_0x1ae510");
#endif

    switch (ctx->pc) {
        case 0x1ae520u: goto label_1ae520;
        default: break;
    }

    ctx->pc = 0x1ae510u;

    // 0x1ae510: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ae514: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ae518: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AE518u;
    SET_GPR_U32(ctx, 31, 0x1AE520u);
    ctx->pc = 0x1AE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE518u;
    // 0x1ae51c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AE518u, 0x1AE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE520u;
label_1ae520:
    // 0x1ae520: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1ae524: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1ae524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
    // 0x1ae528: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AE528u;
    {
        const bool branch_taken_0x1ae528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE528u;
        // 0x1ae52c: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae528) {
            ctx->pc = 0x1AE578u;
            return;
        }
    }
    ctx->pc = 0x1AE530u;
}

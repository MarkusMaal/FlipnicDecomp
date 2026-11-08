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

// Function: entry_00195424
// Address: 0x195424 - 0x19543c
void entry_00195424_0x195424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195424_0x195424");
#endif

    switch (ctx->pc) {
        case 0x195434u: goto label_195434;
        default: break;
    }

    ctx->pc = 0x195424u;

    // 0x195424: 0x0  nop
    ctx->pc = 0x195424u;
    // NOP
    // 0x195428: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x19542c: 0xc046414  jal         func_119050
    ctx->pc = 0x19542Cu;
    SET_GPR_U32(ctx, 31, 0x195434u);
    ctx->pc = 0x195430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19542Cu;
    // 0x195430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119050u, 0x19542Cu, 0x195434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195434u;
label_195434:
    // 0x195434: 0x1000024b  b           . + 4 + (0x24B << 2)
    ctx->pc = 0x195434u;
    {
        const bool branch_taken_0x195434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195434) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x19543Cu;
}

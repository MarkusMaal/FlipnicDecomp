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

// Function: entry_00119430
// Address: 0x119430 - 0x119444
void entry_00119430_0x119430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119430_0x119430");
#endif

    ctx->pc = 0x119430u;

    // 0x119430: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119434u;
    {
        const bool branch_taken_0x119434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119434u;
        // 0x119438: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119434) {
            ctx->pc = 0x119444u;
            return;
        }
    }
    ctx->pc = 0x11943Cu;
    // 0x11943c: 0xc04018c  jal         func_100630
    ctx->pc = 0x11943Cu;
    SET_GPR_U32(ctx, 31, 0x119444u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x11943Cu, 0x119444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119444u;
}

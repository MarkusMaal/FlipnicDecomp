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

// Function: entry_001bcae0
// Address: 0x1bcae0 - 0x1bcaf8
void entry_001bcae0_0x1bcae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcae0_0x1bcae0");
#endif

    ctx->pc = 0x1bcae0u;

    // 0x1bcae0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1bcae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1bcae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcae8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BCAE8u;
    {
        const bool branch_taken_0x1bcae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcae8) {
            ctx->pc = 0x1BCAD8u;
            return;
        }
    }
    ctx->pc = 0x1BCAF0u;
    // 0x1bcaf0: 0xc06f490  jal         func_1BD240
    ctx->pc = 0x1BCAF0u;
    SET_GPR_U32(ctx, 31, 0x1BCAF8u);
    ctx->pc = 0x1BCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAF0u;
    // 0x1bcaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD240u, 0x1BCAF0u, 0x1BCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAF8u;
}

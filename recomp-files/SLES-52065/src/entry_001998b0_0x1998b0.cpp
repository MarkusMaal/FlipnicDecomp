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

// Function: entry_001998b0
// Address: 0x1998b0 - 0x1998c8
void entry_001998b0_0x1998b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001998b0_0x1998b0");
#endif

    ctx->pc = 0x1998b0u;

    // 0x1998b0: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x1998b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1998B4u;
    {
        const bool branch_taken_0x1998b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998b4) {
            ctx->pc = 0x1998C8u;
            return;
        }
    }
    ctx->pc = 0x1998BCu;
    // 0x1998bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1998bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1998c0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1998C0u;
    SET_GPR_U32(ctx, 31, 0x1998C8u);
    ctx->pc = 0x1998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998C0u;
    // 0x1998c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1998C0u, 0x1998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998C8u;
}

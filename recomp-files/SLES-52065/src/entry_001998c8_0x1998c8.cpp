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

// Function: entry_001998c8
// Address: 0x1998c8 - 0x1998e0
void entry_001998c8_0x1998c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001998c8_0x1998c8");
#endif

    ctx->pc = 0x1998c8u;

    // 0x1998c8: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x1998c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x1998cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1998CCu;
    {
        const bool branch_taken_0x1998cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998cc) {
            ctx->pc = 0x1998E0u;
            return;
        }
    }
    ctx->pc = 0x1998D4u;
    // 0x1998d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1998d8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1998D8u;
    SET_GPR_U32(ctx, 31, 0x1998E0u);
    ctx->pc = 0x1998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998D8u;
    // 0x1998dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1998D8u, 0x1998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998E0u;
}

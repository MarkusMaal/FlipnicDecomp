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

// Function: caseD_7
// Address: 0x1ab1d0 - 0x1ab1e8
void caseD_7_0x1ab1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ab1d0");
#endif

    switch (ctx->pc) {
        case 0x1ab1d8u: goto label_1ab1d8;
        default: break;
    }

    ctx->pc = 0x1ab1d0u;

    // 0x1ab1d0: 0xc06adf8  jal         func_1AB7E0
    ctx->pc = 0x1AB1D0u;
    SET_GPR_U32(ctx, 31, 0x1AB1D8u);
    ctx->pc = 0x1AB1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1D0u;
    // 0x1ab1d4: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB7E0u, 0x1AB1D0u, 0x1AB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1D8u;
label_1ab1d8:
    // 0x1ab1d8: 0x8e8306dc  lw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
    // 0x1ab1dc: 0x18600129  blez        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x1AB1DCu;
    {
        const bool branch_taken_0x1ab1dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1DCu;
        // 0x1ab1e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1dc) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB1E4u;
    // 0x1ab1e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ab1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ab1e8u;
}

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

// Function: caseD_2
// Address: 0x1d20f0 - 0x1d2114
void caseD_2_0x1d20f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1d20f0");
#endif

    switch (ctx->pc) {
        case 0x1d20f8u: goto label_1d20f8;
        default: break;
    }

    ctx->pc = 0x1d20f0u;

    // 0x1d20f0: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1D20F0u;
    SET_GPR_U32(ctx, 31, 0x1D20F8u);
    ctx->pc = 0x1D20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20F0u;
    // 0x1d20f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1D20F0u, 0x1D20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20F8u;
label_1d20f8:
    // 0x1d20f8: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1D20F8u;
    {
        const bool branch_taken_0x1d20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20F8u;
        // 0x1d20fc: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20f8) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D2100u;
    // 0x1d2100: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966944)));
    // 0x1d2104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2108: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d210c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D210Cu;
    {
        const bool branch_taken_0x1d210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D210Cu;
        // 0x1d2110: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d210c) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D2114u;
}

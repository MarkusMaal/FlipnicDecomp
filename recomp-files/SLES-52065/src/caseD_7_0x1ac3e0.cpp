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
// Address: 0x1ac3e0 - 0x1ac3f8
void caseD_7_0x1ac3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ac3e0");
#endif

    switch (ctx->pc) {
        case 0x1ac3e8u: goto label_1ac3e8;
        default: break;
    }

    ctx->pc = 0x1ac3e0u;

    // 0x1ac3e0: 0xc06b27c  jal         func_1AC9F0
    ctx->pc = 0x1AC3E0u;
    SET_GPR_U32(ctx, 31, 0x1AC3E8u);
    ctx->pc = 0x1AC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3E0u;
    // 0x1ac3e4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC9F0u, 0x1AC3E0u, 0x1AC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3E8u;
label_1ac3e8:
    // 0x1ac3e8: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
    // 0x1ac3ec: 0x18600129  blez        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x1AC3ECu;
    {
        const bool branch_taken_0x1ac3ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3ec) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC3F4u;
    // 0x1ac3f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ac3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ac3f8u;
}

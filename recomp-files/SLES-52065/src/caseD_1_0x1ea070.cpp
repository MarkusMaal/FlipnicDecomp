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

// Function: caseD_1
// Address: 0x1ea070 - 0x1ea090
void caseD_1_0x1ea070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ea070");
#endif

    switch (ctx->pc) {
        case 0x1ea07cu: goto label_1ea07c;
        default: break;
    }

    ctx->pc = 0x1ea070u;

    // 0x1ea070: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea074: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA074u;
    SET_GPR_U32(ctx, 31, 0x1EA07Cu);
    ctx->pc = 0x1EA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA074u;
    // 0x1ea078: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA074u, 0x1EA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA07Cu;
label_1ea07c:
    // 0x1ea07c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1ea07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ea080: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1ea080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1ea084: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ea084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ea088: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1EA088u;
    {
        const bool branch_taken_0x1ea088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA088u;
        // 0x1ea08c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea088) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA090u;
}

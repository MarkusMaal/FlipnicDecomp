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

// Function: entry_001b7788
// Address: 0x1b7788 - 0x1b77a8
void entry_001b7788_0x1b7788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7788_0x1b7788");
#endif

    switch (ctx->pc) {
        case 0x1b779cu: goto label_1b779c;
        default: break;
    }

    ctx->pc = 0x1b7788u;

    // 0x1b7788: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1b778c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7790: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7794: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7794u;
    SET_GPR_U32(ctx, 31, 0x1B779Cu);
    ctx->pc = 0x1B7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7794u;
    // 0x1b7798: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7794u, 0x1B779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B779Cu;
label_1b779c:
    // 0x1b779c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b77a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B77A0u;
    {
        const bool branch_taken_0x1b77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77A0u;
        // 0x1b77a4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77a0) {
            ctx->pc = 0x1B77B8u;
            return;
        }
    }
    ctx->pc = 0x1B77A8u;
}

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

// Function: entry_0015d2cc
// Address: 0x15d2cc - 0x15d2f8
void entry_0015d2cc_0x15d2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d2cc_0x15d2cc");
#endif

    ctx->pc = 0x15d2ccu;

label_15d2cc:
    // 0x15d2cc: 0x0  nop
    ctx->pc = 0x15d2ccu;
    // NOP
label_15d2d0:
    // 0x15d2d0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_15d2d4:
    // 0x15d2d4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d2d8:
    // 0x15d2d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d2dc:
    // 0x15d2dc: 0x80420028  lb          $v0, 0x28($v0)
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_15d2e0:
    // 0x15d2e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15d2e4:
    if (ctx->pc == 0x15D2E4u) {
        ctx->pc = 0x15D2E8u;
        goto label_15d2e8;
    }
    ctx->pc = 0x15D2E0u;
    {
        const bool branch_taken_0x15d2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d2e0) {
            ctx->pc = 0x15D2F8u;
            return;
        }
    }
    ctx->pc = 0x15D2E8u;
label_15d2e8:
    // 0x15d2e8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d2ec:
    // 0x15d2ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d2f0:
    // 0x15d2f0: 0x320f809  jalr        $t9
label_15d2f4:
    if (ctx->pc == 0x15D2F4u) {
        ctx->pc = 0x15D2F8u;
        goto label_fallthrough_0x15d2f0;
    }
    ctx->pc = 0x15D2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D2F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D2F0u, 0x15D2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d2f0:
    ctx->pc = 0x15D2F8u;
}

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

// Function: entry_0015d58c
// Address: 0x15d58c - 0x15d5b8
void entry_0015d58c_0x15d58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d58c_0x15d58c");
#endif

    ctx->pc = 0x15d58cu;

label_15d58c:
    // 0x15d58c: 0x0  nop
    ctx->pc = 0x15d58cu;
    // NOP
label_15d590:
    // 0x15d590: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x15d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_15d594:
    // 0x15d594: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d598:
    // 0x15d598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d59c:
    // 0x15d59c: 0x80420028  lb          $v0, 0x28($v0)
    ctx->pc = 0x15d59cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_15d5a0:
    // 0x15d5a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15d5a4:
    if (ctx->pc == 0x15D5A4u) {
        ctx->pc = 0x15D5A8u;
        goto label_15d5a8;
    }
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D5B8u;
            return;
        }
    }
    ctx->pc = 0x15D5A8u;
label_15d5a8:
    // 0x15d5a8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d5ac:
    // 0x15d5ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d5b0:
    // 0x15d5b0: 0x320f809  jalr        $t9
label_15d5b4:
    if (ctx->pc == 0x15D5B4u) {
        ctx->pc = 0x15D5B8u;
        goto label_fallthrough_0x15d5b0;
    }
    ctx->pc = 0x15D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D5B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D5B0u, 0x15D5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d5b0:
    ctx->pc = 0x15D5B8u;
}

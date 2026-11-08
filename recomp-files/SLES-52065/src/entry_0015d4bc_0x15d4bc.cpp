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

// Function: entry_0015d4bc
// Address: 0x15d4bc - 0x15d4d4
void entry_0015d4bc_0x15d4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d4bc_0x15d4bc");
#endif

    ctx->pc = 0x15d4bcu;

label_15d4bc:
    // 0x15d4bc: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_15d4c0:
    if (ctx->pc == 0x15D4C0u) {
        ctx->pc = 0x15D4C4u;
        goto label_15d4c4;
    }
    ctx->pc = 0x15D4BCu;
    {
        const bool branch_taken_0x15d4bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d4bc) {
            ctx->pc = 0x15D4D4u;
            return;
        }
    }
    ctx->pc = 0x15D4C4u;
label_15d4c4:
    // 0x15d4c4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d4c8:
    // 0x15d4c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d4cc:
    // 0x15d4cc: 0x320f809  jalr        $t9
label_15d4d0:
    if (ctx->pc == 0x15D4D0u) {
        ctx->pc = 0x15D4D4u;
        goto label_fallthrough_0x15d4cc;
    }
    ctx->pc = 0x15D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D4D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4CCu, 0x15D4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d4cc:
    ctx->pc = 0x15D4D4u;
}

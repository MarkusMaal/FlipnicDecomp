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

// Function: entry_0015d5f4
// Address: 0x15d5f4 - 0x15d614
void entry_0015d5f4_0x15d5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d5f4_0x15d5f4");
#endif

    switch (ctx->pc) {
        case 0x15d60cu: goto label_15d60c;
        default: break;
    }

    ctx->pc = 0x15d5f4u;

label_15d5f4:
    // 0x15d5f4: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x15d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_15d5f8:
    // 0x15d5f8: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x15d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_15d5fc:
    // 0x15d5fc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d600:
    // 0x15d600: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d604:
    // 0x15d604: 0x320f809  jalr        $t9
label_15d608:
    if (ctx->pc == 0x15D608u) {
        ctx->pc = 0x15D60Cu;
        goto label_15d60c;
    }
    ctx->pc = 0x15D604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D60Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D604u, 0x15D60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D60Cu;
label_15d60c:
    // 0x15d60c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_15d610:
    // 0x15d610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x15d614u;
}

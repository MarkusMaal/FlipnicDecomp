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

// Function: entry_0015d674
// Address: 0x15d674 - 0x15d694
void entry_0015d674_0x15d674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d674_0x15d674");
#endif

    switch (ctx->pc) {
        case 0x15d68cu: goto label_15d68c;
        default: break;
    }

    ctx->pc = 0x15d674u;

label_15d674:
    // 0x15d674: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_15d678:
    // 0x15d678: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_15d67c:
    // 0x15d67c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d680:
    // 0x15d680: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_15d684:
    // 0x15d684: 0x320f809  jalr        $t9
label_15d688:
    if (ctx->pc == 0x15D688u) {
        ctx->pc = 0x15D68Cu;
        goto label_15d68c;
    }
    ctx->pc = 0x15D684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D68Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D684u, 0x15D68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D68Cu;
label_15d68c:
    // 0x15d68c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d690:
    // 0x15d690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x15d694u;
}

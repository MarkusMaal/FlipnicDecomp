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

// Function: entry_0013d570
// Address: 0x13d570 - 0x13d590
void entry_0013d570_0x13d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d570_0x13d570");
#endif

    switch (ctx->pc) {
        case 0x13d570u: goto label_13d570;
        case 0x13d574u: goto label_13d574;
        case 0x13d578u: goto label_13d578;
        case 0x13d57cu: goto label_13d57c;
        case 0x13d580u: goto label_13d580;
        case 0x13d584u: goto label_13d584;
        case 0x13d588u: goto label_13d588;
        case 0x13d58cu: goto label_13d58c;
        default: break;
    }

    ctx->pc = 0x13d570u;

label_13d570:
    // 0x13d570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d574:
    // 0x13d574: 0x8c86016c  lw          $a2, 0x16C($a0)
    ctx->pc = 0x13d574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_13d578:
    // 0x13d578: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x13d578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_13d57c:
    // 0x13d57c: 0x3200008  jr          $t9
label_13d580:
    if (ctx->pc == 0x13D580u) {
        ctx->pc = 0x13D584u;
        goto label_13d584;
    }
    ctx->pc = 0x13D57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D57Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13D584u;
label_13d584:
    // 0x13d584: 0x0  nop
    ctx->pc = 0x13d584u;
    // NOP
label_13d588:
    // 0x13d588: 0x0  nop
    ctx->pc = 0x13d588u;
    // NOP
label_13d58c:
    // 0x13d58c: 0x0  nop
    ctx->pc = 0x13d58cu;
    // NOP
    ctx->pc = 0x13d590u;
}

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

// Function: entry_00126a28
// Address: 0x126a28 - 0x126a38
void entry_00126a28_0x126a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126a28_0x126a28");
#endif

    switch (ctx->pc) {
        case 0x126a30u: goto label_126a30;
        default: break;
    }

    ctx->pc = 0x126a28u;

    // 0x126a28: 0xc049c60  jal         func_127180
    ctx->pc = 0x126A28u;
    SET_GPR_U32(ctx, 31, 0x126A30u);
    ctx->pc = 0x127180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127180u, 0x126A28u, 0x126A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A30u;
label_126a30:
    // 0x126a30: 0xaea20148  sw          $v0, 0x148($s5)
    ctx->pc = 0x126a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 2));
    // 0x126a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x126a38u;
}

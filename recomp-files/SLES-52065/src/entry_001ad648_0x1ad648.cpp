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

// Function: entry_001ad648
// Address: 0x1ad648 - 0x1ad65c
void entry_001ad648_0x1ad648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad648_0x1ad648");
#endif

    switch (ctx->pc) {
        case 0x1ad650u: goto label_1ad650;
        default: break;
    }

    ctx->pc = 0x1ad648u;

    // 0x1ad648: 0xc055c50  jal         func_157140
    ctx->pc = 0x1AD648u;
    SET_GPR_U32(ctx, 31, 0x1AD650u);
    ctx->pc = 0x157140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157140u, 0x1AD648u, 0x1AD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD650u;
label_1ad650:
    // 0x1ad650: 0x8e2306d4  lw          $v1, 0x6D4($s1)
    ctx->pc = 0x1ad650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1748)));
    // 0x1ad654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad658: 0xae2306d4  sw          $v1, 0x6D4($s1)
    ctx->pc = 0x1ad658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1748), GPR_U32(ctx, 3));
    ctx->pc = 0x1ad65cu;
}

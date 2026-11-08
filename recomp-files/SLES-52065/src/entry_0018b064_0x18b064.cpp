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

// Function: entry_0018b064
// Address: 0x18b064 - 0x18b070
void entry_0018b064_0x18b064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b064_0x18b064");
#endif

    switch (ctx->pc) {
        case 0x18b06cu: goto label_18b06c;
        default: break;
    }

    ctx->pc = 0x18b064u;

    // 0x18b064: 0xc077cd8  jal         func_1DF360
    ctx->pc = 0x18B064u;
    SET_GPR_U32(ctx, 31, 0x18B06Cu);
    ctx->pc = 0x1DF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF360u, 0x18B064u, 0x18B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B06Cu;
label_18b06c:
    // 0x18b06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18b070u;
}

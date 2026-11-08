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

// Function: entry_00158e84
// Address: 0x158e84 - 0x158e90
void entry_00158e84_0x158e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158e84_0x158e84");
#endif

    switch (ctx->pc) {
        case 0x158e8cu: goto label_158e8c;
        default: break;
    }

    ctx->pc = 0x158e84u;

    // 0x158e84: 0xc042570  jal         func_1095C0
    ctx->pc = 0x158E84u;
    SET_GPR_U32(ctx, 31, 0x158E8Cu);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x158E84u, 0x158E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E8Cu;
label_158e8c:
    // 0x158e8c: 0x8262002a  lb          $v0, 0x2A($s3)
    ctx->pc = 0x158e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
    ctx->pc = 0x158e90u;
}

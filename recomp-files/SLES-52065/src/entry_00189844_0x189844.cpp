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

// Function: entry_00189844
// Address: 0x189844 - 0x189850
void entry_00189844_0x189844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189844_0x189844");
#endif

    switch (ctx->pc) {
        case 0x18984cu: goto label_18984c;
        default: break;
    }

    ctx->pc = 0x189844u;

    // 0x189844: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x189844u;
    SET_GPR_U32(ctx, 31, 0x18984Cu);
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x189844u, 0x18984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18984Cu;
label_18984c:
    // 0x18984c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x189850u;
}

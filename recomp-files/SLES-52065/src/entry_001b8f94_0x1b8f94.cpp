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

// Function: entry_001b8f94
// Address: 0x1b8f94 - 0x1b8fa0
void entry_001b8f94_0x1b8f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f94_0x1b8f94");
#endif

    switch (ctx->pc) {
        case 0x1b8f9cu: goto label_1b8f9c;
        default: break;
    }

    ctx->pc = 0x1b8f94u;

    // 0x1b8f94: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B8F94u;
    SET_GPR_U32(ctx, 31, 0x1B8F9Cu);
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B8F94u, 0x1B8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F9Cu;
label_1b8f9c:
    // 0x1b8f9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b8f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1b8fa0u;
}

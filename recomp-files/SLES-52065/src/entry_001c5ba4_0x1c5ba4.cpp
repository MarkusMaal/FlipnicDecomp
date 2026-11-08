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

// Function: entry_001c5ba4
// Address: 0x1c5ba4 - 0x1c5bb0
void entry_001c5ba4_0x1c5ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5ba4_0x1c5ba4");
#endif

    switch (ctx->pc) {
        case 0x1c5bacu: goto label_1c5bac;
        default: break;
    }

    ctx->pc = 0x1c5ba4u;

    // 0x1c5ba4: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x1C5BA4u;
    SET_GPR_U32(ctx, 31, 0x1C5BACu);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1C5BA4u, 0x1C5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BACu;
label_1c5bac:
    // 0x1c5bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c5bb0u;
}

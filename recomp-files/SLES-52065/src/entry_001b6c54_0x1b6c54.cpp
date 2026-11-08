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

// Function: entry_001b6c54
// Address: 0x1b6c54 - 0x1b6c60
void entry_001b6c54_0x1b6c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c54_0x1b6c54");
#endif

    switch (ctx->pc) {
        case 0x1b6c5cu: goto label_1b6c5c;
        default: break;
    }

    ctx->pc = 0x1b6c54u;

    // 0x1b6c54: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6C54u;
    SET_GPR_U32(ctx, 31, 0x1B6C5Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6C54u, 0x1B6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C5Cu;
label_1b6c5c:
    // 0x1b6c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6c60u;
}

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

// Function: entry_001bb3f4
// Address: 0x1bb3f4 - 0x1bb400
void entry_001bb3f4_0x1bb3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb3f4_0x1bb3f4");
#endif

    switch (ctx->pc) {
        case 0x1bb3fcu: goto label_1bb3fc;
        default: break;
    }

    ctx->pc = 0x1bb3f4u;

    // 0x1bb3f4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB3F4u;
    SET_GPR_U32(ctx, 31, 0x1BB3FCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB3F4u, 0x1BB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3FCu;
label_1bb3fc:
    // 0x1bb3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb400u;
}

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

// Function: entry_00130d94
// Address: 0x130d94 - 0x130da0
void entry_00130d94_0x130d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d94_0x130d94");
#endif

    switch (ctx->pc) {
        case 0x130d9cu: goto label_130d9c;
        default: break;
    }

    ctx->pc = 0x130d94u;

    // 0x130d94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130D94u;
    SET_GPR_U32(ctx, 31, 0x130D9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130D94u, 0x130D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D9Cu;
label_130d9c:
    // 0x130d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130da0u;
}

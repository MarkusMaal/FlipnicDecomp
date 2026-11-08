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

// Function: entry_00130f94
// Address: 0x130f94 - 0x130fa0
void entry_00130f94_0x130f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f94_0x130f94");
#endif

    switch (ctx->pc) {
        case 0x130f9cu: goto label_130f9c;
        default: break;
    }

    ctx->pc = 0x130f94u;

    // 0x130f94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130F94u;
    SET_GPR_U32(ctx, 31, 0x130F9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130F94u, 0x130F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F9Cu;
label_130f9c:
    // 0x130f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130fa0u;
}

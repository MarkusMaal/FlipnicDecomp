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

// Function: entry_00187834
// Address: 0x187834 - 0x187840
void entry_00187834_0x187834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187834_0x187834");
#endif

    switch (ctx->pc) {
        case 0x18783cu: goto label_18783c;
        default: break;
    }

    ctx->pc = 0x187834u;

    // 0x187834: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187834u;
    SET_GPR_U32(ctx, 31, 0x18783Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187834u, 0x18783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18783Cu;
label_18783c:
    // 0x18783c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187840u;
}

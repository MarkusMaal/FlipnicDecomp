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

// Function: entry_001ff614
// Address: 0x1ff614 - 0x1ff620
void entry_001ff614_0x1ff614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff614_0x1ff614");
#endif

    switch (ctx->pc) {
        case 0x1ff61cu: goto label_1ff61c;
        default: break;
    }

    ctx->pc = 0x1ff614u;

    // 0x1ff614: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF614u;
    SET_GPR_U32(ctx, 31, 0x1FF61Cu);
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF614u, 0x1FF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF61Cu;
label_1ff61c:
    // 0x1ff61c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x1ff620u;
}

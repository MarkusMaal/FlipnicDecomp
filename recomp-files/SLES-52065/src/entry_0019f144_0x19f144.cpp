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

// Function: entry_0019f144
// Address: 0x19f144 - 0x19f154
void entry_0019f144_0x19f144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f144_0x19f144");
#endif

    switch (ctx->pc) {
        case 0x19f14cu: goto label_19f14c;
        default: break;
    }

    ctx->pc = 0x19f144u;

    // 0x19f144: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19F144u;
    SET_GPR_U32(ctx, 31, 0x19F14Cu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F144u, 0x19F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F14Cu;
label_19f14c:
    // 0x19f14c: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x19F14Cu;
    {
        const bool branch_taken_0x19f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f14c) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F154u;
}

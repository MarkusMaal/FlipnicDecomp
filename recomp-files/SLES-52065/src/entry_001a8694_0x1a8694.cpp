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

// Function: entry_001a8694
// Address: 0x1a8694 - 0x1a86a4
void entry_001a8694_0x1a8694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8694_0x1a8694");
#endif

    switch (ctx->pc) {
        case 0x1a869cu: goto label_1a869c;
        default: break;
    }

    ctx->pc = 0x1a8694u;

    // 0x1a8694: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A8694u;
    SET_GPR_U32(ctx, 31, 0x1A869Cu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A8694u, 0x1A869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A869Cu;
label_1a869c:
    // 0x1a869c: 0x1000030c  b           . + 4 + (0x30C << 2)
    ctx->pc = 0x1A869Cu;
    {
        const bool branch_taken_0x1a869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a869c) {
            ctx->pc = 0x1A92D0u;
            return;
        }
    }
    ctx->pc = 0x1A86A4u;
}

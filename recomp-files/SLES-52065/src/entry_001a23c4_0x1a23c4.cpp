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

// Function: entry_001a23c4
// Address: 0x1a23c4 - 0x1a23d8
void entry_001a23c4_0x1a23c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23c4_0x1a23c4");
#endif

    switch (ctx->pc) {
        case 0x1a23ccu: goto label_1a23cc;
        default: break;
    }

    ctx->pc = 0x1a23c4u;

    // 0x1a23c4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A23C4u;
    SET_GPR_U32(ctx, 31, 0x1A23CCu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A23C4u, 0x1A23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23CCu;
label_1a23cc:
    // 0x1a23cc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1A23CCu;
    {
        const bool branch_taken_0x1a23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23cc) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A23D4u;
    // 0x1a23d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a23d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a23d8u;
}

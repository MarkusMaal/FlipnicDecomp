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

// Function: entry_001a5244
// Address: 0x1a5244 - 0x1a5258
void entry_001a5244_0x1a5244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5244_0x1a5244");
#endif

    switch (ctx->pc) {
        case 0x1a524cu: goto label_1a524c;
        default: break;
    }

    ctx->pc = 0x1a5244u;

    // 0x1a5244: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A5244u;
    SET_GPR_U32(ctx, 31, 0x1A524Cu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A5244u, 0x1A524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A524Cu;
label_1a524c:
    // 0x1a524c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A524Cu;
    {
        const bool branch_taken_0x1a524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a524c) {
            ctx->pc = 0x1A5328u;
            return;
        }
    }
    ctx->pc = 0x1A5254u;
    // 0x1a5254: 0x26640950  addiu       $a0, $s3, 0x950
    ctx->pc = 0x1a5254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
    ctx->pc = 0x1a5258u;
}

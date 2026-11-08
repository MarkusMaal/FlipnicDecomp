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

// Function: entry_0016749c
// Address: 0x16749c - 0x1674ac
void entry_0016749c_0x16749c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016749c_0x16749c");
#endif

    switch (ctx->pc) {
        case 0x1674a4u: goto label_1674a4;
        default: break;
    }

    ctx->pc = 0x16749cu;

    // 0x16749c: 0xc054810  jal         func_152040
    ctx->pc = 0x16749Cu;
    SET_GPR_U32(ctx, 31, 0x1674A4u);
    ctx->pc = 0x152040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152040u, 0x16749Cu, 0x1674A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674A4u;
label_1674a4:
    // 0x1674a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1674A4u;
    {
        const bool branch_taken_0x1674a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1674a4) {
            ctx->pc = 0x1674C4u;
            return;
        }
    }
    ctx->pc = 0x1674ACu;
}

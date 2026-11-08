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

// Function: entry_0010852c
// Address: 0x10852c - 0x10853c
void entry_0010852c_0x10852c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010852c_0x10852c");
#endif

    switch (ctx->pc) {
        case 0x108534u: goto label_108534;
        default: break;
    }

    ctx->pc = 0x10852cu;

    // 0x10852c: 0xc042038  jal         func_1080E0
    ctx->pc = 0x10852Cu;
    SET_GPR_U32(ctx, 31, 0x108534u);
    ctx->pc = 0x1080E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1080E0u, 0x10852Cu, 0x108534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108534u;
label_108534:
    // 0x108534: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x108534u;
    {
        const bool branch_taken_0x108534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108534) {
            ctx->pc = 0x1086BCu;
            return;
        }
    }
    ctx->pc = 0x10853Cu;
}

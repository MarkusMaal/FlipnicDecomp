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

// Function: entry_0016589c
// Address: 0x16589c - 0x1658a8
void entry_0016589c_0x16589c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016589c_0x16589c");
#endif

    switch (ctx->pc) {
        case 0x1658a4u: goto label_1658a4;
        default: break;
    }

    ctx->pc = 0x16589cu;

    // 0x16589c: 0xc059990  jal         func_166640
    ctx->pc = 0x16589Cu;
    SET_GPR_U32(ctx, 31, 0x1658A4u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16589Cu, 0x1658A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658A4u;
label_1658a4:
    // 0x1658a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1658a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1658a8u;
}

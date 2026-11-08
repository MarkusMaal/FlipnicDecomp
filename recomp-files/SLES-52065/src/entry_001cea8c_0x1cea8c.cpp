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

// Function: entry_001cea8c
// Address: 0x1cea8c - 0x1cea9c
void entry_001cea8c_0x1cea8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cea8c_0x1cea8c");
#endif

    switch (ctx->pc) {
        case 0x1cea94u: goto label_1cea94;
        default: break;
    }

    ctx->pc = 0x1cea8cu;

    // 0x1cea8c: 0xc073ab0  jal         func_1CEAC0
    ctx->pc = 0x1CEA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA94u);
    ctx->pc = 0x1CEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEAC0u, 0x1CEA8Cu, 0x1CEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA94u;
label_1cea94:
    // 0x1cea94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cea98: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1cea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->pc = 0x1cea9cu;
}

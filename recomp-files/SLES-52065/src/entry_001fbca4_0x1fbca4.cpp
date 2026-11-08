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

// Function: entry_001fbca4
// Address: 0x1fbca4 - 0x1fbcb8
void entry_001fbca4_0x1fbca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbca4_0x1fbca4");
#endif

    switch (ctx->pc) {
        case 0x1fbcacu: goto label_1fbcac;
        default: break;
    }

    ctx->pc = 0x1fbca4u;

    // 0x1fbca4: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBCA4u;
    SET_GPR_U32(ctx, 31, 0x1FBCACu);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBCA4u, 0x1FBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCACu;
label_1fbcac:
    // 0x1fbcac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1fbcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1fbcb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fbcb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1fbcb8u;
}

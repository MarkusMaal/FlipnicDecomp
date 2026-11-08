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

// Function: entry_001fbdcc
// Address: 0x1fbdcc - 0x1fbde0
void entry_001fbdcc_0x1fbdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbdcc_0x1fbdcc");
#endif

    switch (ctx->pc) {
        case 0x1fbdd4u: goto label_1fbdd4;
        default: break;
    }

    ctx->pc = 0x1fbdccu;

    // 0x1fbdcc: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBDCCu;
    SET_GPR_U32(ctx, 31, 0x1FBDD4u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBDCCu, 0x1FBDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDD4u;
label_1fbdd4:
    // 0x1fbdd4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1fbdd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fbddc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1fbde0u;
}

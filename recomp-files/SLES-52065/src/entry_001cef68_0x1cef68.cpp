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

// Function: entry_001cef68
// Address: 0x1cef68 - 0x1cef7c
void entry_001cef68_0x1cef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cef68_0x1cef68");
#endif

    switch (ctx->pc) {
        case 0x1cef74u: goto label_1cef74;
        default: break;
    }

    ctx->pc = 0x1cef68u;

    // 0x1cef68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cef6c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CEF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF74u);
    ctx->pc = 0x1CEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF6Cu;
    // 0x1cef70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CEF6Cu, 0x1CEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF74u;
label_1cef74:
    // 0x1cef74: 0xa0530008  sb          $s3, 0x8($v0)
    ctx->pc = 0x1cef74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 19));
    // 0x1cef78: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x1cef7cu;
}

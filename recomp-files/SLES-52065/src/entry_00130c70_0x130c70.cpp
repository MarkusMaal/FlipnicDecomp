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

// Function: entry_00130c70
// Address: 0x130c70 - 0x130c88
void entry_00130c70_0x130c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130c70_0x130c70");
#endif

    switch (ctx->pc) {
        case 0x130c78u: goto label_130c78;
        case 0x130c80u: goto label_130c80;
        default: break;
    }

    ctx->pc = 0x130c70u;

    // 0x130c70: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130C70u;
    SET_GPR_U32(ctx, 31, 0x130C78u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130C70u, 0x130C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C78u;
label_130c78:
    // 0x130c78: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130C78u;
    SET_GPR_U32(ctx, 31, 0x130C80u);
    ctx->pc = 0x130C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C78u;
    // 0x130c7c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130C78u, 0x130C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C80u;
label_130c80:
    // 0x130c80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130C80u;
    SET_GPR_U32(ctx, 31, 0x130C88u);
    ctx->pc = 0x130C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C80u;
    // 0x130c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130C80u, 0x130C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C88u;
}

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

// Function: entry_001b0824
// Address: 0x1b0824 - 0x1b0838
void entry_001b0824_0x1b0824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0824_0x1b0824");
#endif

    switch (ctx->pc) {
        case 0x1b0830u: goto label_1b0830;
        default: break;
    }

    ctx->pc = 0x1b0824u;

    // 0x1b0824: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0828: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B0828u;
    SET_GPR_U32(ctx, 31, 0x1B0830u);
    ctx->pc = 0x1B082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0828u;
    // 0x1b082c: 0x24a50c60  addiu       $a1, $a1, 0xC60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0828u, 0x1B0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0830u;
label_1b0830:
    // 0x1b0830: 0x241500c0  addiu       $s5, $zero, 0xC0
    ctx->pc = 0x1b0830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b0834: 0x24170180  addiu       $s7, $zero, 0x180
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x1b0838u;
}

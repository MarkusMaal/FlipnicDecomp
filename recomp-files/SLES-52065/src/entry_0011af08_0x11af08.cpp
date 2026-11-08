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

// Function: entry_0011af08
// Address: 0x11af08 - 0x11af14
void entry_0011af08_0x11af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011af08_0x11af08");
#endif

    switch (ctx->pc) {
        case 0x11af10u: goto label_11af10;
        default: break;
    }

    ctx->pc = 0x11af08u;

    // 0x11af08: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AF08u;
    SET_GPR_U32(ctx, 31, 0x11AF10u);
    ctx->pc = 0x11AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF08u;
    // 0x11af0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AF08u, 0x11AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF10u;
label_11af10:
    // 0x11af10: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->pc = 0x11af14u;
}

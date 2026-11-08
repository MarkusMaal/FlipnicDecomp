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

// Function: entry_0013cc28
// Address: 0x13cc28 - 0x13cc34
void entry_0013cc28_0x13cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc28_0x13cc28");
#endif

    switch (ctx->pc) {
        case 0x13cc30u: goto label_13cc30;
        default: break;
    }

    ctx->pc = 0x13cc28u;

    // 0x13cc28: 0xc0540f0  jal         func_1503C0
    ctx->pc = 0x13CC28u;
    SET_GPR_U32(ctx, 31, 0x13CC30u);
    ctx->pc = 0x13CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC28u;
    // 0x13cc2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1503C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1503C0u, 0x13CC28u, 0x13CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC30u;
label_13cc30:
    // 0x13cc30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13cc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x13cc34u;
}

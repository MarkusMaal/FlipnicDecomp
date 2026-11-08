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

// Function: entry_0014c0e8
// Address: 0x14c0e8 - 0x14c0f4
void entry_0014c0e8_0x14c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c0e8_0x14c0e8");
#endif

    switch (ctx->pc) {
        case 0x14c0f0u: goto label_14c0f0;
        default: break;
    }

    ctx->pc = 0x14c0e8u;

    // 0x14c0e8: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x14C0E8u;
    SET_GPR_U32(ctx, 31, 0x14C0F0u);
    ctx->pc = 0x14C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0E8u;
    // 0x14c0ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x14C0E8u, 0x14C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0F0u;
label_14c0f0:
    // 0x14c0f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14c0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x14c0f4u;
}

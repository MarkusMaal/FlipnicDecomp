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

// Function: entry_001eed24
// Address: 0x1eed24 - 0x1eed34
void entry_001eed24_0x1eed24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eed24_0x1eed24");
#endif

    switch (ctx->pc) {
        case 0x1eed30u: goto label_1eed30;
        default: break;
    }

    ctx->pc = 0x1eed24u;

    // 0x1eed24: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1eed24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1eed28: 0xc07b83e  jal         func_1EE0F8
    ctx->pc = 0x1EED28u;
    SET_GPR_U32(ctx, 31, 0x1EED30u);
    ctx->pc = 0x1EED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED28u;
    // 0x1eed2c: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EED28u, 0x1EED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED30u;
label_1eed30:
    // 0x1eed30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eed30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eed34u;
}

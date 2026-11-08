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

// Function: entry_0019f1c0
// Address: 0x19f1c0 - 0x19f1d4
void entry_0019f1c0_0x19f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1c0_0x19f1c0");
#endif

    switch (ctx->pc) {
        case 0x19f1c8u: goto label_19f1c8;
        default: break;
    }

    ctx->pc = 0x19f1c0u;

    // 0x19f1c0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F1C0u;
    SET_GPR_U32(ctx, 31, 0x19F1C8u);
    ctx->pc = 0x19F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1C0u;
    // 0x19f1c4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F1C0u, 0x19F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1C8u;
label_19f1c8:
    // 0x19f1c8: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x19F1C8u;
    {
        const bool branch_taken_0x19f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1c8) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F1D0u;
    // 0x19f1d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f1d4u;
}

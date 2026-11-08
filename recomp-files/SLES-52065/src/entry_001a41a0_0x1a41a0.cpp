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

// Function: entry_001a41a0
// Address: 0x1a41a0 - 0x1a41bc
void entry_001a41a0_0x1a41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a41a0_0x1a41a0");
#endif

    switch (ctx->pc) {
        case 0x1a41b0u: goto label_1a41b0;
        default: break;
    }

    ctx->pc = 0x1a41a0u;

    // 0x1a41a0: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x1a41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1a41a4: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1a41a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a41a8: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A41A8u;
    SET_GPR_U32(ctx, 31, 0x1A41B0u);
    ctx->pc = 0x1A41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41A8u;
    // 0x1a41ac: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A41A8u, 0x1A41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41B0u;
label_1a41b0:
    // 0x1a41b0: 0xae220688  sw          $v0, 0x688($s1)
    ctx->pc = 0x1a41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 2));
    // 0x1a41b4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1A41B4u;
    {
        const bool branch_taken_0x1a41b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41B4u;
        // 0x1a41b8: 0xae34068c  sw          $s4, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41b4) {
            ctx->pc = 0x1A431Cu;
            return;
        }
    }
    ctx->pc = 0x1A41BCu;
}

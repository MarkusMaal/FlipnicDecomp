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

// Function: entry_001f91b8
// Address: 0x1f91b8 - 0x1f91d4
void entry_001f91b8_0x1f91b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f91b8_0x1f91b8");
#endif

    switch (ctx->pc) {
        case 0x1f91c4u: goto label_1f91c4;
        default: break;
    }

    ctx->pc = 0x1f91b8u;

    // 0x1f91b8: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f91bc: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F91BCu;
    SET_GPR_U32(ctx, 31, 0x1F91C4u);
    ctx->pc = 0x1F91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F91BCu;
    // 0x1f91c0: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F91BCu, 0x1F91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91C4u;
label_1f91c4:
    // 0x1f91c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F91C4u;
    {
        const bool branch_taken_0x1f91c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91C4u;
        // 0x1f91c8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91c4) {
            ctx->pc = 0x1F91D4u;
            return;
        }
    }
    ctx->pc = 0x1F91CCu;
    // 0x1f91cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F91CCu;
    {
        const bool branch_taken_0x1f91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91CCu;
        // 0x1f91d0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91cc) {
            ctx->pc = 0x1F9230u;
            return;
        }
    }
    ctx->pc = 0x1F91D4u;
}

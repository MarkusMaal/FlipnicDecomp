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

// Function: entry_001f8ec8
// Address: 0x1f8ec8 - 0x1f8ef0
void entry_001f8ec8_0x1f8ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8ec8_0x1f8ec8");
#endif

    switch (ctx->pc) {
        case 0x1f8ed4u: goto label_1f8ed4;
        default: break;
    }

    ctx->pc = 0x1f8ec8u;

    // 0x1f8ec8: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f8ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f8ecc: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8ECCu;
    SET_GPR_U32(ctx, 31, 0x1F8ED4u);
    ctx->pc = 0x1F8ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8ECCu;
    // 0x1f8ed0: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8ECCu, 0x1F8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8ED4u;
label_1f8ed4:
    // 0x1f8ed4: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F8ED4u;
    {
        const bool branch_taken_0x1f8ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ED4u;
        // 0x1f8ed8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ed4) {
            ctx->pc = 0x1F8F8Cu;
            return;
        }
    }
    ctx->pc = 0x1F8EDCu;
    // 0x1f8edc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8EDCu;
    {
        const bool branch_taken_0x1f8edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8edc) {
            ctx->pc = 0x1F8EF0u;
            return;
        }
    }
    ctx->pc = 0x1F8EE4u;
    // 0x1f8ee4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8ee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8EE8u;
    {
        const bool branch_taken_0x1f8ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EE8u;
        // 0x1f8eec: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ee8) {
            ctx->pc = 0x1F8F00u;
            return;
        }
    }
    ctx->pc = 0x1F8EF0u;
}

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

// Function: entry_001f8720
// Address: 0x1f8720 - 0x1f873c
void entry_001f8720_0x1f8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8720_0x1f8720");
#endif

    switch (ctx->pc) {
        case 0x1f872cu: goto label_1f872c;
        default: break;
    }

    ctx->pc = 0x1f8720u;

    // 0x1f8720: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f8724: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8724u;
    SET_GPR_U32(ctx, 31, 0x1F872Cu);
    ctx->pc = 0x1F8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8724u;
    // 0x1f8728: 0x8e84d6bc  lw          $a0, -0x2944($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8724u, 0x1F872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F872Cu;
label_1f872c:
    // 0x1f872c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F872Cu;
    {
        const bool branch_taken_0x1f872c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F872Cu;
        // 0x1f8730: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f872c) {
            ctx->pc = 0x1F873Cu;
            return;
        }
    }
    ctx->pc = 0x1F8734u;
    // 0x1f8734: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F8734u;
    {
        const bool branch_taken_0x1f8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8734u;
        // 0x1f8738: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8734) {
            ctx->pc = 0x1F8798u;
            return;
        }
    }
    ctx->pc = 0x1F873Cu;
}

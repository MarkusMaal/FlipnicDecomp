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

// Function: entry_001f9850
// Address: 0x1f9850 - 0x1f9878
void entry_001f9850_0x1f9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9850_0x1f9850");
#endif

    switch (ctx->pc) {
        case 0x1f985cu: goto label_1f985c;
        default: break;
    }

    ctx->pc = 0x1f9850u;

    // 0x1f9850: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f9854: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9854u;
    SET_GPR_U32(ctx, 31, 0x1F985Cu);
    ctx->pc = 0x1F9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9854u;
    // 0x1f9858: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9854u, 0x1F985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F985Cu;
label_1f985c:
    // 0x1f985c: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F985Cu;
    {
        const bool branch_taken_0x1f985c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F985Cu;
        // 0x1f9860: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f985c) {
            ctx->pc = 0x1F98F8u;
            return;
        }
    }
    ctx->pc = 0x1F9864u;
    // 0x1f9864: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9864u;
    {
        const bool branch_taken_0x1f9864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9864) {
            ctx->pc = 0x1F9878u;
            return;
        }
    }
    ctx->pc = 0x1F986Cu;
    // 0x1f986c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9870u;
    {
        const bool branch_taken_0x1f9870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9870u;
        // 0x1f9874: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9870) {
            ctx->pc = 0x1F9888u;
            return;
        }
    }
    ctx->pc = 0x1F9878u;
}

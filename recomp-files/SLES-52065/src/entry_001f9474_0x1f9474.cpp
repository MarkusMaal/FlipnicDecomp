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

// Function: entry_001f9474
// Address: 0x1f9474 - 0x1f949c
void entry_001f9474_0x1f9474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9474_0x1f9474");
#endif

    switch (ctx->pc) {
        case 0x1f9480u: goto label_1f9480;
        default: break;
    }

    ctx->pc = 0x1f9474u;

    // 0x1f9474: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f9474u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f9478: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9478u;
    SET_GPR_U32(ctx, 31, 0x1F9480u);
    ctx->pc = 0x1F947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9478u;
    // 0x1f947c: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9478u, 0x1F9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9480u;
label_1f9480:
    // 0x1f9480: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1F9480u;
    {
        const bool branch_taken_0x1f9480 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9480u;
        // 0x1f9484: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9480) {
            ctx->pc = 0x1F95BCu;
            return;
        }
    }
    ctx->pc = 0x1F9488u;
    // 0x1f9488: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9488u;
    {
        const bool branch_taken_0x1f9488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9488) {
            ctx->pc = 0x1F949Cu;
            return;
        }
    }
    ctx->pc = 0x1F9490u;
    // 0x1f9490: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1f9490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9494: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9494u;
    {
        const bool branch_taken_0x1f9494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9494u;
        // 0x1f9498: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9494) {
            ctx->pc = 0x1F94ACu;
            return;
        }
    }
    ctx->pc = 0x1F949Cu;
}

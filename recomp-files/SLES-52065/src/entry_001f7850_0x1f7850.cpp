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

// Function: entry_001f7850
// Address: 0x1f7850 - 0x1f7874
void entry_001f7850_0x1f7850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7850_0x1f7850");
#endif

    switch (ctx->pc) {
        case 0x1f7864u: goto label_1f7864;
        default: break;
    }

    ctx->pc = 0x1f7850u;

    // 0x1f7850: 0x8e22bb34  lw          $v0, -0x44CC($s1)
    ctx->pc = 0x1f7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949684)));
    // 0x1f7854: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1F7854u;
    {
        const bool branch_taken_0x1f7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7854) {
            ctx->pc = 0x1F7848u;
            return;
        }
    }
    ctx->pc = 0x1F785Cu;
    // 0x1f785c: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F785Cu;
    SET_GPR_U32(ctx, 31, 0x1F7864u);
    ctx->pc = 0x1F7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F785Cu;
    // 0x1f7860: 0x2604ccd0  addiu       $a0, $s0, -0x3330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F785Cu, 0x1F7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7864u;
label_1f7864:
    // 0x1f7864: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7864u;
    {
        const bool branch_taken_0x1f7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7864u;
        // 0x1f7868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7864) {
            ctx->pc = 0x1F7848u;
            return;
        }
    }
    ctx->pc = 0x1F786Cu;
    // 0x1f786c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F786Cu;
        // 0x1f7870: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F78A0u;
            return;
        }
    }
    ctx->pc = 0x1F7874u;
}

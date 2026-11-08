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

// Function: entry_001f9634
// Address: 0x1f9634 - 0x1f9664
void entry_001f9634_0x1f9634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9634_0x1f9634");
#endif

    switch (ctx->pc) {
        case 0x1f9640u: goto label_1f9640;
        default: break;
    }

    ctx->pc = 0x1f9634u;

    // 0x1f9634: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f9634u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f9638: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9638u;
    SET_GPR_U32(ctx, 31, 0x1F9640u);
    ctx->pc = 0x1F963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9638u;
    // 0x1f963c: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9638u, 0x1F9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9640u;
label_1f9640:
    // 0x1f9640: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F9640u;
    {
        const bool branch_taken_0x1f9640 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9640u;
        // 0x1f9644: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9640) {
            ctx->pc = 0x1F9718u;
            return;
        }
    }
    ctx->pc = 0x1F9648u;
    // 0x1f9648: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9648u;
    {
        const bool branch_taken_0x1f9648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9648) {
            ctx->pc = 0x1F9664u;
            return;
        }
    }
    ctx->pc = 0x1F9650u;
    // 0x1f9650: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9654: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9654u;
    {
        const bool branch_taken_0x1f9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9654) {
            ctx->pc = 0x1F9664u;
            return;
        }
    }
    ctx->pc = 0x1F965Cu;
    // 0x1f965c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F965Cu;
    {
        const bool branch_taken_0x1f965c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F965Cu;
        // 0x1f9660: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f965c) {
            ctx->pc = 0x1F9674u;
            return;
        }
    }
    ctx->pc = 0x1F9664u;
}

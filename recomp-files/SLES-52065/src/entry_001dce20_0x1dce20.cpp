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

// Function: entry_001dce20
// Address: 0x1dce20 - 0x1dce40
void entry_001dce20_0x1dce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dce20_0x1dce20");
#endif

    switch (ctx->pc) {
        case 0x1dce28u: goto label_1dce28;
        default: break;
    }

    ctx->pc = 0x1dce20u;

    // 0x1dce20: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1DCE20u;
    SET_GPR_U32(ctx, 31, 0x1DCE28u);
    ctx->pc = 0x1DCE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE20u;
    // 0x1dce24: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1DCE20u, 0x1DCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE28u;
label_1dce28:
    // 0x1dce28: 0x2645ffe8  addiu       $a1, $s2, -0x18
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
    // 0x1dce2c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE2Cu;
    {
        const bool branch_taken_0x1dce2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE2Cu;
        // 0x1dce30: 0x3a640001  xori        $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce2c) {
            ctx->pc = 0x1DCE40u;
            return;
        }
    }
    ctx->pc = 0x1DCE34u;
    // 0x1dce34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dce38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCE38u;
    {
        const bool branch_taken_0x1dce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE38u;
        // 0x1dce3c: 0x2422804  sllv        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce38) {
            ctx->pc = 0x1DCE48u;
            return;
        }
    }
    ctx->pc = 0x1DCE40u;
}

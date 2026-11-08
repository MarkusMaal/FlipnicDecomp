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

// Function: entry_001fce4c
// Address: 0x1fce4c - 0x1fce78
void entry_001fce4c_0x1fce4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce4c_0x1fce4c");
#endif

    switch (ctx->pc) {
        case 0x1fce6cu: goto label_1fce6c;
        default: break;
    }

    ctx->pc = 0x1fce4cu;

    // 0x1fce4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCE4Cu;
    {
        const bool branch_taken_0x1fce4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE4Cu;
        // 0x1fce50: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce4c) {
            ctx->pc = 0x1FCE78u;
            return;
        }
    }
    ctx->pc = 0x1FCE54u;
    // 0x1fce54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1fce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fce58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fce5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fce60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fce64: 0xc07ff6e  jal         func_1FFDB8
    ctx->pc = 0x1FCE64u;
    SET_GPR_U32(ctx, 31, 0x1FCE6Cu);
    ctx->pc = 0x1FCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE64u;
    // 0x1fce68: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFDB8u, 0x1FCE64u, 0x1FCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE6Cu;
label_1fce6c:
    // 0x1fce6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fce70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCE70u;
    {
        const bool branch_taken_0x1fce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE70u;
        // 0x1fce74: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce70) {
            ctx->pc = 0x1FCE80u;
            return;
        }
    }
    ctx->pc = 0x1FCE78u;
}

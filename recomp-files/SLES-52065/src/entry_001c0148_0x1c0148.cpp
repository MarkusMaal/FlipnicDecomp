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

// Function: entry_001c0148
// Address: 0x1c0148 - 0x1c0178
void entry_001c0148_0x1c0148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0148_0x1c0148");
#endif

    switch (ctx->pc) {
        case 0x1c0160u: goto label_1c0160;
        default: break;
    }

    ctx->pc = 0x1c0148u;

    // 0x1c0148: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c0148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c014c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c0150: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1c0154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0158: 0xc072e58  jal         func_1CB960
    ctx->pc = 0x1C0158u;
    SET_GPR_U32(ctx, 31, 0x1C0160u);
    ctx->pc = 0x1C015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0158u;
    // 0x1c015c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1C0158u, 0x1C0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0160u;
label_1c0160:
    // 0x1c0160: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c0164: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c0168: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x1c0168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x1c016c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0170u;
    {
        const bool branch_taken_0x1c0170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0170) {
            ctx->pc = 0x1C017Cu;
            return;
        }
    }
    ctx->pc = 0x1C0178u;
}

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

// Function: entry_00142894
// Address: 0x142894 - 0x1428cc
void entry_00142894_0x142894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142894_0x142894");
#endif

    switch (ctx->pc) {
        case 0x14289cu: goto label_14289c;
        default: break;
    }

    ctx->pc = 0x142894u;

    // 0x142894: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x142894u;
    SET_GPR_U32(ctx, 31, 0x14289Cu);
    ctx->pc = 0x142898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142894u;
    // 0x142898: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x142894u, 0x14289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14289Cu;
label_14289c:
    // 0x14289c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428a0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1428a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1428a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1428a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1428a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1428a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1428ac: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1428acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1428b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1428B4u;
    {
        const bool branch_taken_0x1428b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428b4) {
            ctx->pc = 0x1428CCu;
            return;
        }
    }
    ctx->pc = 0x1428BCu;
    // 0x1428bc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1428c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428c4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x1428C4u;
    SET_GPR_U32(ctx, 31, 0x1428CCu);
    ctx->pc = 0x1428C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428C4u;
    // 0x1428c8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x1428C4u, 0x1428CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428CCu;
}

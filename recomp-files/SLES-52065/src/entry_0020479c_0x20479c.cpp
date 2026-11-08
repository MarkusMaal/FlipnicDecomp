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

// Function: entry_0020479c
// Address: 0x20479c - 0x2047dc
void entry_0020479c_0x20479c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020479c_0x20479c");
#endif

    switch (ctx->pc) {
        case 0x2047d4u: goto label_2047d4;
        default: break;
    }

    ctx->pc = 0x20479cu;

    // 0x20479c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2047a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2047a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2047a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2047a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2047ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2047b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2047b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2047b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2047b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2047bc: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2047bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2047c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2047C0u;
    {
        const bool branch_taken_0x2047c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047C0u;
        // 0x2047c4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047c0) {
            ctx->pc = 0x2047DCu;
            return;
        }
    }
    ctx->pc = 0x2047C8u;
    // 0x2047c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2047cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2047CCu;
    SET_GPR_U32(ctx, 31, 0x2047D4u);
    ctx->pc = 0x2047D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047CCu;
    // 0x2047d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2047CCu, 0x2047D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2047D4u;
label_2047d4:
    // 0x2047d4: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2047D4u;
    {
        const bool branch_taken_0x2047d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047D4u;
        // 0x2047d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047d4) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x2047DCu;
}

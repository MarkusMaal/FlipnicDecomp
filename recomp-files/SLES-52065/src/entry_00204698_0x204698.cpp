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

// Function: entry_00204698
// Address: 0x204698 - 0x2046e4
void entry_00204698_0x204698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204698_0x204698");
#endif

    switch (ctx->pc) {
        case 0x2046d4u: goto label_2046d4;
        default: break;
    }

    ctx->pc = 0x204698u;

    // 0x204698: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x20469c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20469cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2046a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2046a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2046a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2046a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2046a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2046acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2046b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2046b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2046b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2046b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2046b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2046bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2046bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2046c0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2046C0u;
    {
        const bool branch_taken_0x2046c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C0u;
        // 0x2046c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046c0) {
            ctx->pc = 0x2046E4u;
            return;
        }
    }
    ctx->pc = 0x2046C8u;
    // 0x2046c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2046c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2046cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2046CCu;
    SET_GPR_U32(ctx, 31, 0x2046D4u);
    ctx->pc = 0x2046D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046CCu;
    // 0x2046d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2046CCu, 0x2046D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046D4u;
label_2046d4:
    // 0x2046d4: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x2046D4u;
    {
        const bool branch_taken_0x2046d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D4u;
        // 0x2046d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d4) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x2046DCu;
    // 0x2046dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2046DCu;
    {
        const bool branch_taken_0x2046dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046DCu;
        // 0x2046e0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046dc) {
            ctx->pc = 0x2046E8u;
            return;
        }
    }
    ctx->pc = 0x2046E4u;
}

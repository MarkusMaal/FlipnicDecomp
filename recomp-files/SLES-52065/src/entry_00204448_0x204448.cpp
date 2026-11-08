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

// Function: entry_00204448
// Address: 0x204448 - 0x204498
void entry_00204448_0x204448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204448_0x204448");
#endif

    switch (ctx->pc) {
        case 0x204484u: goto label_204484;
        default: break;
    }

    ctx->pc = 0x204448u;

    // 0x204448: 0x24c25180  addiu       $v0, $a2, 0x5180
    ctx->pc = 0x204448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x20444c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20444cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x204450: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204454: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204458: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20445c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204464: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204468: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20446c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204470: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204470u;
    {
        const bool branch_taken_0x204470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204470u;
        // 0x204474: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204470) {
            ctx->pc = 0x204498u;
            return;
        }
    }
    ctx->pc = 0x204478u;
    // 0x204478: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x20447c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x20447Cu;
    SET_GPR_U32(ctx, 31, 0x204484u);
    ctx->pc = 0x204480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20447Cu;
    // 0x204480: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x20447Cu, 0x204484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x204484u;
    {
        const bool branch_taken_0x204484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204484u;
        // 0x204488: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204484) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x20448Cu;
    // 0x20448c: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x204490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204490u;
    {
        const bool branch_taken_0x204490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204490u;
        // 0x204494: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204490) {
            ctx->pc = 0x2044A0u;
            return;
        }
    }
    ctx->pc = 0x204498u;
}

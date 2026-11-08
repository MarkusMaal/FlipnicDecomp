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

// Function: entry_00204e68
// Address: 0x204e68 - 0x204eb8
void entry_00204e68_0x204e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e68_0x204e68");
#endif

    switch (ctx->pc) {
        case 0x204eacu: goto label_204eac;
        default: break;
    }

    ctx->pc = 0x204e68u;

    // 0x204e68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204e6c: 0x24c45180  addiu       $a0, $a2, 0x5180
    ctx->pc = 0x204e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x204e70: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204e74: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204e78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204e7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204e80: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204e84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204e8c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204e90: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204e90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204e94: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204E94u;
    {
        const bool branch_taken_0x204e94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E94u;
        // 0x204e98: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e94) {
            ctx->pc = 0x204EB8u;
            return;
        }
    }
    ctx->pc = 0x204E9Cu;
    // 0x204e9c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204ea0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204ea4: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204EA4u;
    SET_GPR_U32(ctx, 31, 0x204EACu);
    ctx->pc = 0x204EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EA4u;
    // 0x204ea8: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204EA4u, 0x204EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x204EACu;
    {
        const bool branch_taken_0x204eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EACu;
        // 0x204eb0: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204eac) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204EB4u;
    // 0x204eb4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x204eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x204eb8u;
}

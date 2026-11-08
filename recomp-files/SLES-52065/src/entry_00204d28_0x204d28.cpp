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

// Function: entry_00204d28
// Address: 0x204d28 - 0x204d70
void entry_00204d28_0x204d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204d28_0x204d28");
#endif

    switch (ctx->pc) {
        case 0x204d68u: goto label_204d68;
        default: break;
    }

    ctx->pc = 0x204d28u;

    // 0x204d28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204d2c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x204d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204d30: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204d34: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204d38: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204d3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204d40: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204d44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204d4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204d50: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204d50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204d54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204D54u;
    {
        const bool branch_taken_0x204d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D54u;
        // 0x204d58: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d54) {
            ctx->pc = 0x204D70u;
            return;
        }
    }
    ctx->pc = 0x204D5Cu;
    // 0x204d5c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204d60: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204D60u;
    SET_GPR_U32(ctx, 31, 0x204D68u);
    ctx->pc = 0x204D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D60u;
    // 0x204d64: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204D60u, 0x204D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D68u;
label_204d68:
    // 0x204d68: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x204D68u;
    {
        const bool branch_taken_0x204d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D68u;
        // 0x204d6c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d68) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204D70u;
}

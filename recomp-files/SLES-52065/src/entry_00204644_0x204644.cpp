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

// Function: entry_00204644
// Address: 0x204644 - 0x204688
void entry_00204644_0x204644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204644_0x204644");
#endif

    switch (ctx->pc) {
        case 0x204680u: goto label_204680;
        default: break;
    }

    ctx->pc = 0x204644u;

    // 0x204644: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x204644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204648: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x20464c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20464cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204650: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204654: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204658: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20465c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204664: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204668: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20466c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20466Cu;
    {
        const bool branch_taken_0x20466c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20466c) {
            ctx->pc = 0x204688u;
            return;
        }
    }
    ctx->pc = 0x204674u;
    // 0x204674: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204678: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204678u;
    SET_GPR_U32(ctx, 31, 0x204680u);
    ctx->pc = 0x20467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204678u;
    // 0x20467c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204678u, 0x204680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204680u;
label_204680:
    // 0x204680: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x204680u;
    {
        const bool branch_taken_0x204680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204680u;
        // 0x204684: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204680) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204688u;
}

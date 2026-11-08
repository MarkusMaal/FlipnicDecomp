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

// Function: entry_002047f8
// Address: 0x2047f8 - 0x204840
void entry_002047f8_0x2047f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002047f8_0x2047f8");
#endif

    switch (ctx->pc) {
        case 0x204838u: goto label_204838;
        default: break;
    }

    ctx->pc = 0x2047f8u;

    // 0x2047f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2047f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2047fc: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x2047fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204800: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204804: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204808: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20480c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204810: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204814: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20481c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204820: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204820u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204824: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204824u;
    {
        const bool branch_taken_0x204824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204824u;
        // 0x204828: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204824) {
            ctx->pc = 0x204840u;
            return;
        }
    }
    ctx->pc = 0x20482Cu;
    // 0x20482c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204830: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204830u;
    SET_GPR_U32(ctx, 31, 0x204838u);
    ctx->pc = 0x204834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204830u;
    // 0x204834: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204830u, 0x204838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204838u;
label_204838:
    // 0x204838: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x204838u;
    {
        const bool branch_taken_0x204838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204838u;
        // 0x20483c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204838) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204840u;
}

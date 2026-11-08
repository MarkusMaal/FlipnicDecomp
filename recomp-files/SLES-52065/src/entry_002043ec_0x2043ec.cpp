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

// Function: entry_002043ec
// Address: 0x2043ec - 0x204438
void entry_002043ec_0x2043ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002043ec_0x2043ec");
#endif

    switch (ctx->pc) {
        case 0x20442cu: goto label_20442c;
        default: break;
    }

    ctx->pc = 0x2043ecu;

    // 0x2043ec: 0x24c45180  addiu       $a0, $a2, 0x5180
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x2043f0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2043f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2043f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2043f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2043f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2043f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204400: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204404: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20440c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20440cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204410: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204410u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204414: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204414u;
    {
        const bool branch_taken_0x204414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204414u;
        // 0x204418: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204414) {
            ctx->pc = 0x204438u;
            return;
        }
    }
    ctx->pc = 0x20441Cu;
    // 0x20441c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204420: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x204420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204424: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204424u;
    SET_GPR_U32(ctx, 31, 0x20442Cu);
    ctx->pc = 0x204428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204424u;
    // 0x204428: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204424u, 0x20442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20442Cu;
label_20442c:
    // 0x20442c: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x20442Cu;
    {
        const bool branch_taken_0x20442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20442Cu;
        // 0x204430: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20442c) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204434u;
    // 0x204434: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x204434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x204438u;
}

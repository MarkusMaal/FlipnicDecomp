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

// Function: FUN_00164400
// Address: 0x164400 - 0x164450
void FUN_00164400_0x164400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164400_0x164400");
#endif

    switch (ctx->pc) {
        case 0x164444u: goto label_164444;
        default: break;
    }

    ctx->pc = 0x164400u;

    // 0x164400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164404: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16440c: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x16440cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    // 0x164410: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x164414: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x164414u;
    {
        const bool branch_taken_0x164414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x164414) {
            ctx->pc = 0x164444u;
            goto label_164444;
        }
    }
    ctx->pc = 0x16441Cu;
    // 0x16441c: 0x84830240  lh          $v1, 0x240($a0)
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x164420: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164424: 0xa4830240  sh          $v1, 0x240($a0)
    ctx->pc = 0x164424u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 576), (uint16_t)GPR_U32(ctx, 3));
    // 0x164428: 0x84830240  lh          $v1, 0x240($a0)
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x16442c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16442Cu;
    {
        const bool branch_taken_0x16442c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16442c) {
            ctx->pc = 0x164444u;
            goto label_164444;
        }
    }
    ctx->pc = 0x164434u;
    // 0x164434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16443c: 0xc042118  jal         func_108460
    ctx->pc = 0x16443Cu;
    SET_GPR_U32(ctx, 31, 0x164444u);
    ctx->pc = 0x164440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16443Cu;
    // 0x164440: 0xac8201d4  sw          $v0, 0x1D4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16443Cu, 0x164444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164444u;
label_164444:
    // 0x164444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164448: 0x3e00008  jr          $ra
    ctx->pc = 0x164448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164448u;
        // 0x16444c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164450u;
}

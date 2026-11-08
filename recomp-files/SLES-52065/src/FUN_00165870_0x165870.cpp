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

// Function: FUN_00165870
// Address: 0x165870 - 0x1658b0
void FUN_00165870_0x165870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165870_0x165870");
#endif

    switch (ctx->pc) {
        case 0x1658a4u: goto label_1658a4;
        default: break;
    }

    ctx->pc = 0x165870u;

    // 0x165870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165878: 0x84820226  lh          $v0, 0x226($a0)
    ctx->pc = 0x165878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 550)));
    // 0x16587c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16587Cu;
    {
        const bool branch_taken_0x16587c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x165880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16587Cu;
        // 0x165880: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16587c) {
            ctx->pc = 0x165894u;
            goto label_165894;
        }
    }
    ctx->pc = 0x165884u;
    // 0x165884: 0x84820222  lh          $v0, 0x222($a0)
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 546)));
    // 0x165888: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165888u;
    {
        const bool branch_taken_0x165888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165888) {
            ctx->pc = 0x16589Cu;
            goto label_16589c;
        }
    }
    ctx->pc = 0x165890u;
    // 0x165890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165894:
    // 0x165894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165894u;
    {
        const bool branch_taken_0x165894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165894u;
        // 0x165898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165894) {
            ctx->pc = 0x1658A8u;
            goto label_1658a8;
        }
    }
    ctx->pc = 0x16589Cu;
label_16589c:
    // 0x16589c: 0xc059990  jal         func_166640
    ctx->pc = 0x16589Cu;
    SET_GPR_U32(ctx, 31, 0x1658A4u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16589Cu, 0x1658A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658A4u;
label_1658a4:
    // 0x1658a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1658a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1658a8:
    // 0x1658a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1658A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1658ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658A8u;
        // 0x1658ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1658A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1658B0u;
}

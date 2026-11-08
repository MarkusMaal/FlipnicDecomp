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

// Function: FUN_001acb30
// Address: 0x1acb30 - 0x1acb54
void FUN_001acb30_0x1acb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acb30_0x1acb30");
#endif

    ctx->pc = 0x1acb30u;

    // 0x1acb30: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1acb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1acb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acb38: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1acb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1acb3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1acb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1acb40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1acb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1acb44: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1acb48: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1acb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1acb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACB54u;
}

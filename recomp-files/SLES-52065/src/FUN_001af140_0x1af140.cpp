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

// Function: FUN_001af140
// Address: 0x1af140 - 0x1af164
void FUN_001af140_0x1af140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af140_0x1af140");
#endif

    ctx->pc = 0x1af140u;

    // 0x1af140: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1af140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1af144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af148: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1af14c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1af14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af150: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1af150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1af154: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1af154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1af158: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1af15c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF15Cu;
        // 0x1af160: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF164u;
}

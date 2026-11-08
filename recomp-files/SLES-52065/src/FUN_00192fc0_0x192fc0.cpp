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

// Function: FUN_00192fc0
// Address: 0x192fc0 - 0x192fe0
void FUN_00192fc0_0x192fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192fc0_0x192fc0");
#endif

    ctx->pc = 0x192fc0u;

    // 0x192fc0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x192fc4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x192fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x192fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x192fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192fd0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x192fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x192fd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x192fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x192FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FD8u;
        // 0x192fdc: 0xa0650028  sb          $a1, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192FE0u;
}

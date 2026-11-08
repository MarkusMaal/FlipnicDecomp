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

// Function: FUN_001d2bc0
// Address: 0x1d2bc0 - 0x1d2bf4
void FUN_001d2bc0_0x1d2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2bc0_0x1d2bc0");
#endif

    ctx->pc = 0x1d2bc0u;

    // 0x1d2bc0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1d2bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1d2bc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2bc8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2bcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d2bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2bd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2bd8: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x1d2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x1d2bdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2be0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2be4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2be8: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x1d2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x1d2bec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BECu;
        // 0x1d2bf0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2BF4u;
}

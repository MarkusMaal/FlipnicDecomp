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

// Function: FUN_001b37f0
// Address: 0x1b37f0 - 0x1b380c
void FUN_001b37f0_0x1b37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b37f0_0x1b37f0");
#endif

    ctx->pc = 0x1b37f0u;

    // 0x1b37f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b37f4: 0xa08328fb  sb          $v1, 0x28FB($a0)
    ctx->pc = 0x1b37f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10491), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b37f8: 0x8c832844  lw          $v1, 0x2844($a0)
    ctx->pc = 0x1b37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10308)));
    // 0x1b37fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b3800: 0xac832844  sw          $v1, 0x2844($a0)
    ctx->pc = 0x1b3800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10308), GPR_U32(ctx, 3));
    // 0x1b3804: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B380Cu;
}

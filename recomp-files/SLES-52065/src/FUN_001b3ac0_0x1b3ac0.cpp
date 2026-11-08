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

// Function: FUN_001b3ac0
// Address: 0x1b3ac0 - 0x1b3aec
void FUN_001b3ac0_0x1b3ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3ac0_0x1b3ac0");
#endif

    ctx->pc = 0x1b3ac0u;

    // 0x1b3ac0: 0xa08028f8  sb          $zero, 0x28F8($a0)
    ctx->pc = 0x1b3ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10488), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ac4: 0xa08028f9  sb          $zero, 0x28F9($a0)
    ctx->pc = 0x1b3ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10489), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ac8: 0xa08028fa  sb          $zero, 0x28FA($a0)
    ctx->pc = 0x1b3ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10490), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3acc: 0xa08028fb  sb          $zero, 0x28FB($a0)
    ctx->pc = 0x1b3accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10491), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ad0: 0xa08028fc  sb          $zero, 0x28FC($a0)
    ctx->pc = 0x1b3ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10492), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ad4: 0xa08028fd  sb          $zero, 0x28FD($a0)
    ctx->pc = 0x1b3ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10493), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ad8: 0xa08028fe  sb          $zero, 0x28FE($a0)
    ctx->pc = 0x1b3ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10494), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3adc: 0xa08028ff  sb          $zero, 0x28FF($a0)
    ctx->pc = 0x1b3adcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10495), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ae0: 0xa0802900  sb          $zero, 0x2900($a0)
    ctx->pc = 0x1b3ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10496), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3AECu;
}

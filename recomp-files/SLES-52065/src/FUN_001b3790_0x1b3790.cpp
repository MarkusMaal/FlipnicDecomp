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

// Function: FUN_001b3790
// Address: 0x1b3790 - 0x1b37b8
void FUN_001b3790_0x1b3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3790_0x1b3790");
#endif

    ctx->pc = 0x1b3790u;

    // 0x1b3790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3794: 0xa08328f8  sb          $v1, 0x28F8($a0)
    ctx->pc = 0x1b3794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10488), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3798: 0x908328f5  lbu         $v1, 0x28F5($a0)
    ctx->pc = 0x1b3798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10485)));
    // 0x1b379c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B379Cu;
    {
        const bool branch_taken_0x1b379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b379c) {
            ctx->pc = 0x1B37B0u;
            goto label_1b37b0;
        }
    }
    ctx->pc = 0x1B37A4u;
    // 0x1b37a4: 0x8c83283c  lw          $v1, 0x283C($a0)
    ctx->pc = 0x1b37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10300)));
    // 0x1b37a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b37ac: 0xac83283c  sw          $v1, 0x283C($a0)
    ctx->pc = 0x1b37acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10300), GPR_U32(ctx, 3));
label_1b37b0:
    // 0x1b37b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37B8u;
}

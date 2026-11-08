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

// Function: FUN_001b3810
// Address: 0x1b3810 - 0x1b3840
void FUN_001b3810_0x1b3810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3810_0x1b3810");
#endif

    ctx->pc = 0x1b3810u;

    // 0x1b3810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3814: 0xa08328f9  sb          $v1, 0x28F9($a0)
    ctx->pc = 0x1b3814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10489), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3818: 0x908328f5  lbu         $v1, 0x28F5($a0)
    ctx->pc = 0x1b3818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10485)));
    // 0x1b381c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B381Cu;
    {
        const bool branch_taken_0x1b381c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b381c) {
            ctx->pc = 0x1B3838u;
            goto label_1b3838;
        }
    }
    ctx->pc = 0x1B3824u;
    // 0x1b3824: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b3824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3828: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b3828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b382c: 0x8c832858  lw          $v1, 0x2858($a0)
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10328)));
    // 0x1b3830: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b3834: 0xac832858  sw          $v1, 0x2858($a0)
    ctx->pc = 0x1b3834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10328), GPR_U32(ctx, 3));
label_1b3838:
    // 0x1b3838: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3840u;
}

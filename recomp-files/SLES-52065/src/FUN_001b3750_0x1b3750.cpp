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

// Function: FUN_001b3750
// Address: 0x1b3750 - 0x1b3784
void FUN_001b3750_0x1b3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3750_0x1b3750");
#endif

    ctx->pc = 0x1b3750u;

    // 0x1b3750: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1b3750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1b3754: 0x8c672c10  lw          $a3, 0x2C10($v1)
    ctx->pc = 0x1b3754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x1b3758: 0x8c662c1c  lw          $a2, 0x2C1C($v1)
    ctx->pc = 0x1b3758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x1b375c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1b375cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b3760: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1b3760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b3764: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b3764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b3768: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b3768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b376c: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1b376cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x1b3770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b3770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b3774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3778: 0xac652858  sw          $a1, 0x2858($v1)
    ctx->pc = 0x1b3778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10328), GPR_U32(ctx, 5));
    // 0x1b377c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3784u;
}

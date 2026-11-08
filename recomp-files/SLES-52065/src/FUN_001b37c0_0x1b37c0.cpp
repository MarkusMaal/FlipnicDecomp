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

// Function: FUN_001b37c0
// Address: 0x1b37c0 - 0x1b37e8
void FUN_001b37c0_0x1b37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b37c0_0x1b37c0");
#endif

    ctx->pc = 0x1b37c0u;

    // 0x1b37c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b37c4: 0xa08328fa  sb          $v1, 0x28FA($a0)
    ctx->pc = 0x1b37c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10490), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b37c8: 0x908328f4  lbu         $v1, 0x28F4($a0)
    ctx->pc = 0x1b37c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10484)));
    // 0x1b37cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B37CCu;
    {
        const bool branch_taken_0x1b37cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b37cc) {
            ctx->pc = 0x1B37E0u;
            goto label_1b37e0;
        }
    }
    ctx->pc = 0x1B37D4u;
    // 0x1b37d4: 0x8c832840  lw          $v1, 0x2840($a0)
    ctx->pc = 0x1b37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10304)));
    // 0x1b37d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b37dc: 0xac832840  sw          $v1, 0x2840($a0)
    ctx->pc = 0x1b37dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10304), GPR_U32(ctx, 3));
label_1b37e0:
    // 0x1b37e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37E8u;
}

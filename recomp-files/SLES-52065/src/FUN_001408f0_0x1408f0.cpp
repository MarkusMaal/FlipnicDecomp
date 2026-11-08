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

// Function: FUN_001408f0
// Address: 0x1408f0 - 0x140940
void FUN_001408f0_0x1408f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001408f0_0x1408f0");
#endif

    ctx->pc = 0x1408f0u;

    // 0x1408f0: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1408F0u;
    {
        const bool branch_taken_0x1408f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1408f0) {
            ctx->pc = 0x140938u;
            goto label_140938;
        }
    }
    ctx->pc = 0x1408F8u;
    // 0x1408f8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1408f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1408fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1408fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140900: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x140900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x140904: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x140904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x140908: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14090c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x140910: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x140910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x140914: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x140914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x140918: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x140918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14091c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x140920: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x140920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x140924: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x140924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x140928: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14092c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140930: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x140930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x140934: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x140934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_140938:
    // 0x140938: 0x3e00008  jr          $ra
    ctx->pc = 0x140938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140940u;
}

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

// Function: entry_0011f830
// Address: 0x11f830 - 0x11f854
void entry_0011f830_0x11f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f830_0x11f830");
#endif

    ctx->pc = 0x11f830u;

    // 0x11f830: 0x8c832020  lw          $v1, 0x2020($a0)
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8224)));
    // 0x11f834: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x11f834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f838: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11F838u;
    {
        const bool branch_taken_0x11f838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f838) {
            ctx->pc = 0x11F7F8u;
            return;
        }
    }
    ctx->pc = 0x11F840u;
    // 0x11f840: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x11f840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x11f844: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x11f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f848: 0xac832028  sw          $v1, 0x2028($a0)
    ctx->pc = 0x11f848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8232), GPR_U32(ctx, 3));
    // 0x11f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F84Cu;
        // 0x11f850: 0xac802024  sw          $zero, 0x2024($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F854u;
}

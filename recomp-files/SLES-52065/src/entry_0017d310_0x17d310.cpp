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

// Function: entry_0017d310
// Address: 0x17d310 - 0x17d330
void entry_0017d310_0x17d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d310_0x17d310");
#endif

    ctx->pc = 0x17d310u;

    // 0x17d310: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17d310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17d314: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17d314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17d318: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17d318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17d31c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17d31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d320: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17d320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17d324: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17d324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17d328: 0x3e00008  jr          $ra
    ctx->pc = 0x17D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D328u;
        // 0x17d32c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D330u;
}

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

// Function: FUN_0013f880
// Address: 0x13f880 - 0x13f8ac
void FUN_0013f880_0x13f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f880_0x13f880");
#endif

    ctx->pc = 0x13f880u;

    // 0x13f880: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13f884: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13f884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f888: 0x8c23f090  lw          $v1, -0xF70($at)
    ctx->pc = 0x13f888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F090u));
    // 0x13f88c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13f890: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13f890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13f894: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13f894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13f898: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13f898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13f89c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x13f8a0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x13f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x13f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A4u;
        // 0x13f8a8: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F8ACu;
}

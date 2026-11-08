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

// Function: entry_00119444
// Address: 0x119444 - 0x119460
void entry_00119444_0x119444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119444_0x119444");
#endif

    switch (ctx->pc) {
        case 0x11944cu: goto label_11944c;
        default: break;
    }

    ctx->pc = 0x119444u;

    // 0x119444: 0xc04be6c  jal         func_12F9B0
    ctx->pc = 0x119444u;
    SET_GPR_U32(ctx, 31, 0x11944Cu);
    ctx->pc = 0x12F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9B0u, 0x119444u, 0x11944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11944Cu;
label_11944c:
    // 0x11944c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119458: 0x3e00008  jr          $ra
    ctx->pc = 0x119458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119458u;
        // 0x11945c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119460u;
}

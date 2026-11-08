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

// Function: entry_002084b0
// Address: 0x2084b0 - 0x2084c8
void entry_002084b0_0x2084b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002084b0_0x2084b0");
#endif

    switch (ctx->pc) {
        case 0x2084b8u: goto label_2084b8;
        default: break;
    }

    ctx->pc = 0x2084b0u;

    // 0x2084b0: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x2084B0u;
    SET_GPR_U32(ctx, 31, 0x2084B8u);
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x2084B0u, 0x2084B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084B8u;
label_2084b8:
    // 0x2084b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2084b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2084bc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2084bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2084c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2084C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2084C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C0u;
        // 0x2084c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2084C8u;
}

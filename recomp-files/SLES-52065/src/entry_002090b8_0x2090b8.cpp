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

// Function: entry_002090b8
// Address: 0x2090b8 - 0x2090d0
void entry_002090b8_0x2090b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002090b8_0x2090b8");
#endif

    switch (ctx->pc) {
        case 0x2090c0u: goto label_2090c0;
        default: break;
    }

    ctx->pc = 0x2090b8u;

    // 0x2090b8: 0xc082238  jal         func_2088E0
    ctx->pc = 0x2090B8u;
    SET_GPR_U32(ctx, 31, 0x2090C0u);
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x2090B8u, 0x2090C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090C0u;
label_2090c0:
    // 0x2090c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2090c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2090c4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2090c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2090c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2090C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2090CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090C8u;
        // 0x2090cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2090C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2090D0u;
}

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

// Function: FUN_001f2768
// Address: 0x1f2768 - 0x1f2784
void FUN_001f2768_0x1f2768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2768_0x1f2768");
#endif

    switch (ctx->pc) {
        case 0x1f2778u: goto label_1f2778;
        default: break;
    }

    ctx->pc = 0x1f2768u;

    // 0x1f2768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f276c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2770: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x1F2770u;
    SET_GPR_U32(ctx, 31, 0x1F2778u);
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x1F2770u, 0x1F2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2778u;
label_1f2778:
    // 0x1f2778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f277c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F277Cu;
        // 0x1f2780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F277Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2784u;
}

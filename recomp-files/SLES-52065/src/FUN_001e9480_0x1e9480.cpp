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

// Function: FUN_001e9480
// Address: 0x1e9480 - 0x1e94a4
void FUN_001e9480_0x1e9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9480_0x1e9480");
#endif

    switch (ctx->pc) {
        case 0x1e9480u: goto label_1e9480;
        case 0x1e9484u: goto label_1e9484;
        case 0x1e9488u: goto label_1e9488;
        case 0x1e948cu: goto label_1e948c;
        case 0x1e9490u: goto label_1e9490;
        case 0x1e9494u: goto label_1e9494;
        case 0x1e9498u: goto label_1e9498;
        case 0x1e949cu: goto label_1e949c;
        case 0x1e94a0u: goto label_1e94a0;
        default: break;
    }

    ctx->pc = 0x1e9480u;

label_1e9480:
    // 0x1e9480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9484:
    // 0x1e9484: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e9484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1e9488:
    // 0x1e9488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e948c:
    // 0x1e948c: 0x8c22a390  lw          $v0, -0x5C70($at)
    ctx->pc = 0x1e948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943632)));
label_1e9490:
    // 0x1e9490: 0x40f809  jalr        $v0
label_1e9494:
    if (ctx->pc == 0x1E9494u) {
        ctx->pc = 0x1E9498u;
        goto label_1e9498;
    }
    ctx->pc = 0x1E9490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9490u, 0x1E9498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9498u;
label_1e9498:
    // 0x1e9498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e949c:
    // 0x1e949c: 0x3e00008  jr          $ra
label_1e94a0:
    if (ctx->pc == 0x1E94A0u) {
        ctx->pc = 0x1E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E949Cu;
        // 0x1e94a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E94A4u;
        goto label_fallthrough_0x1e949c;
    }
    ctx->pc = 0x1E949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E949Cu;
        // 0x1e94a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e949c:
    ctx->pc = 0x1E94A4u;
}

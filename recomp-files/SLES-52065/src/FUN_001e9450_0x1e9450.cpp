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

// Function: FUN_001e9450
// Address: 0x1e9450 - 0x1e9474
void FUN_001e9450_0x1e9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9450_0x1e9450");
#endif

    switch (ctx->pc) {
        case 0x1e9450u: goto label_1e9450;
        case 0x1e9454u: goto label_1e9454;
        case 0x1e9458u: goto label_1e9458;
        case 0x1e945cu: goto label_1e945c;
        case 0x1e9460u: goto label_1e9460;
        case 0x1e9464u: goto label_1e9464;
        case 0x1e9468u: goto label_1e9468;
        case 0x1e946cu: goto label_1e946c;
        case 0x1e9470u: goto label_1e9470;
        default: break;
    }

    ctx->pc = 0x1e9450u;

label_1e9450:
    // 0x1e9450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9454:
    // 0x1e9454: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1e9458:
    // 0x1e9458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e945c:
    // 0x1e945c: 0x8c22a398  lw          $v0, -0x5C68($at)
    ctx->pc = 0x1e945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943640)));
label_1e9460:
    // 0x1e9460: 0x40f809  jalr        $v0
label_1e9464:
    if (ctx->pc == 0x1E9464u) {
        ctx->pc = 0x1E9468u;
        goto label_1e9468;
    }
    ctx->pc = 0x1E9460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9460u, 0x1E9468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9468u;
label_1e9468:
    // 0x1e9468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e946c:
    // 0x1e946c: 0x3e00008  jr          $ra
label_1e9470:
    if (ctx->pc == 0x1E9470u) {
        ctx->pc = 0x1E9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E946Cu;
        // 0x1e9470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9474u;
        goto label_fallthrough_0x1e946c;
    }
    ctx->pc = 0x1E946Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E946Cu;
        // 0x1e9470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E946Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e946c:
    ctx->pc = 0x1E9474u;
}

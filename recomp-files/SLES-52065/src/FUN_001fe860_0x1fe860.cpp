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

// Function: FUN_001fe860
// Address: 0x1fe860 - 0x1fe884
void FUN_001fe860_0x1fe860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe860_0x1fe860");
#endif

    switch (ctx->pc) {
        case 0x1fe878u: goto label_1fe878;
        default: break;
    }

    ctx->pc = 0x1fe860u;

    // 0x1fe860: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fe860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fe864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe868: 0x8c44d9ac  lw          $a0, -0x2654($v0)
    ctx->pc = 0x1fe868u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1fe86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe870: 0xc07fa08  jal         func_1FE820
    ctx->pc = 0x1FE870u;
    SET_GPR_U32(ctx, 31, 0x1FE878u);
    ctx->pc = 0x1FE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE820u, 0x1FE870u, 0x1FE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE878u;
label_1fe878:
    // 0x1fe878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe87c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE87Cu;
        // 0x1fe880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE884u;
}

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

// Function: FUN_001274a0
// Address: 0x1274a0 - 0x1274c0
void FUN_001274a0_0x1274a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001274a0_0x1274a0");
#endif

    switch (ctx->pc) {
        case 0x1274b0u: goto label_1274b0;
        default: break;
    }

    ctx->pc = 0x1274a0u;

    // 0x1274a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1274a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1274a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1274a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1274a8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1274A8u;
    SET_GPR_U32(ctx, 31, 0x1274B0u);
    ctx->pc = 0x1274ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274A8u;
    // 0x1274ac: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1274A8u, 0x1274B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274B0u;
label_1274b0:
    // 0x1274b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1274b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1274b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1274b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1274B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1274BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274B8u;
        // 0x1274bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1274B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1274C0u;
}

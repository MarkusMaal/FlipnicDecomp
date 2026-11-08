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

// Function: FUN_001ebce0
// Address: 0x1ebce0 - 0x1ebd08
void FUN_001ebce0_0x1ebce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebce0_0x1ebce0");
#endif

    switch (ctx->pc) {
        case 0x1ebcf0u: goto label_1ebcf0;
        default: break;
    }

    ctx->pc = 0x1ebce0u;

    // 0x1ebce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebce8: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1EBCE8u;
    SET_GPR_U32(ctx, 31, 0x1EBCF0u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1EBCE8u, 0x1EBCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCF0u;
label_1ebcf0:
    // 0x1ebcf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ebcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ebcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebcf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ebcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ebcfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebd00: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD00u;
        // 0x1ebd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBD08u;
}

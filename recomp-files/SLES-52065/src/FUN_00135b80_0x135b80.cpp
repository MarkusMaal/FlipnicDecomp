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

// Function: FUN_00135b80
// Address: 0x135b80 - 0x135ba8
void FUN_00135b80_0x135b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135b80_0x135b80");
#endif

    switch (ctx->pc) {
        case 0x135b9cu: goto label_135b9c;
        default: break;
    }

    ctx->pc = 0x135b80u;

    // 0x135b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135b88: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x135b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x135b8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135B8Cu;
    {
        const bool branch_taken_0x135b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b8c) {
            ctx->pc = 0x135B9Cu;
            goto label_135b9c;
        }
    }
    ctx->pc = 0x135B94u;
    // 0x135b94: 0xc04e84c  jal         func_13A130
    ctx->pc = 0x135B94u;
    SET_GPR_U32(ctx, 31, 0x135B9Cu);
    ctx->pc = 0x13A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A130u, 0x135B94u, 0x135B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B9Cu;
label_135b9c:
    // 0x135b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x135BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BA0u;
        // 0x135ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135BA8u;
}

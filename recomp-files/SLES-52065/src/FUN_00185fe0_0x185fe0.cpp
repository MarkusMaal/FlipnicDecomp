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

// Function: FUN_00185fe0
// Address: 0x185fe0 - 0x186004
void FUN_00185fe0_0x185fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185fe0_0x185fe0");
#endif

    switch (ctx->pc) {
        case 0x185ff0u: goto label_185ff0;
        case 0x185ff8u: goto label_185ff8;
        default: break;
    }

    ctx->pc = 0x185fe0u;

    // 0x185fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x185fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185fe8: 0xc04c03c  jal         func_1300F0
    ctx->pc = 0x185FE8u;
    SET_GPR_U32(ctx, 31, 0x185FF0u);
    ctx->pc = 0x1300F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300F0u, 0x185FE8u, 0x185FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FF0u;
label_185ff0:
    // 0x185ff0: 0xc04a898  jal         func_12A260
    ctx->pc = 0x185FF0u;
    SET_GPR_U32(ctx, 31, 0x185FF8u);
    ctx->pc = 0x12A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A260u, 0x185FF0u, 0x185FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FF8u;
label_185ff8:
    // 0x185ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x185FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FFCu;
        // 0x186000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186004u;
}

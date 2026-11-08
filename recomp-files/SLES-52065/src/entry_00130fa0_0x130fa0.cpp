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

// Function: entry_00130fa0
// Address: 0x130fa0 - 0x130fc4
void entry_00130fa0_0x130fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130fa0_0x130fa0");
#endif

    switch (ctx->pc) {
        case 0x130fa8u: goto label_130fa8;
        default: break;
    }

    ctx->pc = 0x130fa0u;

    // 0x130fa0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130FA0u;
    SET_GPR_U32(ctx, 31, 0x130FA8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130FA0u, 0x130FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FA8u;
label_130fa8:
    // 0x130fa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x130FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FBCu;
        // 0x130fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130FC4u;
}

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

// Function: entry_00187840
// Address: 0x187840 - 0x187864
void entry_00187840_0x187840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187840_0x187840");
#endif

    switch (ctx->pc) {
        case 0x187848u: goto label_187848;
        default: break;
    }

    ctx->pc = 0x187840u;

    // 0x187840: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187840u;
    SET_GPR_U32(ctx, 31, 0x187848u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187840u, 0x187848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187848u;
label_187848:
    // 0x187848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x187848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18784c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18784cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18785c: 0x3e00008  jr          $ra
    ctx->pc = 0x18785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18785Cu;
        // 0x187860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187864u;
}

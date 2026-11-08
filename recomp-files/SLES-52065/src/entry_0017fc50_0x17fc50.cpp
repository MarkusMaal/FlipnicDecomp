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

// Function: entry_0017fc50
// Address: 0x17fc50 - 0x17fc74
void entry_0017fc50_0x17fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fc50_0x17fc50");
#endif

    ctx->pc = 0x17fc50u;

    // 0x17fc50: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x17fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x17fc54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17fc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fc58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17fc58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fc5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fc5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fc60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fc60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fc64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC6Cu;
        // 0x17fc70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC74u;
}

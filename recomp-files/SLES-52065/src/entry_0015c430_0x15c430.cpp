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

// Function: entry_0015c430
// Address: 0x15c430 - 0x15c454
void entry_0015c430_0x15c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c430_0x15c430");
#endif

    ctx->pc = 0x15c430u;

    // 0x15c430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c434: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c43c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c43cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C44Cu;
        // 0x15c450: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C454u;
}

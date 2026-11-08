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

// Function: entry_00137f60
// Address: 0x137f60 - 0x137f88
void entry_00137f60_0x137f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f60_0x137f60");
#endif

    ctx->pc = 0x137f60u;

    // 0x137f60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x137f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137f64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x137f64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137f68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x137f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137f6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x137f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137f70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137f74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137f80: 0x3e00008  jr          $ra
    ctx->pc = 0x137F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F80u;
        // 0x137f84: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F88u;
}

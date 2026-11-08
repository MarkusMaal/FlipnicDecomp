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

// Function: entry_0011dc7c
// Address: 0x11dc7c - 0x11dca8
void entry_0011dc7c_0x11dc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc7c_0x11dc7c");
#endif

    ctx->pc = 0x11dc7cu;

    // 0x11dc7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11dc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11dc80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11dc80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11dc84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11dc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11dc88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11dc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11dc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11dc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dc90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11dc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dc94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11dc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11dc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11dc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dca0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCA0u;
        // 0x11dca4: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DCA8u;
}

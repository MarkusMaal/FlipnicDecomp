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

// Function: entry_0019e77c
// Address: 0x19e77c - 0x19e7a4
void entry_0019e77c_0x19e77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e77c_0x19e77c");
#endif

    ctx->pc = 0x19e77cu;

    // 0x19e77c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19e77cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e780: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e78c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E79Cu;
        // 0x19e7a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E7A4u;
}

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

// Function: entry_00198c38
// Address: 0x198c38 - 0x198c60
void entry_00198c38_0x198c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c38_0x198c38");
#endif

    ctx->pc = 0x198c38u;

    // 0x198c38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x198c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198c3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x198c3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198c40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x198c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198c44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x198c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x198c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198c58: 0x3e00008  jr          $ra
    ctx->pc = 0x198C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C58u;
        // 0x198c5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198C60u;
}

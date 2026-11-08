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

// Function: entry_0019668c
// Address: 0x19668c - 0x1966b0
void entry_0019668c_0x19668c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019668c_0x19668c");
#endif

    ctx->pc = 0x19668cu;

    // 0x19668c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19668cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19669c: 0x3e00008  jr          $ra
    ctx->pc = 0x19669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1966A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19669Cu;
        // 0x1966a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19669Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1966A4u;
    // 0x1966a4: 0x0  nop
    ctx->pc = 0x1966a4u;
    // NOP
    // 0x1966a8: 0x0  nop
    ctx->pc = 0x1966a8u;
    // NOP
    // 0x1966ac: 0x0  nop
    ctx->pc = 0x1966acu;
    // NOP
    ctx->pc = 0x1966b0u;
}

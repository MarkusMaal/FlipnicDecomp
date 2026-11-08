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

// Function: entry_0012f10c
// Address: 0x12f10c - 0x12f130
void entry_0012f10c_0x12f10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f10c_0x12f10c");
#endif

    ctx->pc = 0x12f10cu;

    // 0x12f10c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12f110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12f114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12f118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f11c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f128: 0x3e00008  jr          $ra
    ctx->pc = 0x12F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F128u;
        // 0x12f12c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F130u;
}

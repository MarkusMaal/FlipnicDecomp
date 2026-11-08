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

// Function: entry_001b41cc
// Address: 0x1b41cc - 0x1b41fc
void entry_001b41cc_0x1b41cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b41cc_0x1b41cc");
#endif

    ctx->pc = 0x1b41ccu;

    // 0x1b41cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b41d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1b41d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b41d8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1b41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1b41dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b41dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b41e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b41e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b41e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b41e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b41e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b41e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b41ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b41ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b41f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b41f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b41f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41F4u;
        // 0x1b41f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B41F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B41FCu;
}

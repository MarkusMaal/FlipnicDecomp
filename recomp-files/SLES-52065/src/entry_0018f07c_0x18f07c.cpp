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

// Function: entry_0018f07c
// Address: 0x18f07c - 0x18f0b8
void entry_0018f07c_0x18f07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f07c_0x18f07c");
#endif

    ctx->pc = 0x18f07cu;

    // 0x18f07c: 0x0  nop
    ctx->pc = 0x18f07cu;
    // NOP
    // 0x18f080: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x18f084: 0x2aa3000a  slti        $v1, $s5, 0xA
    ctx->pc = 0x18f084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18f088: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x18F088u;
    {
        const bool branch_taken_0x18f088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f088) {
            ctx->pc = 0x18EF7Cu;
            return;
        }
    }
    ctx->pc = 0x18F090u;
    // 0x18f090: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f094: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18f094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f098: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f09c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f09cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f0a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f0a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f0a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f0a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B0u;
        // 0x18f0b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F0B8u;
}

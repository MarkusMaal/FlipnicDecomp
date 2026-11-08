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

// Function: entry_0013a798
// Address: 0x13a798 - 0x13a7d4
void entry_0013a798_0x13a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a798_0x13a798");
#endif

    ctx->pc = 0x13a798u;

    // 0x13a798: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x13a798u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a79c: 0x285282b  sltu        $a1, $s4, $a1
    ctx->pc = 0x13a79cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13a7a0: 0x14a0ff89  bnez        $a1, . + 4 + (-0x77 << 2)
    ctx->pc = 0x13A7A0u;
    {
        const bool branch_taken_0x13a7a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a7a0) {
            ctx->pc = 0x13A5C8u;
            return;
        }
    }
    ctx->pc = 0x13A7A8u;
    // 0x13a7a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13a7a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a7ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13a7acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a7b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13a7b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a7b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a7b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a7b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a7b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a7bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a7bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a7c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a7c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7CCu;
        // 0x13a7d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A7D4u;
}

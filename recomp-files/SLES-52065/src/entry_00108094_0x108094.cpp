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

// Function: entry_00108094
// Address: 0x108094 - 0x1080d8
void entry_00108094_0x108094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108094_0x108094");
#endif

    ctx->pc = 0x108094u;

    // 0x108094: 0x0  nop
    ctx->pc = 0x108094u;
    // NOP
    // 0x108098: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x108098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x10809c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10809cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1080a0: 0x681ffcc  bgez        $s4, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1080A0u;
    {
        const bool branch_taken_0x1080a0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A0u;
        // 0x1080a4: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a0) {
            ctx->pc = 0x107FD4u;
            return;
        }
    }
    ctx->pc = 0x1080A8u;
    // 0x1080a8: 0xaf80821c  sw          $zero, -0x7DE4($gp)
    ctx->pc = 0x1080a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 0));
    // 0x1080ac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1080acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1080b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1080b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1080b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1080b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1080b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1080b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1080bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1080bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1080c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1080c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1080c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1080c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1080c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1080c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1080cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1080ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1080d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1080D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1080D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080D0u;
        // 0x1080d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1080D8u;
}

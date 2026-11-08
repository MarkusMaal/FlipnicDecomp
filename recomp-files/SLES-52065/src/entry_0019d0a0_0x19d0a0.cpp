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

// Function: entry_0019d0a0
// Address: 0x19d0a0 - 0x19d0d0
void entry_0019d0a0_0x19d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0a0_0x19d0a0");
#endif

    ctx->pc = 0x19d0a0u;

    // 0x19d0a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19d0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d0a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19d0a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d0a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19d0a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d0ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19d0acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d0b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19d0b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d0b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d0b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0C8u;
        // 0x19d0cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0D0u;
}

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

// Function: entry_00125024
// Address: 0x125024 - 0x12504c
void entry_00125024_0x125024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125024_0x125024");
#endif

    ctx->pc = 0x125024u;

    // 0x125024: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x125024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125028: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x125028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12502c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12502cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x125030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x125034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12503c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12503cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125044: 0x3e00008  jr          $ra
    ctx->pc = 0x125044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125044u;
        // 0x125048: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12504Cu;
}

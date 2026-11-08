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

// Function: entry_00127d74
// Address: 0x127d74 - 0x127db4
void entry_00127d74_0x127d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d74_0x127d74");
#endif

    ctx->pc = 0x127d74u;

    // 0x127d74: 0x0  nop
    ctx->pc = 0x127d74u;
    // NOP
    // 0x127d78: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x127d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x127d7c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x127d80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127d84: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x127d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x127d88: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x127d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x127d8c: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x127d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
    // 0x127d90: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x127d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x127d94: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x127d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x127d98: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x127d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
    // 0x127d9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127dac: 0x3e00008  jr          $ra
    ctx->pc = 0x127DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DACu;
        // 0x127db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127DB4u;
}

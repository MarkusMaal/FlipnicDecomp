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

// Function: entry_001ca288
// Address: 0x1ca288 - 0x1ca2c0
void entry_001ca288_0x1ca288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca288_0x1ca288");
#endif

    ctx->pc = 0x1ca288u;

    // 0x1ca288: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca28c: 0xaea30074  sw          $v1, 0x74($s5)
    ctx->pc = 0x1ca28cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
    // 0x1ca290: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ca290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca294: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ca294u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca298: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ca298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca29c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ca29cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca2a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ca2a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca2a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ca2a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca2a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ca2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca2ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B8u;
        // 0x1ca2bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA2C0u;
}

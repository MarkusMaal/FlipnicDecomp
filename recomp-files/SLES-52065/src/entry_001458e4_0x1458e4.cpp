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

// Function: entry_001458e4
// Address: 0x1458e4 - 0x14590c
void entry_001458e4_0x1458e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001458e4_0x1458e4");
#endif

    ctx->pc = 0x1458e4u;

    // 0x1458e4: 0x0  nop
    ctx->pc = 0x1458e4u;
    // NOP
    // 0x1458e8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1458e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1458ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1458ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1458f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1458f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1458f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1458f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1458f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1458f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1458fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1458fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145904: 0x3e00008  jr          $ra
    ctx->pc = 0x145904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145904u;
        // 0x145908: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14590Cu;
}

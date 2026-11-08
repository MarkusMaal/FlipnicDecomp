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

// Function: entry_001528e4
// Address: 0x1528e4 - 0x15290c
void entry_001528e4_0x1528e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001528e4_0x1528e4");
#endif

    ctx->pc = 0x1528e4u;

    // 0x1528e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1528e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1528e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1528e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1528ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1528ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1528f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1528f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1528f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1528f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1528f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1528f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1528fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1528fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152904: 0x3e00008  jr          $ra
    ctx->pc = 0x152904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152904u;
        // 0x152908: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15290Cu;
}

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

// Function: entry_00143364
// Address: 0x143364 - 0x143390
void entry_00143364_0x143364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143364_0x143364");
#endif

    ctx->pc = 0x143364u;

    // 0x143364: 0x0  nop
    ctx->pc = 0x143364u;
    // NOP
    // 0x143368: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x143368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14336c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14336cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143370: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143374: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14337c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14337cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143388: 0x3e00008  jr          $ra
    ctx->pc = 0x143388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143388u;
        // 0x14338c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143390u;
}

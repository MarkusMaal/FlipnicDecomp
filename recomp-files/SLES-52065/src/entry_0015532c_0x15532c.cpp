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

// Function: entry_0015532c
// Address: 0x15532c - 0x155354
void entry_0015532c_0x15532c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015532c_0x15532c");
#endif

    ctx->pc = 0x15532cu;

    // 0x15532c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x155330: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x155330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155334: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x155334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155338: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x155338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15533c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15533cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155340: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x155340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x155344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15534c: 0x3e00008  jr          $ra
    ctx->pc = 0x15534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15534Cu;
        // 0x155350: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155354u;
}

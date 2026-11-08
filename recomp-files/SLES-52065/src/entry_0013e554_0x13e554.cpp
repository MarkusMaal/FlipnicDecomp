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

// Function: entry_0013e554
// Address: 0x13e554 - 0x13e584
void entry_0013e554_0x13e554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e554_0x13e554");
#endif

    ctx->pc = 0x13e554u;

    // 0x13e554: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13e558: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x13e558u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13e55c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13e55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13e560: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13e560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13e564: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13e564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e568: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13e568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e56c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13e56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e570: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13e570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e574: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e578: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e57c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E57Cu;
        // 0x13e580: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E584u;
}

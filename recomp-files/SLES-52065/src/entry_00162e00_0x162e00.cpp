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

// Function: entry_00162e00
// Address: 0x162e00 - 0x162e30
void entry_00162e00_0x162e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162e00_0x162e00");
#endif

    ctx->pc = 0x162e00u;

    // 0x162e00: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x162e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x162e04: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x162e04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x162e08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x162e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162e0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x162e0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162e10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x162e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162e14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x162e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162e18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x162e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162e1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x162e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x162e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e28: 0x3e00008  jr          $ra
    ctx->pc = 0x162E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162E30u;
}

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

// Function: entry_0010bf48
// Address: 0x10bf48 - 0x10bf68
void entry_0010bf48_0x10bf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bf48_0x10bf48");
#endif

    ctx->pc = 0x10bf48u;

    // 0x10bf48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10bf4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10bf4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bf50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10bf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bf54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10bf54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bf58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10bf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bf5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10bf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF60u;
        // 0x10bf64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BF68u;
}

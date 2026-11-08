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

// Function: FUN_001868b0
// Address: 0x1868b0 - 0x1868d0
void FUN_001868b0_0x1868b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001868b0_0x1868b0");
#endif

    ctx->pc = 0x1868b0u;

    // 0x1868b0: 0xe48c0148  swc1        $f12, 0x148($a0)
    ctx->pc = 0x1868b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
    // 0x1868b4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1868b8: 0xc4800148  lwc1        $f0, 0x148($a0)
    ctx->pc = 0x1868b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1868bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1868bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1868c0: 0x0  nop
    ctx->pc = 0x1868c0u;
    // NOP
    // 0x1868c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1868c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1868c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1868C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1868CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868C8u;
        // 0x1868cc: 0xe4800148  swc1        $f0, 0x148($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1868C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1868D0u;
}

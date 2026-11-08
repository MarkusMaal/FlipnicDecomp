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

// Function: FUN_001bada0
// Address: 0x1bada0 - 0x1bae04
void FUN_001bada0_0x1bada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bada0_0x1bada0");
#endif

    ctx->pc = 0x1bada0u;

    // 0x1bada0: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x1bada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bada4: 0xc4810090  lwc1        $f1, 0x90($a0)
    ctx->pc = 0x1bada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bada8: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x1bada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1badac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1badacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1badb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1badb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1badb4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1badb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1badb8: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x1badb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1badbc: 0xc4810094  lwc1        $f1, 0x94($a0)
    ctx->pc = 0x1badbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badc0: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x1badc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1badc4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1badc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1badc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1badc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1badcc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1badccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1badd0: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x1badd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1badd4: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x1badd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badd8: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x1badd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baddc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1baddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1bade0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bade0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bade4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1bade4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1bade8: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x1bade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1badec: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x1badecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badf0: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1badf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1badf4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1badf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1badf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1badf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1badfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADFCu;
        // 0x1bae00: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAE04u;
}

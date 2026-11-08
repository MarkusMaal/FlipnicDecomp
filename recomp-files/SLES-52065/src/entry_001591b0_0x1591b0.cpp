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

// Function: entry_001591b0
// Address: 0x1591b0 - 0x1591e8
void entry_001591b0_0x1591b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001591b0_0x1591b0");
#endif

    ctx->pc = 0x1591b0u;

    // 0x1591b0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1591b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1591B4u;
    {
        const bool branch_taken_0x1591b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1591b4) {
            ctx->pc = 0x159170u;
            return;
        }
    }
    ctx->pc = 0x1591BCu;
    // 0x1591bc: 0x0  nop
    ctx->pc = 0x1591bcu;
    // NOP
    // 0x1591c0: 0x0  nop
    ctx->pc = 0x1591c0u;
    // NOP
    // 0x1591c4: 0x0  nop
    ctx->pc = 0x1591c4u;
    // NOP
    // 0x1591c8: 0x46020084  c1          0x20084
    ctx->pc = 0x1591c8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1591cc: 0x0  nop
    ctx->pc = 0x1591ccu;
    // NOP
    // 0x1591d0: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x1591d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1591d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1591d8: 0x0  nop
    ctx->pc = 0x1591d8u;
    // NOP
    // 0x1591dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1591DCu;
    {
        const bool branch_taken_0x1591dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1591dc) {
            ctx->pc = 0x1591E8u;
            return;
        }
    }
    ctx->pc = 0x1591E4u;
    // 0x1591e4: 0xe6220200  swc1        $f2, 0x200($s1)
    ctx->pc = 0x1591e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    ctx->pc = 0x1591e8u;
}

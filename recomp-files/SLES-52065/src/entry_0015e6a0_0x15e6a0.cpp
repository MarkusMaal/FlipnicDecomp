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

// Function: entry_0015e6a0
// Address: 0x15e6a0 - 0x15e6bc
void entry_0015e6a0_0x15e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6a0_0x15e6a0");
#endif

    ctx->pc = 0x15e6a0u;

    // 0x15e6a0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x15e6a4: 0xc4600254  lwc1        $f0, 0x254($v1)
    ctx->pc = 0x15e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e6a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e6ac: 0x0  nop
    ctx->pc = 0x15e6acu;
    // NOP
    // 0x15e6b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15E6B0u;
    {
        const bool branch_taken_0x15e6b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e6b0) {
            ctx->pc = 0x15E6BCu;
            return;
        }
    }
    ctx->pc = 0x15E6B8u;
    // 0x15e6b8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x15e6b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x15e6bcu;
}

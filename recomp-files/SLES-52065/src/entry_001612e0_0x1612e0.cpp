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

// Function: entry_001612e0
// Address: 0x1612e0 - 0x161304
void entry_001612e0_0x1612e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001612e0_0x1612e0");
#endif

    ctx->pc = 0x1612e0u;

    // 0x1612e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1612e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1612e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1612e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1612e8: 0x0  nop
    ctx->pc = 0x1612e8u;
    // NOP
    // 0x1612ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1612ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1612f0: 0x0  nop
    ctx->pc = 0x1612f0u;
    // NOP
    // 0x1612f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1612F4u;
    {
        const bool branch_taken_0x1612f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1612f4) {
            ctx->pc = 0x161304u;
            return;
        }
    }
    ctx->pc = 0x1612FCu;
    // 0x1612fc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1612fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x161300: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x161300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x161304u;
}

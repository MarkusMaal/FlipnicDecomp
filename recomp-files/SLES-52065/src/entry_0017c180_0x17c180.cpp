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

// Function: entry_0017c180
// Address: 0x17c180 - 0x17c1b4
void entry_0017c180_0x17c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c180_0x17c180");
#endif

    ctx->pc = 0x17c180u;

    // 0x17c180: 0x84850216  lh          $a1, 0x216($a0)
    ctx->pc = 0x17c180u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x17c184: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x17c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c188: 0x84830214  lh          $v1, 0x214($a0)
    ctx->pc = 0x17c188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x17c18c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17c18cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c190: 0x0  nop
    ctx->pc = 0x17c190u;
    // NOP
    // 0x17c194: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x17c194u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x17c198: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c1a0: 0x0  nop
    ctx->pc = 0x17c1a0u;
    // NOP
    // 0x17c1a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17c1a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c1a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c1ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17c1acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17c1b0: 0xe48001c4  swc1        $f0, 0x1C4($a0)
    ctx->pc = 0x17c1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 452), bits); }
    ctx->pc = 0x17c1b4u;
}

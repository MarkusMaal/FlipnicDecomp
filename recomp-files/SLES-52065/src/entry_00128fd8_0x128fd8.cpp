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

// Function: entry_00128fd8
// Address: 0x128fd8 - 0x128ffc
void entry_00128fd8_0x128fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128fd8_0x128fd8");
#endif

    ctx->pc = 0x128fd8u;

    // 0x128fd8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x128fdc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x128fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x128fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128fe4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x128fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128fe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128fec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x128fecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128ff0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x128ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x128ff4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x128ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x128ff8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x128ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    ctx->pc = 0x128ffcu;
}

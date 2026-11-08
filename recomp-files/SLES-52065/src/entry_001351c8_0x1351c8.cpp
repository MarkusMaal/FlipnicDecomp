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

// Function: entry_001351c8
// Address: 0x1351c8 - 0x1351e4
void entry_001351c8_0x1351c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001351c8_0x1351c8");
#endif

    ctx->pc = 0x1351c8u;

    // 0x1351c8: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x1351c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1351cc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1351ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1351d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1351d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1351d4: 0x0  nop
    ctx->pc = 0x1351d4u;
    // NOP
    // 0x1351d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1351d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1351dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1351dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1351e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1351e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->pc = 0x1351e4u;
}

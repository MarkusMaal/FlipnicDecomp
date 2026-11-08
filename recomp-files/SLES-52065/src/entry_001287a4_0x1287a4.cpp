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

// Function: entry_001287a4
// Address: 0x1287a4 - 0x1287c8
void entry_001287a4_0x1287a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287a4_0x1287a4");
#endif

    ctx->pc = 0x1287a4u;

    // 0x1287a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1287a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1287a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1287ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1287acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1287b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1287b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1287b4: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x1287b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1287b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1287bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1287bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1287c0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1287c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1287c4: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x1287c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    ctx->pc = 0x1287c8u;
}

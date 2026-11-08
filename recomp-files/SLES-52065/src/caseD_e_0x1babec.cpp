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

// Function: caseD_e
// Address: 0x1babec - 0x1bac34
void caseD_e_0x1babec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1babec");
#endif

    ctx->pc = 0x1babecu;

    // 0x1babec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1babecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babf0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1babf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1babf4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1babf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1babf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1babf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1babfc: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1babfcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1bac00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac04: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1bac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1bac08: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1bac08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1bac0c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bac0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bac10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac14: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x1bac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1bac18: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x1bac18u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x1bac1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac20: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x1bac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1bac24: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1bac24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1bac28: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bac28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bac2c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bac2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bac30: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1bac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1bac34u;
}

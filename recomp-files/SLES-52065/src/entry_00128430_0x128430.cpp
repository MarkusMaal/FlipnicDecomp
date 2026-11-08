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

// Function: entry_00128430
// Address: 0x128430 - 0x1284a0
void entry_00128430_0x128430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128430_0x128430");
#endif

    ctx->pc = 0x128430u;

    // 0x128430: 0xc48300b0  lwc1        $f3, 0xB0($a0)
    ctx->pc = 0x128430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128438: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x128438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12843c: 0xc48200a0  lwc1        $f2, 0xA0($a0)
    ctx->pc = 0x12843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128444: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x128444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x128448: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x128448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12844c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12844cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x128450: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x128450u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x128454: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x128454u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x128458: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x128458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x12845c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x12845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128460: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x128460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128464: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x128464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x128468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12846c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12846cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x128470: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x128470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x128474: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x128474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128478: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x128478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12847c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x12847cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x128480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x128484: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x128484u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x128488: 0x0  nop
    ctx->pc = 0x128488u;
    // NOP
    // 0x12848c: 0x0  nop
    ctx->pc = 0x12848cu;
    // NOP
    // 0x128490: 0x80497f0  j           func_125FC0
    ctx->pc = 0x128490u;
    ctx->pc = 0x128494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128490u;
    // 0x128494: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    FUN_00125fc0_0x125fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x128498u;
    // 0x128498: 0x0  nop
    ctx->pc = 0x128498u;
    // NOP
    // 0x12849c: 0x0  nop
    ctx->pc = 0x12849cu;
    // NOP
    ctx->pc = 0x1284a0u;
}

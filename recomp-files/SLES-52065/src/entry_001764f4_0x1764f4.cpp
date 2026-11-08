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

// Function: entry_001764f4
// Address: 0x1764f4 - 0x176558
void entry_001764f4_0x1764f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764f4_0x1764f4");
#endif

    ctx->pc = 0x1764f4u;

    // 0x1764f4: 0x0  nop
    ctx->pc = 0x1764f4u;
    // NOP
    // 0x1764f8: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1764f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1764fc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1764fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176500: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x176504: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x176504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x176508: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x176508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x17650c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x17650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176510: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x176510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176514: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x176518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x176518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17651c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x17651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x176520: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x176520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176524: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x176524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176528: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x17652c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17652cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x176530: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x176530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x176534: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x176534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176538: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x176538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x17653c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x17653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x176540: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x176540u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x176544: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x176544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176548: 0x0  nop
    ctx->pc = 0x176548u;
    // NOP
    // 0x17654c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17654Cu;
    {
        const bool branch_taken_0x17654c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17654c) {
            ctx->pc = 0x176558u;
            return;
        }
    }
    ctx->pc = 0x176554u;
    // 0x176554: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x176554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    ctx->pc = 0x176558u;
}

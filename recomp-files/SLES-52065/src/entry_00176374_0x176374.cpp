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

// Function: entry_00176374
// Address: 0x176374 - 0x1763d8
void entry_00176374_0x176374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176374_0x176374");
#endif

    ctx->pc = 0x176374u;

    // 0x176374: 0x0  nop
    ctx->pc = 0x176374u;
    // NOP
    // 0x176378: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x176378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17637c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x17637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176380: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x176380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176384: 0x0  nop
    ctx->pc = 0x176384u;
    // NOP
    // 0x176388: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x176388u;
    {
        const bool branch_taken_0x176388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176388) {
            ctx->pc = 0x1763D8u;
            return;
        }
    }
    ctx->pc = 0x176390u;
    // 0x176390: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x176390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176394: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x176394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176398: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x176398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x17639c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17639cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1763a0: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x1763a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1763a4: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x1763a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1763a8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1763a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1763ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1763acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1763b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1763b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1763b4: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x1763b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1763b8: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1763b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1763bc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1763bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1763c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1763c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1763c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1763c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1763c8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x1763c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1763cc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1763ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1763d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1763d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1763d4: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x1763d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    ctx->pc = 0x1763d8u;
}

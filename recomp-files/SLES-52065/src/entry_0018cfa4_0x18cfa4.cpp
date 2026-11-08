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

// Function: entry_0018cfa4
// Address: 0x18cfa4 - 0x18cffc
void entry_0018cfa4_0x18cfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cfa4_0x18cfa4");
#endif

    ctx->pc = 0x18cfa4u;

    // 0x18cfa4: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfa8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x18cfac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cfb0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18cfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18cfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18cfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cfbc: 0x0  nop
    ctx->pc = 0x18cfbcu;
    // NOP
    // 0x18cfc0: 0xe64104a0  swc1        $f1, 0x4A0($s2)
    ctx->pc = 0x18cfc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
    // 0x18cfc4: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfc8: 0xe64104a4  swc1        $f1, 0x4A4($s2)
    ctx->pc = 0x18cfc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
    // 0x18cfcc: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfd0: 0xe64104a8  swc1        $f1, 0x4A8($s2)
    ctx->pc = 0x18cfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1192), bits); }
    // 0x18cfd4: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfd8: 0xe64104bc  swc1        $f1, 0x4BC($s2)
    ctx->pc = 0x18cfd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1212), bits); }
    // 0x18cfdc: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfe0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18cfe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18cfe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18cfe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18cfe8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18cfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cfec: 0x0  nop
    ctx->pc = 0x18cfecu;
    // NOP
    // 0x18cff0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CFF0u;
    {
        const bool branch_taken_0x18cff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cff0) {
            ctx->pc = 0x18CFFCu;
            return;
        }
    }
    ctx->pc = 0x18CFF8u;
    // 0x18cff8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x18cff8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    ctx->pc = 0x18cffcu;
}

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

// Function: entry_0013e97c
// Address: 0x13e97c - 0x13e9d0
void entry_0013e97c_0x13e97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e97c_0x13e97c");
#endif

    ctx->pc = 0x13e97cu;

    // 0x13e97c: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x13e980: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13e984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13e984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e988: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x13e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e98c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13e98cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e990: 0x0  nop
    ctx->pc = 0x13e990u;
    // NOP
    // 0x13e994: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x13E994u;
    {
        const bool branch_taken_0x13e994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e994) {
            ctx->pc = 0x13E9D0u;
            return;
        }
    }
    ctx->pc = 0x13E99Cu;
    // 0x13e99c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x13e99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e9a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13e9a4: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x13e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x13e9a8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x13e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x13e9ac: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x13e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e9b0: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x13e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e9b8: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x13e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x13e9bc: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x13e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x13e9c0: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x13e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e9c4: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x13e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e9cc: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x13e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    ctx->pc = 0x13e9d0u;
}

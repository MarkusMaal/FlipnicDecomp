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

// Function: entry_0012d1f0
// Address: 0x12d1f0 - 0x12d22c
void entry_0012d1f0_0x12d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d1f0_0x12d1f0");
#endif

    ctx->pc = 0x12d1f0u;

    // 0x12d1f0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x12d1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d1f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x12d1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x12d1f8: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x12d1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x12d1fc: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x12d1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x12d200: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x12d200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x12d204: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x12d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d208: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x12d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d20c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x12d20cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x12d210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d214: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x12d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x12d218: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x12d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d21c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x12d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d224: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x12d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x12d228: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x12d228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12d22cu;
}

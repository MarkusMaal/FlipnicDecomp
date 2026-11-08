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

// Function: entry_0015c940
// Address: 0x15c940 - 0x15c990
void entry_0015c940_0x15c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c940_0x15c940");
#endif

    ctx->pc = 0x15c940u;

    // 0x15c940: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C940u;
    {
        const bool branch_taken_0x15c940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c940) {
            ctx->pc = 0x15C990u;
            return;
        }
    }
    ctx->pc = 0x15C948u;
    // 0x15c948: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x15c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c94c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x15c94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c950: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c954: 0x0  nop
    ctx->pc = 0x15c954u;
    // NOP
    // 0x15c958: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15C958u;
    {
        const bool branch_taken_0x15c958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c958) {
            ctx->pc = 0x15C990u;
            return;
        }
    }
    ctx->pc = 0x15C960u;
    // 0x15c960: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x15c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c964: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x15c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c968: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c96c: 0x0  nop
    ctx->pc = 0x15c96cu;
    // NOP
    // 0x15c970: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15C970u;
    {
        const bool branch_taken_0x15c970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c970) {
            ctx->pc = 0x15C990u;
            return;
        }
    }
    ctx->pc = 0x15C978u;
    // 0x15c978: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x15c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c97c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x15c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c980: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c984: 0x0  nop
    ctx->pc = 0x15c984u;
    // NOP
    // 0x15c988: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15C988u;
    {
        const bool branch_taken_0x15c988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c988) {
            ctx->pc = 0x15C9ACu;
            return;
        }
    }
    ctx->pc = 0x15C990u;
}

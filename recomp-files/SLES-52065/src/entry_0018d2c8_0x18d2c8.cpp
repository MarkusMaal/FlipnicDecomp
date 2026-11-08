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

// Function: entry_0018d2c8
// Address: 0x18d2c8 - 0x18d300
void entry_0018d2c8_0x18d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2c8_0x18d2c8");
#endif

    ctx->pc = 0x18d2c8u;

    // 0x18d2c8: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d2cc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x18d2d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d2d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18d2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18d2d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d2e0: 0x0  nop
    ctx->pc = 0x18d2e0u;
    // NOP
    // 0x18d2e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18d2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18d2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18d2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18d2ec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18d2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2f0: 0x0  nop
    ctx->pc = 0x18d2f0u;
    // NOP
    // 0x18d2f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D2F4u;
    {
        const bool branch_taken_0x18d2f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d2f4) {
            ctx->pc = 0x18D300u;
            return;
        }
    }
    ctx->pc = 0x18D2FCu;
    // 0x18d2fc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x18d2fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    ctx->pc = 0x18d300u;
}

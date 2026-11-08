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

// Function: entry_001b9420
// Address: 0x1b9420 - 0x1b947c
void entry_001b9420_0x1b9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9420_0x1b9420");
#endif

    ctx->pc = 0x1b9420u;

    // 0x1b9420: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b9420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9424: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9428: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b942c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b9430: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b9430u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9434: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9438: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x1b9438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b943c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b943cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1b9440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b9440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b9444: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1b9444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1b9448: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b944c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9450: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b9450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b9454: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1b9454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b9458: 0x8c23f450  lw          $v1, -0xBB0($at)
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F450u));
    // 0x1b945c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b945cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b9460: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B9460u;
    {
        const bool branch_taken_0x1b9460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9460) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B9468u;
    // 0x1b9468: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1b9468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1b946c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b9470: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x1b9470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9474: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B9474u;
    {
        const bool branch_taken_0x1b9474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9474) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B947Cu;
}

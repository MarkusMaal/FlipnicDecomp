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

// Function: entry_001b936c
// Address: 0x1b936c - 0x1b93cc
void entry_001b936c_0x1b936c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b936c_0x1b936c");
#endif

    ctx->pc = 0x1b936cu;

    // 0x1b936c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9370: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9374: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b9374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9378: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b937c: 0xc60200c8  lwc1        $f2, 0xC8($s0)
    ctx->pc = 0x1b937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9380: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b9380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9384: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1b9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9388: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1b9388u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b938c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b938cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9390: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b9390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b9394: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1b9394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1b9398: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b939c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b93a0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b93a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b93a4: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1b93a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b93a8: 0x8c23f450  lw          $v1, -0xBB0($at)
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F450u));
    // 0x1b93ac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b93acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b93b0: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1B93B0u;
    {
        const bool branch_taken_0x1b93b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b93b0) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B93B8u;
    // 0x1b93b8: 0xe60300dc  swc1        $f3, 0xDC($s0)
    ctx->pc = 0x1b93b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x1b93bc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b93c0: 0xa20000c3  sb          $zero, 0xC3($s0)
    ctx->pc = 0x1b93c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 195), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b93c4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1B93C4u;
    {
        const bool branch_taken_0x1b93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93c4) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B93CCu;
}

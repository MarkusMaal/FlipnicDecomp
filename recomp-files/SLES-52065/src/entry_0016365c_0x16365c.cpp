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

// Function: entry_0016365c
// Address: 0x16365c - 0x1636ac
void entry_0016365c_0x16365c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016365c_0x16365c");
#endif

    ctx->pc = 0x16365cu;

    // 0x16365c: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16365Cu;
    {
        const bool branch_taken_0x16365c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16365c) {
            ctx->pc = 0x1636ACu;
            return;
        }
    }
    ctx->pc = 0x163664u;
    // 0x163664: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x163668: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x16366c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16366Cu;
    {
        const bool branch_taken_0x16366c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16366c) {
            ctx->pc = 0x1636ACu;
            return;
        }
    }
    ctx->pc = 0x163674u;
    // 0x163674: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x163674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163678: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16367c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163680: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x163680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x163684: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x163684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x163688: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16368c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16368cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x163690: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x163690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x163694: 0xc601026c  lwc1        $f1, 0x26C($s0)
    ctx->pc = 0x163694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163698: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x163698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16369c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16369cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1636a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1636a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1636a4: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x1636a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1636a8: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1636a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    ctx->pc = 0x1636acu;
}

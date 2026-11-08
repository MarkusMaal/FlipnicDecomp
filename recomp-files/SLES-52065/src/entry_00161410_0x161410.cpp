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

// Function: entry_00161410
// Address: 0x161410 - 0x161448
void entry_00161410_0x161410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161410_0x161410");
#endif

    ctx->pc = 0x161410u;

    // 0x161410: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161414: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161418: 0x244215f4  addiu       $v0, $v0, 0x15F4
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5620));
    // 0x16141c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161428: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x161428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16142c: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x16142cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x161430: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161434: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x161438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16143c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161440: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x161440u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x161444: 0x4600085c  madd.s      $f1, $f1, $f0
    ctx->pc = 0x161444u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x161448u;
}

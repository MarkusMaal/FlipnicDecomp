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

// Function: entry_0016137c
// Address: 0x16137c - 0x1613b4
void entry_0016137c_0x16137c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016137c_0x16137c");
#endif

    ctx->pc = 0x16137cu;

    // 0x16137c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161380: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x161380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161384: 0x244215c4  addiu       $v0, $v0, 0x15C4
    ctx->pc = 0x161384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5572));
    // 0x161388: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16138c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161394: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x161394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161398: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x161398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16139c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1613a0: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
    // 0x1613a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1613a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1613a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613ac: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1613acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1613b0: 0x4600085c  madd.s      $f1, $f1, $f0
    ctx->pc = 0x1613b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x1613b4u;
}

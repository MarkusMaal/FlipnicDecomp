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

// Function: entry_001611e0
// Address: 0x1611e0 - 0x161218
void entry_001611e0_0x1611e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001611e0_0x1611e0");
#endif

    ctx->pc = 0x1611e0u;

    // 0x1611e0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1611e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1611e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1611e8: 0x244215c4  addiu       $v0, $v0, 0x15C4
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5572));
    // 0x1611ec: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1611f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1611f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1611f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1611f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1611f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1611fc: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x1611fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x161200: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161204: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
    // 0x161208: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16120c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161210: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x161210u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x161214: 0x46000b1c  madd.s      $f12, $f1, $f0
    ctx->pc = 0x161214u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x161218u;
}

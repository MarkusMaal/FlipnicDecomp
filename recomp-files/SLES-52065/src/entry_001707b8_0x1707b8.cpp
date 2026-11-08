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

// Function: entry_001707b8
// Address: 0x1707b8 - 0x1707f0
void entry_001707b8_0x1707b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001707b8_0x1707b8");
#endif

    ctx->pc = 0x1707b8u;

    // 0x1707b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1707bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1707c0: 0x2442f494  addiu       $v0, $v0, -0xB6C
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964372));
    // 0x1707c4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1707c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1707c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1707cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1707ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1707d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1707d4: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x1707d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1707d8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1707dc: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x1707dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x1707e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1707e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1707e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1707e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1707e8: 0x4602201a  mula.s      $f4, $f2
    ctx->pc = 0x1707e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x1707ec: 0x4600091c  madd.s      $f4, $f1, $f0
    ctx->pc = 0x1707ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x1707f0u;
}

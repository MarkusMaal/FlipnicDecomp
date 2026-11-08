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

// Function: entry_001520e8
// Address: 0x1520e8 - 0x15210c
void entry_001520e8_0x1520e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001520e8_0x1520e8");
#endif

    ctx->pc = 0x1520e8u;

    // 0x1520e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1520ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1520f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1520f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1520f4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1520f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1520f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1520f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1520fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1520fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152100: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x152100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x152104: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x152104u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x152108: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x152108u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x15210cu;
}

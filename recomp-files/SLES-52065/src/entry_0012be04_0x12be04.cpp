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

// Function: entry_0012be04
// Address: 0x12be04 - 0x12be20
void entry_0012be04_0x12be04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be04_0x12be04");
#endif

    ctx->pc = 0x12be04u;

    // 0x12be04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12be04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12be08: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x12be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12be0c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x12be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12be10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12be14: 0x46071881  sub.s       $f2, $f3, $f7
    ctx->pc = 0x12be14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x12be18: 0x4604381a  mula.s      $f7, $f4
    ctx->pc = 0x12be18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x12be1c: 0x4601109c  madd.s      $f2, $f2, $f1
    ctx->pc = 0x12be1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    ctx->pc = 0x12be20u;
}

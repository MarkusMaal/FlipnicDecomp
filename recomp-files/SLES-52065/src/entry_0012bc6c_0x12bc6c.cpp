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

// Function: entry_0012bc6c
// Address: 0x12bc6c - 0x12bc8c
void entry_0012bc6c_0x12bc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc6c_0x12bc6c");
#endif

    ctx->pc = 0x12bc6cu;

    // 0x12bc6c: 0x0  nop
    ctx->pc = 0x12bc6cu;
    // NOP
    // 0x12bc70: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x12bc74: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x12bc78: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x12bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12bc7c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bc80: 0x46071041  sub.s       $f1, $f2, $f7
    ctx->pc = 0x12bc80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x12bc84: 0x4603381a  mula.s      $f7, $f3
    ctx->pc = 0x12bc84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x12bc88: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x12bc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x12bc8cu;
}

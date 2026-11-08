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

// Function: entry_00170a64
// Address: 0x170a64 - 0x170a9c
void entry_00170a64_0x170a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a64_0x170a64");
#endif

    ctx->pc = 0x170a64u;

    // 0x170a64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170a68: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x170a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170a6c: 0x2442f494  addiu       $v0, $v0, -0xB6C
    ctx->pc = 0x170a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964372));
    // 0x170a70: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x170a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170a74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a7c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x170a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170a80: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x170a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x170a84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170a88: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x170a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x170a8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170a90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x170a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170a94: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x170a94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x170a98: 0x4600085c  madd.s      $f1, $f1, $f0
    ctx->pc = 0x170a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x170a9cu;
}

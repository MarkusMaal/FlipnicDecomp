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

// Function: entry_00170874
// Address: 0x170874 - 0x1708ac
void entry_00170874_0x170874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170874_0x170874");
#endif

    ctx->pc = 0x170874u;

    // 0x170874: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170878: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17087c: 0x2442f494  addiu       $v0, $v0, -0xB6C
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964372));
    // 0x170880: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17088c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170890: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x170890u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x170894: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170898: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x17089c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1708a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1708a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708a4: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1708a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1708a8: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x1708a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    ctx->pc = 0x1708acu;
}

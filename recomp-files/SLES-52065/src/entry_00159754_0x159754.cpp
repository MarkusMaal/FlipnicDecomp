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

// Function: entry_00159754
// Address: 0x159754 - 0x1597bc
void entry_00159754_0x159754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159754_0x159754");
#endif

    ctx->pc = 0x159754u;

    // 0x159754: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x159754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x159758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x159758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15975c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159760: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x159760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x159764: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159768: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15976c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15976cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x159770: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x159770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159774: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x159774u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x159778: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x159778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15977c: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x15977cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x159780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x159780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159784: 0x0  nop
    ctx->pc = 0x159784u;
    // NOP
    // 0x159788: 0x460310c1  sub.s       $f3, $f2, $f3
    ctx->pc = 0x159788u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15978c: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x15978cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x159790: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x159790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x159794: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x159794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159798: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x159798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15979c: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x15979cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1597a0: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x1597a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1597a4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1597a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1597a8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1597a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1597ac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1597acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1597b0: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x1597b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1597b4: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x1597b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1597b8: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1597b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    ctx->pc = 0x1597bcu;
}

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

// Function: entry_00157474
// Address: 0x157474 - 0x1574f4
void entry_00157474_0x157474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157474_0x157474");
#endif

    ctx->pc = 0x157474u;

    // 0x157474: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15747c: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x15747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157480: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x157480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157484: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x157484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157488: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x157488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15748c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157490: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x157490u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x157494: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x157494u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x157498: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x157498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15749c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15749cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1574a0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1574a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1574a4: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x1574a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1574a8: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x1574a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1574ac: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x1574acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1574b0: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1574b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1574b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1574b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1574b8: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1574b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1574bc: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x1574bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1574c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1574c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1574c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1574c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1574c8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1574c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1574cc: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x1574ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1574d0: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x1574d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1574d4: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x1574d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1574d8: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1574d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1574dc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1574dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1574e0: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1574e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1574e4: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x1574e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1574e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1574e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1574ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1574ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1574f0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1574f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->pc = 0x1574f4u;
}

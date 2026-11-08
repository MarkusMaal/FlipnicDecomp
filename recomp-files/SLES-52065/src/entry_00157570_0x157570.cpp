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

// Function: entry_00157570
// Address: 0x157570 - 0x1575e4
void entry_00157570_0x157570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157570_0x157570");
#endif

    ctx->pc = 0x157570u;

    // 0x157570: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157578: 0xc4450280  lwc1        $f5, 0x280($v0)
    ctx->pc = 0x157578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15757c: 0xc4440284  lwc1        $f4, 0x284($v0)
    ctx->pc = 0x15757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157580: 0xc4430270  lwc1        $f3, 0x270($v0)
    ctx->pc = 0x157580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157584: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x157584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157588: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x157588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15758c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157590: 0x4606281a  mula.s      $f5, $f6
    ctx->pc = 0x157590u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x157594: 0x4607211c  madd.s      $f4, $f4, $f7
    ctx->pc = 0x157594u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x157598: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x157598u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x15759c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x15759cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1575a0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1575a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1575a4: 0xc4440280  lwc1        $f4, 0x280($v0)
    ctx->pc = 0x1575a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1575a8: 0xc4430284  lwc1        $f3, 0x284($v0)
    ctx->pc = 0x1575a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1575ac: 0xc4420274  lwc1        $f2, 0x274($v0)
    ctx->pc = 0x1575acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1575b0: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x1575b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x1575b4: 0x460718dc  madd.s      $f3, $f3, $f7
    ctx->pc = 0x1575b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x1575b8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1575b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1575bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1575bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1575c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1575c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1575c4: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x1575c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1575c8: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x1575c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1575cc: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1575ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1575d0: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x1575d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x1575d4: 0x4607109c  madd.s      $f2, $f2, $f7
    ctx->pc = 0x1575d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1575d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1575d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1575dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1575dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1575e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1575e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x1575e4u;
}

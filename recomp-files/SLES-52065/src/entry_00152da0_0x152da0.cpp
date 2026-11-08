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

// Function: entry_00152da0
// Address: 0x152da0 - 0x152e4c
void entry_00152da0_0x152da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152da0_0x152da0");
#endif

    ctx->pc = 0x152da0u;

    // 0x152da0: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152da4: 0x3c033f83  lui         $v1, 0x3F83
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16259 << 16));
    // 0x152da8: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x152da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152dac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x152dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x152db0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152db4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x152db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152db8: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x152db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152dbc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x152dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152dc0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x152dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x152dc4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152dc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152dc8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152dcc: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152dccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152dd0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152dd4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152dd4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152dd8: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152ddc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x152ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x152de0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x152de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152de4: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152de8: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x152de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152dec: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152df0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x152df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152df4: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x152df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152df8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152dfc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152dfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152e00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152e04: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152e04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152e08: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152e08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152e0c: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152e10: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x152e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x152e14: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x152e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e18: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152e1c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x152e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152e20: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152e24: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x152e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e28: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x152e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152e2c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152e30: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152e34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152e38: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152e38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152e3c: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152e3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152e40: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152e44: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x152E44u;
    {
        const bool branch_taken_0x152e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E44u;
        // 0x152e48: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e44) {
            ctx->pc = 0x152F14u;
            return;
        }
    }
    ctx->pc = 0x152E4Cu;
}

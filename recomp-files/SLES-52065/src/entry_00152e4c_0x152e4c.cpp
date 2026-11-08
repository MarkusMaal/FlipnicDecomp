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

// Function: entry_00152e4c
// Address: 0x152e4c - 0x152f14
void entry_00152e4c_0x152e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e4c_0x152e4c");
#endif

    ctx->pc = 0x152e4cu;

    // 0x152e4c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x152e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152e54: 0x0  nop
    ctx->pc = 0x152e54u;
    // NOP
    // 0x152e58: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x152e58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x152e5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x152e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152e60: 0x0  nop
    ctx->pc = 0x152e60u;
    // NOP
    // 0x152e64: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x152E64u;
    {
        const bool branch_taken_0x152e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152e64) {
            ctx->pc = 0x152F14u;
            return;
        }
    }
    ctx->pc = 0x152E6Cu;
    // 0x152e6c: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152e70: 0x3c033f83  lui         $v1, 0x3F83
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16259 << 16));
    // 0x152e74: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x152e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152e78: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x152e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x152e7c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152e80: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x152e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e84: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x152e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152e88: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x152e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x152e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x152e90: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152e90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152e94: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152e98: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152e98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152e9c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152ea0: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152ea0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152ea4: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152ea8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x152ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x152eac: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x152eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152eb0: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152eb4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x152eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152eb8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152ebc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x152ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152ec0: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x152ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152ec4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152ec8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152ec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152ecc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152ed0: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152ed0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152ed4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152ed4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152ed8: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152edc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x152edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x152ee0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x152ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152ee4: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152ee8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x152ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152eec: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152ef0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x152ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152ef4: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x152ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152ef8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152efc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152efcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152f00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152f00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152f04: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152f04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152f08: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152f08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152f0c: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152f10: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x152f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->pc = 0x152f14u;
}

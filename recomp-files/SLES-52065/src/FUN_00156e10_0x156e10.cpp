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

// Function: FUN_00156e10
// Address: 0x156e10 - 0x156fac
void FUN_00156e10_0x156e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00156e10_0x156e10");
#endif

    switch (ctx->pc) {
        case 0x156f8cu: goto label_156f8c;
        default: break;
    }

    ctx->pc = 0x156e10u;

    // 0x156e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156e14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x156e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x156e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156e1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x156e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x156e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156e28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e2c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x156e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156e30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e34: 0xc4800334  lwc1        $f0, 0x334($a0)
    ctx->pc = 0x156e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156e38: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x156e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156e3c: 0x0  nop
    ctx->pc = 0x156e3cu;
    // NOP
    // 0x156e40: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x156E40u;
    {
        const bool branch_taken_0x156e40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E40u;
        // 0x156e44: 0x46016b42  mul.s       $f13, $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e40) {
            ctx->pc = 0x156F98u;
            goto label_156f98;
        }
    }
    ctx->pc = 0x156E48u;
    // 0x156e48: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x156e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156e4c: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x156e4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x156e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e54: 0x0  nop
    ctx->pc = 0x156e54u;
    // NOP
    // 0x156e58: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x156e58u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x156e5c: 0x0  nop
    ctx->pc = 0x156e5cu;
    // NOP
    // 0x156e60: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x156e60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156e64: 0x0  nop
    ctx->pc = 0x156e64u;
    // NOP
    // 0x156e68: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x156E68u;
    {
        const bool branch_taken_0x156e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E68u;
        // 0x156e6c: 0xae200280  sw          $zero, 0x280($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e68) {
            ctx->pc = 0x156E7Cu;
            goto label_156e7c;
        }
    }
    ctx->pc = 0x156E70u;
    // 0x156e70: 0x460c1002  mul.s       $f0, $f2, $f12
    ctx->pc = 0x156e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x156e74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x156E74u;
    {
        const bool branch_taken_0x156e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E74u;
        // 0x156e78: 0xe62002a0  swc1        $f0, 0x2A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e74) {
            ctx->pc = 0x156F10u;
            goto label_156f10;
        }
    }
    ctx->pc = 0x156E7Cu;
label_156e7c:
    // 0x156e7c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x156e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156e80: 0x26230290  addiu       $v1, $s1, 0x290
    ctx->pc = 0x156e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x156e84: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x156e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156e88: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x156e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156e8c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x156e8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x156e90: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x156e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x156e94: 0xe6200290  swc1        $f0, 0x290($s1)
    ctx->pc = 0x156e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 656), bits); }
    // 0x156e98: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x156e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156e9c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x156e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156ea0: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x156ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156ea4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x156ea4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x156ea8: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x156ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x156eac: 0xe6200294  swc1        $f0, 0x294($s1)
    ctx->pc = 0x156eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 660), bits); }
    // 0x156eb0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x156eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156eb4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x156eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156eb8: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x156eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156ebc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x156ebcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x156ec0: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x156ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x156ec4: 0xe6200298  swc1        $f0, 0x298($s1)
    ctx->pc = 0x156ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 664), bits); }
    // 0x156ec8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156ec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156ecc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x156eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ed0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ed4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ed8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x156ed8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x156edc: 0x4a0003bf  vwaitq
    ctx->pc = 0x156edcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156ee0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x156ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ee4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156ee4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156eec: 0xae2202a0  sw          $v0, 0x2A0($s1)
    ctx->pc = 0x156eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
    // 0x156ef0: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156ef4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x156ef4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x156ef8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156efc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x156efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156f00: 0x0  nop
    ctx->pc = 0x156f00u;
    // NOP
    // 0x156f04: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156f04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156f08: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x156f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156f0c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x156f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_156f10:
    // 0x156f10: 0xc6230334  lwc1        $f3, 0x334($s1)
    ctx->pc = 0x156f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156f18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156f1c: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x156f20: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x156f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f24: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x156f28: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x156f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x156f2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f30: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x156f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x156f34: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x156f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x156f38: 0xe6200334  swc1        $f0, 0x334($s1)
    ctx->pc = 0x156f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
    // 0x156f3c: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156f44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156f48: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x156f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156f4c: 0x0  nop
    ctx->pc = 0x156f4cu;
    // NOP
    // 0x156f50: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156f50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156f54: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x156f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156f58: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x156f58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f60: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x156f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156f64: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x156f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156f6c: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x156f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x156f70: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x156f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156f74: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f78: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x156f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x156f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f80: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x156f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x156f84: 0xc055cf4  jal         func_1573D0
    ctx->pc = 0x156F84u;
    SET_GPR_U32(ctx, 31, 0x156F8Cu);
    ctx->pc = 0x156F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F84u;
    // 0x156f88: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573D0u, 0x156F84u, 0x156F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F8Cu;
label_156f8c:
    // 0x156f8c: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x156f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x156f90: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x156f90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156f94: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x156f94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
label_156f98:
    // 0x156f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156f9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x156FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA4u;
        // 0x156fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156FACu;
}

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

// Function: entry_00166d98
// Address: 0x166d98 - 0x166ea8
void entry_00166d98_0x166d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166d98_0x166d98");
#endif

    ctx->pc = 0x166d98u;

    // 0x166d98: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x166d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x166d9c: 0x0  nop
    ctx->pc = 0x166d9cu;
    // NOP
    // 0x166da0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x166da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166da4: 0x0  nop
    ctx->pc = 0x166da4u;
    // NOP
    // 0x166da8: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x166DA8u;
    {
        const bool branch_taken_0x166da8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA8u;
        // 0x166dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166da8) {
            ctx->pc = 0x166F60u;
            return;
        }
    }
    ctx->pc = 0x166DB0u;
    // 0x166db0: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166db4: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x166db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x166db8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166dbc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x166dbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166dc0: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dc4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dc8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166dc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dcc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166dccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166dd4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x166dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dd8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166ddc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166de0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166de0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166de4: 0x4a0003bf  vwaitq
    ctx->pc = 0x166de4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166de8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166dec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166decu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166df0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166df4: 0x0  nop
    ctx->pc = 0x166df4u;
    // NOP
    // 0x166df8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x166df8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x166dfc: 0x0  nop
    ctx->pc = 0x166dfcu;
    // NOP
    // 0x166e00: 0x0  nop
    ctx->pc = 0x166e00u;
    // NOP
    // 0x166e04: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x166e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166e08: 0x0  nop
    ctx->pc = 0x166e08u;
    // NOP
    // 0x166e0c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x166E0Cu;
    {
        const bool branch_taken_0x166e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166e0c) {
            ctx->pc = 0x166EA8u;
            return;
        }
    }
    ctx->pc = 0x166E14u;
    // 0x166e14: 0xc6030320  lwc1        $f3, 0x320($s0)
    ctx->pc = 0x166e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166e18: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x166e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x166e1c: 0xc6020310  lwc1        $f2, 0x310($s0)
    ctx->pc = 0x166e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166e20: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x166e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166e24: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x166e24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x166e28: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x166e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x166e2c: 0xe6010290  swc1        $f1, 0x290($s0)
    ctx->pc = 0x166e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x166e30: 0xc6030324  lwc1        $f3, 0x324($s0)
    ctx->pc = 0x166e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166e34: 0xc6020314  lwc1        $f2, 0x314($s0)
    ctx->pc = 0x166e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166e38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x166e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166e3c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x166e3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x166e40: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x166e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x166e44: 0xe6010294  swc1        $f1, 0x294($s0)
    ctx->pc = 0x166e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x166e48: 0xc6030328  lwc1        $f3, 0x328($s0)
    ctx->pc = 0x166e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166e4c: 0xc6020318  lwc1        $f2, 0x318($s0)
    ctx->pc = 0x166e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166e50: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x166e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166e54: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x166e54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x166e58: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x166e58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x166e5c: 0xe6010298  swc1        $f1, 0x298($s0)
    ctx->pc = 0x166e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x166e60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166e60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166e64: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x166e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e68: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e6c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e70: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166e70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166e74: 0x4a0003bf  vwaitq
    ctx->pc = 0x166e74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166e78: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166e7c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x166e7cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x166e80: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x166e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166e84: 0x4a0003bf  vwaitq
    ctx->pc = 0x166e84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166e88: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x166e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166e8c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x166e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166e90: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166e90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166e94: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x166e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x166e98: 0x0  nop
    ctx->pc = 0x166e98u;
    // NOP
    // 0x166e9c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166e9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166ea0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166ea4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x166ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x166ea8u;
}

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

// Function: FUN_0015a990
// Address: 0x15a990 - 0x15abb0
void FUN_0015a990_0x15a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a990_0x15a990");
#endif

    switch (ctx->pc) {
        case 0x15ab84u: goto label_15ab84;
        case 0x15ab9cu: goto label_15ab9c;
        default: break;
    }

    ctx->pc = 0x15a990u;

    // 0x15a990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a994: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15a994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a99c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15a9a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15a9a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15a9a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9a8: 0x8ca2033c  lw          $v0, 0x33C($a1)
    ctx->pc = 0x15a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 828)));
    // 0x15a9ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a9acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15a9b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x15a9b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15a9bc: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x15a9bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15a9c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15a9c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a9c4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x15a9c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a9c8: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x15a9c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a9cc: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x15a9ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15a9d0: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x15a9d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x15a9d4: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x15a9d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15a9d8: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15a9d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15a9dc: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x15a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15a9e0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15a9e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a9e4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15a9e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a9e8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15a9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a9ec: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15a9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a9f0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15a9f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15a9f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x15a9f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15a9f8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15a9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15a9fc: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x15a9fcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15aa00: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15aa00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aa04: 0x4a0003bf  vwaitq
    ctx->pc = 0x15aa04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15aa08: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15aa08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aa0c: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x15aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15aa10: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x15aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15aa14: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15aa14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15aa18: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15aa18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15aa1c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x15aa1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa20: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15aa20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa24: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15aa24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15aa28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15aa2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa30: 0x4be7233c  vmove.xyzw  $vf7, $vf4
    ctx->pc = 0x15aa30u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x15aa34: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x15aa34u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x15aa38: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15aa38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15aa3c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x15aa3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x15aa40: 0x0  nop
    ctx->pc = 0x15aa40u;
    // NOP
    // 0x15aa44: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15aa44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15aa48: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15aa48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aa4c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15aa4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa50: 0xf9250000  sqc2        $vf5, 0x0($t1)
    ctx->pc = 0x15aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15aa54: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x15aa54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15aa58: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15aa58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa5c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15aa5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa60: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15aa60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa64: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15aa64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15aa68: 0x4a0003bf  vwaitq
    ctx->pc = 0x15aa68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15aa6c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15aa6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aa70: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x15aa70u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15aa74: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15aa74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aa78: 0x4a0003bf  vwaitq
    ctx->pc = 0x15aa78u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15aa7c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15aa7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aa80: 0xf9260000  sqc2        $vf6, 0x0($t1)
    ctx->pc = 0x15aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15aa84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15aa88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa8c: 0x0  nop
    ctx->pc = 0x15aa8cu;
    // NOP
    // 0x15aa90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15aa90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15aa94: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x15aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x15aa98: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x15aa98u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15aa9c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15aa9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15aaa0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x15aaa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x15aaa4: 0x0  nop
    ctx->pc = 0x15aaa4u;
    // NOP
    // 0x15aaa8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15aaa8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15aaac: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15aaacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aab0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15aab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aab4: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15aab4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15aab8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15aab8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aabc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15aabcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aac0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15aac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aac4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15aac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aac8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15aac8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15aacc: 0x4a0003bf  vwaitq
    ctx->pc = 0x15aaccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15aad0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15aad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15aad4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x15aad4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15aad8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15aad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aadc: 0x4a0003bf  vwaitq
    ctx->pc = 0x15aadcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15aae0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15aae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15aae4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x15aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15aae8: 0x8ca801c0  lw          $t0, 0x1C0($a1)
    ctx->pc = 0x15aae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x15aaec: 0xd8e70000  lqc2        $vf7, 0x0($a3)
    ctx->pc = 0x15aaecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15aaf0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15aaf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15aaf4: 0x0  nop
    ctx->pc = 0x15aaf4u;
    // NOP
    // 0x15aaf8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15aaf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15aafc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15aafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15ab00: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15ab00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ab04: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15ab08: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x15ab08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15ab0c: 0x7ca60290  sq          $a2, 0x290($a1)
    ctx->pc = 0x15ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 656), GPR_VEC(ctx, 6));
    // 0x15ab10: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15ab10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ab14: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x15ab14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15ab18: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x15ab18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ab1c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15ab1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ab20: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15ab20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15ab24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15ab24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15ab28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15ab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15ab2c: 0xc4a102f0  lwc1        $f1, 0x2F0($a1)
    ctx->pc = 0x15ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab30: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x15ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x15ab34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15ab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15ab38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ab38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ab3c: 0x0  nop
    ctx->pc = 0x15ab3cu;
    // NOP
    // 0x15ab40: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x15ab40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x15ab44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15ab44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ab48: 0x0  nop
    ctx->pc = 0x15ab48u;
    // NOP
    // 0x15ab4c: 0x0  nop
    ctx->pc = 0x15ab4cu;
    // NOP
    // 0x15ab50: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x15AB50u;
    {
        const bool branch_taken_0x15ab50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ab50) {
            ctx->pc = 0x15AB84u;
            goto label_15ab84;
        }
    }
    ctx->pc = 0x15AB58u;
    // 0x15ab58: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x15ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x15ab5c: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x15ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15ab60: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15ab64: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15ab64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ab68: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x15ab68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x15ab6c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x15ab6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ab70: 0x9068000e  lbu         $t0, 0xE($v1)
    ctx->pc = 0x15ab70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x15ab74: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x15ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x15ab78: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x15ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15ab7c: 0xc0425d4  jal         func_109750
    ctx->pc = 0x15AB7Cu;
    SET_GPR_U32(ctx, 31, 0x15AB84u);
    ctx->pc = 0x15AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB7Cu;
    // 0x15ab80: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x15AB7Cu, 0x15AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB84u;
label_15ab84:
    // 0x15ab84: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15ab84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ab88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ab8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15ab90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab94: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x15AB94u;
    SET_GPR_U32(ctx, 31, 0x15AB9Cu);
    ctx->pc = 0x15AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB94u;
    // 0x15ab98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x15AB94u, 0x15AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB9Cu;
label_15ab9c:
    // 0x15ab9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ab9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aba0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15aba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABA8u;
        // 0x15abac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABB0u;
}

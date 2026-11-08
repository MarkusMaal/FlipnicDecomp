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

// Function: entry_00171a38
// Address: 0x171a38 - 0x171ad0
void entry_00171a38_0x171a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a38_0x171a38");
#endif

    ctx->pc = 0x171a38u;

    // 0x171a38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x171a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x171a3c: 0x25440007  addiu       $a0, $t2, 0x7
    ctx->pc = 0x171a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x171a40: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x171a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x171a44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x171a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x171a48: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x171a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x171a4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171a50: 0x782516c0  lq          $a1, 0x16C0($at)
    ctx->pc = 0x171a50u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2116C0u));
    // 0x171a54: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171a58: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171a5c: 0x70044588  pextlh      $t0, $zero, $a0
    ctx->pc = 0x171a5cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x171a60: 0x71054709  pmulth      $t0, $t0, $a1
    ctx->pc = 0x171a60u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x171a64: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x171a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x171a68: 0x4be1093e  vitof12.xyzw $vf1, $vf1
    ctx->pc = 0x171a68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171a6c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x171a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171a70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171a74: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x171a74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171a78: 0x70024588  pextlh      $t0, $zero, $v0
    ctx->pc = 0x171a78u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x171a7c: 0x71054709  pmulth      $t0, $t0, $a1
    ctx->pc = 0x171a7cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x171a80: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x171a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x171a84: 0x4be1093e  vitof12.xyzw $vf1, $vf1
    ctx->pc = 0x171a84u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171a88: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x171a88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171a8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171a8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171a90: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x171a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171a94: 0x4be4296a  vmul.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x171a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171a98: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171a98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171a9c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171aa0: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171aa4: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x171aa4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x171aa8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x171aa8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171ab0: 0x0  nop
    ctx->pc = 0x171ab0u;
    // NOP
    // 0x171ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171ab8: 0x0  nop
    ctx->pc = 0x171ab8u;
    // NOP
    // 0x171abc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171ABCu;
    {
        const bool branch_taken_0x171abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171abc) {
            ctx->pc = 0x171AD0u;
            return;
        }
    }
    ctx->pc = 0x171AC4u;
    // 0x171ac4: 0x4be1086c  vsub.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x171ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171ac8: 0x4be4092c  vsub.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x171ac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171acc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171accu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x171ad0u;
}

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

// Function: entry_001094dc
// Address: 0x1094dc - 0x10957c
void entry_001094dc_0x1094dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001094dc_0x1094dc");
#endif

    ctx->pc = 0x1094dcu;

    // 0x1094dc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1094dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1094e0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1094e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1094e4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1094e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1094e8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1094e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1094ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1094ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1094f0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1094f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1094f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1094f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1094f8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1094f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1094fc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1094fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109500: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x109500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109504: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x109504u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x109508: 0x4a0003bf  vwaitq
    ctx->pc = 0x109508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10950c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10950cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109510: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x109510u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x109514: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x109514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109518: 0x4a0003bf  vwaitq
    ctx->pc = 0x109518u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10951c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x10951cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109520: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x109520u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109524: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x109524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x109528: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x109528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x10952c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10952cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109530: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x109530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x367510u));
    // 0x109534: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x109534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109538: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x109538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10953c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10953cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109540: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x109540u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x109544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109548: 0x3c033f61  lui         $v1, 0x3F61
    ctx->pc = 0x109548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16225 << 16));
    // 0x10954c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x10954cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x109550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109554: 0x0  nop
    ctx->pc = 0x109554u;
    // NOP
    // 0x109558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x109558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10955c: 0x0  nop
    ctx->pc = 0x10955cu;
    // NOP
    // 0x109560: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x109560u;
    {
        const bool branch_taken_0x109560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109560) {
            ctx->pc = 0x1095A8u;
            return;
        }
    }
    ctx->pc = 0x109568u;
    // 0x109568: 0x8e032cd0  lw          $v1, 0x2CD0($s0)
    ctx->pc = 0x109568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x10956c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10956Cu;
    {
        const bool branch_taken_0x10956c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10956Cu;
        // 0x109570: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10956c) {
            ctx->pc = 0x10957Cu;
            return;
        }
    }
    ctx->pc = 0x109574u;
    // 0x109574: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109574u;
    {
        const bool branch_taken_0x109574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109574u;
        // 0x109578: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109574) {
            ctx->pc = 0x109594u;
            return;
        }
    }
    ctx->pc = 0x10957Cu;
}

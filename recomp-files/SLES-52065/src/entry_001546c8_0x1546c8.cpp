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

// Function: entry_001546c8
// Address: 0x1546c8 - 0x154770
void entry_001546c8_0x1546c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001546c8_0x1546c8");
#endif

    ctx->pc = 0x1546c8u;

    // 0x1546c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1546c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1546cc: 0x0  nop
    ctx->pc = 0x1546ccu;
    // NOP
    // 0x1546d0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1546d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1546d4: 0x0  nop
    ctx->pc = 0x1546d4u;
    // NOP
    // 0x1546d8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1546D8u;
    {
        const bool branch_taken_0x1546d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1546DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546D8u;
        // 0x1546dc: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546d8) {
            ctx->pc = 0x1547D0u;
            return;
        }
    }
    ctx->pc = 0x1546E0u;
    // 0x1546e0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1546e4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1546e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1546e8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1546e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1546ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1546ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1546f0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1546f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1546f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1546f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1546f8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1546f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1546fc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1546fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154700: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154704: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154704u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154708: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15470c: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x15470cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x154710: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x154710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x154714: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x154714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154718: 0x0  nop
    ctx->pc = 0x154718u;
    // NOP
    // 0x15471c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x15471Cu;
    {
        const bool branch_taken_0x15471c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15471c) {
            ctx->pc = 0x1547C0u;
            return;
        }
    }
    ctx->pc = 0x154724u;
    // 0x154724: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154728: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15472c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15472cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154730: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154730u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x154734: 0x4a0003bf  vwaitq
    ctx->pc = 0x154734u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154738: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15473c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15473cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154740: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154740u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154744: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154748: 0x4a0003bf  vwaitq
    ctx->pc = 0x154748u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15474c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15474cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154750: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x154750u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154758: 0x0  nop
    ctx->pc = 0x154758u;
    // NOP
    // 0x15475c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15475cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154760: 0x0  nop
    ctx->pc = 0x154760u;
    // NOP
    // 0x154764: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x154764u;
    {
        const bool branch_taken_0x154764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154764u;
        // 0x154768: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154764) {
            ctx->pc = 0x154770u;
            return;
        }
    }
    ctx->pc = 0x15476Cu;
    // 0x15476c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->pc = 0x154770u;
}

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

// Function: entry_00162744
// Address: 0x162744 - 0x16284c
void entry_00162744_0x162744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162744_0x162744");
#endif

    ctx->pc = 0x162744u;

    // 0x162744: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16274c: 0x0  nop
    ctx->pc = 0x16274cu;
    // NOP
    // 0x162750: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162754: 0x0  nop
    ctx->pc = 0x162754u;
    // NOP
    // 0x162758: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x162758u;
    {
        const bool branch_taken_0x162758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162758u;
        // 0x16275c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162758) {
            ctx->pc = 0x162904u;
            return;
        }
    }
    ctx->pc = 0x162760u;
    // 0x162760: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x162760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x162764: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162768: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x162768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16276c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16276cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162770: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162774: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162774u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x162778: 0x4a0003bf  vwaitq
    ctx->pc = 0x162778u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16277c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16277cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162780: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x162780u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x162784: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x162784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162788: 0x4a0003bf  vwaitq
    ctx->pc = 0x162788u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16278c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16278cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162790: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x162790u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162794: 0x8242021c  lb          $v0, 0x21C($s2)
    ctx->pc = 0x162794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x162798: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x162798u;
    {
        const bool branch_taken_0x162798 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x162798) {
            ctx->pc = 0x1628B0u;
            return;
        }
    }
    ctx->pc = 0x1627A0u;
    // 0x1627a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1627a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1627a4: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1627a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1627a8: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1627ac: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1627acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627b0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1627b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1627b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1627b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1627b8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1627b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1627bc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1627bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1627c0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1627c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1627c4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1627c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1627c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1627c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1627cc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1627ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1627d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1627d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1627d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1627d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1627d8: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x1627d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1627dc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1627DCu;
    {
        const bool branch_taken_0x1627dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1627dc) {
            ctx->pc = 0x16284Cu;
            return;
        }
    }
    ctx->pc = 0x1627E4u;
    // 0x1627e4: 0x0  nop
    ctx->pc = 0x1627e4u;
    // NOP
    // 0x1627e8: 0x0  nop
    ctx->pc = 0x1627e8u;
    // NOP
    // 0x1627ec: 0x0  nop
    ctx->pc = 0x1627ecu;
    // NOP
    // 0x1627f0: 0x46150004  c1          0x150004
    ctx->pc = 0x1627f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1627f4: 0x0  nop
    ctx->pc = 0x1627f4u;
    // NOP
    // 0x1627f8: 0x0  nop
    ctx->pc = 0x1627f8u;
    // NOP
    // 0x1627fc: 0x0  nop
    ctx->pc = 0x1627fcu;
    // NOP
    // 0x162800: 0x460000c4  c1          0xC4
    ctx->pc = 0x162800u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x162804: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
    // 0x162808: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x162808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16280c: 0x3c024018  lui         $v0, 0x4018
    ctx->pc = 0x16280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16408 << 16));
    // 0x162810: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x162810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x162814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16281c: 0x0  nop
    ctx->pc = 0x16281cu;
    // NOP
    // 0x162820: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162824: 0x0  nop
    ctx->pc = 0x162824u;
    // NOP
    // 0x162828: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x162828u;
    {
        const bool branch_taken_0x162828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162828u;
        // 0x16282c: 0x46030b42  mul.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162828) {
            ctx->pc = 0x1628E8u;
            return;
        }
    }
    ctx->pc = 0x162830u;
    // 0x162830: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x162830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x162834: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x162838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16283c: 0x0  nop
    ctx->pc = 0x16283cu;
    // NOP
    // 0x162840: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x162840u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x162844: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x162844u;
    {
        const bool branch_taken_0x162844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162844u;
        // 0x162848: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162844) {
            ctx->pc = 0x1628E8u;
            return;
        }
    }
    ctx->pc = 0x16284Cu;
}

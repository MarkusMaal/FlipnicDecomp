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

// Function: entry_00155868
// Address: 0x155868 - 0x155a30
void entry_00155868_0x155868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155868_0x155868");
#endif

    ctx->pc = 0x155868u;

    // 0x155868: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x155868u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15586c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15586cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155870: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x155870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155874: 0x0  nop
    ctx->pc = 0x155874u;
    // NOP
    // 0x155878: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x155878u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15587c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15587cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155880: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x155880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155884: 0xfac50000  sqc2        $vf5, 0x0($s6)
    ctx->pc = 0x155884u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155888: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x155888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15588c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15588cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155890: 0x0  nop
    ctx->pc = 0x155890u;
    // NOP
    // 0x155894: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x155894u;
    {
        const bool branch_taken_0x155894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155894u;
        // 0x155898: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155894) {
            ctx->pc = 0x155A48u;
            return;
        }
    }
    ctx->pc = 0x15589Cu;
    // 0x15589c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1558a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1558a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1558a4: 0x0  nop
    ctx->pc = 0x1558a4u;
    // NOP
    // 0x1558a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1558a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1558ac: 0x0  nop
    ctx->pc = 0x1558acu;
    // NOP
    // 0x1558b0: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x1558B0u;
    {
        const bool branch_taken_0x1558b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1558b0) {
            ctx->pc = 0x155A44u;
            return;
        }
    }
    ctx->pc = 0x1558B8u;
    // 0x1558b8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1558b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1558bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1558bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1558c0: 0x0  nop
    ctx->pc = 0x1558c0u;
    // NOP
    // 0x1558c4: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x1558C4u;
    {
        const bool branch_taken_0x1558c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1558c4) {
            ctx->pc = 0x155A44u;
            return;
        }
    }
    ctx->pc = 0x1558CCu;
    // 0x1558cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1558ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1558d0: 0x0  nop
    ctx->pc = 0x1558d0u;
    // NOP
    // 0x1558d4: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x1558D4u;
    {
        const bool branch_taken_0x1558d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1558d4) {
            ctx->pc = 0x155A44u;
            return;
        }
    }
    ctx->pc = 0x1558DCu;
    // 0x1558dc: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1558dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1558e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1558e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1558e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1558e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1558e8: 0x0  nop
    ctx->pc = 0x1558e8u;
    // NOP
    // 0x1558ec: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x1558ECu;
    {
        const bool branch_taken_0x1558ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1558F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558ECu;
        // 0x1558f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558ec) {
            ctx->pc = 0x155A3Cu;
            return;
        }
    }
    ctx->pc = 0x1558F4u;
    // 0x1558f4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1558f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1558f8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1558f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1558fc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x1558fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155900: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155904: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x155904u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155908: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15590c: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x15590cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155910: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x155910u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155914: 0x4be839ec  vsub.xyzw   $vf7, $vf7, $vf8
    ctx->pc = 0x155914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155918: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x155918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15591c: 0x4be8212c  vsub.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x15591cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x155920: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x155920u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155924: 0x4be84a6c  vsub.xyzw   $vf9, $vf9, $vf8
    ctx->pc = 0x155924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x155928: 0x4bc43afe  vopmula.xyz $ACC, $vf7, $vf4
    ctx->pc = 0x155928u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x15592c: 0x4bc7216e  vopmsub.xyz $vf5, $vf4, $vf7
    ctx->pc = 0x15592cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155930: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x155930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155934: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155934u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155938: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155938u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15593c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15593cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155940: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155944: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155948: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15594c: 0x4b6a03bc  vdiv        $Q, $vf0w, $vf10z
    ctx->pc = 0x15594cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155950: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155950u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155954: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155954u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155958: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15595c: 0x4bc931aa  vmul.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x15595cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155960: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155964: 0x4a0003bf  vwaitq
    ctx->pc = 0x155964u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155968: 0x4b063282  vaddz.x     $vf10, $vf6, $vf6z
    ctx->pc = 0x155968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15596c: 0x4bc54afe  vopmula.xyz $ACC, $vf9, $vf5
    ctx->pc = 0x15596cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155970: 0x4bc929ae  vopmsub.xyz $vf6, $vf5, $vf9
    ctx->pc = 0x155970u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155974: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155974u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155978: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15597c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15597cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155980: 0x4a863280  vaddx.y     $vf10, $vf6, $vf6x
    ctx->pc = 0x155980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155984: 0x4bc922fe  vopmula.xyz $ACC, $vf4, $vf9
    ctx->pc = 0x155984u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155988: 0x4bc449ae  vopmsub.xyz $vf6, $vf9, $vf4
    ctx->pc = 0x155988u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15598c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15598cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155990: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155994: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155998: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15599c: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x15599cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1559a0: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x1559a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1559a4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1559a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1559a8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1559a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1559ac: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1559acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1559b0: 0xf86a0000  sqc2        $vf10, 0x0($v1)
    ctx->pc = 0x1559b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1559b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1559b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1559b8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1559b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1559bc: 0x4b0a295a  vmulz.x     $vf5, $vf5, $vf10z
    ctx->pc = 0x1559bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1559c0: 0x4b0529fd  vabs.x      $vf5, $vf5
    ctx->pc = 0x1559c0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1559c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1559c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1559c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1559c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1559cc: 0x0  nop
    ctx->pc = 0x1559ccu;
    // NOP
    // 0x1559d0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1559d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1559d4: 0x0  nop
    ctx->pc = 0x1559d4u;
    // NOP
    // 0x1559d8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1559D8u;
    {
        const bool branch_taken_0x1559d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1559DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559D8u;
        // 0x1559dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559d8) {
            ctx->pc = 0x155A34u;
            return;
        }
    }
    ctx->pc = 0x1559E0u;
    // 0x1559e0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1559e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1559e4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1559e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1559e8: 0x0  nop
    ctx->pc = 0x1559e8u;
    // NOP
    // 0x1559ec: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1559ECu;
    {
        const bool branch_taken_0x1559ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1559ec) {
            ctx->pc = 0x155A30u;
            return;
        }
    }
    ctx->pc = 0x1559F4u;
    // 0x1559f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1559f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1559f8: 0x0  nop
    ctx->pc = 0x1559f8u;
    // NOP
    // 0x1559fc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1559FCu;
    {
        const bool branch_taken_0x1559fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1559fc) {
            ctx->pc = 0x155A30u;
            return;
        }
    }
    ctx->pc = 0x155A04u;
    // 0x155a04: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x155a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155a08: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x155a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155a0c: 0x0  nop
    ctx->pc = 0x155a0cu;
    // NOP
    // 0x155a10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x155A10u;
    {
        const bool branch_taken_0x155a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155a10) {
            ctx->pc = 0x155A30u;
            return;
        }
    }
    ctx->pc = 0x155A18u;
    // 0x155a18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x155a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155a1c: 0x0  nop
    ctx->pc = 0x155a1cu;
    // NOP
    // 0x155a20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x155A20u;
    {
        const bool branch_taken_0x155a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A20u;
        // 0x155a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a20) {
            ctx->pc = 0x155A30u;
            return;
        }
    }
    ctx->pc = 0x155A28u;
    // 0x155a28: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x155A28u;
    {
        const bool branch_taken_0x155a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a28) {
            ctx->pc = 0x155B80u;
            return;
        }
    }
    ctx->pc = 0x155A30u;
}

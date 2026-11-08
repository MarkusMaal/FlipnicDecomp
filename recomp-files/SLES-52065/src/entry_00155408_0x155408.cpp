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

// Function: entry_00155408
// Address: 0x155408 - 0x155624
void entry_00155408_0x155408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155408_0x155408");
#endif

    ctx->pc = 0x155408u;

    // 0x155408: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x155408u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15540c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15540cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155410: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x155410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155414: 0x0  nop
    ctx->pc = 0x155414u;
    // NOP
    // 0x155418: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x155418u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15541c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15541cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155420: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x155420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155424: 0xfac50000  sqc2        $vf5, 0x0($s6)
    ctx->pc = 0x155424u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155428: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x15542c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x15542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x155430: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x155430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x155434: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x155434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155438: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x155438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15543c: 0x0  nop
    ctx->pc = 0x15543cu;
    // NOP
    // 0x155440: 0x4500007e  bc1f        . + 4 + (0x7E << 2)
    ctx->pc = 0x155440u;
    {
        const bool branch_taken_0x155440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155440u;
        // 0x155444: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155440) {
            ctx->pc = 0x15563Cu;
            return;
        }
    }
    ctx->pc = 0x155448u;
    // 0x155448: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x155448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
    // 0x15544c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x15544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x155450: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x155450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x155454: 0x0  nop
    ctx->pc = 0x155454u;
    // NOP
    // 0x155458: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x155458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15545c: 0x0  nop
    ctx->pc = 0x15545cu;
    // NOP
    // 0x155460: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x155460u;
    {
        const bool branch_taken_0x155460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155460) {
            ctx->pc = 0x155638u;
            return;
        }
    }
    ctx->pc = 0x155468u;
    // 0x155468: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x155468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15546c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15546cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155470: 0x0  nop
    ctx->pc = 0x155470u;
    // NOP
    // 0x155474: 0x45000070  bc1f        . + 4 + (0x70 << 2)
    ctx->pc = 0x155474u;
    {
        const bool branch_taken_0x155474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155474) {
            ctx->pc = 0x155638u;
            return;
        }
    }
    ctx->pc = 0x15547Cu;
    // 0x15547c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x15547cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155480: 0x0  nop
    ctx->pc = 0x155480u;
    // NOP
    // 0x155484: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x155484u;
    {
        const bool branch_taken_0x155484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155484) {
            ctx->pc = 0x155638u;
            return;
        }
    }
    ctx->pc = 0x15548Cu;
    // 0x15548c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15548cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x155490: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x155490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155494: 0x0  nop
    ctx->pc = 0x155494u;
    // NOP
    // 0x155498: 0x45000067  bc1f        . + 4 + (0x67 << 2)
    ctx->pc = 0x155498u;
    {
        const bool branch_taken_0x155498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155498) {
            ctx->pc = 0x155638u;
            return;
        }
    }
    ctx->pc = 0x1554A0u;
    // 0x1554a0: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1554a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1554a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1554a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1554a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1554a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1554ac: 0x0  nop
    ctx->pc = 0x1554acu;
    // NOP
    // 0x1554b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1554b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1554b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1554b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1554b8: 0x0  nop
    ctx->pc = 0x1554b8u;
    // NOP
    // 0x1554bc: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x1554BCu;
    {
        const bool branch_taken_0x1554bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554bc) {
            ctx->pc = 0x155630u;
            return;
        }
    }
    ctx->pc = 0x1554C4u;
    // 0x1554c4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1554c8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1554c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1554cc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x1554ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1554d0: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1554d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1554d4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1554d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1554d8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1554dc: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x1554dcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1554e0: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x1554e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1554e4: 0x4be839ec  vsub.xyzw   $vf7, $vf7, $vf8
    ctx->pc = 0x1554e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1554e8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1554e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1554ec: 0x4be8212c  vsub.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x1554ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1554f0: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1554f0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1554f4: 0x4be84a6c  vsub.xyzw   $vf9, $vf9, $vf8
    ctx->pc = 0x1554f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1554f8: 0x4bc43afe  vopmula.xyz $ACC, $vf7, $vf4
    ctx->pc = 0x1554f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1554fc: 0x4bc7216e  vopmsub.xyz $vf5, $vf4, $vf7
    ctx->pc = 0x1554fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155500: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x155500u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155504: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155504u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155508: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155508u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15550c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15550cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155510: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155514: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155518: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15551c: 0x4b6a03bc  vdiv        $Q, $vf0w, $vf10z
    ctx->pc = 0x15551cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155520: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155520u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155524: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155524u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155528: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155528u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15552c: 0x4bc931aa  vmul.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x15552cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155530: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155534: 0x4a0003bf  vwaitq
    ctx->pc = 0x155534u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155538: 0x4b063282  vaddz.x     $vf10, $vf6, $vf6z
    ctx->pc = 0x155538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15553c: 0x4bc54afe  vopmula.xyz $ACC, $vf9, $vf5
    ctx->pc = 0x15553cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155540: 0x4bc929ae  vopmsub.xyz $vf6, $vf5, $vf9
    ctx->pc = 0x155540u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155544: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155548: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15554c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15554cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155550: 0x4a863280  vaddx.y     $vf10, $vf6, $vf6x
    ctx->pc = 0x155550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155554: 0x4bc922fe  vopmula.xyz $ACC, $vf4, $vf9
    ctx->pc = 0x155554u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155558: 0x4bc449ae  vopmsub.xyz $vf6, $vf9, $vf4
    ctx->pc = 0x155558u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15555c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15555cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155560: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155564: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155568: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15556c: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x15556cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155570: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x155570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155574: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x155574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155578: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x155578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15557c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15557cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x155580: 0xf86a0000  sqc2        $vf10, 0x0($v1)
    ctx->pc = 0x155580u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x155584: 0x4a0003bf  vwaitq
    ctx->pc = 0x155584u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155588: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x155588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15558c: 0x4b0a295a  vmulz.x     $vf5, $vf5, $vf10z
    ctx->pc = 0x15558cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155590: 0x4b0529fd  vabs.x      $vf5, $vf5
    ctx->pc = 0x155590u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155594: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x155594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x155598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15559c: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
    // 0x1555a0: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1555a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x1555a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1555a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1555a8: 0x0  nop
    ctx->pc = 0x1555a8u;
    // NOP
    // 0x1555ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1555acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1555b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1555b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1555b4: 0x0  nop
    ctx->pc = 0x1555b4u;
    // NOP
    // 0x1555b8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1555B8u;
    {
        const bool branch_taken_0x1555b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1555BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555B8u;
        // 0x1555bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555b8) {
            ctx->pc = 0x155628u;
            return;
        }
    }
    ctx->pc = 0x1555C0u;
    // 0x1555c0: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1555c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1555c4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1555c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1555c8: 0x0  nop
    ctx->pc = 0x1555c8u;
    // NOP
    // 0x1555cc: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1555CCu;
    {
        const bool branch_taken_0x1555cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1555cc) {
            ctx->pc = 0x155624u;
            return;
        }
    }
    ctx->pc = 0x1555D4u;
    // 0x1555d4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1555d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1555d8: 0x0  nop
    ctx->pc = 0x1555d8u;
    // NOP
    // 0x1555dc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1555DCu;
    {
        const bool branch_taken_0x1555dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1555dc) {
            ctx->pc = 0x155624u;
            return;
        }
    }
    ctx->pc = 0x1555E4u;
    // 0x1555e4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1555e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1555e8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1555e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1555ec: 0x0  nop
    ctx->pc = 0x1555ecu;
    // NOP
    // 0x1555f0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1555F0u;
    {
        const bool branch_taken_0x1555f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1555f0) {
            ctx->pc = 0x155624u;
            return;
        }
    }
    ctx->pc = 0x1555F8u;
    // 0x1555f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1555f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1555fc: 0x0  nop
    ctx->pc = 0x1555fcu;
    // NOP
    // 0x155600: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x155600u;
    {
        const bool branch_taken_0x155600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155600) {
            ctx->pc = 0x155624u;
            return;
        }
    }
    ctx->pc = 0x155608u;
    // 0x155608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x155608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15560c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15560cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155610: 0x0  nop
    ctx->pc = 0x155610u;
    // NOP
    // 0x155614: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x155614u;
    {
        const bool branch_taken_0x155614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155614u;
        // 0x155618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155614) {
            ctx->pc = 0x155624u;
            return;
        }
    }
    ctx->pc = 0x15561Cu;
    // 0x15561c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x15561Cu;
    {
        const bool branch_taken_0x15561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15561c) {
            ctx->pc = 0x155794u;
            return;
        }
    }
    ctx->pc = 0x155624u;
}

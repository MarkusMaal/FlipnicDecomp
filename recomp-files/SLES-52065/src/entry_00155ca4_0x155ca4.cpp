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

// Function: entry_00155ca4
// Address: 0x155ca4 - 0x155e94
void entry_00155ca4_0x155ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ca4_0x155ca4");
#endif

    ctx->pc = 0x155ca4u;

    // 0x155ca4: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x155ca4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155ca8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x155ca8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155cac: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x155cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155cb0: 0x0  nop
    ctx->pc = 0x155cb0u;
    // NOP
    // 0x155cb4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x155cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x155cb8: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x155cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155cbc: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x155cbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155cc0: 0xfac50000  sqc2        $vf5, 0x0($s6)
    ctx->pc = 0x155cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155cc4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x155cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155cc8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x155cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155ccc: 0x0  nop
    ctx->pc = 0x155cccu;
    // NOP
    // 0x155cd0: 0x45000076  bc1f        . + 4 + (0x76 << 2)
    ctx->pc = 0x155CD0u;
    {
        const bool branch_taken_0x155cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CD0u;
        // 0x155cd4: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cd0) {
            ctx->pc = 0x155EACu;
            return;
        }
    }
    ctx->pc = 0x155CD8u;
    // 0x155cd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x155cdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x155cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x155ce0: 0x0  nop
    ctx->pc = 0x155ce0u;
    // NOP
    // 0x155ce4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x155ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155ce8: 0x0  nop
    ctx->pc = 0x155ce8u;
    // NOP
    // 0x155cec: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x155CECu;
    {
        const bool branch_taken_0x155cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155cec) {
            ctx->pc = 0x155EA8u;
            return;
        }
    }
    ctx->pc = 0x155CF4u;
    // 0x155cf4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x155cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155cf8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x155cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155cfc: 0x0  nop
    ctx->pc = 0x155cfcu;
    // NOP
    // 0x155d00: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x155D00u;
    {
        const bool branch_taken_0x155d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155d00) {
            ctx->pc = 0x155EA8u;
            return;
        }
    }
    ctx->pc = 0x155D08u;
    // 0x155d08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x155d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155d0c: 0x0  nop
    ctx->pc = 0x155d0cu;
    // NOP
    // 0x155d10: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x155D10u;
    {
        const bool branch_taken_0x155d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155d10) {
            ctx->pc = 0x155EA8u;
            return;
        }
    }
    ctx->pc = 0x155D18u;
    // 0x155d18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x155d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x155d1c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x155d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155d20: 0x0  nop
    ctx->pc = 0x155d20u;
    // NOP
    // 0x155d24: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x155D24u;
    {
        const bool branch_taken_0x155d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155d24) {
            ctx->pc = 0x155EA8u;
            return;
        }
    }
    ctx->pc = 0x155D2Cu;
    // 0x155d2c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x155d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155d30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x155d30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x155d34: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x155d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155d38: 0x0  nop
    ctx->pc = 0x155d38u;
    // NOP
    // 0x155d3c: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x155D3Cu;
    {
        const bool branch_taken_0x155d3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D3Cu;
        // 0x155d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d3c) {
            ctx->pc = 0x155EA0u;
            return;
        }
    }
    ctx->pc = 0x155D44u;
    // 0x155d44: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x155d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x155d48: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x155d48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155d4c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x155d4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155d50: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d54: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x155d54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155d58: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x155d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x155d5c: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x155d5cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155d60: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x155d60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155d64: 0x4be839ec  vsub.xyzw   $vf7, $vf7, $vf8
    ctx->pc = 0x155d64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155d68: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x155d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155d6c: 0x4be8212c  vsub.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x155d6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x155d70: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x155d70u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155d74: 0x4be84a6c  vsub.xyzw   $vf9, $vf9, $vf8
    ctx->pc = 0x155d74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x155d78: 0x4bc43afe  vopmula.xyz $ACC, $vf7, $vf4
    ctx->pc = 0x155d78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155d7c: 0x4bc7216e  vopmsub.xyz $vf5, $vf4, $vf7
    ctx->pc = 0x155d7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155d80: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x155d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155d84: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155d84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155d88: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155d88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d8c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155d8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d90: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d94: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d98: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155d9c: 0x4b6a03bc  vdiv        $Q, $vf0w, $vf10z
    ctx->pc = 0x155d9cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155da0: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155da0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155da4: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155da4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155da8: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dac: 0x4bc931aa  vmul.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x155dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155db0: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155db4: 0x4a0003bf  vwaitq
    ctx->pc = 0x155db4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155db8: 0x4b063282  vaddz.x     $vf10, $vf6, $vf6z
    ctx->pc = 0x155db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155dbc: 0x4bc54afe  vopmula.xyz $ACC, $vf9, $vf5
    ctx->pc = 0x155dbcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155dc0: 0x4bc929ae  vopmsub.xyz $vf6, $vf5, $vf9
    ctx->pc = 0x155dc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dc4: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155dc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dc8: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dcc: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x155dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dd0: 0x4a863280  vaddx.y     $vf10, $vf6, $vf6x
    ctx->pc = 0x155dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155dd4: 0x4bc922fe  vopmula.xyz $ACC, $vf4, $vf9
    ctx->pc = 0x155dd4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155dd8: 0x4bc449ae  vopmsub.xyz $vf6, $vf9, $vf4
    ctx->pc = 0x155dd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155ddc: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155de0: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155de4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155de8: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155dec: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x155decu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155df0: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x155df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155df4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x155df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155df8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x155df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155dfc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x155dfcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x155e00: 0xf86a0000  sqc2        $vf10, 0x0($v1)
    ctx->pc = 0x155e00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x155e04: 0x4a0003bf  vwaitq
    ctx->pc = 0x155e04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155e08: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x155e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155e0c: 0x4b0a295a  vmulz.x     $vf5, $vf5, $vf10z
    ctx->pc = 0x155e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155e10: 0x4b0529fd  vabs.x      $vf5, $vf5
    ctx->pc = 0x155e10u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155e14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x155e14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155e1c: 0x0  nop
    ctx->pc = 0x155e1cu;
    // NOP
    // 0x155e20: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x155e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e24: 0x0  nop
    ctx->pc = 0x155e24u;
    // NOP
    // 0x155e28: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x155E28u;
    {
        const bool branch_taken_0x155e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E28u;
        // 0x155e2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e28) {
            ctx->pc = 0x155E98u;
            return;
        }
    }
    ctx->pc = 0x155E30u;
    // 0x155e30: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x155e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155e34: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x155e34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e38: 0x0  nop
    ctx->pc = 0x155e38u;
    // NOP
    // 0x155e3c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x155E3Cu;
    {
        const bool branch_taken_0x155e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e3c) {
            ctx->pc = 0x155E94u;
            return;
        }
    }
    ctx->pc = 0x155E44u;
    // 0x155e44: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x155e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e48: 0x0  nop
    ctx->pc = 0x155e48u;
    // NOP
    // 0x155e4c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x155E4Cu;
    {
        const bool branch_taken_0x155e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e4c) {
            ctx->pc = 0x155E94u;
            return;
        }
    }
    ctx->pc = 0x155E54u;
    // 0x155e54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x155e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155e58: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x155e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e5c: 0x0  nop
    ctx->pc = 0x155e5cu;
    // NOP
    // 0x155e60: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x155E60u;
    {
        const bool branch_taken_0x155e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e60) {
            ctx->pc = 0x155E94u;
            return;
        }
    }
    ctx->pc = 0x155E68u;
    // 0x155e68: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x155e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e6c: 0x0  nop
    ctx->pc = 0x155e6cu;
    // NOP
    // 0x155e70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x155E70u;
    {
        const bool branch_taken_0x155e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e70) {
            ctx->pc = 0x155E94u;
            return;
        }
    }
    ctx->pc = 0x155E78u;
    // 0x155e78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x155e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x155e7c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x155e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e80: 0x0  nop
    ctx->pc = 0x155e80u;
    // NOP
    // 0x155e84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x155E84u;
    {
        const bool branch_taken_0x155e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E84u;
        // 0x155e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e84) {
            ctx->pc = 0x155E94u;
            return;
        }
    }
    ctx->pc = 0x155E8Cu;
    // 0x155e8c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x155E8Cu;
    {
        const bool branch_taken_0x155e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e8c) {
            ctx->pc = 0x1562C0u;
            return;
        }
    }
    ctx->pc = 0x155E94u;
}

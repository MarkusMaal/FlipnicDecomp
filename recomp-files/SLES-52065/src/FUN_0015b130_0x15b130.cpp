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

// Function: FUN_0015b130
// Address: 0x15b130 - 0x15b48c
void FUN_0015b130_0x15b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b130_0x15b130");
#endif

    ctx->pc = 0x15b130u;

    // 0x15b130: 0xc48501e0  lwc1        $f5, 0x1E0($a0)
    ctx->pc = 0x15b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15b134: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b138: 0xc4810210  lwc1        $f1, 0x210($a0)
    ctx->pc = 0x15b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b13c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b140: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x15b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b144: 0xc4a30300  lwc1        $f3, 0x300($a1)
    ctx->pc = 0x15b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b148: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x15b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x15b14c: 0xc4a20308  lwc1        $f2, 0x308($a1)
    ctx->pc = 0x15b14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b150: 0xc48701e8  lwc1        $f7, 0x1E8($a0)
    ctx->pc = 0x15b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b154: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x15b154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x15b158: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x15b158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x15b15c: 0xc4a801c0  lwc1        $f8, 0x1C0($a1)
    ctx->pc = 0x15b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b160: 0xc4860218  lwc1        $f6, 0x218($a0)
    ctx->pc = 0x15b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b164: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x15b164u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x15b168: 0x46024a80  add.s       $f10, $f9, $f2
    ctx->pc = 0x15b168u;
    ctx->f[10] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x15b16c: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x15b16cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x15b170: 0x460638c1  sub.s       $f3, $f7, $f6
    ctx->pc = 0x15b170u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x15b174: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x15b174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x15b178: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x15b178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x15b17c: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x15b17cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x15b180: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x15b180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b184: 0x0  nop
    ctx->pc = 0x15b184u;
    // NOP
    // 0x15b188: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x15B188u;
    {
        const bool branch_taken_0x15b188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B188u;
        // 0x15b18c: 0x460818c1  sub.s       $f3, $f3, $f8 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b188) {
            ctx->pc = 0x15B21Cu;
            goto label_15b21c;
        }
    }
    ctx->pc = 0x15B190u;
    // 0x15b190: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x15b190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b194: 0x0  nop
    ctx->pc = 0x15b194u;
    // NOP
    // 0x15b198: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x15B198u;
    {
        const bool branch_taken_0x15b198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B198u;
        // 0x15b19c: 0x46034981  sub.s       $f6, $f9, $f3 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b198) {
            ctx->pc = 0x15B220u;
            goto label_15b220;
        }
    }
    ctx->pc = 0x15B1A0u;
    // 0x15b1a0: 0x46091836  c.le.s      $f3, $f9
    ctx->pc = 0x15b1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b1a4: 0x0  nop
    ctx->pc = 0x15b1a4u;
    // NOP
    // 0x15b1a8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x15B1A8u;
    {
        const bool branch_taken_0x15b1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b1a8) {
            ctx->pc = 0x15B21Cu;
            goto label_15b21c;
        }
    }
    ctx->pc = 0x15B1B0u;
    // 0x15b1b0: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x15b1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b1b4: 0x0  nop
    ctx->pc = 0x15b1b4u;
    // NOP
    // 0x15b1b8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x15B1B8u;
    {
        const bool branch_taken_0x15b1b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b1b8) {
            ctx->pc = 0x15B21Cu;
            goto label_15b21c;
        }
    }
    ctx->pc = 0x15B1C0u;
    // 0x15b1c0: 0x8c880200  lw          $t0, 0x200($a0)
    ctx->pc = 0x15b1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x15b1c4: 0x24a30300  addiu       $v1, $a1, 0x300
    ctx->pc = 0x15b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x15b1c8: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x15b1cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15b1ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b1d0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15b1d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b1d4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15b1d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b1d8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15b1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b1dc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15b1dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15b1e0: 0x0  nop
    ctx->pc = 0x15b1e0u;
    // NOP
    // 0x15b1e4: 0x48a83800  qmtc2.ni    $t0, $vf7
    ctx->pc = 0x15b1e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15b1e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x15b1e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15b1ec: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15b1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b1f0: 0x4a053bbc  vdiv        $Q, $vf7x, $vf5x
    ctx->pc = 0x15b1f0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15b1f4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15b1f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b1f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x15b1f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15b1fc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15b1fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b200: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x15b200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15b204: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x15b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b208: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x15b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b20c: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x15b20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b210: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x15b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b214: 0x46044101  sub.s       $f4, $f8, $f4
    ctx->pc = 0x15b214u;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x15b218: 0x46063a41  sub.s       $f9, $f7, $f6
    ctx->pc = 0x15b218u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_15b21c:
    // 0x15b21c: 0x46034981  sub.s       $f6, $f9, $f3
    ctx->pc = 0x15b21cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_15b220:
    // 0x15b220: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x15b220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15b224: 0x0  nop
    ctx->pc = 0x15b224u;
    // NOP
    // 0x15b228: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x15b228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b22c: 0x0  nop
    ctx->pc = 0x15b22cu;
    // NOP
    // 0x15b230: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x15B230u;
    {
        const bool branch_taken_0x15b230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B230u;
        // 0x15b234: 0x46025181  sub.s       $f6, $f10, $f2 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b230) {
            ctx->pc = 0x15B2B8u;
            goto label_15b2b8;
        }
    }
    ctx->pc = 0x15B238u;
    // 0x15b238: 0x46035181  sub.s       $f6, $f10, $f3
    ctx->pc = 0x15b238u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x15b23c: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x15b23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b240: 0x0  nop
    ctx->pc = 0x15b240u;
    // NOP
    // 0x15b244: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15B244u;
    {
        const bool branch_taken_0x15b244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b244) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B24Cu;
    // 0x15b24c: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x15b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b250: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b254: 0xc4a70308  lwc1        $f7, 0x308($a1)
    ctx->pc = 0x15b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b258: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15b258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b25c: 0x46081a01  sub.s       $f8, $f3, $f8
    ctx->pc = 0x15b25cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x15b260: 0x46074203  div.s       $f8, $f8, $f7
    ctx->pc = 0x15b260u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[7]); }
    // 0x15b264: 0x0  nop
    ctx->pc = 0x15b264u;
    // NOP
    // 0x15b268: 0x0  nop
    ctx->pc = 0x15b268u;
    // NOP
    // 0x15b26c: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x15b26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b270: 0x0  nop
    ctx->pc = 0x15b270u;
    // NOP
    // 0x15b274: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B274u;
    {
        const bool branch_taken_0x15b274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b274) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B27Cu;
    // 0x15b27c: 0xc4a70300  lwc1        $f7, 0x300($a1)
    ctx->pc = 0x15b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b280: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x15b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b284: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x15b284u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x15b288: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x15b288u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x15b28c: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x15b28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b290: 0x0  nop
    ctx->pc = 0x15b290u;
    // NOP
    // 0x15b294: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B294u;
    {
        const bool branch_taken_0x15b294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b294) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B29Cu;
    // 0x15b29c: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x15b29cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b2a0: 0x0  nop
    ctx->pc = 0x15b2a0u;
    // NOP
    // 0x15b2a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B2A4u;
    {
        const bool branch_taken_0x15b2a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b2a4) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B2ACu;
    // 0x15b2ac: 0xe4a802e8  swc1        $f8, 0x2E8($a1)
    ctx->pc = 0x15b2acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b2b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b2b4:
    // 0x15b2b4: 0x46025181  sub.s       $f6, $f10, $f2
    ctx->pc = 0x15b2b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
label_15b2b8:
    // 0x15b2b8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x15b2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15b2bc: 0x0  nop
    ctx->pc = 0x15b2bcu;
    // NOP
    // 0x15b2c0: 0x46073034  c.lt.s      $f6, $f7
    ctx->pc = 0x15b2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b2c4: 0x0  nop
    ctx->pc = 0x15b2c4u;
    // NOP
    // 0x15b2c8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x15B2C8u;
    {
        const bool branch_taken_0x15b2c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2C8u;
        // 0x15b2cc: 0x46012181  sub.s       $f6, $f4, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2c8) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B2D0u;
    // 0x15b2d0: 0x46024981  sub.s       $f6, $f9, $f2
    ctx->pc = 0x15b2d0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x15b2d4: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x15b2d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b2d8: 0x0  nop
    ctx->pc = 0x15b2d8u;
    // NOP
    // 0x15b2dc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15B2DCu;
    {
        const bool branch_taken_0x15b2dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b2dc) {
            ctx->pc = 0x15B34Cu;
            goto label_15b34c;
        }
    }
    ctx->pc = 0x15B2E4u;
    // 0x15b2e4: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x15b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b2e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b2ec: 0xc4a70308  lwc1        $f7, 0x308($a1)
    ctx->pc = 0x15b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b2f0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15b2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b2f4: 0x46081201  sub.s       $f8, $f2, $f8
    ctx->pc = 0x15b2f4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x15b2f8: 0x46074203  div.s       $f8, $f8, $f7
    ctx->pc = 0x15b2f8u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[7]); }
    // 0x15b2fc: 0x0  nop
    ctx->pc = 0x15b2fcu;
    // NOP
    // 0x15b300: 0x0  nop
    ctx->pc = 0x15b300u;
    // NOP
    // 0x15b304: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x15b304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b308: 0x0  nop
    ctx->pc = 0x15b308u;
    // NOP
    // 0x15b30c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B30Cu;
    {
        const bool branch_taken_0x15b30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b30c) {
            ctx->pc = 0x15B34Cu;
            goto label_15b34c;
        }
    }
    ctx->pc = 0x15B314u;
    // 0x15b314: 0xc4a70300  lwc1        $f7, 0x300($a1)
    ctx->pc = 0x15b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b318: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x15b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b31c: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x15b31cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x15b320: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x15b320u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x15b324: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x15b324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b328: 0x0  nop
    ctx->pc = 0x15b328u;
    // NOP
    // 0x15b32c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B32Cu;
    {
        const bool branch_taken_0x15b32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b32c) {
            ctx->pc = 0x15B34Cu;
            goto label_15b34c;
        }
    }
    ctx->pc = 0x15B334u;
    // 0x15b334: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x15b334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b338: 0x0  nop
    ctx->pc = 0x15b338u;
    // NOP
    // 0x15b33c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B33Cu;
    {
        const bool branch_taken_0x15b33c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b33c) {
            ctx->pc = 0x15B34Cu;
            goto label_15b34c;
        }
    }
    ctx->pc = 0x15B344u;
    // 0x15b344: 0xe4a802e8  swc1        $f8, 0x2E8($a1)
    ctx->pc = 0x15b344u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b348: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15b34c:
    // 0x15b34c: 0x46012181  sub.s       $f6, $f4, $f1
    ctx->pc = 0x15b34cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_15b350:
    // 0x15b350: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x15b350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15b354: 0x0  nop
    ctx->pc = 0x15b354u;
    // NOP
    // 0x15b358: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x15b358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b35c: 0x0  nop
    ctx->pc = 0x15b35cu;
    // NOP
    // 0x15b360: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x15B360u;
    {
        const bool branch_taken_0x15b360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B360u;
        // 0x15b364: 0x46012981  sub.s       $f6, $f5, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b360) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B368u;
    // 0x15b368: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x15b368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b36c: 0x0  nop
    ctx->pc = 0x15b36cu;
    // NOP
    // 0x15b370: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15B370u;
    {
        const bool branch_taken_0x15b370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b370) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B378u;
    // 0x15b378: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x15b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b37c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b380: 0xc4a70300  lwc1        $f7, 0x300($a1)
    ctx->pc = 0x15b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b384: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15b384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b388: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x15b388u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x15b38c: 0x460709c3  div.s       $f7, $f1, $f7
    ctx->pc = 0x15b38cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x15b390: 0x0  nop
    ctx->pc = 0x15b390u;
    // NOP
    // 0x15b394: 0x0  nop
    ctx->pc = 0x15b394u;
    // NOP
    // 0x15b398: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x15b398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b39c: 0x0  nop
    ctx->pc = 0x15b39cu;
    // NOP
    // 0x15b3a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B3A0u;
    {
        const bool branch_taken_0x15b3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b3a0) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B3A8u;
    // 0x15b3a8: 0xc4a10308  lwc1        $f1, 0x308($a1)
    ctx->pc = 0x15b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b3ac: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x15b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b3b0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x15b3b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x15b3b4: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x15b3b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x15b3b8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x15b3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3bc: 0x0  nop
    ctx->pc = 0x15b3bcu;
    // NOP
    // 0x15b3c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B3C0u;
    {
        const bool branch_taken_0x15b3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b3c0) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B3C8u;
    // 0x15b3c8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x15b3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3cc: 0x0  nop
    ctx->pc = 0x15b3ccu;
    // NOP
    // 0x15b3d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B3D0u;
    {
        const bool branch_taken_0x15b3d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b3d0) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B3D8u;
    // 0x15b3d8: 0xe4a702e8  swc1        $f7, 0x2E8($a1)
    ctx->pc = 0x15b3d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b3e0:
    // 0x15b3e0: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x15b3e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x15b3e4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x15b3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15b3e8: 0x0  nop
    ctx->pc = 0x15b3e8u;
    // NOP
    // 0x15b3ec: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x15b3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3f0: 0x0  nop
    ctx->pc = 0x15b3f0u;
    // NOP
    // 0x15b3f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x15B3F4u;
    {
        const bool branch_taken_0x15b3f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3F4u;
        // 0x15b3f8: 0x46002041  sub.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3f4) {
            ctx->pc = 0x15B478u;
            goto label_15b478;
        }
    }
    ctx->pc = 0x15B3FCu;
    // 0x15b3fc: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x15b3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b400: 0x0  nop
    ctx->pc = 0x15b400u;
    // NOP
    // 0x15b404: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x15B404u;
    {
        const bool branch_taken_0x15b404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b404) {
            ctx->pc = 0x15B478u;
            goto label_15b478;
        }
    }
    ctx->pc = 0x15B40Cu;
    // 0x15b40c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x15b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15b410: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b414: 0xc4a40300  lwc1        $f4, 0x300($a1)
    ctx->pc = 0x15b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b41c: 0x0  nop
    ctx->pc = 0x15b41cu;
    // NOP
    // 0x15b420: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x15b420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x15b424: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x15b424u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x15b428: 0x0  nop
    ctx->pc = 0x15b428u;
    // NOP
    // 0x15b42c: 0x0  nop
    ctx->pc = 0x15b42cu;
    // NOP
    // 0x15b430: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x15b430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b434: 0x0  nop
    ctx->pc = 0x15b434u;
    // NOP
    // 0x15b438: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B438u;
    {
        const bool branch_taken_0x15b438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b438) {
            ctx->pc = 0x15B478u;
            goto label_15b478;
        }
    }
    ctx->pc = 0x15B440u;
    // 0x15b440: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x15b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b444: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x15b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b448: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15b448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15b44c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b44cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b450: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15b450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b454: 0x0  nop
    ctx->pc = 0x15b454u;
    // NOP
    // 0x15b458: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B458u;
    {
        const bool branch_taken_0x15b458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b458) {
            ctx->pc = 0x15B478u;
            goto label_15b478;
        }
    }
    ctx->pc = 0x15B460u;
    // 0x15b460: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x15b460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b464: 0x0  nop
    ctx->pc = 0x15b464u;
    // NOP
    // 0x15b468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B468u;
    {
        const bool branch_taken_0x15b468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b468) {
            ctx->pc = 0x15B478u;
            goto label_15b478;
        }
    }
    ctx->pc = 0x15B470u;
    // 0x15b470: 0xe4a402e8  swc1        $f4, 0x2E8($a1)
    ctx->pc = 0x15b470u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b478:
    // 0x15b478: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B478u;
    {
        const bool branch_taken_0x15b478 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b478) {
            ctx->pc = 0x15B484u;
            goto label_15b484;
        }
    }
    ctx->pc = 0x15B480u;
    // 0x15b480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15b484:
    // 0x15b484: 0x3e00008  jr          $ra
    ctx->pc = 0x15B484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B484u;
        // 0x15b488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B48Cu;
}

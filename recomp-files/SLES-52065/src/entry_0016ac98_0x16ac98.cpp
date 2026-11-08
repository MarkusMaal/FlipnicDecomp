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

// Function: entry_0016ac98
// Address: 0x16ac98 - 0x16adec
void entry_0016ac98_0x16ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac98_0x16ac98");
#endif

    switch (ctx->pc) {
        case 0x16adacu: goto label_16adac;
        default: break;
    }

    ctx->pc = 0x16ac98u;

    // 0x16ac98: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16ac9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16aca0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16aca4: 0xc4600300  lwc1        $f0, 0x300($v1)
    ctx->pc = 0x16aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16aca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16acac: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16acb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16acb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16acb4: 0xe4600300  swc1        $f0, 0x300($v1)
    ctx->pc = 0x16acb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x16acb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16acb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16acbc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16acbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acc0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16acc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acc4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16acc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acc8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16acc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16accc: 0x4a0003bf  vwaitq
    ctx->pc = 0x16acccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16acd0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16acd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acd4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16acd4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16acd8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16acd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16acdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x16acdcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ace0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ace0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ace4: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ace8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16acec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16acf0: 0x244216a0  addiu       $v0, $v0, 0x16A0
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5792));
    // 0x16acf4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16acf8: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x16acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16acfc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x16acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x16ad00: 0xc6410210  lwc1        $f1, 0x210($s2)
    ctx->pc = 0x16ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ad04: 0x24841690  addiu       $a0, $a0, 0x1690
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5776));
    // 0x16ad08: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x16ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad0c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x16ad0cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x211690u));
    // 0x16ad10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ad10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ad14: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x16ad14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x16ad18: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16ad18u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2116A0u));
    // 0x16ad1c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16ad1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16ad20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16ad24: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x16ad24u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x16ad28: 0x3c023fbd  lui         $v0, 0x3FBD
    ctx->pc = 0x16ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16317 << 16));
    // 0x16ad2c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x16ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x16ad30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ad30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ad34: 0x0  nop
    ctx->pc = 0x16ad34u;
    // NOP
    // 0x16ad38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16ad38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16ad3c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16ad3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16ad40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16ad44: 0x0  nop
    ctx->pc = 0x16ad44u;
    // NOP
    // 0x16ad48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16ad48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ad4c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16ad4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ad50: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ad54: 0xd8a70000  lqc2        $vf7, 0x0($a1)
    ctx->pc = 0x16ad54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad58: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ad58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ad5c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16ad5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16ad60: 0x0  nop
    ctx->pc = 0x16ad60u;
    // NOP
    // 0x16ad64: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16ad64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ad68: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16ad68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ad6c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16ad6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad70: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ad74: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16ad74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad78: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ad78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad7c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ad7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad80: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ad80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad84: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ad84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ad88: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ad88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ad8c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ad8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad90: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ad90u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ad94: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ad94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ad98: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ad98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ad9c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ad9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ada0: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ada4: 0xc055c9c  jal         func_157270
    ctx->pc = 0x16ADA4u;
    SET_GPR_U32(ctx, 31, 0x16ADACu);
    ctx->pc = 0x16ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADA4u;
    // 0x16ada8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157270u, 0x16ADA4u, 0x16ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADACu;
label_16adac:
    // 0x16adac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16adacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x16adb0: 0x0  nop
    ctx->pc = 0x16adb0u;
    // NOP
    // 0x16adb4: 0x0  nop
    ctx->pc = 0x16adb4u;
    // NOP
    // 0x16adb8: 0x0  nop
    ctx->pc = 0x16adb8u;
    // NOP
    // 0x16adbc: 0x46140504  c1          0x140504
    ctx->pc = 0x16adbcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x16adc0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x16adc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16adc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16adc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16adcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16adccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16add0: 0x0  nop
    ctx->pc = 0x16add0u;
    // NOP
    // 0x16add4: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x16add4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x16add8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16add8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16addc: 0x0  nop
    ctx->pc = 0x16addcu;
    // NOP
    // 0x16ade0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16ADE0u;
    {
        const bool branch_taken_0x16ade0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE0u;
        // 0x16ade4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ade0) {
            ctx->pc = 0x16ADECu;
            return;
        }
    }
    ctx->pc = 0x16ADE8u;
    // 0x16ade8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ade8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x16adecu;
}

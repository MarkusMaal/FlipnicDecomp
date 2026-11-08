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

// Function: FUN_0016afd0
// Address: 0x16afd0 - 0x16b418
void FUN_0016afd0_0x16afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016afd0_0x16afd0");
#endif

    switch (ctx->pc) {
        case 0x16b164u: goto label_16b164;
        case 0x16b244u: goto label_16b244;
        case 0x16b36cu: goto label_16b36c;
        case 0x16b3b4u: goto label_16b3b4;
        case 0x16b404u: goto label_16b404;
        default: break;
    }

    ctx->pc = 0x16afd0u;

    // 0x16afd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16afd4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x16afd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16afdc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16afdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16afe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16afe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16afe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16afe8: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x16afec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16afecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aff0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x16aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x16aff4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16aff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16aff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16affc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16affcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b000: 0x80a30023  lb          $v1, 0x23($a1)
    ctx->pc = 0x16b000u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x16b004: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16b004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b008: 0x0  nop
    ctx->pc = 0x16b008u;
    // NOP
    // 0x16b00c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16b00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16b010: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16b010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16b014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16b014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16b018: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16b018u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x16b01c: 0x0  nop
    ctx->pc = 0x16b01cu;
    // NOP
    // 0x16b020: 0x0  nop
    ctx->pc = 0x16b020u;
    // NOP
    // 0x16b024: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x16B024u;
    {
        const bool branch_taken_0x16b024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b024) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B02Cu;
    // 0x16b02c: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x16b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x16b030: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b034: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b038: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16b038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b03c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16b03cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b040: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16b040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b044: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16b044u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16b048: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b048u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b04c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16b04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b050: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16b050u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16b054: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16b054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b058: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b058u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b05c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16b05cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b060: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16b060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b064: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b068: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16b068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16b06c: 0x0  nop
    ctx->pc = 0x16b06cu;
    // NOP
    // 0x16b070: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16b070u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16b074: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16b074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b078: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16b078u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b07c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x16b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x16b080: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16b084: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16b088: 0x244216b0  addiu       $v0, $v0, 0x16B0
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x16b08c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16b08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b090: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b094: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x16b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16b098: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x16b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b09c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x16b09cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x16b0a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16b0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16b0a4: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x16b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x16b0a8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x16b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x16b0ac: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x16b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x16b0b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16b0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16b0b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16b0b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2116B0u));
    // 0x16b0b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16b0bc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b0bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b0c0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16b0c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b0c4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16b0c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b0c8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b0cc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x16b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16b0d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b0d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b0d4: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x16b0d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b0d8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16b0d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b0dc: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x16b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b0e0: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x16b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x16b0e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16b0e8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b0ec: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x16b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16b0f0: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x16b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16b0f4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x16b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b0f8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b0fc: 0x46003987  neg.s       $f6, $f7
    ctx->pc = 0x16b0fcu;
    ctx->f[6] = FPU_NEG_S(ctx->f[7]);
    // 0x16b100: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x16b100u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x16b104: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16b104u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16b108: 0x4603299c  madd.s      $f6, $f5, $f3
    ctx->pc = 0x16b108u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[3]));
    // 0x16b10c: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x16b10cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x16b110: 0x4601281c  madd.s      $f0, $f5, $f1
    ctx->pc = 0x16b110u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x16b114: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x16b114u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x16b118: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x16b118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16b11c: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x16b11cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x16b120: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x16b120u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x16b124: 0x4601381c  madd.s      $f0, $f7, $f1
    ctx->pc = 0x16b124u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x16b128: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x16b128u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x16b12c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x16b12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x16b130: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b134: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x16b134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16b138: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x16b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b13c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16b13cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16b140: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x16b140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x16b144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b148: 0x0  nop
    ctx->pc = 0x16b148u;
    // NOP
    // 0x16b14c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x16B14Cu;
    {
        const bool branch_taken_0x16b14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B14Cu;
        // 0x16b150: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b14c) {
            ctx->pc = 0x16B1A0u;
            goto label_16b1a0;
        }
    }
    ctx->pc = 0x16B154u;
    // 0x16b154: 0xc6200238  lwc1        $f0, 0x238($s1)
    ctx->pc = 0x16b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b158: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b15c: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B15Cu;
    SET_GPR_U32(ctx, 31, 0x16B164u);
    ctx->pc = 0x16B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B15Cu;
    // 0x16b160: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B15Cu, 0x16B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B164u;
label_16b164:
    // 0x16b164: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b168: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b16c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b16cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b170: 0x0  nop
    ctx->pc = 0x16b170u;
    // NOP
    // 0x16b174: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B174u;
    {
        const bool branch_taken_0x16b174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b174) {
            ctx->pc = 0x16B184u;
            goto label_16b184;
        }
    }
    ctx->pc = 0x16B17Cu;
    // 0x16b17c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x16B17Cu;
    {
        const bool branch_taken_0x16b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B17Cu;
        // 0x16b180: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b17c) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B184u;
label_16b184:
    // 0x16b184: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b184u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b188: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b18c: 0x0  nop
    ctx->pc = 0x16b18cu;
    // NOP
    // 0x16b190: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x16B190u;
    {
        const bool branch_taken_0x16b190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b190) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B198u;
    // 0x16b198: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x16B198u;
    {
        const bool branch_taken_0x16b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B198u;
        // 0x16b19c: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b198) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B1A0u;
label_16b1a0:
    // 0x16b1a0: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x16b1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b1a4: 0x0  nop
    ctx->pc = 0x16b1a4u;
    // NOP
    // 0x16b1a8: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x16B1A8u;
    {
        const bool branch_taken_0x16b1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b1a8) {
            ctx->pc = 0x16B280u;
            goto label_16b280;
        }
    }
    ctx->pc = 0x16B1B0u;
    // 0x16b1b0: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b1b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x16b1b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16b1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16b1bc: 0xc6230238  lwc1        $f3, 0x238($s1)
    ctx->pc = 0x16b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16b1c0: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x16b1c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16b1c4: 0x0  nop
    ctx->pc = 0x16b1c4u;
    // NOP
    // 0x16b1c8: 0x0  nop
    ctx->pc = 0x16b1c8u;
    // NOP
    // 0x16b1cc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16b1ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b1d0: 0x0  nop
    ctx->pc = 0x16b1d0u;
    // NOP
    // 0x16b1d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x16B1D4u;
    {
        const bool branch_taken_0x16b1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b1d4) {
            ctx->pc = 0x16B1F8u;
            goto label_16b1f8;
        }
    }
    ctx->pc = 0x16B1DCu;
    // 0x16b1dc: 0x0  nop
    ctx->pc = 0x16b1dcu;
    // NOP
    // 0x16b1e0: 0x0  nop
    ctx->pc = 0x16b1e0u;
    // NOP
    // 0x16b1e4: 0x46040b03  div.s       $f12, $f1, $f4
    ctx->pc = 0x16b1e4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16b1e8: 0x0  nop
    ctx->pc = 0x16b1e8u;
    // NOP
    // 0x16b1ec: 0x0  nop
    ctx->pc = 0x16b1ecu;
    // NOP
    // 0x16b1f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16B1F0u;
    {
        const bool branch_taken_0x16b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b1f0) {
            ctx->pc = 0x16B234u;
            goto label_16b234;
        }
    }
    ctx->pc = 0x16B1F8u;
label_16b1f8:
    // 0x16b1f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b1f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b1fc: 0x0  nop
    ctx->pc = 0x16b1fcu;
    // NOP
    // 0x16b200: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x16b200u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16b204: 0x0  nop
    ctx->pc = 0x16b204u;
    // NOP
    // 0x16b208: 0x0  nop
    ctx->pc = 0x16b208u;
    // NOP
    // 0x16b20c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16b20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b210: 0x0  nop
    ctx->pc = 0x16b210u;
    // NOP
    // 0x16b214: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16B214u;
    {
        const bool branch_taken_0x16b214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b214) {
            ctx->pc = 0x16B234u;
            goto label_16b234;
        }
    }
    ctx->pc = 0x16B21Cu;
    // 0x16b21c: 0x0  nop
    ctx->pc = 0x16b21cu;
    // NOP
    // 0x16b220: 0x0  nop
    ctx->pc = 0x16b220u;
    // NOP
    // 0x16b224: 0x46040b03  div.s       $f12, $f1, $f4
    ctx->pc = 0x16b224u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16b228: 0x0  nop
    ctx->pc = 0x16b228u;
    // NOP
    // 0x16b22c: 0x0  nop
    ctx->pc = 0x16b22cu;
    // NOP
    // 0x16b230: 0x0  nop
    ctx->pc = 0x16b230u;
    // NOP
label_16b234:
    // 0x16b234: 0xc6200238  lwc1        $f0, 0x238($s1)
    ctx->pc = 0x16b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b238: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b23c: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B23Cu;
    SET_GPR_U32(ctx, 31, 0x16B244u);
    ctx->pc = 0x16B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B23Cu;
    // 0x16b240: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B23Cu, 0x16B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B244u;
label_16b244:
    // 0x16b244: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b248: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b24c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b24cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b250: 0x0  nop
    ctx->pc = 0x16b250u;
    // NOP
    // 0x16b254: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B254u;
    {
        const bool branch_taken_0x16b254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b254) {
            ctx->pc = 0x16B264u;
            goto label_16b264;
        }
    }
    ctx->pc = 0x16B25Cu;
    // 0x16b25c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x16B25Cu;
    {
        const bool branch_taken_0x16b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B25Cu;
        // 0x16b260: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b25c) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B264u;
label_16b264:
    // 0x16b264: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b264u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b268: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b26c: 0x0  nop
    ctx->pc = 0x16b26cu;
    // NOP
    // 0x16b270: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x16B270u;
    {
        const bool branch_taken_0x16b270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b270) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B278u;
    // 0x16b278: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x16B278u;
    {
        const bool branch_taken_0x16b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B278u;
        // 0x16b27c: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b278) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B280u;
label_16b280:
    // 0x16b280: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x16b280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b284: 0x0  nop
    ctx->pc = 0x16b284u;
    // NOP
    // 0x16b288: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x16B288u;
    {
        const bool branch_taken_0x16b288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b288) {
            ctx->pc = 0x16B3A8u;
            goto label_16b3a8;
        }
    }
    ctx->pc = 0x16B290u;
    // 0x16b290: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x16b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16b294: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
    // 0x16b298: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b29c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b2a0: 0x0  nop
    ctx->pc = 0x16b2a0u;
    // NOP
    // 0x16b2a4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x16b2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2a8: 0x0  nop
    ctx->pc = 0x16b2a8u;
    // NOP
    // 0x16b2ac: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x16B2ACu;
    {
        const bool branch_taken_0x16b2ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2ACu;
        // 0x16b2b0: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2ac) {
            ctx->pc = 0x16B3A8u;
            goto label_16b3a8;
        }
    }
    ctx->pc = 0x16B2B4u;
    // 0x16b2b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2bc: 0x0  nop
    ctx->pc = 0x16b2bcu;
    // NOP
    // 0x16b2c0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16b2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2c4: 0x0  nop
    ctx->pc = 0x16b2c4u;
    // NOP
    // 0x16b2c8: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x16B2C8u;
    {
        const bool branch_taken_0x16b2c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b2c8) {
            ctx->pc = 0x16B3A8u;
            goto label_16b3a8;
        }
    }
    ctx->pc = 0x16B2D0u;
    // 0x16b2d0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x16b2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2d4: 0x0  nop
    ctx->pc = 0x16b2d4u;
    // NOP
    // 0x16b2d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16B2D8u;
    {
        const bool branch_taken_0x16b2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2D8u;
        // 0x16b2dc: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2d8) {
            ctx->pc = 0x16B2ECu;
            goto label_16b2ec;
        }
    }
    ctx->pc = 0x16B2E0u;
    // 0x16b2e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16b2e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16b2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16b2e8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x16b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_16b2ec:
    // 0x16b2ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2f4: 0x0  nop
    ctx->pc = 0x16b2f4u;
    // NOP
    // 0x16b2f8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x16b2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2fc: 0x0  nop
    ctx->pc = 0x16b2fcu;
    // NOP
    // 0x16b300: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B300u;
    {
        const bool branch_taken_0x16b300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B300u;
        // 0x16b304: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b300) {
            ctx->pc = 0x16B30Cu;
            goto label_16b30c;
        }
    }
    ctx->pc = 0x16B308u;
    // 0x16b308: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16b308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16b30c:
    // 0x16b30c: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x16b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b310: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x16b314: 0xc6220238  lwc1        $f2, 0x238($s1)
    ctx->pc = 0x16b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b31c: 0x0  nop
    ctx->pc = 0x16b31cu;
    // NOP
    // 0x16b320: 0x46030302  mul.s       $f12, $f0, $f3
    ctx->pc = 0x16b320u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16b324: 0x460260c1  sub.s       $f3, $f12, $f2
    ctx->pc = 0x16b324u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x16b328: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x16b328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b32c: 0x0  nop
    ctx->pc = 0x16b32cu;
    // NOP
    // 0x16b330: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B330u;
    {
        const bool branch_taken_0x16b330 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B330u;
        // 0x16b334: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b330) {
            ctx->pc = 0x16B340u;
            goto label_16b340;
        }
    }
    ctx->pc = 0x16B338u;
    // 0x16b338: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B338u;
    {
        const bool branch_taken_0x16b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B338u;
        // 0x16b33c: 0x46020b01  sub.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b338) {
            ctx->pc = 0x16B35Cu;
            goto label_16b35c;
        }
    }
    ctx->pc = 0x16B340u;
label_16b340:
    // 0x16b340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b344: 0x0  nop
    ctx->pc = 0x16b344u;
    // NOP
    // 0x16b348: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16b348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b34c: 0x0  nop
    ctx->pc = 0x16b34cu;
    // NOP
    // 0x16b350: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B350u;
    {
        const bool branch_taken_0x16b350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B350u;
        // 0x16b354: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b350) {
            ctx->pc = 0x16B35Cu;
            goto label_16b35c;
        }
    }
    ctx->pc = 0x16B358u;
    // 0x16b358: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x16b358u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_16b35c:
    // 0x16b35c: 0xc6200238  lwc1        $f0, 0x238($s1)
    ctx->pc = 0x16b35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b360: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b364: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B364u;
    SET_GPR_U32(ctx, 31, 0x16B36Cu);
    ctx->pc = 0x16B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B364u;
    // 0x16b368: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B364u, 0x16B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B36Cu;
label_16b36c:
    // 0x16b36c: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b370: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b378: 0x0  nop
    ctx->pc = 0x16b378u;
    // NOP
    // 0x16b37c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B37Cu;
    {
        const bool branch_taken_0x16b37c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b37c) {
            ctx->pc = 0x16B38Cu;
            goto label_16b38c;
        }
    }
    ctx->pc = 0x16B384u;
    // 0x16b384: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16B384u;
    {
        const bool branch_taken_0x16b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B384u;
        // 0x16b388: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b384) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B38Cu;
label_16b38c:
    // 0x16b38c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b38cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b390: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b394: 0x0  nop
    ctx->pc = 0x16b394u;
    // NOP
    // 0x16b398: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x16B398u;
    {
        const bool branch_taken_0x16b398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b398) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B3A0u;
    // 0x16b3a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16B3A0u;
    {
        const bool branch_taken_0x16b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3A0u;
        // 0x16b3a4: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3a0) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B3A8u;
label_16b3a8:
    // 0x16b3a8: 0xc62c0248  lwc1        $f12, 0x248($s1)
    ctx->pc = 0x16b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b3ac: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B3ACu;
    SET_GPR_U32(ctx, 31, 0x16B3B4u);
    ctx->pc = 0x16B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3ACu;
    // 0x16b3b0: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B3ACu, 0x16B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3B4u;
label_16b3b4:
    // 0x16b3b4: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b3b8: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b3bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b3bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b3c0: 0x0  nop
    ctx->pc = 0x16b3c0u;
    // NOP
    // 0x16b3c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B3C4u;
    {
        const bool branch_taken_0x16b3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b3c4) {
            ctx->pc = 0x16B3D4u;
            goto label_16b3d4;
        }
    }
    ctx->pc = 0x16B3CCu;
    // 0x16b3cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16B3CCu;
    {
        const bool branch_taken_0x16b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3CCu;
        // 0x16b3d0: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3cc) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B3D4u;
label_16b3d4:
    // 0x16b3d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b3d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b3d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b3dc: 0x0  nop
    ctx->pc = 0x16b3dcu;
    // NOP
    // 0x16b3e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B3E0u;
    {
        const bool branch_taken_0x16b3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b3e0) {
            ctx->pc = 0x16B3ECu;
            goto label_16b3ec;
        }
    }
    ctx->pc = 0x16B3E8u;
    // 0x16b3e8: 0xe6210238  swc1        $f1, 0x238($s1)
    ctx->pc = 0x16b3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
label_16b3ec:
    // 0x16b3ec: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x16b3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b3fc: 0xc05aae8  jal         func_16ABA0
    ctx->pc = 0x16B3FCu;
    SET_GPR_U32(ctx, 31, 0x16B404u);
    ctx->pc = 0x16B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3FCu;
    // 0x16b400: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABA0u, 0x16B3FCu, 0x16B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B404u;
label_16b404:
    // 0x16b404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b410: 0x3e00008  jr          $ra
    ctx->pc = 0x16B410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B410u;
        // 0x16b414: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B418u;
}

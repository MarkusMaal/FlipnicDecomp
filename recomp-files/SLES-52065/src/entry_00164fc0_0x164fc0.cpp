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

// Function: entry_00164fc0
// Address: 0x164fc0 - 0x16509c
void entry_00164fc0_0x164fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164fc0_0x164fc0");
#endif

    ctx->pc = 0x164fc0u;

    // 0x164fc0: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x164fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164fc4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x164fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164fc8: 0x0  nop
    ctx->pc = 0x164fc8u;
    // NOP
    // 0x164fcc: 0x4501009b  bc1t        . + 4 + (0x9B << 2)
    ctx->pc = 0x164FCCu;
    {
        const bool branch_taken_0x164fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164fcc) {
            ctx->pc = 0x16523Cu;
            return;
        }
    }
    ctx->pc = 0x164FD4u;
    // 0x164fd4: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x164FD4u;
    {
        const bool branch_taken_0x164fd4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x164fd4) {
            ctx->pc = 0x1650B0u;
            return;
        }
    }
    ctx->pc = 0x164FDCu;
    // 0x164fdc: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164fe0: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x164fe4: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x164fe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164fe8: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x164FE8u;
    {
        const bool branch_taken_0x164fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FE8u;
        // 0x164fec: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fe8) {
            ctx->pc = 0x16509Cu;
            return;
        }
    }
    ctx->pc = 0x164FF0u;
    // 0x164ff0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x164ff4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x164ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x164ff8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164ffc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x164ffcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165000: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x165004: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165008: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x165008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16500c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16500cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x165010: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x165010u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165014: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x165014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165018: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x165018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16501c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16501cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x165020: 0x0  nop
    ctx->pc = 0x165020u;
    // NOP
    // 0x165024: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x165024u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x165028: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x165028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16502c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16502cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x165030: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x165034: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x165034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165038: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x165038u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16503c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x16503cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165040: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165044: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x165044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165048: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x165048u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16504c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16504cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165050: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x165050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x165054: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x165054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16505c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165060: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x165060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165064: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x165064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x165068: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x165068u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16506c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16506cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165070: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165074: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x165074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165078: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x165078u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16507c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16507cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x165080: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x165080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165084: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x165084u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x165088: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x165088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16508c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16508cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x165090: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x165090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165094: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x165094u;
    {
        const bool branch_taken_0x165094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165094u;
        // 0x165098: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165094) {
            ctx->pc = 0x165170u;
            return;
        }
    }
    ctx->pc = 0x16509Cu;
}

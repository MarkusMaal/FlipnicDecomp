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

// Function: entry_00163ce0
// Address: 0x163ce0 - 0x163dbc
void entry_00163ce0_0x163ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ce0_0x163ce0");
#endif

    ctx->pc = 0x163ce0u;

    // 0x163ce0: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x163ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163ce4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x163ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ce8: 0x0  nop
    ctx->pc = 0x163ce8u;
    // NOP
    // 0x163cec: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
    ctx->pc = 0x163CECu;
    {
        const bool branch_taken_0x163cec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163cec) {
            ctx->pc = 0x163F58u;
            return;
        }
    }
    ctx->pc = 0x163CF4u;
    // 0x163cf4: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x163CF4u;
    {
        const bool branch_taken_0x163cf4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x163cf4) {
            ctx->pc = 0x163DD0u;
            return;
        }
    }
    ctx->pc = 0x163CFCu;
    // 0x163cfc: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163d00: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x163d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x163d04: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x163d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163d08: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x163D08u;
    {
        const bool branch_taken_0x163d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D08u;
        // 0x163d0c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d08) {
            ctx->pc = 0x163DBCu;
            return;
        }
    }
    ctx->pc = 0x163D10u;
    // 0x163d10: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x163d14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x163d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163d18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163d1c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x163d1cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x163d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163d24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163d28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x163d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163d30: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x163d30u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163d34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163d34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163d38: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x163d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163d3c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x163d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163d40: 0x0  nop
    ctx->pc = 0x163d40u;
    // NOP
    // 0x163d44: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x163d44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163d48: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x163d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163d4c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163d50: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x163d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x163d54: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x163d54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163d58: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163d58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163d5c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163d68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163d6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163d70: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163d74: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163d80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x163d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d84: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x163d84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x163d88: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163d88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163d8c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d90: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d94: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d98: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163d98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163d9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x163d9cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163da0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163da4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x163da4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x163da8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x163da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163dac: 0x4a0003bf  vwaitq
    ctx->pc = 0x163dacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163db0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x163db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163db4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x163DB4u;
    {
        const bool branch_taken_0x163db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DB4u;
        // 0x163db8: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163db4) {
            ctx->pc = 0x163E90u;
            return;
        }
    }
    ctx->pc = 0x163DBCu;
}

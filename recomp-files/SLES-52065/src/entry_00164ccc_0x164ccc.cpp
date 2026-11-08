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

// Function: entry_00164ccc
// Address: 0x164ccc - 0x164d6c
void entry_00164ccc_0x164ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164ccc_0x164ccc");
#endif

    ctx->pc = 0x164cccu;

label_164ccc:
    // 0x164ccc: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x164cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164cd0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x164cd0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164cd4: 0x0  nop
    ctx->pc = 0x164cd4u;
    // NOP
    // 0x164cd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x164cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x164cdc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164ce4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x164ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x164ce8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164cec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x164cf0: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x164cf0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164cf4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x164cf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164cf8: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x164cf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164cfc: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x164cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x164d00: 0x0  nop
    ctx->pc = 0x164d00u;
    // NOP
    // 0x164d04: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164d08: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x164d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164d0c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x164d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164d10: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x164d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164d14: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x164d14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164d18: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x164d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164d1c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x164d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164d20: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x164d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164d24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164d24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164d28: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x164d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x164d2c: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x164d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164d30: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x164d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164d34: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x164d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x164d38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164d40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x164d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164d44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x164d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x164d48: 0x46012503  div.s       $f20, $f4, $f1
    ctx->pc = 0x164d48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x164d4c: 0x0  nop
    ctx->pc = 0x164d4cu;
    // NOP
    // 0x164d50: 0x0  nop
    ctx->pc = 0x164d50u;
    // NOP
    // 0x164d54: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x164d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164d58: 0x0  nop
    ctx->pc = 0x164d58u;
    // NOP
    // 0x164d5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x164D5Cu;
    {
        const bool branch_taken_0x164d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164d5c) {
            ctx->pc = 0x164D6Cu;
            return;
        }
    }
    ctx->pc = 0x164D64u;
    // 0x164d64: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x164D64u;
    {
        const bool branch_taken_0x164d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D64u;
        // 0x164d68: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d64) {
            ctx->pc = 0x164CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164ccc;
        }
    }
    ctx->pc = 0x164D6Cu;
}

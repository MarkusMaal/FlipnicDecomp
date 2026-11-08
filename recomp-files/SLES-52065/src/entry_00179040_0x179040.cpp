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

// Function: entry_00179040
// Address: 0x179040 - 0x1790e8
void entry_00179040_0x179040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179040_0x179040");
#endif

    ctx->pc = 0x179040u;

    // 0x179040: 0x10850029  beq         $a0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x179040u;
    {
        const bool branch_taken_0x179040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x179044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179040u;
        // 0x179044: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179040) {
            ctx->pc = 0x1790E8u;
            return;
        }
    }
    ctx->pc = 0x179048u;
    // 0x179048: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x179048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17904c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x179050: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179054: 0x4bc110ac  vsub.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x179054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x179058: 0x4bc210ea  vmul.xyz    $vf3, $vf2, $vf2
    ctx->pc = 0x179058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17905c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17905cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x179060: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x179060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x179064: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x179064u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x179068: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x179068u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17906c: 0x0  nop
    ctx->pc = 0x17906cu;
    // NOP
    // 0x179070: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x179070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179074: 0x0  nop
    ctx->pc = 0x179074u;
    // NOP
    // 0x179078: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x179078u;
    {
        const bool branch_taken_0x179078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179078) {
            ctx->pc = 0x1790E8u;
            return;
        }
    }
    ctx->pc = 0x179080u;
    // 0x179080: 0x0  nop
    ctx->pc = 0x179080u;
    // NOP
    // 0x179084: 0x0  nop
    ctx->pc = 0x179084u;
    // NOP
    // 0x179088: 0x46010044  c1          0x10044
    ctx->pc = 0x179088u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17908c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x17908cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x179090: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x179090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x179094: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x179094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x179098: 0x0  nop
    ctx->pc = 0x179098u;
    // NOP
    // 0x17909c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x17909cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1790a0: 0x4bc210ea  vmul.xyz    $vf3, $vf2, $vf2
    ctx->pc = 0x1790a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1790a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1790a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790ac: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1790acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1790b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1790b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1790b4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1790b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790b8: 0x4a0002ff  vnop
    ctx->pc = 0x1790b8u;
    // NOP operation, no action needed for VU0
    // 0x1790bc: 0x4a0002ff  vnop
    ctx->pc = 0x1790bcu;
    // NOP operation, no action needed for VU0
    // 0x1790c0: 0x4a6303bc  vdiv        $Q, $vf0w, $vf3x
    ctx->pc = 0x1790c0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1790c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1790c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1790c8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1790c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1790cc: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x1790ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1790d0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1790d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1790d4: 0x4bc2212c  vsub.xyz    $vf4, $vf4, $vf2
    ctx->pc = 0x1790d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1790d8: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1790d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1790dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1790dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1790e0: 0x4bc22128  vadd.xyz    $vf4, $vf4, $vf2
    ctx->pc = 0x1790e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1790e4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1790e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x1790e8u;
}

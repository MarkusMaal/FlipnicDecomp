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

// Function: entry_00171ad0
// Address: 0x171ad0 - 0x171b68
void entry_00171ad0_0x171ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171ad0_0x171ad0");
#endif

    switch (ctx->pc) {
        case 0x171ae0u: goto label_171ae0;
        default: break;
    }

    ctx->pc = 0x171ad0u;

    // 0x171ad0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171ad4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x171ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171ad8: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171AD8u;
    SET_GPR_U32(ctx, 31, 0x171AE0u);
    ctx->pc = 0x171ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AD8u;
    // 0x171adc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171AD8u, 0x171AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171AE0u;
label_171ae0:
    // 0x171ae0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171ae4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171ae8: 0x4be4216a  vmul.xyzw   $vf5, $vf4, $vf4
    ctx->pc = 0x171ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171aec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171af0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171af4: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171af8: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x171af8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x171afc: 0x4a0003bf  vwaitq
    ctx->pc = 0x171afcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b00: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x171b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b04: 0x4a0002ff  vnop
    ctx->pc = 0x171b04u;
    // NOP operation, no action needed for VU0
    // 0x171b08: 0x4a0002ff  vnop
    ctx->pc = 0x171b08u;
    // NOP operation, no action needed for VU0
    // 0x171b0c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x171b0cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x171b10: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x171b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171b14: 0x4a0003bf  vwaitq
    ctx->pc = 0x171b14u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b18: 0x4be0219c  vmulq.xyzw  $vf6, $vf4, $Q
    ctx->pc = 0x171b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171b1c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x171b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x171b20: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x171b24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b28: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x171b28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171b2c: 0x4be4296a  vmul.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x171b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b30: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b34: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b38: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b3c: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x171b3cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x171b40: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x171b40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171b48: 0x0  nop
    ctx->pc = 0x171b48u;
    // NOP
    // 0x171b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171b50: 0x0  nop
    ctx->pc = 0x171b50u;
    // NOP
    // 0x171b54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171B54u;
    {
        const bool branch_taken_0x171b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171b54) {
            ctx->pc = 0x171B68u;
            return;
        }
    }
    ctx->pc = 0x171B5Cu;
    // 0x171b5c: 0x4be1086c  vsub.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x171b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171b60: 0x4be4092c  vsub.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x171b60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171b64: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171b64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x171b68u;
}

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

// Function: entry_00171b68
// Address: 0x171b68 - 0x171bbc
void entry_00171b68_0x171b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171b68_0x171b68");
#endif

    switch (ctx->pc) {
        case 0x171b7cu: goto label_171b7c;
        default: break;
    }

    ctx->pc = 0x171b68u;

    // 0x171b68: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x171b6c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171b70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x171b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b74: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171B74u;
    SET_GPR_U32(ctx, 31, 0x171B7Cu);
    ctx->pc = 0x171B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B74u;
    // 0x171b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171B74u, 0x171B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B7Cu;
label_171b7c:
    // 0x171b7c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x171b80: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171b80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171b84: 0x4be4216a  vmul.xyzw   $vf5, $vf4, $vf4
    ctx->pc = 0x171b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b88: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b8c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b90: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b94: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x171b94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x171b98: 0x4a0003bf  vwaitq
    ctx->pc = 0x171b98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b9c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x171b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171ba0: 0x4a0002ff  vnop
    ctx->pc = 0x171ba0u;
    // NOP operation, no action needed for VU0
    // 0x171ba4: 0x4a0002ff  vnop
    ctx->pc = 0x171ba4u;
    // NOP operation, no action needed for VU0
    // 0x171ba8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x171ba8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x171bac: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x171bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171bb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x171bb0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171bb4: 0x4be0219c  vmulq.xyzw  $vf6, $vf4, $Q
    ctx->pc = 0x171bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171bb8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x171bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x171bbcu;
}

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

// Function: entry_0017b38c
// Address: 0x17b38c - 0x17b3fc
void entry_0017b38c_0x17b38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b38c_0x17b38c");
#endif

    switch (ctx->pc) {
        case 0x17b3e8u: goto label_17b3e8;
        default: break;
    }

    ctx->pc = 0x17b38cu;

    // 0x17b38c: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x17b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x17b390: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b394: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b398: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b39c: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x17b39cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b3a0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x17b3a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b3a4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b3a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b3a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b3ac: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17b3acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b3b0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17b3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b3b4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17b3b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b3b8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17b3b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17b3bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b3bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17b3c0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17b3c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b3c4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17b3c4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17b3c8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17b3c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b3cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b3ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17b3d0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17b3d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b3d4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b3d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3e0: 0xc055b04  jal         func_156C10
    ctx->pc = 0x17B3E0u;
    SET_GPR_U32(ctx, 31, 0x17B3E8u);
    ctx->pc = 0x17B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B3E0u;
    // 0x17b3e4: 0xae020418  sw          $v0, 0x418($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156C10u, 0x17B3E0u, 0x17B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B3E8u;
label_17b3e8:
    // 0x17b3e8: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x17b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x17b3ec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b3f0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17b3f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b3f4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17B3F4u;
    {
        const bool branch_taken_0x17b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F4u;
        // 0x17b3f8: 0x7e060290  sq          $a2, 0x290($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 656), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3f4) {
            ctx->pc = 0x17B52Cu;
            return;
        }
    }
    ctx->pc = 0x17B3FCu;
}

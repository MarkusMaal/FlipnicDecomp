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

// Function: FUN_0017ac50
// Address: 0x17ac50 - 0x17acfc
void FUN_0017ac50_0x17ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ac50_0x17ac50");
#endif

    switch (ctx->pc) {
        case 0x17acccu: goto label_17accc;
        default: break;
    }

    ctx->pc = 0x17ac50u;

    // 0x17ac50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ac54: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x17ac54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ac5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ac60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac64: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17ac64u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17ac68: 0x7c8603f0  sq          $a2, 0x3F0($a0)
    ctx->pc = 0x17ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1008), GPR_VEC(ctx, 6));
    // 0x17ac6c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x17ac6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ac70: 0x7c8603e0  sq          $a2, 0x3E0($a0)
    ctx->pc = 0x17ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 992), GPR_VEC(ctx, 6));
    // 0x17ac74: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x17ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x17ac78: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17ac78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ac7c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x17ac7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ac80: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17ac80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ac84: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x17ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17ac88: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ac88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ac8c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17ac8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ac90: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17ac90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ac94: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17ac94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ac98: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ac98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17ac9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17ac9cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17aca0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17aca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17aca4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17aca4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17aca8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17aca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17acac: 0x4a0003bf  vwaitq
    ctx->pc = 0x17acacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17acb0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17acb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17acb4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x17acb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17acb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17acbc: 0xac8203d0  sw          $v0, 0x3D0($a0)
    ctx->pc = 0x17acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 976), GPR_U32(ctx, 2));
    // 0x17acc0: 0x788603e0  lq          $a2, 0x3E0($a0)
    ctx->pc = 0x17acc0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x17acc4: 0xc055c40  jal         func_157100
    ctx->pc = 0x17ACC4u;
    SET_GPR_U32(ctx, 31, 0x17ACCCu);
    ctx->pc = 0x17ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACC4u;
    // 0x17acc8: 0x7c860000  sq          $a2, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x17ACC4u, 0x17ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACCCu;
label_17accc:
    // 0x17accc: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x17acccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x17acd0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17acd4: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x17acd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x17acd8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17acd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17acdc: 0xae0402a0  sw          $a0, 0x2A0($s0)
    ctx->pc = 0x17acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 4));
    // 0x17ace0: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x17ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x17ace4: 0xae0302a4  sw          $v1, 0x2A4($s0)
    ctx->pc = 0x17ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
    // 0x17ace8: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x17ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x17acec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17acecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17acf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17acf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACF4u;
        // 0x17acf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ACFCu;
}

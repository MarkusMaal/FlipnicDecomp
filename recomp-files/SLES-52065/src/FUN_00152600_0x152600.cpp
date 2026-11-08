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

// Function: FUN_00152600
// Address: 0x152600 - 0x1526a8
void FUN_00152600_0x152600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152600_0x152600");
#endif

    switch (ctx->pc) {
        case 0x15261cu: goto label_15261c;
        default: break;
    }

    ctx->pc = 0x152600u;

    // 0x152600: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x152600u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152604: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x152604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152608: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x152608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x15260c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x15260cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152614u;
    {
        const bool branch_taken_0x152614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152614u;
        // 0x152618: 0xe21824  and         $v1, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152614) {
            ctx->pc = 0x152634u;
            goto label_152634;
        }
    }
    ctx->pc = 0x15261Cu;
label_15261c:
    // 0x15261c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15261cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152620: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x152620u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x152624: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x152624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152628: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x152628u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15262c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x152630: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x152630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_152634:
    // 0x152634: 0x0  nop
    ctx->pc = 0x152634u;
    // NOP
    // 0x152638: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x152638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x15263c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15263Cu;
    {
        const bool branch_taken_0x15263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15263c) {
            ctx->pc = 0x15261Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15261c;
        }
    }
    ctx->pc = 0x152644u;
    // 0x152644: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x152644u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15264c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152650: 0x0  nop
    ctx->pc = 0x152650u;
    // NOP
    // 0x152654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152658: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152658u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15265c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15265cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152660: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x152660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x152664: 0x0  nop
    ctx->pc = 0x152664u;
    // NOP
    // 0x152668: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x152668u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15266c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15266cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152670: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x152670u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152674: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x152674u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152678: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x152678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15267c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15267cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152680: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x152680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152684: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x152684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152688: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x152688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15268c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15268cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x152690: 0x4a0003bf  vwaitq
    ctx->pc = 0x152690u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x152694: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x152694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152698: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x152698u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15269c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1526A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1526A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1526A8u;
}

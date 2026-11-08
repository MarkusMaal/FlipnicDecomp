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

// Function: FUN_00153d70
// Address: 0x153d70 - 0x153e64
void FUN_00153d70_0x153d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153d70_0x153d70");
#endif

    ctx->pc = 0x153d70u;

    // 0x153d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153d74: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x153d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153d78: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x153d78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153d7c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x153d7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153d80: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153d84: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x153d84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153d88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x153d88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153d8c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x153d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153d90: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153d94: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153d98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153d98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153d9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153da0: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153da4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153da8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x153da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153dac: 0x0  nop
    ctx->pc = 0x153dacu;
    // NOP
    // 0x153db0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x153DB0u;
    {
        const bool branch_taken_0x153db0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DB0u;
        // 0x153db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153db0) {
            ctx->pc = 0x153E5Cu;
            goto label_153e5c;
        }
    }
    ctx->pc = 0x153DB8u;
    // 0x153db8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x153db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153dbc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153dc0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153dc4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x153dc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x153dc8: 0x4a0003bf  vwaitq
    ctx->pc = 0x153dc8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153dcc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x153dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153dd0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153dd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153dd4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x153dd4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x153dd8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x153dd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153ddc: 0x4a0003bf  vwaitq
    ctx->pc = 0x153ddcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153de0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x153de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153de4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x153de4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153dec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153df0: 0x0  nop
    ctx->pc = 0x153df0u;
    // NOP
    // 0x153df4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x153df4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153df8: 0x0  nop
    ctx->pc = 0x153df8u;
    // NOP
    // 0x153dfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x153DFCu;
    {
        const bool branch_taken_0x153dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DFCu;
        // 0x153e00: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dfc) {
            ctx->pc = 0x153E08u;
            goto label_153e08;
        }
    }
    ctx->pc = 0x153E04u;
    // 0x153e04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x153e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_153e08:
    // 0x153e08: 0x0  nop
    ctx->pc = 0x153e08u;
    // NOP
    // 0x153e0c: 0x0  nop
    ctx->pc = 0x153e0cu;
    // NOP
    // 0x153e10: 0x0  nop
    ctx->pc = 0x153e10u;
    // NOP
    // 0x153e14: 0x46020044  c1          0x20044
    ctx->pc = 0x153e14u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x153e18: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x153e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x153e1c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x153e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x153e20: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153e24: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153e28: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x153e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x153e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e30: 0x0  nop
    ctx->pc = 0x153e30u;
    // NOP
    // 0x153e34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153e38: 0xd8a70000  lqc2        $vf7, 0x0($a1)
    ctx->pc = 0x153e38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153e3c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x153e3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153e40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x153e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x153e44: 0x0  nop
    ctx->pc = 0x153e44u;
    // NOP
    // 0x153e48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x153e48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x153e4c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x153e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153e50: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x153e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153e54: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x153e54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153e5c:
    // 0x153e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x153E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E5Cu;
        // 0x153e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153E64u;
}

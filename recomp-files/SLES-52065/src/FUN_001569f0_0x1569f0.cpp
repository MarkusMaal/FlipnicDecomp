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

// Function: FUN_001569f0
// Address: 0x1569f0 - 0x156afc
void FUN_001569f0_0x1569f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001569f0_0x1569f0");
#endif

    ctx->pc = 0x1569f0u;

    // 0x1569f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1569f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1569f4: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x1569f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1569f8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1569f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1569fc: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1569fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156a00: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x156a00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156a04: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x156a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156a08: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x156a08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156a0c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x156a0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156a10: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x156a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a14: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a18: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156a1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156a20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156a24: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x156a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a28: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a2c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a30: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x156a30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x156a34: 0x4a0003bf  vwaitq
    ctx->pc = 0x156a34u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156a38: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x156a38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a3c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156a3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a44: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156a44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156a48: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x156a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a4c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a50: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a54: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x156a54u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x156a58: 0x4a0003bf  vwaitq
    ctx->pc = 0x156a58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156a5c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x156a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156a60: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156a60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156a64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156a68: 0x0  nop
    ctx->pc = 0x156a68u;
    // NOP
    // 0x156a6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x156a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x156a70: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x156a74: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x156a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x156a78: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156a78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156a7c: 0x0  nop
    ctx->pc = 0x156a7cu;
    // NOP
    // 0x156a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a84: 0x0  nop
    ctx->pc = 0x156a84u;
    // NOP
    // 0x156a88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x156a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156a8c: 0x0  nop
    ctx->pc = 0x156a8cu;
    // NOP
    // 0x156a90: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x156A90u;
    {
        const bool branch_taken_0x156a90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x156A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A90u;
        // 0x156a94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a90) {
            ctx->pc = 0x156AF0u;
            goto label_156af0;
        }
    }
    ctx->pc = 0x156A98u;
    // 0x156a98: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x156a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156a9c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x156a9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156aa0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x156aa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156aa4: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x156aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156aa8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156aac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ab0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x156ab0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x156ab4: 0x4a0003bf  vwaitq
    ctx->pc = 0x156ab4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156ab8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x156ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156abc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156abcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156ac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156ac4: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x156ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x156ac8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x156ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x156acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156ad0: 0x0  nop
    ctx->pc = 0x156ad0u;
    // NOP
    // 0x156ad4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x156ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156ad8: 0x0  nop
    ctx->pc = 0x156ad8u;
    // NOP
    // 0x156adc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x156ADCu;
    {
        const bool branch_taken_0x156adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ADCu;
        // 0x156ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156adc) {
            ctx->pc = 0x156AECu;
            goto label_156aec;
        }
    }
    ctx->pc = 0x156AE4u;
    // 0x156ae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156AE4u;
    {
        const bool branch_taken_0x156ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AE4u;
        // 0x156ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ae4) {
            ctx->pc = 0x156AF4u;
            goto label_156af4;
        }
    }
    ctx->pc = 0x156AECu;
label_156aec:
    // 0x156aec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_156af0:
    // 0x156af0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x156af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_156af4:
    // 0x156af4: 0x3e00008  jr          $ra
    ctx->pc = 0x156AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156AFCu;
}

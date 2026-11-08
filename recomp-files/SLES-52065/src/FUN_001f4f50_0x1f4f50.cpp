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

// Function: FUN_001f4f50
// Address: 0x1f4f50 - 0x1f4ff4
void FUN_001f4f50_0x1f4f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f4f50_0x1f4f50");
#endif

    switch (ctx->pc) {
        case 0x1f4f94u: goto label_1f4f94;
        case 0x1f4fc4u: goto label_1f4fc4;
        default: break;
    }

    ctx->pc = 0x1f4f50u;

    // 0x1f4f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4f54: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f4f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4f58: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f4f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f4f5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f4f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f4f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4f64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4F64u;
    {
        const bool branch_taken_0x1f4f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4f64) {
            ctx->pc = 0x1F4F78u;
            goto label_1f4f78;
        }
    }
    ctx->pc = 0x1F4F6Cu;
    // 0x1f4f6c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1f4f6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1f4f70: 0x807d3e0  j           func_1F4F80
    ctx->pc = 0x1F4F70u;
    ctx->pc = 0x1F4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F70u;
    // 0x1f4f74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F80u;
    goto label_1f4f80;
    ctx->pc = 0x1F4F78u;
label_1f4f78:
    // 0x1f4f78: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1f4f78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f4f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f80:
    // 0x1f4f80: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1f4f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f4f84: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1f4f84u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f4f88: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x1f4f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f8c: 0xc07d3b6  jal         func_1F4ED8
    ctx->pc = 0x1F4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F94u);
    ctx->pc = 0x1F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4ED8u, 0x1F4F8Cu, 0x1F4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F94u;
label_1f4f94:
    // 0x1f4f94: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x1f4f94u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f98: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x1f4f98u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f4f9c: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x1f4f9cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f4fa0: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x1f4fa0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1f4fa4: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x1f4fa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fa8: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x1f4fa8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fac: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x1f4facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fb0: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x1f4fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fb4: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x1f4fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fb8: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x1f4fb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fbc: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x1f4fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fc0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f4fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f4fc4:
    // 0x1f4fc4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1f4fc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f4fc8: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1f4fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f4fcc: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1f4fccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f4fd0: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1f4fd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f4fd4: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x1f4fd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f4fd8: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1f4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f4fdc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1f4fdcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1f4fe0: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x1f4fe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1f4fe4: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F4FE4u;
    {
        const bool branch_taken_0x1f4fe4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x1F4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FE4u;
        // 0x1f4fe8: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fe4) {
            ctx->pc = 0x1F4FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4fc4;
        }
    }
    ctx->pc = 0x1F4FECu;
    // 0x1f4fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4FF4u;
}

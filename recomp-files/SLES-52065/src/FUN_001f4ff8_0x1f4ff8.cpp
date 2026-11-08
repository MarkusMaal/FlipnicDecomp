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

// Function: FUN_001f4ff8
// Address: 0x1f4ff8 - 0x1f50a0
void FUN_001f4ff8_0x1f4ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f4ff8_0x1f4ff8");
#endif

    switch (ctx->pc) {
        case 0x1f503cu: goto label_1f503c;
        case 0x1f5070u: goto label_1f5070;
        default: break;
    }

    ctx->pc = 0x1f4ff8u;

    // 0x1f4ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4ffc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f4ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5000: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f5000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f5004: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f5004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f5008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f500c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F500Cu;
    {
        const bool branch_taken_0x1f500c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f500c) {
            ctx->pc = 0x1F5020u;
            goto label_1f5020;
        }
    }
    ctx->pc = 0x1F5014u;
    // 0x1f5014: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1f5014u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1f5018: 0x807d40a  j           func_1F5028
    ctx->pc = 0x1F5018u;
    ctx->pc = 0x1F501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5018u;
    // 0x1f501c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5028u;
    goto label_1f5028;
    ctx->pc = 0x1F5020u;
label_1f5020:
    // 0x1f5020: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1f5020u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f5024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5028:
    // 0x1f5028: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1f5028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f502c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1f502cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f5030: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x1f5030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5034: 0xc07d3b6  jal         func_1F4ED8
    ctx->pc = 0x1F5034u;
    SET_GPR_U32(ctx, 31, 0x1F503Cu);
    ctx->pc = 0x1F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4ED8u, 0x1F5034u, 0x1F503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F503Cu;
label_1f503c:
    // 0x1f503c: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x1f503cu;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5040: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x1f5040u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f5044: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x1f5044u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f5048: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x1f5048u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f504c: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x1f504cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f5050: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x1f5050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f5054: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x1f5054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1f5058: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x1f5058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f505c: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x1f505cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f5060: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x1f5060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f5064: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x1f5064u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f5068: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x1f5068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f506c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f506cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5070:
    // 0x1f5070: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1f5070u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f5074: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1f5074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f5078: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1f5078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f507c: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1f507cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f5080: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x1f5080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f5084: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1f5084u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f5088: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1f5088u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1f508c: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x1f508cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1f5090: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F5090u;
    {
        const bool branch_taken_0x1f5090 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x1F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5090u;
        // 0x1f5094: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5090) {
            ctx->pc = 0x1F5070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5070;
        }
    }
    ctx->pc = 0x1F5098u;
    // 0x1f5098: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F50A0u;
}

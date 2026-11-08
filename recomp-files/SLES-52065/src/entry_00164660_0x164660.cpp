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

// Function: entry_00164660
// Address: 0x164660 - 0x164714
void entry_00164660_0x164660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164660_0x164660");
#endif

    switch (ctx->pc) {
        case 0x164704u: goto label_164704;
        default: break;
    }

    ctx->pc = 0x164660u;

    // 0x164660: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x164660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164664: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x164668: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16466c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16466cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164670: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x164670u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164674: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x164674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164678: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x164678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16467c: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164680: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x164680u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164684: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x164684u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x164688: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16468c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16468cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164690: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x164690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164694: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x164694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164698: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x164698u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16469c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16469cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1646a0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1646a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1646a4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1646a4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1646a8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1646a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1646ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1646acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1646b0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1646b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1646b4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1646b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1646b8: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x1646b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1646bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1646c0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1646c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1646c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1646c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1646c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1646cc: 0x0  nop
    ctx->pc = 0x1646ccu;
    // NOP
    // 0x1646d0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1646d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1646d4: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x1646d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1646d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1646d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1646dc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1646dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1646e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1646e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1646e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1646e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1646e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1646e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1646ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646f0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1646f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1646f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1646f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1646f8: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x1646f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x1646fc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x1646FCu;
    SET_GPR_U32(ctx, 31, 0x164704u);
    ctx->pc = 0x164700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646FCu;
    // 0x164700: 0xe62d02e8  swc1        $f13, 0x2E8($s1) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1646FCu, 0x164704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164704u;
label_164704:
    // 0x164704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164708: 0xa6420240  sh          $v0, 0x240($s2)
    ctx->pc = 0x164708u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 576), (uint16_t)GPR_U32(ctx, 2));
    // 0x16470c: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x16470cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
    // 0x164710: 0xae400244  sw          $zero, 0x244($s2)
    ctx->pc = 0x164710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 0));
    ctx->pc = 0x164714u;
}
